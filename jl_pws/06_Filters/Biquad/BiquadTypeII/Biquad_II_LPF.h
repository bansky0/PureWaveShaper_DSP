/*
  ==============================================================================

    Biquad_II_LPF.h
    Created: 7 Oct 2024 10:18:42am
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// EN: Class for implementing a biquad low-pass filter using Direct Form II.
// ES: Clase para implementar un filtro de paso bajo biquad utilizando la forma directa II.
class Biquad_II_LPF
{
public:
    // EN: Constructor - Initializes default settings for the filter.
    // ES: Constructor - Inicializa los ajustes predeterminados del filtro.
    Biquad_II_LPF();

    // EN: Destructor - No special cleanup is needed since no dynamic memory is used.
    // ES: Destructor - No se necesita limpieza especial ya que no se utiliza memoria din�mica.
    ~Biquad_II_LPF();

    // EN: Prepares the filter by setting the sample rate.
    // ES: Prepara el filtro configurando la frecuencia de muestreo.
    void prepare(double inSampleRate);

    // EN: Processes an entire audio buffer, applying the low-pass filter to each sample.
    // ES: Procesa un buffer de audio completo, aplicando el filtro de paso bajo a cada muestra.
    void process(juce::AudioBuffer<float>& inBuffer);

    // EN: Processes a single audio sample for a specific channel.
    // ES: Procesa una muestra de audio individual para un canal espec�fico.
    float processSample(float inSample, int channel);

    // EN: Sets the cutoff frequency for the low-pass filter.
    // ES: Configura la frecuencia de corte para el filtro de paso bajo.
    void setFrequency(float inFrequency);

    // EN: Sets the Q factor (resonance) of the low-pass filter.
    // ES: Configura el factor Q (resonancia) del filtro de paso bajo.
    void setQ(float inQ);

    // EN: Updates the filter coefficients based on the current parameters (frequency and Q).
    // ES: Actualiza los coeficientes del filtro seg�n los par�metros actuales (frecuencia y Q).
    void updateFilter();

private:
    // EN: The sample rate of the audio being processed.
    // ES: La frecuencia de muestreo del audio que se est� procesando.
    double sampleRate{ 0.0f };

    // EN: Delay line states for the filter (separate for each stereo channel).
    // ES: Estados de la l�nea de retardo para el filtro (separados para cada canal est�reo).
    float w1[2] = { 0.0f }; // EN: One-sample delay for each channel. // ES: Retardo de una muestra para cada canal.
    float w2[2] = { 0.0f }; // EN: Two-sample delay for each channel. // ES: Retardo de dos muestras para cada canal.

    // EN: Intermediate values for the filter design.
    // ES: Valores intermedios para el dise�o del filtro.
    float w0{ 0.0f };     // EN: Angular frequency (omega). // ES: Frecuencia angular (omega).
    float alpha{ 0.0f };  // EN: Alpha value for filter calculation. // ES: Valor alfa para el c�lculo del filtro.

    // EN: Filter coefficients.
    // ES: Coeficientes del filtro.
    float b0{ 0.0f }; // EN: Coefficient for the current input sample. // ES: Coeficiente para la muestra de entrada actual.
    float b1{ 0.0f }; // EN: Coefficient for the first delay sample. // ES: Coeficiente para la primera muestra de retardo.
    float b2{ 0.0f }; // EN: Coefficient for the second delay sample. // ES: Coeficiente para la segunda muestra de retardo.
    float a0{ 0.0f }; // EN: Denominator normalization coefficient. // ES: Coeficiente de normalizaci�n del denominador.
    float a1{ 0.0f }; // EN: Coefficient for the first feedback sample. // ES: Coeficiente para la primera muestra de realimentaci�n.
    float a2{ 0.0f }; // EN: Coefficient for the second feedback sample. // ES: Coeficiente para la segunda muestra de realimentaci�n.

    // EN: User-configurable parameters.
    // ES: Par�metros configurables por el usuario.
    float frequency{ 1000.0f }; // EN: Cutoff frequency in Hz. // ES: Frecuencia de corte en Hz.
    float Q{ 0.707f };          // EN: Quality factor (default to 1/sqrt(2) for Butterworth response). // ES: Factor de calidad (por defecto 1/sqrt(2) para respuesta Butterworth).
};