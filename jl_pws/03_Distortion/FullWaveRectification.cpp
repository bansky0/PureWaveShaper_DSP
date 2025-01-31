/*
  ==============================================================================

    FullWaveRectification.cpp
    Created: 2 Sep 2024 8:03:38pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

//#include "FullWaveRectification.h"

// EN: Processes an audio buffer by applying full-wave rectification to each sample.
// ES: Procesa un b�fer de audio aplicando rectificaci�n de onda completa a cada muestra.
void FullWaveRectification::process(juce::AudioBuffer<float>& buffer)
{
    // EN: Iterate through all the channels in the buffer.
    // ES: Iterar a trav�s de todos los canales del b�fer.
    for (int channel = 0; channel < buffer.getNumChannels(); channel++)
    {
        // EN: Iterate through all the samples in the current channel.
        // ES: Iterar a trav�s de todas las muestras del canal actual.
        for (int i = 0; i < buffer.getNumSamples(); i++)
        {
            // EN: Get the input sample from the buffer.
            // ES: Obtener la muestra de entrada desde el b�fer.
            float inSample = buffer.getSample(channel, i);
            float outSample = 0.0f;

            // EN: Apply full-wave rectification.
            //     If the sample is positive, keep it as is.
            //     If the sample is negative, multiply it by -1 to make it positive.
            // ES: Aplicar la rectificaci�n de onda completa.
            //     Si la muestra es positiva, se mantiene como est�.
            //     Si la muestra es negativa, se multiplica por -1 para hacerla positiva.
            if (inSample >= 0.0f)
            {
                outSample = inSample;
            }
            else
            {
                outSample = -1.0f * inSample;
            }

            // EN: Set the rectified sample back into the buffer.
            // ES: Asignar la muestra rectificada de vuelta al b�fer.
            buffer.setSample(channel, i, outSample);
        }
    }
}

// EN: Constructor for the FullWaveRectification class.
// ES: Constructor de la clase FullWaveRectification.
FullWaveRectification::FullWaveRectification()
{
}

// EN: Destructor for the FullWaveRectification class.
// ES: Destructor de la clase FullWaveRectification.
FullWaveRectification::~FullWaveRectification()
{
}
