/*
  ==============================================================================

    Pan_linear.h
    Created: 22 Aug 2024 6:20:09pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// Definici�n de la clase PanLinear
// ES: Esta clase implementa un control de panoramizaci�n lineal para se�ales de audio est�reo.
// EN: This class implements a linear panning control for stereo audio signals.

class PanLinear
{
public:
    // Constructor
    // ES: Constructor por defecto de la clase PanLinear.
    // EN: Default constructor for the PanLinear class.
    PanLinear();

    // Destructor
    // ES: Destructor por defecto de la clase PanLinear.
    // EN: Default destructor for the PanLinear class.
    ~PanLinear();

    // Establece el valor de panoramizaci�n lineal
    // ES: Este m�todo recibe un valor de panoramizaci�n que controla la distribuci�n del audio entre los canales izquierdo y derecho.
    // EN: This method takes a pan value that controls the audio distribution between the left and right channels.
    void setPanLinearValue(float inPanLinearValue);

    // Procesa el buffer de audio
    // ES: Aplica el valor de panoramizaci�n lineal al buffer de audio proporcionado.
    // EN: Applies the linear pan value to the provided audio buffer.
    void process(juce::AudioBuffer<float>& buffer);

private:
    // Valor de panoramizaci�n lineal
    // ES: Almacena el valor de panoramizaci�n lineal que se usar� durante el procesamiento.
    // EN: Stores the linear pan value to be used during processing.
    float panLinearValue{};
};

