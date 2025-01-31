/*
  ==============================================================================

    StereoImager.h
    Created: 31 Aug 2024 11:53:59am
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// EN: A class for implementing a stereo imaging effect that adjusts the stereo width of audio.
// ES: Una clase para implementar un efecto de imagen est�reo que ajusta el ancho est�reo del audio.
class StereoImager
{
public:
    // EN: Sets the stereo width value. A higher value widens the stereo image, while a lower value narrows it.
    // ES: Establece el valor del ancho est�reo. Un valor m�s alto ampl�a la imagen est�reo, mientras que un valor m�s bajo la estrecha.
    void setStereoImagerValue(float inStereoImagerWidthValue);

    // EN: Processes the audio buffer to apply the stereo imaging effect.
    // ES: Procesa el buffer de audio para aplicar el efecto de imagen est�reo.
    void process(juce::AudioBuffer<float>& buffer);

    // EN: Constructor for initializing the StereoImager class.
    // ES: Constructor para inicializar la clase StereoImager.
    StereoImager();

    // EN: Destructor for cleaning up any resources used by the StereoImager class.
    // ES: Destructor para liberar cualquier recurso utilizado por la clase StereoImager.
    ~StereoImager();

private:
    // EN: The value representing the width of the stereo image. Default is 0.0 (no stereo width adjustment).
    // ES: El valor que representa el ancho de la imagen est�reo. Por defecto es 0.0 (sin ajuste de ancho est�reo).
    float widthValue{ 0.0f };
};