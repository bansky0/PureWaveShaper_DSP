# JL_PWS - PureWaveShaper DSP Module

🌎 **Selecciona tu idioma / Select your language:**  

🇪🇸 [Español](#jl_pws---purewaveshaper-modulo-dsp-versióm-español) | 🇬🇧 [English](#jl_pws---purewaveshaper-dsp-module)  

---
🎛️ PureWaveShaper is a JUCE module that contains a collection of audio processing algorithms, including modulation, distortion, filters, delay effects, and more.

## 📌 Features

✅ Modulation algorithms such as AutoPan and Ring Modulation.

✅ Delay effects like PingPong Echo and Stereo Echo.

✅ Advanced distortions including Bit Reduction and Diode Clipping.

✅ Implementation of FIR, IIR, and Biquad filters.

✅ Waveform generators like SineWave and WhiteNoise.

✅ JUCE compatibility for use in plugin projects or audio applications.

## 🛠 Installation

1️⃣ Clone the repository into your project:

```sh
git clone https://github.com/bansky0/jl_pws.git
```

2️⃣ In Projucer, go to the Modules tab and add the module folder (jl_pws).

3️⃣ Save and recompile the project.

📂 Related Project
This module is an evolution of a previous project, which can serve as an implementation example of PureWaveShaper and also as a debugging tool to test the algorithms in a practical environment.

🔗 [PureWaveShaper] (https://github.com/bansky0/PureWaveShaper)

## 🎚 Usage

To use the module in your code, include its main header in your project:

```cpp
#include <jl_pws.h>

AdditiveSynth additiveSynth;

additiveSynth.setAmplitud1(inAmp1);
additiveSynth.setFrequency1(inOsc1);
additiveSynth.setAmplitud1(inAmp2);
additiveSynth.setFrequency1(inOsc2);

additiveSynth..process(buffer);
```

## 📖 Module Structure

```cpp
jl_pws/
│── jl_pws.h
│── jl_pws.cpp
│── 01_MathematicalOperations/
│── 02_SignalModulation/
│── 03_Distortion/
│── 04_DelayEchoFx/
│── 05_DelayFx/
│── 06_Filters/
│── 07_WaveformGenerators/
│── 08_SpatialFx/
│── 09_PitchFx/
│── 10_Miscellaneous/
```

## 🤝 Contributions

If you want to contribute to the project:

1️⃣ Fork the repository.

2️⃣ Create a branch with your improvement (`git checkout -b feature-new`).

3️⃣ Make a commit (`git commit -m 'Add new feature'`).

4️⃣ Push the changes (`git push origin feature-new`).

5️⃣ Open a Pull Request.

## 📜 License

This module is available under the MIT license, which means you can use it in personal and commercial projects.

## 📧 Contact

If you have any questions or suggestions, feel free to open an issue in the repository or contact me at [support@jhonatanlopez.com].

---
# JL_PWS - PureWaveShaper Modulo DSP (Versióm Español)

🎛️ PureWaveShaper es un módulo de JUCE que contiene una colección de algoritmos de procesamiento de audio, incluyendo modulación, distorsión, filtros, efectos de delay y más.

## 📌 Características

✅ Algoritmos de modulación como AutoPan y Ring Modulation.

✅ Efectos de delay como PingPong Echo y Stereo Echo.

✅ Distorsiones avanzadas incluyendo Bit Reduction y Diode Clipping.

✅ Implementación de filtros FIR, IIR y Biquad.

✅ Generadores de formas de onda como SineWave y WhiteNoise.

✅ Compatibilidad con JUCE para usar en proyectos de plugins o aplicaciones de audio.

## 🛠 Instalación

1️⃣ Clona el repositorio en tu proyecto:

```sh
git clone https://github.com/bansky0/jl_pws.git
```

2️⃣ En Projucer, ve a la pestaña Modules y agrega la carpeta del módulo (jl_pws).

3️⃣ Guarda y vuelve a compilar el proyecto.

## 📂 Proyecto Relacionado

Este módulo es una evolución de un proyecto anterior (PureWaveShaper), el cual puede servir como un ejemplo de implementación de PureWaveShaper y también como herramienta de depuración para probar los algoritmos en un entorno práctico.

🔗 [PureWaveShaper] (https://github.com/bansky0/PureWaveShaper)

## 🎚 Uso

Para usar el módulo en tu código, incluye su header principal en tu proyecto:

```cpp
#include <jl_pws.h>

AdditiveSynth additiveSynth;

additiveSynth.setAmplitud1(inAmp1);
additiveSynth.setFrequency1(inOsc1);
additiveSynth.setAmplitud1(inAmp2);
additiveSynth.setFrequency1(inOsc2);

additiveSynth..process(buffer);
```

## 📖 Estructura del Módulo

```cpp
jl_pws/
│── jl_pws.h
│── jl_pws.cpp
│── 01_MathematicalOperations/
│── 02_SignalModulation/
│── 03_Distortion/
│── 04_DelayEchoFx/
│── 05_DelayFx/
│── 06_Filters/
│── 07_WaveformGenerators/
│── 08_SpatialFx/
│── 09_PitchFx/
│── 10_Miscellaneous/
```

## 🤝 Contribuciones

Si deseas contribuir al proyecto:

1️⃣ Haz un fork del repositorio.

2️⃣ Crea una rama con tu mejora (`git checkout -b feature-nueva`).

3️⃣ Realiza un commit (`git commit -m 'Añadir nueva característica'`).

4️⃣ Sube los cambios (`git push origin feature-nueva`).

5️⃣ Abre un Pull Request.

## 📜 Licencia

Este módulo está disponible bajo la licencia MIT, lo que significa que puedes usarlo en proyectos personales y comerciales.

## 📧 Contacto

Si tienes preguntas o sugerencias, no dudes en abrir un issue en el repositorio o contactarme en [support@jhonatanlopez.com].