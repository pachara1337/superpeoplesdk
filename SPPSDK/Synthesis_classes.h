// Class Synthesis.ModularSynthPresetBank
// Size: 0x2cff6940 (Inherited: 0x2cff6930)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x30(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x1b51670
};

// Class Synthesis.ModularSynthComponent
// Size: 0x2cff6ab0 (Inherited: 0x2cff6b10)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x710(0x04)

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b53c30
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53bb0
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53b30
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53ab0
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53a30
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1b539b0
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53920
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x1b538a0
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53820
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b537a0
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53720
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x1b536a0
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53620
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53560
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Final|Native|Public|BlueprintCallable) // @ game+0x1b534d0
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53400
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53330
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53260
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1b53190
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Final|Native|Public|BlueprintCallable) // @ game+0x1b530c0
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52ff0
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52f20
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52ea0
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52e20
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52da0
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52d10
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52c90
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52c10
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52b90
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52b00
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52a80
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Final|Native|Public|BlueprintCallable) // @ game+0x1b529c0
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52900
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52840
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52770
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Final|Native|Public|BlueprintCallable) // @ game+0x1b526a0
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1b525d0
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52500
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52480
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52400
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52380
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52300
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52280
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52200
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52180
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (Final|Native|Public|BlueprintCallable) // @ game+0x1b520f0
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x1b52060
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51fd0
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51f00
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51e70
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51df0
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51d70
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51cf0
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51c60
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51be0
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51b60
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51a50
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x1b51940
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b517f0
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x2cff6a80 (Inherited: 0x2cffe948)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	struct FSourceEffectBitCrusherSettings Settings; // 0x78(0x08)

	void SetSettings(struct FSourceEffectBitCrusherSettings& InSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b210
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x2cff6aa0 (Inherited: 0x2cffe948)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	struct FSourceEffectChorusSettings Settings; // 0x88(0x18)

	void SetSettings(struct FSourceEffectChorusSettings& InSettings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b2c0
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0x2cff6ac0 (Inherited: 0x2cffe948)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0x98(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b370
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0x2cff6ad8 (Inherited: 0x2cff6cb8)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb8(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0x2cff6a88 (Inherited: 0x2cffe948)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x7c(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x1b5ba50
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b4d0
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x1b5b190
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0x2cff6a90 (Inherited: 0x2cffe948)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	struct FSourceEffectEQSettings Settings; // 0x80(0x10)

	void SetSettings(struct FSourceEffectEQSettings& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b420
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0x2cff6a88 (Inherited: 0x2cffe948)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	struct FSourceEffectFilterSettings Settings; // 0x7c(0x0c)

	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b580
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0x2cff6a88 (Inherited: 0x2cffe948)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x7c(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b630
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0x2cff6a88 (Inherited: 0x2cffe948)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x7c(0x0c)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b6e0
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0x2cff6a80 (Inherited: 0x2cffe948)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	struct FSourceEffectPannerSettings Settings; // 0x78(0x08)

	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b790
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0x2cff6a90 (Inherited: 0x2cffe948)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	struct FSourceEffectPhaserSettings Settings; // 0x80(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b840
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0x2cff6a98 (Inherited: 0x2cffe948)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	struct FSourceEffectRingModulationSettings Settings; // 0x84(0x14)

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b900
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0x2cff6aa0 (Inherited: 0x2cffe948)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	struct FSourceEffectSimpleDelaySettings Settings; // 0x88(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b9a0
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0x2cff6a98 (Inherited: 0x2cffe948)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	struct FSourceEffectStereoDelaySettings Settings; // 0x84(0x14)

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b61440
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0x2cff6a80 (Inherited: 0x2cffe948)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	struct FSourceEffectWaveShaperSettings Settings; // 0x78(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b790
};

// Class Synthesis.AudioImpulseResponse
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x30(0x10)
	int32_t NumChannels; // 0x40(0x04)
	int32_t SampleRate; // 0x44(0x04)
	float NormalizationVolumeDb; // 0x48(0x04)
	struct TArray<float> IRData; // 0x50(0x10)
	char pad_2CFF695C[0x104]; // 0x2cff695c(0x104)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a48)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x48(0x20)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x68(0x08)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x70(0x01)
	bool bEnableHardwareAcceleration; // 0x71(0x01)
	char pad_2CFF6A72[0x4e]; // 0x2cff6a72(0x4e)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b614e0
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60f10
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0x2cff6a98 (Inherited: 0x2cff6a48)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectDelaySettings Settings; // 0x7c(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0x88(0x0c)
	char pad_2CFF6A60[0x38]; // 0x2cff6a60(0x38)

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b61580
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b61020
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60710
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x1b601c0
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0x2cff6a88 (Inherited: 0x2cff6a48)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectFilterSettings Settings; // 0x7c(0x0c)
	char pad_2CFF6A54[0x34]; // 0x2cff6a54(0x34)

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b61640
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60a10
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60990
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60910
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60890
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60810
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60790
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0x2cff6a90 (Inherited: 0x2cff6a48)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectFlexiverbSettings Settings; // 0x80(0x10)
	char pad_2CFF6A58[0x38]; // 0x2cff6a58(0x38)

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b616f0
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a48)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectTapDelaySettings Settings; // 0x88(0x18)
	char pad_2CFF6A60[0x58]; // 0x2cff6a60(0x58)

	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b61a70
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b617b0
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b610a0
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60610
	void GetTapIds(struct TArray<int32_t>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b60310
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b60230
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x1b601e0
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b60100
};

// Class Synthesis.Synth2DSlider
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a30)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x130(0x04)
	float ValueY; // 0x134(0x04)
	struct FDelegate ValueXDelegate; // 0x138(0x14)
	struct FDelegate ValueYDelegate; // 0x14c(0x14)
	struct FSynth2DSliderStyle WidgetStyle; // 0x160(0x2e0)
	struct FLinearColor SliderHandleColor; // 0x440(0x10)
	bool IndentHandle; // 0x450(0x01)
	bool Locked; // 0x451(0x01)
	float StepSize; // 0x454(0x04)
	bool IsFocusable; // 0x458(0x01)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x460(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x470(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x480(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x490(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x4b0(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1b61b50
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1b61970
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1b61870
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x1b61120
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60f90
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b603c0
};

// Class Synthesis.GranularSynth
// Size: 0x2cff6ad0 (Inherited: 0x2cff6b10)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x710(0x08)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x1b619f0
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x1b618f0
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1b613b0
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Final|Native|Public|BlueprintCallable) // @ game+0x1b61330
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b61230
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x1b611b0
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1b60dd0
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60e90
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60d50
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1b60c90
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1b60bd0
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60b50
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1b60a90
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60690
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60690
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60500
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x1b60430
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b60400
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b60200
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b60190
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x2cff6a78 (Inherited: 0x2cff6930)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x30(0x10)
	char bLockKeyframesToGridBool : 1; // 0x40(0x01)
	int32_t LockKeyframesToGrid; // 0x44(0x04)
	int32_t WaveTableResolution; // 0x48(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x50(0x10)
	char bNormalizeWaveTables : 1; // 0x60(0x01)
	char pad_2CFF6958_2 : 6; // 0x2cff6958(0x01)
	char pad_2CFF6959[0x11f]; // 0x2cff6959(0x11f)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0x2cff6a50 (Inherited: 0x2cff6b10)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x710(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x720(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x730(0x08)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (Final|Native|Public|BlueprintCallable) // @ game+0x1b651c0
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Final|Native|Public|BlueprintCallable) // @ game+0x1b650b0
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64a00
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64980
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64900
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64e20
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64da0
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64d10
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64c90
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64c10
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64b80
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64b00
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64a80
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Final|Native|Public|BlueprintCallable) // @ game+0x1b647c0
	void SetLowPassFilterFrequency(float InNewFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64740
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64630
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x1b645b0
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64530
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64430
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b643b0
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b644b0
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64320
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b642a0
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64210
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64190
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64110
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64010
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63f40
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63e80
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63e00
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63d80
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63cf0
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63c70
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63bf0
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63b60
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63ae0
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63a60
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (Final|Native|Public|BlueprintCallable) // @ game+0x1b638d0
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (Final|Native|Public|BlueprintCallable) // @ game+0x1b638b0
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x1b637f0
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63770
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x1b636b0
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b63670
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b63590
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63500
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x2cff6a40 (Inherited: 0x2cff6b10)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x710(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x718(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x728(0x10)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64fb0
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64f30
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64ea0
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0x1b64840
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1b63950
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b63740
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b636e0
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b634d0
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b634a0
};

// Class Synthesis.SynthKnob
// Size: 0x2cff6a50 (Inherited: 0x2cff6a30)
struct USynthKnob : UWidget {
	float Value; // 0x130(0x04)
	float StepSize; // 0x134(0x04)
	float MouseSpeed; // 0x138(0x04)
	float MouseFineTuneSpeed; // 0x13c(0x04)
	char ShowTooltipInfo : 1; // 0x140(0x01)
	struct FText ParameterName; // 0x148(0x18)
	struct FText ParameterUnits; // 0x160(0x18)
	struct FDelegate ValueDelegate; // 0x178(0x14)
	struct FSynthKnobStyle WidgetStyle; // 0x190(0x258)
	bool Locked; // 0x3e8(0x01)
	bool IsFocusable; // 0x3e9(0x01)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x400(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x410(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x420(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x430(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1b65140
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1b65030
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x1b646b0
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b63710
};

