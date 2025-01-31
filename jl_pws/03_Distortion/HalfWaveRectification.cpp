/*
  ==============================================================================

    HalfWaveRectification.cpp
    Created: 2 Sep 2024 7:13:47pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

//#include "HalfWaveRectification.h"

// EN: Processes an audio buffer by applying a half-wave rectification operation to each sample.
//     This method modifies the buffer directly.
// ES: Procesa un b�fer de audio aplicando una operaci�n de rectificaci�n de media onda a cada muestra.
//     Este m�todo modifica el b�fer directamente.
void HalfWaveRectification::process(juce::AudioBuffer<float>& buffer)
{
    // EN: Iterate through all the channels in the audio buffer.
    // ES: Iterar a trav�s de todos los canales del b�fer de audio.
    for (int channel = 0; channel < buffer.getNumChannels(); channel++)
    {
        // EN: Iterate through all the samples in the current channel.
        // ES: Iterar a trav�s de todas las muestras en el canal actual.
        for (int i = 0; i < buffer.getNumSamples(); i++)
        {
            // EN: Get the input sample from the buffer.
            // ES: Obtener la muestra de entrada desde el b�fer.
            float inSample = buffer.getSample(channel, i);
            float outSample = 0.0f;

            // EN: Apply half-wave rectification:
            //     If the sample is positive or zero, set the output to +1.
            //     If the sample is negative, set the output to -1.
            // ES: Aplicar la rectificaci�n de media onda:
            //     Si la muestra es positiva o igual a cero, establecer la salida en +1.
            //     Si la muestra es negativa, establecer la salida en -1.
            if (inSample >= 0)
            {
                outSample = 1;
            }
            else
            {
                outSample = -1;
            }

            // EN: Write the processed sample back into the buffer.
            // ES: Escribir la muestra procesada de vuelta en el b�fer.
            buffer.setSample(channel, i, outSample);
        }
    }
}

// EN: Constructor for the HalfWaveRectification class. Initializes the object.
// ES: Constructor de la clase HalfWaveRectification. Inicializa el objeto.
HalfWaveRectification::HalfWaveRectification()
{
}

// EN: Destructor for the HalfWaveRectification class. Cleans up resources if needed.
// ES: Destructor de la clase HalfWaveRectification. Libera recursos si es necesario.
HalfWaveRectification::~HalfWaveRectification()
{
}