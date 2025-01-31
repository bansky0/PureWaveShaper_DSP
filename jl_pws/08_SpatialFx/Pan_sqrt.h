/*
  ==============================================================================

    Pan_sqrt.h
    Created: 26 Aug 2024 11:09:35am
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// Clase PanSqrt
// ES: Implementa un efecto de panoramizaci�n que utiliza una funci�n basada en la ra�z cuadrada.
// EN: Implements a panning effect that uses a square root-based function.

class PanSqrt
{
public:
    // Constructor
    // ES: Inicializa la clase PanSqrt.
    // EN: Initializes the PanSqrt class.
    PanSqrt();

    // Destructor
    // ES: Libera recursos utilizados por la clase (si aplica).
    // EN: Releases resources used by the class (if applicable).
    ~PanSqrt();

    // Configura el valor de panoramizaci�n basado en ra�z cuadrada
    // ES: Ajusta el valor de panoramizaci�n en el rango esperado.
    // EN: Adjusts the panning value within the expected range.
    void setPanSqrtValue(float inPanSqrtValue);

    // Procesa el buffer de audio aplicando la panoramizaci�n
    // ES: Modifica las muestras de audio para distribuir el nivel de salida entre los canales izquierdo y derecho.
    // EN: Modifies the audio samples to distribute output levels between the left and right channels.
    void process(juce::AudioBuffer<float>& buffer);

private:
    // Valor de panoramizaci�n
    // ES: Determina el nivel relativo de cada canal en funci�n de la ra�z cuadrada.
    // EN: Determines the relative level of each channel based on the square root.
    float panSqrtValue{};
};