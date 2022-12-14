// Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8 {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	EAudioSpectrumType_MAX = 2
};

// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8 {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4
};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8 {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	EFFTPeakInterpolationMethod_MAX = 3
};

// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8 {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Max = 5
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8 {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8 {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x2cff6c50 (Inherited: 0x00)
struct FSubmixEffectDynamicsProcessorSettings {
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x00(0x01)
	enum class ESubmixEffectDynamicsPeakMode PeakMode; // 0x01(0x01)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float InputGainDb; // 0x04(0x04)
	float ThresholdDb; // 0x08(0x04)
	float Ratio; // 0x0c(0x04)
	float KneeBandwidthDb; // 0x10(0x04)
	float LookAheadMsec; // 0x14(0x04)
	float AttackTimeMsec; // 0x18(0x04)
	float ReleaseTimeMsec; // 0x1c(0x04)
	struct USoundSubmix* ExternalSubmix; // 0x20(0x08)
	char bChannelLinked : 1; // 0x28(0x01)
	char bAnalogMode : 1; // 0x28(0x01)
	char bKeyAudition : 1; // 0x28(0x01)
	char pad_28_3 : 5; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float KeyGainDb; // 0x2c(0x04)
	float OutputGainDb; // 0x30(0x04)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34(0x0c)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40(0x0c)
	char pad_4C[0x2cff6c04]; // 0x4c(0x2cff6c04)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// Size: 0x2cff6d0c (Inherited: 0x00)
struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Cutoff; // 0x04(0x04)
	float GainDb; // 0x08(0x04)
	char pad_C[0x2cff6d00]; // 0x0c(0x2cff6d00)
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// Size: 0x2cffea10 (Inherited: 0x00)
struct FSubmixEffectSubmixEQSettings {
	struct TArray<struct FSubmixEffectEQBand> EQBands; // 0x00(0x10)
	char pad_10[0x2cffea00]; // 0x10(0x2cffea00)
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// Size: 0x2cffea10 (Inherited: 0x00)
struct FSubmixEffectEQBand {
	float Frequency; // 0x00(0x04)
	float Bandwidth; // 0x04(0x04)
	float GainDb; // 0x08(0x04)
	char bEnabled : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x2cffea03]; // 0x0d(0x2cffea03)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size: 0x2cffe934 (Inherited: 0x00)
struct FSubmixEffectReverbSettings {
	float Density; // 0x00(0x04)
	float Diffusion; // 0x04(0x04)
	float Gain; // 0x08(0x04)
	float GainHF; // 0x0c(0x04)
	float DecayTime; // 0x10(0x04)
	float DecayHFRatio; // 0x14(0x04)
	float ReflectionsGain; // 0x18(0x04)
	float ReflectionsDelay; // 0x1c(0x04)
	float LateGain; // 0x20(0x04)
	float LateDelay; // 0x24(0x04)
	float AirAbsorptionGainHF; // 0x28(0x04)
	float WetLevel; // 0x2c(0x04)
	float DryLevel; // 0x30(0x04)
	char pad_34[0x2cffe900]; // 0x34(0x2cffe900)
};

// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
// Size: 0x2cff6938 (Inherited: 0x00)
struct FSubmixEffectReverbFastSettings {
	bool bBypass; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Density; // 0x04(0x04)
	float Diffusion; // 0x08(0x04)
	float Gain; // 0x0c(0x04)
	float GainHF; // 0x10(0x04)
	float DecayTime; // 0x14(0x04)
	float DecayHFRatio; // 0x18(0x04)
	float ReflectionsGain; // 0x1c(0x04)
	float ReflectionsDelay; // 0x20(0x04)
	float LateGain; // 0x24(0x04)
	float LateDelay; // 0x28(0x04)
	float AirAbsorptionGainHF; // 0x2c(0x04)
	float WetLevel; // 0x30(0x04)
	float DryLevel; // 0x34(0x04)
	char pad_38[0x2cff6900]; // 0x38(0x2cff6900)
};

