/*
  ==============================================================================

    Pan_sineLaw_modified.h
    Created: 26 Aug 2024 1:26:44pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// Clase PanSineLawModified
// ES: Esta clase implementa un sistema de panoramizaci�n basado en la ley del seno, con modificaciones personalizables.
// EN: This class implements a sine-law-based panning system with customizable modifications.

class PanSineLawModified
{
public:
    // Constructor
    // ES: Inicializa la clase PanSineLawModified.
    // EN: Initializes the PanSineLawModified class.
    PanSineLawModified();

    // Destructor
    // ES: Libera recursos utilizados por la clase (si aplica).
    // EN: Releases resources used by the class (if applicable).
    ~PanSineLawModified();

    // Configura el valor de panoramizaci�n modificado basado en la ley del seno
    // ES: Ajusta el valor de panoramizaci�n en funci�n de la entrada proporcionada.
    // EN: Adjusts the panning value based on the provided input.
    void setPanSineLawModifiedValue(float inPanSineLawModifiedValue);

    // Procesa el buffer de audio
    // ES: Aplica el efecto de panoramizaci�n modificado al buffer de audio proporcionado.
    // EN: Applies the modified panning effect to the provided audio buffer.
    void process(juce::AudioBuffer<float>& buffer);

private:
    // Valor de panoramizaci�n modificado
    // ES: Almacena el valor de la panoramizaci�n, que se ajustar� seg�n la ley del seno modificada.
    // EN: Stores the panning value, which will be adjusted based on the modified sine law.
    float panSineLawModifiedValue{};

    // Constante para el valor de PI
    // ES: Utiliza la constante matem�tica PI para los c�lculos de la ley del seno.
    // EN: Uses the mathematical constant PI for sine law calculations.
    float pi{ juce::MathConstants<float>::pi };
};

