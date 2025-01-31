/*
  ==============================================================================

    Pan_sqrt_modified.h
    Created: 26 Aug 2024 1:26:18pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// Declaraci�n de la clase PanSqrtModified
// ES: Esta clase aplica una panoramizaci�n est�reo utilizando una funci�n de ra�z cuadrada modificada.
// EN: This class applies stereo panning using a modified square root function.
class PanSqrtModidied
{
public:
    // Constructor
    // ES: Inicializa una instancia de la clase PanSqrtModified.
    // EN: Initializes an instance of the PanSqrtModified class.
    PanSqrtModidied();

    // Destructor
    // ES: Libera los recursos utilizados por la clase (si aplica).
    // EN: Releases resources used by the class (if applicable).
    ~PanSqrtModidied();

    // Configura el valor de panoramizaci�n
    // ES: Ajusta el valor de panoramizaci�n modificado basado en la entrada proporcionada.
    // EN: Adjusts the modified panning value based on the provided input.
    void setPanSqrtModidiedValue(float inPanSqrtModidiedValue);

    // Procesa un buffer de audio
    // ES: Aplica la panoramizaci�n modificada al buffer de audio dado.
    // EN: Applies the modified panning effect to the given audio buffer.
    void process(juce::AudioBuffer<float>& buffer);

private:
    // Valor de panoramizaci�n modificada
    // ES: Representa el valor actual de la panoramizaci�n en un rango normalizado.
    // EN: Represents the current panning value in a normalized range.
    float panSqrtModifiedValue{};
};