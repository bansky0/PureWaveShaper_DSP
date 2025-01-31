#ifdef JL_PWS_H_INCLUDED
 /* When you add this cpp file to your project, you mustn't include it in a file where you've
    already included any other headers - just put it inside a file on its own, possibly with your config
    flags preceding it, but don't include anything else. That also includes avoiding any automatic prefix
    header files that the compiler may be using.
 */
 #error "Incorrect use of JUCE cpp file"
#endif

#include "jl_pws.h"

//1. Mathematical Operations
#include "./01_MathOperations/AdditiveSynth.cpp"
#include "./01_MathOperations/Subtraction.cpp"

//2. Signal Modulation
#include "./02_SignalModulation/AmpModulation.cpp"
#include "./02_SignalModulation/AutoPan.cpp"
#include "./02_SignalModulation/RingModulation.cpp"
#include "./02_SignalModulation/MorphLFO.cpp"
#include "./02_SignalModulation/MorphWave.cpp"
#include "./02_SignalModulation/LFO.cpp"

//3. Distortion
#include "./03_Distortion/ArctangentDistortion.cpp"
#include "./03_Distortion/AsymetricalDistortion.cpp"
#include "./03_Distortion/BitReduction.cpp"
#include "./03_Distortion/CubicDistortion.cpp"
#include "./03_Distortion/DiodeClipping.cpp"
#include "./03_Distortion/ExponentialDistortion.cpp"
#include "./03_Distortion/FullWaveRectification.cpp"
#include "./03_Distortion/HalfWaveRectification.cpp"
#include "./03_Distortion/HardClip.cpp"
#include "./03_Distortion/InfiniteClip.cpp"
#include "./03_Distortion/PiceWiseOverdrive.cpp"
#include "./03_Distortion/SineDistortion.cpp"
#include "./03_Distortion/SlewRateDistortion.cpp"

//4. Delay and Echo Effects
#include "./04_DelayEchoFx/SimpleDelay.cpp"
#include "./04_DelayEchoFx/SimpleDelay2.cpp"
#include "./04_DelayEchoFx/SimpleDelay3.cpp"
#include "./04_DelayEchoFx/SimpleDelay4.cpp"
#include "./04_DelayEchoFx/ModulatedDelay.cpp"
#include "./04_DelayEchoFx/PingPongEcho.cpp"
#include "./04_DelayEchoFx/EchoFeedBackAndFordward.cpp"
#include "./04_DelayEchoFx/EchoFeedBackAndFordward2.cpp"
#include "./04_DelayEchoFx/EchoStereo.cpp"

//5. Time-Based Effects
#include "./05_TimeBasedFx/ChorusEffect.cpp"
#include "./05_TimeBasedFx/VibratoEffect.cpp"
#include "./05_TimeBasedFx/VibratoEffectExample.cpp"
#include "./05_TimeBasedFx/BarberPoleFlangerEffect.cpp"
#include "./05_TimeBasedFx/BarberPoleFlangerEffect2.cpp"
#include "./05_TimeBasedFx/FlangerEffect.cpp"
#include "./05_TimeBasedFx/FeedbackFlangerEffect.cpp"

//6. Filters

//FIR Filters
#include "./06_Filters/FIR/FIR_LPF.cpp"
#include "./06_Filters/FIR/FIR_LPF2.cpp"

//IIR Filters
#include "./06_Filters/IIR/IIR_APF.cpp"
#include "./06_Filters/IIR/IIR_BPF.cpp"
#include "./06_Filters/IIR/IIR_FirstOrderAPF.cpp"
#include "./06_Filters/IIR/IIR_FirstOrderHPF.cpp"
#include "./06_Filters/IIR/IIR_FirstOrderLPF.cpp"
#include "./06_Filters/IIR/IIR_HPF.cpp"
#include "./06_Filters/IIR/IIR_LPF.cpp"
#include "./06_Filters/IIR/IIR_LSF.cpp"
#include "./06_Filters/IIR/IIR_Notch.cpp"
#include "./06_Filters/IIR/IIR_PeakFilter.cpp"

//Biquad Filters
// Biquad Type I
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_APF.cpp"
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_BPF.cpp"
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_BPF2.cpp"
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_HPF.cpp"
#include "./06_Filters/Biquad/BiquadTypeI/Biquad_HSF.cpp"

// Biquad Type II
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_APF.cpp"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_BPF.cpp"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_HPF.cpp"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_HSF.cpp"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_LPF.cpp"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_LSF.cpp"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_Notch.cpp"
#include "./06_Filters/Biquad/BiquadTypeII/Biquad_II_Peaking.cpp"

// Biquad TDFII
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_APF.cpp"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_BPF.cpp"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_HPF.cpp"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_HSF.cpp"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_LPF.cpp"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_LSF.cpp"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_Notch.cpp"
#include "./06_Filters/Biquad/BiquadTDFII/Biquad_TDFII_Peaking.cpp"

// Direct Form Filters
#include "./06_Filters/DirectForm/DirectFormII_APF.cpp"
#include "./06_Filters/DirectForm/DirectFormII_NestedAPF.cpp"

// 7. Waveform Generators
#include "./07_WaveformGenerators/DutyCicleWave.cpp"
#include "./07_WaveformGenerators/ImpulseTrain.cpp"
#include "./07_WaveformGenerators/SineWave.cpp"
#include "./07_WaveformGenerators/SineWave2.cpp"
#include "./07_WaveformGenerators/SawtoothWave.cpp"
#include "./07_WaveformGenerators/SawtoothWave2.cpp"
#include "./07_WaveformGenerators/SquareWave.cpp"
#include "./07_WaveformGenerators/SquareWave2.cpp"
#include "./07_WaveformGenerators/TriangleWave.cpp"
#include "./07_WaveformGenerators/TriangleWave2.cpp"
#include "./07_WaveformGenerators/WhiteNoise.cpp"

// 8. Spatial Effects
#include "./08_SpatialFx/Pan.cpp"
#include "./08_SpatialFx/Pan_linear.cpp"
#include "./08_SpatialFx/Pan_sineLaw.cpp"
#include "./08_SpatialFx/Pan_sineLaw_modified.cpp"
#include "./08_SpatialFx/Pan_sqrt.cpp"
#include "./08_SpatialFx/Pan_sqrt_modified.cpp"
#include "./08_SpatialFx/StereoImager.cpp"
#include "./08_SpatialFx/MidSide.cpp"

// 9. Pitch Effects
#include "./09_PitchFx/PitchDown.cpp"
#include "./09_PitchFx/PitchUp.cpp"
#include "./09_PitchFx/PitchShifter.cpp"

// 10. Miscellaneous
#include "10_Miscellaneous/WetDry.cpp"
#include "10_Miscellaneous/Input.cpp"