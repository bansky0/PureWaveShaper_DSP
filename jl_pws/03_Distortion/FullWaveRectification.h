/*
  ==============================================================================

    FullWaveRectification.h
    Created: 2 Sep 2024 8:03:38pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// EN: The FullWaveRectification class applies full-wave rectification to an audio buffer.
//     Full-wave rectification inverts the negative part of the waveform, turning it all positive.
// ES: La clase FullWaveRectification aplica la rectificaci�n de onda completa a un b�fer de audio.
//     La rectificaci�n de onda completa invierte la parte negativa de la forma de onda, convirti�ndola toda en positiva.

class FullWaveRectification
{
public:

    // EN: Processes the audio buffer by applying full-wave rectification on each sample.
    //     This method modifies the buffer in place, changing the waveform to its absolute value.
    // ES: Procesa el b�fer de audio aplicando rectificaci�n de onda completa a cada muestra.
    //     Este m�todo modifica el b�fer en su lugar, cambiando la forma de onda a su valor absoluto.
    void process(juce::AudioBuffer<float>& buffer);

    // EN: Constructor for the FullWaveRectification class.
    //     Initializes the object.
    // ES: Constructor para la clase FullWaveRectification.
    //     Inicializa el objeto.
    FullWaveRectification();

    // EN: Destructor for the FullWaveRectification class.
    //     Cleans up any resources if necessary when the object is destroyed.
    // ES: Destructor para la clase FullWaveRectification.
    //     Limpia los recursos si es necesario cuando el objeto es destruido.
    ~FullWaveRectification();

private:

};
