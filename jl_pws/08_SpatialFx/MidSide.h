/*
  ==============================================================================

    MidSide.h
    Created: 31 Aug 2024 9:53:26am
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// ES: Declaraci�n de la clase MidSide.
// EN: Declaration of the MidSide class.
class MidSide
{
public:
    // ES: Constructor de la clase.
    // EN: Class constructor.
    MidSide();

    // ES: Destructor de la clase.
    // EN: Class destructor.
    ~MidSide();

    // ES: M�todo para procesar un buffer de audio y convertir entre representaciones Mid/Side y Left/Right.
    // EN: Method to process an audio buffer and convert between Mid/Side and Left/Right representations.
    void process(juce::AudioBuffer<float>& buffer);

    // ES: M�todo comentado que podr�a permitir configurar un valor para activar o desactivar la codificaci�n Mid/Side.
    // EN: Commented method that might allow setting a value to enable or disable Mid/Side encoding.
    // void setMidSideValue(bool inMidSideValue);

private:
    // ES: Actualmente, no hay miembros privados definidos en la clase.
    // EN: Currently, there are no private members defined in the class.
};
