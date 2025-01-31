/*
  ==============================================================================

    FeedbackFlangerEffect.cpp
    Created: 30 Oct 2024 4:35:30pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

//#include "FeedbackFlangerEffect.h"

// EN: The prepare method initializes the necessary values for the flanger effect, including sample rate, time, depth, rate, and feedback.
// ES: El m�todo prepare inicializa los valores necesarios para el efecto de flanger, incluyendo la tasa de muestreo, el tiempo, la profundidad, la tasa y la retroalimentaci�n.
void FeedbackFlangerFX::prepare(double theSampleRate)
{
    sampleRate = static_cast<float>(theSampleRate);  // Establecer la tasa de muestreo
    t = 0.0f;  // Inicializar el tiempo en 0
    ratePercentage = 0.0f;  // Inicializar el porcentaje de la tasa
    targetRatePercentage = 0.0f;  // Inicializar la tasa objetivo
    predelay = 0.0f;  // Inicializar el predelay
    feedback = 0.0f;  // Inicializar la retroalimentaci�n
}

// EN: Set the depth of the flanger effect (controls how intense the modulation effect is).
// ES: Establecer la profundidad del efecto de flanger (controla cu�n intenso es el efecto de modulaci�n).
void FeedbackFlangerFX::setDepth(float inDepth)
{
    depth = inDepth;
}

// EN: Set the rate (speed) of the modulation effect as a percentage (normalized between 0.0 and 1.0).
// ES: Establecer la tasa (velocidad) del efecto de modulaci�n como un porcentaje (normalizado entre 0.0 y 1.0).
void FeedbackFlangerFX::setRate(float inRatePercentage)
{
    targetRatePercentage = juce::jlimit(0.0f, 100.0f, inRatePercentage) / 100.0f;  // Limitar la tasa y convertirla en valor entre 0 y 1
}

// EN: Set the predelay time in milliseconds (delays the effect before it starts).
// ES: Establecer el tiempo de predelay en milisegundos (retrasa el efecto antes de que comience).
void FeedbackFlangerFX::setPredelay(float inPredelayMs)
{
    predelay = inPredelayMs * sampleRate / 1000.0f;  // Convertir el predelay de milisegundos a muestras
}

// EN: Set the feedback amount for the flanger effect (controls how much of the delayed signal is fed back into the effect).
// ES: Establecer la cantidad de retroalimentaci�n para el efecto de flanger (controla cu�nto de la se�al retrasada se retroalimenta en el efecto).
void FeedbackFlangerFX::setFeedback(float inFeedback)
{
    feedback = juce::jlimit(0.0f, 100.0f, inFeedback) / 100.0f;  // Limitar la retroalimentaci�n y convertirla a valor entre 0 y 1
}

// EN: The process method applies the feedback flanger effect to the audio buffer, modifying each sample based on modulation and feedback.
// ES: El m�todo process aplica el efecto de flanger con retroalimentaci�n al buffer de audio, modificando cada muestra seg�n la modulaci�n y retroalimentaci�n.
void FeedbackFlangerFX::process(juce::AudioBuffer<float>& buffer)
{
    float old_t = t;  // Guardar el valor de t para no sobrescribirlo antes de usarlo
    const float minRateHz = 0.1f;  // Tasa m�nima en Hz
    const float maxRateHz = 10.0f;  // Tasa m�xima en Hz

    // Iterar a trav�s de todos los canales
    for (int channel = 0; channel < buffer.getNumChannels(); channel++)
    {
        t = old_t;  // Restaurar el valor de t para cada canal
        // Iterar a trav�s de todas las muestras del buffer
        for (int i = 0; i < buffer.getNumSamples(); i++)
        {
            auto sample = buffer.getReadPointer(channel)[i];  // Obtener la muestra de entrada
            ratePercentage = targetRatePercentage;  // Usar la tasa objetivo

            // Calcular la frecuencia de modulaci�n en Hz
            float rateHz = minRateHz + ratePercentage * (maxRateHz - minRateHz);
            // Calcular el valor de la LFO (Low Frequency Oscillator) usando la sinusoide
            float lfoValue = (depth / 2.0f) * sin(2.0 * juce::MathConstants<float>::pi * rateHz * t) + depth;

            // Calcular el valor del delay con el efecto LFO y el predelay
            float fracDelay = static_cast<float>(writterPointer[channel]) - lfoValue - predelay;
            if (fracDelay < 0) fracDelay += circularBufferSize;  // Asegurarse de que fracDelay no sea negativo

            int intDelay = static_cast<int>(fracDelay);  // Parte entera del delay
            float frac = fracDelay - intDelay;  // Parte fraccionaria del delay
            int nextSampleIndex = intDelay + 1;  // �ndice de la muestra siguiente
            if (nextSampleIndex >= circularBufferSize) nextSampleIndex = 0;  // Manejar el caso de ciclo

            // Interpolar entre las dos muestras de la se�al retrasada (por el delay fraccionado)
            float delayedSample = (1.0f - frac) * circularBuffer[intDelay][channel] + frac * circularBuffer[nextSampleIndex][channel];

            // Almacenar la muestra procesada con la retroalimentaci�n en el buffer circular
            circularBuffer[writterPointer[channel]][channel] = sample + delayedSample * feedback;

            // Avanzar el puntero de escritura
            writterPointer[channel]++;
            if (writterPointer[channel] >= circularBufferSize) writterPointer[channel] = 0;

            // Escribir la muestra procesada en el buffer de salida
            buffer.getWritePointer(channel)[i] = delayedSample;

            t += 1.0f / sampleRate;  // Incrementar el tiempo
        }
    }
}

// EN: Constructor, does not initialize anything in this case.
// ES: Constructor, no inicializa nada en este caso.
FeedbackFlangerFX::FeedbackFlangerFX() {}

// EN: Destructor, does not perform any specific cleanup in this case.
// ES: Destructor, no realiza ninguna limpieza espec�fica en este caso.
FeedbackFlangerFX::~FeedbackFlangerFX() {}
