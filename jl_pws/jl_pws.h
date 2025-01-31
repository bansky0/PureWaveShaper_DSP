
/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.md file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:                 jl_pws
  vendor:             NoiseRoomUIO
  version:            1.0.0
  name:               PureWaveShaper DSP
  description:        DSP classes for JUCE framework
  website:            http://www.jhonatanlopez.com
  license:            MIT

  dependencies:       juce_audio_basics, juce_core, juce_dsp

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/


#pragma once
#define JL_PWS_H_INCLUDED

#include <juce_core/juce_core.h>
#include <juce_audio_basics/juce_audio_basics.h>
#include <juce_dsp/juce_dsp.h>

//1. Mathematical Operations
#include "./01_MathOperations/AdditiveSynth.h"
#include "./01_MathOperations/Subtraction.h"

//2. Signal Modulation
#include "./02_SignalModulation/AmpModulation.h"
#include "./02_SignalModulation/AutoPan.h"
#include "./02_SignalModulation/RingModulation.h"
#include "./02_SignalModulation/MorphLFO.h"
#include "./02_SignalModulation/MorphWave.h"
#include "./02_SignalModulation/LFO.h"

//3. Distortion
#include "./03_Distortion/ArctangentDistortion.h"
#include "./03_Distortion/AsymetricalDistortion.h"
#include "./03_Distortion/BitReduction.h"
#include "./03_Distortion/CubicDistortion.h"
#include "./03_Distortion/DiodeClipping.h"
#include "./03_Distortion/ExponentialDistortion.h"
#include "./03_Distortion/FullWaveRectification.h"
#include "./03_Distortion/HalfWaveRectification.h"
#include "./03_Distortion/HardClip.h"
#include "./03_Distortion/InfiniteClip.h"
#include "./03_Distortion/PiceWiseOverdrive.h"
#include "./03_Distortion/SineDistortion.h"
#include "./03_Distortion/SlewRateDistortion.h"

//4. Delay and Echo Effects
#include "./04_DelayEchoFx/SimpleDelay.h"
#include "./04_DelayEchoFx/SimpleDelay2.h"
#include "./04_DelayEchoFx/SimpleDelay3.h"
#include "./04_DelayEchoFx/SimpleDelay4.h"
#include "./04_DelayEchoFx/ModulatedDelay.h"
#include "./04_DelayEchoFx/PingPongEcho.h"
#include "./04_DelayEchoFx/EchoFeedBackAndFordward.h"
#include "./04_DelayEchoFx/EchoFeedBackAndFordward2.h"
#include "./04_DelayEchoFx/EchoStereo.h"

//5. Time-Based Effects
#include "./05_TimeBasedFx/ChorusEffect.h"
#include "./05_TimeBasedFx/VibratoEffect.h"
#include "./05_TimeBasedFx/VibratoEffectExample.h"
#include "./05_TimeBasedFx/BarberPoleFlangerEffect.h"
#include "./05_TimeBasedFx/BarberPoleFlangerEffect2.h"
#include "./05_TimeBasedFx/FlangerEffect.h"
#include "./05_TimeBasedFx/FeedbackFlangerEffect.h"

//6. Filters

//FIR Filters
#include "./06_Filters/FIR/FIR_LPF.h"
#include "./06_Filters/FIR/FIR_LPF2.h"

//IIR Filters
#include "./06_Filters/IIR/IIR_APF.h"
#include "./06_Filters/IIR/IIR_BPF.h"
#include "./06_Filters/IIR/IIR_FirstOrderAPF.h"
#include "./06_Filters/IIR/IIR_FirstOrderHPF.h"
#include "./06_Filters/IIR/IIR_FirstOrderLPF.h"
#include "./06_Filters/IIR/IIR_HPF.h"
#include "./06_Filters/IIR/IIR_LPF.h"
#include "./06_Filters/IIR/IIR_LSF.h"
#include "./06_Filters/IIR/IIR_Notch.h"
#include "./06_Filters/IIR/IIR_PeakFilter.h"

//Biquad Filters
// Biquad Type I
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_APF.h"
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_BPF.h"
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_BPF2.h"
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_HPF.h"
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_HSF.h"

// Biquad Type II
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_APF.h"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_BPF.h"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_HPF.h"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_HSF.h"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_LPF.h"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_LSF.h"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_Notch.h"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_Peaking.h"

// Biquad TDFII
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_APF.h"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_BPF.h"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_HPF.h"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_HSF.h"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_LPF.h"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_LSF.h"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_Notch.h"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_Peaking.h"

// Direct Form Filters
#include "./06_Filters/DirectForm/DirectFormII_APF.h"
#include "./06_Filters/DirectForm/DirectFormII_NestedAPF.h"

// 7. Waveform Generators
#include "./07_WaveformGenerators/DutyCicleWave.h"
#include "./07_WaveformGenerators/ImpulseTrain.h"
#include "./07_WaveformGenerators/SineWave.h"
#include "./07_WaveformGenerators/SineWave2.h"
#include "./07_WaveformGenerators/SawtoothWave.h"
#include "./07_WaveformGenerators/SawtoothWave2.h"
#include "./07_WaveformGenerators/SquareWave.h"
#include "./07_WaveformGenerators/SquareWave2.h"
#include "./07_WaveformGenerators/TriangleWave.h"
#include "./07_WaveformGenerators/TriangleWave2.h"
#include "./07_WaveformGenerators/WhiteNoise.h"

// 8. Spatial Effects
#include "./08_SpatialFx/Pan.h"
#include "./08_SpatialFx/Pan_linear.h"
#include "./08_SpatialFx/Pan_sineLaw.h"
#include "./08_SpatialFx/Pan_sineLaw_modified.h"
#include "./08_SpatialFx/Pan_sqrt.h"
#include "./08_SpatialFx/Pan_sqrt_modified.h"
#include "./08_SpatialFx/StereoImager.h"
#include "./08_SpatialFx/MidSide.h"

// 9. Pitch Effects
#include "./09_PitchFx/PitchDown.h"
#include "./09_PitchFx/PitchUp.h"
#include "./09_PitchFx/PitchShifter.h"

// 10. Miscellaneous
#include "./10_Miscellaneous/WetDry.h"
#include "./10_Miscellaneous/Input.h"
