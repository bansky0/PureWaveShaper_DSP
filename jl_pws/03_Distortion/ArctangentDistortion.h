/*
  ==============================================================================

    ArctangentDistortion.h
    Created: 2 Sep 2024 10:08:57pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// EN: Class ArctangentDistortion: Implements a simple distortion effect based on the arctangent function.
// ES: Clase ArctangentDistortion: Implementa un efecto de distorsi�n simple basado en la funci�n arco tangente.

class ArctangentDistortion
{
public:
    // EN: Sets the drive level for the arctangent distortion. Accepts values in the range of 1-10.
    // ES: Configura el nivel de "drive" para la distorsi�n de arco tangente. Acepta valores en el rango de 1-10.
    void setArctangentDistortionDrive(float inArctangentDistortionDriveValue);

    // EN: Processes the audio buffer to apply the arctangent distortion effect.
    // ES: Procesa el buffer de audio para aplicar el efecto de distorsi�n de arco tangente.
    void process(juce::AudioBuffer<float>& buffer);

    // EN: Constructor for the ArctangentDistortion class.
    // ES: Constructor de la clase ArctangentDistortion.
    ArctangentDistortion();

    // EN: Destructor for the ArctangentDistortion class.
    // ES: Destructor de la clase ArctangentDistortion.
    ~ArctangentDistortion();

private:
    // EN: Mathematical constant Pi, used in the distortion formula.
    // ES: Constante matem�tica Pi, utilizada en la f�rmula de distorsi�n.
    float pi{ juce::MathConstants<float>::pi };

    // EN: Drive parameter for the distortion, determines the amount of effect applied.
    // ES: Par�metro de "drive" para la distorsi�n, determina la cantidad de efecto aplicado.
    float alpha{}; // Range: 1-10
};