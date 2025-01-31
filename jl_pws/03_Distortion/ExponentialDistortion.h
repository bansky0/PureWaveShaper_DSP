/*
  ==============================================================================

    ExponentialDistortion.h
    Created: 3 Sep 2024 12:32:28pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

class ExponentialDistortion
{
public:

    // EN: Set the value for exponential distortion gain
    // ES: Establecer el valor de la ganancia para la distorsi�n exponencial
    void setExponentialDistortionValue(float inExponentialDistortionValue);

    // EN: Process the audio buffer with exponential distortion
    // ES: Procesar el buffer de audio con distorsi�n exponencial
    void process(juce::AudioBuffer<float>& buffer);

    // EN: Constructor
    // ES: Constructor
    ExponentialDistortion();

    // EN: Destructor
    // ES: Destructor
    ~ExponentialDistortion();

private:
    // EN: Gain value for exponential distortion, typically in the range of 1 to 10
    // ES: Valor de ganancia para la distorsi�n exponencial, generalmente en el rango de 1 a 10
    float gain = 0.0f; //1-10
};
