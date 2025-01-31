/*
  ==============================================================================

    IIR_LPF.cpp
    Created: 30 Sep 2024 1:13:35pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

//#include "IIR_LPF.h"

// EN: Constructor for the IIR_LPF class. Initializes the filter object.
//     This constructor does not initialize any members as they will be set up in the `prepare` method.
// ES: Constructor para la clase IIR_LPF. Inicializa el objeto del filtro.
//     Este constructor no inicializa ning�n miembro ya que se configurar�n en el m�todo `prepare`.
IIR_LPF::IIR_LPF()
{
}

// EN: Destructor for the IIR_LPF class. Cleans up resources when the object is destroyed.
//     In this case, no explicit cleanup is needed, as the filter state is managed by JUCE's DSP module.
// ES: Destructor para la clase IIR_LPF. Libera los recursos cuando el objeto es destruido.
//     En este caso, no se necesita una limpieza expl�cita, ya que el estado del filtro es gestionado por el m�dulo DSP de JUCE.
IIR_LPF::~IIR_LPF()
{
}

// EN: Prepares the low-pass filter with the given sample rate, block size, and number of channels.
//     This method configures the DSP filter for the audio processing. 
//     It also stores the sample rate for later use in coefficient calculations.
void IIR_LPF::prepare(double inSampleRate, int inSamplesPerBlock, int inChannels)
{
    // EN: Define the processing specifications, which include the sample rate, maximum block size, and the number of channels.
    //     These specs will be used to prepare the filter to work within these parameters.
    // ES: Define las especificaciones de procesamiento, que incluyen la frecuencia de muestreo, el tama�o m�ximo del bloque y el n�mero de canales.
    //     Estas especificaciones se utilizar�n para preparar el filtro y hacer que funcione dentro de estos par�metros.
    juce::dsp::ProcessSpec spec;

    spec.sampleRate = inSampleRate;
    spec.maximumBlockSize = inSamplesPerBlock;
    spec.numChannels = inChannels;

    // EN: Store the sample rate for later use in filter coefficient calculations.
    // ES: Almacena la frecuencia de muestreo para su uso posterior en los c�lculos de los coeficientes del filtro.
    sampleRate = inSampleRate;

    // EN: Prepare the filter with the processing specifications.
    //     This step sets up the filter to work with the given parameters.
    // ES: Prepara el filtro con las especificaciones del proceso.
    //     Este paso configura el filtro para trabajar con los par�metros dados.
    foApf.prepare(spec);

    // EN: Update the filter coefficients based on the initial cutoff frequency.
    //     This ensures the filter is set up correctly from the start.
    // ES: Actualiza los coeficientes del filtro seg�n la frecuencia de corte inicial.
    //     Esto asegura que el filtro se configure correctamente desde el inicio.
    updateFilter();
}

// EN: Processes the given audio buffer by applying the low-pass filter.
//     This modifies the audio buffer in-place, filtering the audio data.
void IIR_LPF::process(juce::AudioBuffer<float>& buffer)
{
    // EN: Create an audio block to process the given buffer.
    //     This allows the DSP module to operate on the data in blocks.
    // ES: Crea un bloque de audio para procesar el b�fer dado.
    //     Esto permite que el m�dulo DSP opere sobre los datos en bloques.
    juce::dsp::AudioBlock<float> block(buffer);

    // EN: Create a process context, which defines how the block of audio should be processed.
    //     This context will be used to apply the filter to the audio data.
    // ES: Crea un contexto de procesamiento, que define c�mo se debe procesar el bloque de audio.
    //     Este contexto se utilizar� para aplicar el filtro a los datos de audio.
    juce::dsp::ProcessContextReplacing<float> context(block);

    // EN: Apply the low-pass filter to the audio block using the specified context.
    //     This processes the audio buffer with the low-pass filter and modifies the data.
    // ES: Aplica el filtro pasa bajos al bloque de audio utilizando el contexto especificado.
    //     Esto procesa el b�fer de audio con el filtro pasa bajos y modifica los datos.
    foApf.process(context);
}

// EN: Sets the cutoff frequency for the low-pass filter.
//     The cutoff frequency determines the point at which the filter starts attenuating higher frequencies.
//     After setting the new frequency, the filter coefficients are updated accordingly.
void IIR_LPF::setCutoffFrequency(float frequency)
{
    // EN: Update the cutoff frequency.
    //     This will affect how the filter behaves, as the cutoff frequency defines which frequencies pass through.
    // ES: Actualiza la frecuencia de corte.
    //     Esto afectar� el comportamiento del filtro, ya que la frecuencia de corte define qu� frecuencias pasan.
    cutoffFrequency = frequency;

    // EN: Recalculate the filter coefficients based on the new cutoff frequency.
    //     This step ensures the filter is using the correct coefficients for the updated frequency.
    // ES: Recalcula los coeficientes del filtro seg�n la nueva frecuencia de corte.
    //     Este paso asegura que el filtro est� utilizando los coeficientes correctos para la frecuencia actualizada.
    updateFilter();
}

// EN: Updates the filter coefficients based on the current sample rate and cutoff frequency.
//     This method calculates the filter's behavior by generating the appropriate coefficients.
void IIR_LPF::updateFilter()
{
    // EN: Create the low-pass filter coefficients based on the sample rate and cutoff frequency.
    //     This method uses JUCE's `makeLowPass` function to generate the correct filter coefficients for the IIR filter.
    // ES: Crea los coeficientes del filtro pasa bajos seg�n la frecuencia de muestreo y la frecuencia de corte.
    //     Este m�todo utiliza la funci�n `makeLowPass` de JUCE para generar los coeficientes correctos para el filtro IIR.
    auto coefficients = juce::dsp::IIR::Coefficients<float>::makeLowPass(
        sampleRate,
        cutoffFrequency);  // Ajusta el n�mero de coeficientes seg�n sea necesario

    // EN: Assign the calculated coefficients to the filter.
    //     This updates the filter to use the newly calculated coefficients for processing audio.
    // ES: Asigna los coeficientes calculados al filtro.
    //     Esto actualiza el filtro para utilizar los coeficientes reci�n calculados para procesar el audio.
    *foApf.state = *coefficients;
}