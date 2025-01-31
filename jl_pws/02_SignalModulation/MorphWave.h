/*
  ==============================================================================

    MorphWave.h
    Created: 30 Aug 2024 11:25:40am
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

class MorphWave
{
public:

    // Establece el valor de la forma de onda.
    // EN: Sets the shape value of the waveform.
    void setShape(float inShapeValue);

    // Establece la frecuencia de la onda.
    // EN: Sets the frequency of the waveform.
    void setFrequency(double inFrequency);

    // Inicializa los par�metros del MorphWave con la frecuencia de muestreo.
    // EN: Initializes the MorphWave parameters with the sample rate.
    void prepare(double theSampleRate);

    // Procesa la se�al de audio, generando una onda modulada seg�n los par�metros establecidos.
    // EN: Processes the audio signal, generating a modulated waveform based on the set parameters.
    void process(juce::AudioBuffer<float>& buffer);

    // Constructor por defecto de la clase MorphWave.
    // EN: Default constructor for the MorphWave class.
    MorphWave();

    // Destructor de la clase MorphWave.
    // EN: Destructor for the MorphWave class.
    ~MorphWave();

private:
    // Valor de la forma de onda, controla la curvatura de la onda generada.
    // EN: Waveform shape value, controls the curvature of the generated waveform.
    float shapeValue{ 0.0f }; // Valores entre 0-10

    // Frecuencia de la onda en Hz.
    // EN: Frequency of the waveform in Hz.
    float frequency{ 100.0f }; // Valores entre 0-20 Hz

    // Frecuencia de muestreo del sistema, por defecto 44100 Hz.
    // EN: The sample rate of the system, default is 44100 Hz.
    float sampleRate{ 44100 };

    // Array para almacenar el tiempo de cada canal (en dos canales por defecto).
    // EN: Array to store time for each channel (default two channels).
    float time[2]{};

    // Array que contiene los incrementos de tiempo por muestra para cada canal.
    // EN: Array containing time deltas for each sample in each channel.
    float deltaTime[2]{};
};