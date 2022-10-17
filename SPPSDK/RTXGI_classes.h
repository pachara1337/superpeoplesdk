// Class RTXGI.DDGIBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDDGIBlueprintLibrary : UBlueprintFunctionLibrary {

	void EnableVolume(struct UDDGIVolumeComponent* DDGIVolumeComponent); // Function RTXGI.DDGIBlueprintLibrary.EnableVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1886d60
	void DisableVolume(struct UDDGIVolumeComponent* DDGIVolumeComponent); // Function RTXGI.DDGIBlueprintLibrary.DisableVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1886cf0
	void ClearProbeData(struct UDDGIVolumeComponent* DDGIVolumeComponent); // Function RTXGI.DDGIBlueprintLibrary.ClearProbeData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1886c60
};

// Class RTXGI.DDGIVolume
// Size: 0x2cff6b10 (Inherited: 0x2cff6b08)
struct ADDGIVolume : AActor {
	struct UDDGIVolumeComponent* DDGIVolumeComponent; // 0x308(0x08)
};

// Class RTXGI.DDGIVolumeComponent
// Size: 0x2cff6a70 (Inherited: 0x2cff6a40)
struct UDDGIVolumeComponent : USceneComponent {
	enum class EDDGIRaysPerProbe RaysPerProbe; // 0x240(0x01)
	struct FIntVector ProbeCounts; // 0x244(0x0c)
	int32_t LightingPriority; // 0x250(0x04)
	float UpdatePriority; // 0x254(0x04)
	float ProbeMaxRayDistance; // 0x258(0x04)
	float ProbeHysteresis; // 0x25c(0x04)
	float ViewBias; // 0x260(0x04)
	float NormalBias; // 0x264(0x04)
	struct FLightingChannels LightingChannels; // 0x268(0x01)
	float VolumeBlendDistance; // 0x26c(0x04)
	float VolumeBlendDistanceBlack; // 0x270(0x04)
	bool EnableProbeRelocation; // 0x274(0x01)
	bool EnableProbeScrolling; // 0x275(0x01)
	bool EnableViewDependentVolumeScrolling; // 0x276(0x01)
	float ViewDependentVolumeScrollingOffset; // 0x278(0x04)
	bool EnableVolume; // 0x27c(0x01)
	bool RuntimeStatic; // 0x27d(0x01)
	float probeDistanceExponent; // 0x280(0x04)
	float probeIrradianceEncodingGamma; // 0x284(0x04)
	float probeChangeThreshold; // 0x288(0x04)
	float probeBrightnessThreshold; // 0x28c(0x04)
	float ProbeMinFrontfaceDistance; // 0x290(0x04)
	float ProbeBackfaceThreshold; // 0x294(0x04)
	float LightMultiplier; // 0x298(0x04)
	float EmissiveMultiplier; // 0x29c(0x04)
	float IrradianceScalar; // 0x2a0(0x04)
	bool SkyLight; // 0x2a4(0x01)
	struct FVector LastOrigin; // 0x2a8(0x0c)
	struct FIntVector ProbeScrollOffset; // 0x2b4(0x0c)

	void DDGIClearVolumes(); // Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes // (Final|Exec|Native|Public) // @ game+0x1886cd0
};

// Class RTXGI.RTXGIPluginSettings
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct URTXGIPluginSettings : UDeveloperSettings {
	enum class EDDGIIrradianceBits IrradianceBits; // 0x48(0x01)
	enum class EDDGIDistanceBits DistanceBits; // 0x49(0x01)
	float DebugProbeRadius; // 0x4c(0x04)
	int32_t ProbeUpdateRayBudget; // 0x50(0x04)
	char pad_2CFF6A52[0x6]; // 0x2cff6a52(0x06)
};

