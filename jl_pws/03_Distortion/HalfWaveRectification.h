/*
  ==============================================================================

    HalfWaveRectification.h
    Created: 2 Sep 2024 7:13:47pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once 
//#include <JuceHeader.h>

// EN: Defines a class for half-wave rectification, a process that modifies audio signals 
//     by removing the negative portion of the waveform.
// ES: Define una clase para la rectificaci�n de media onda, un proceso que modifica las se�ales de audio
//     eliminando la porci�n negativa de la forma de onda.
class HalfWaveRectification
{
public:

    // EN: Processes the audio buffer, applying half-wave rectification to each sample.
    //     This method modifies the buffer in place.
    // ES: Procesa el b�fer de audio, aplicando rectificaci�n de media onda a cada muestra.
    //     Este m�todo modifica el b�fer en su lugar.
    void process(juce::AudioBuffer<float>& buffer);

    // EN: Constructor for the HalfWaveRectification class.
    // ES: Constructor de la clase HalfWaveRectification.
    HalfWaveRectification();

    // EN: Destructor for the HalfWaveRectification class.
    // ES: Destructor de la clase HalfWaveRectification.
    ~HalfWaveRectification();

private:

    // EN: Place for private members and helper functions. Currently empty.
    // ES: Espacio reservado para miembros privados y funciones auxiliares. Actualmente est� vac�o.
};
