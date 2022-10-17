// Class AudioMixer.SynthComponent
// Size: 0x2cff6b10 (Inherited: 0x2cff6a40)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x238(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x238(0x01)
	char bAllowSpatialization : 1; // 0x238(0x01)
	char bOverrideAttenuation : 1; // 0x238(0x01)
	char bOutputToBusOnly : 1; // 0x23c(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x240(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x248(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x5e8(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x5f0(0x50)
	struct USoundClass* SoundClass; // 0x640(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x648(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x650(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x658(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x668(0x10)
	struct FSoundModulation Modulation; // 0x678(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x688(0x10)
	char bIsUISound : 1; // 0x698(0x01)
	char bIsPreviewSound : 1; // 0x698(0x01)
	int32_t EnvelopeFollowerAttackTime; // 0x69c(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x6a0(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x6a8(0x10)
	struct USynthSound* Synth; // 0x6d8(0x08)
	struct UAudioComponent* AudioComponent; // 0x6e0(0x08)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x3c651f0
	void Start(); // Function AudioMixer.SynthComponent.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x3c64f10
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x3c64e90
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend // (Final|Native|Public|BlueprintCallable) // @ game+0x3c64dc0
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c63ff0
};

// Class AudioMixer.AudioGenerator
// Size: 0x2cff6ab0 (Inherited: 0x2cff6930)
struct UAudioGenerator : UObject {
	char pad_2CFF6930[0x180]; // 0x2cff6930(0x180)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c654f0
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c652c0
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c65210
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c650f0
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c64f30
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c64780
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c646d0
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c645a0
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c644b0
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c643c0
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c642d0
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c64220
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c64140
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c640d0
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c64020
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3c63e60
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c63da0
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3c63c10
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c63b60
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c63af0
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c63a00
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c63900
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c63850
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x2cff6b10 (Inherited: 0x2cff6a48)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xc0(0x50)
	char pad_2CFF6A98[0x78]; // 0x2cff6a98(0x78)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c64930
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix // (Final|Native|Public|BlueprintCallable) // @ game+0x3c648b0
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x2cff6a90 (Inherited: 0x2cff6a48)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectSubmixEQSettings Settings; // 0x80(0x10)
	char pad_2CFF6A58[0x38]; // 0x2cff6a58(0x38)

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5b420
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a48)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectReverbSettings Settings; // 0xa4(0x34)
	char pad_2CFF6A7C[0x5c]; // 0x2cff6a7c(0x5c)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x3c64cc0
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c64b00
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a48)
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectReverbFastSettings Settings; // 0xa8(0x38)
	char pad_2CFF6A80[0x60]; // 0x2cff6a80(0x60)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x3c64bc0
	void SetSettings(struct FSubmixEffectReverbFastSettings& InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c64a40
};

// Class AudioMixer.SynthSound
// Size: 0x2cff6a80 (Inherited: 0x2cff6a60)
struct USynthSound : USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; // 0x360(0x08)
	char pad_2CFF6A68[0x18]; // 0x2cff6a68(0x18)
};

