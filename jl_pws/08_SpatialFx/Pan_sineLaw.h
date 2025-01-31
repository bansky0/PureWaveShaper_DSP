/*
  ==============================================================================

    Pan_sineLaw.h
    Created: 26 Aug 2024 12:08:48pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// Definici�n de la clase PanSineLaw
// ES: Esta clase implementa un algoritmo de panoramizaci�n basado en la ley del seno,
//     proporcionando un control suave y perceptualmente equilibrado sobre el panorama.
// EN: This class implements a panning algorithm based on the sine law, 
//     providing smooth and perceptually balanced control over the stereo panning.

class PanSineLaw
{
public:
    // Constructor de la clase
    // ES: Inicializa los valores por defecto de la clase PanSineLaw.
    // EN: Initializes the default values of the PanSineLaw class.
    PanSineLaw();

    // Destructor de la clase
    // ES: Libera los recursos utilizados por la clase (si aplica).
    // EN: Frees any resources used by the class (if applicable).
    ~PanSineLaw();

    // Establece el valor de panoramizaci�n basado en la ley del seno
    // ES: Configura el valor de panoramizaci�n utilizando un rango de entrada espec�fico.
    // EN: Sets the panning value using a specific input range.
    void setPanSineLawValue(float inPanSineLawValue);

    // Procesa el buffer de audio
    // ES: Aplica la panoramizaci�n utilizando la ley del seno al buffer de audio.
    // EN: Applies sine-law panning to the audio buffer.
    void process(juce::AudioBuffer<float>& buffer);

private:
    // Valor de panoramizaci�n
    // ES: Representa la posici�n panor�mica, donde 0 es completamente izquierdo y 1 es completamente derecho.
    // EN: Represents the pan position, where 0 is fully left and 1 is fully right.
    float panSineLawValue{};

    // Constante PI
    // ES: Utilizada para c�lculos trigonom�tricos en la ley del seno.
    // EN: Used for trigonometric calculations in the sine law.
    float pi{ juce::MathConstants<float>::pi };
};
