/*
  ==============================================================================

    MidSide.cpp
    Created: 31 Aug 2024 9:53:26am
    Author:  Jhonatan L�pez

  ==============================================================================
*/

//#include "MidSide.h"

// ES: M�todo comentado que podr�a permitir configurar un valor booleano para activar o desactivar la codificaci�n Mid/Side.
// EN: Commented-out method that could allow setting a boolean value to enable or disable Mid/Side encoding.
// void setMidSideValue(bool inMidSideValue)
// {
//     
// }

// ES: M�todo para procesar un buffer de audio, realizando la codificaci�n y decodificaci�n Mid/Side.
// EN: Method to process an audio buffer, performing Mid/Side encoding and decoding.
void MidSide::process(juce::AudioBuffer<float>& buffer)
{
    // ES: Si el buffer tiene menos de dos canales, no se puede realizar el procesamiento Mid/Side.
    // EN: If the buffer has fewer than two channels, Mid/Side processing cannot be performed.
    if (buffer.getNumChannels() < 2)
        return;

    // ES: Procesar cada muestra del buffer. La iteraci�n sobre los canales podr�a implementarse como un bucle.
    // EN: Process each sample in the buffer. Iterating over the channels could also be done in a loop.
    for (int i = 0; i < buffer.getNumSamples(); i++)
    {
        // ES: Obtiene las muestras de los canales izquierdo y derecho.
        // EN: Retrieves the samples from the left and right channels.
        float left = buffer.getSample(0, i);
        float right = buffer.getSample(1, i);

        // ES: Codificaci�n Mid/Side:
        // Mid es el promedio de los canales izquierdo y derecho.
        // Side es la diferencia entre los canales izquierdo y derecho.
        // EN: Mid/Side encoding:
        // Mid is the average of the left and right channels.
        // Side is the difference between the left and right channels.
        float mid = 0.5f * (left + right);
        float side = 0.5f * (left - right);

        /*
        ES: Aqu� se podr�an realizar procesos adicionales en las se�ales Mid y Side.
        EN: Additional processing on the Mid and Side signals could be performed here.
        */

        // ES: Decodificaci�n Mid/Side:
        // Reconstrucci�n de los canales izquierdo y derecho a partir de Mid y Side.
        // EN: Mid/Side decoding:
        // Reconstruction of the left and right channels from Mid and Side.
        float newLeft = mid + side;
        float newRight = mid - side;

        /*
        ES: El canal de salida se puede seleccionar dependiendo del tipo de procesamiento requerido
        (Mid, Side o los nuevos canales izquierdo/derecho procesados).
        EN: The output channel can be selected depending on the type of processing needed
        (Mid, Side, or the new processed Left/Right channels).
        */
        buffer.setSample(0, i, side);  // Asigna la se�al Side al canal izquierdo.
        buffer.setSample(1, i, side);  // Asigna la se�al Side al canal derecho.
    }
}

// ES: Constructor de la clase MidSide.
// EN: Constructor for the MidSide class.
MidSide::MidSide()
{
}

// ES: Destructor de la clase MidSide.
// EN: Destructor for the MidSide class.
MidSide::~MidSide()
{
}
