/*
  ==============================================================================

    PiceWiseOverdrive.h
    Created: 3 Sep 2024 1:43:52pm
    Author:  Jhonatan L�pez

  ==============================================================================
*/

#pragma once
//#include <JuceHeader.h>

// Definici�n de la clase PiceWiseOverdrive
// ES: Esta clase implementa un efecto de distorsi�n que utiliza una t�cnica de sobrecarga por tramos (piecewise).
// EN: This class implements an overdrive effect that uses a piecewise distortion technique.
class PiceWiseOverdrive
{
public:

    // M�todo comentado (posiblemente a implementar)
    // ES: Este m�todo permitir�a ajustar el valor de la distorsi�n por tramos (piecewise overdrive).
    // EN: This method would allow adjusting the value of the piecewise overdrive distortion.
    // void setPiceWiseOverdriveValue(float inPiceWiseOverdriveValue);

    // M�todo para procesar el buffer de audio
    // ES: Este m�todo procesa el buffer de audio para aplicar el efecto de distorsi�n por tramos.
    // EN: This method processes the audio buffer to apply the piecewise overdrive effect.
    void process(juce::AudioBuffer<float>& buffer);

    // Constructor de la clase
    // ES: Inicializa una nueva instancia de la clase PiceWiseOverdrive.
    // EN: Initializes a new instance of the PiceWiseOverdrive class.
    PiceWiseOverdrive();

    // Destructor de la clase
    // ES: Libera recursos cuando la instancia de PiceWiseOverdrive se destruye.
    // EN: Releases resources when the PiceWiseOverdrive instance is destroyed.
    ~PiceWiseOverdrive();

private:

    // No se han definido miembros privados para esta clase en este archivo de cabecera
    // ES: Actualmente no hay variables privadas para esta clase.
    // EN: Currently, there are no private variables for this class.
};