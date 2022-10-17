// Class MagicLeapAR.LuminARSessionFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULuminARSessionFunctionLibrary : UBlueprintFunctionLibrary {

	void StartLuminARSession(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct ULuminARSessionConfig* Configuration); // Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a7a240
};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULuminARFrameFunctionLibrary : UBlueprintFunctionLibrary {

	bool LuminARLineTrace(struct UObject* WorldContextObject, struct FVector2D& ScreenPosition, struct TSet<enum class ELuminARLineTraceChannel> TraceChannels, struct TArray<struct FARTraceResult>& OutHitResults); // Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a79f10
	enum class ELuminARTrackingState GetTrackingState(); // Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a79ec0
};

// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULuminARImageTrackingFunctionLibrary : UBlueprintFunctionLibrary {

	struct ULuminARCandidateImage* AddLuminRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary); // Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a79bc0
};

// Class MagicLeapAR.LuminARSessionConfig
// Size: 0x2cff6a40 (Inherited: 0x2cff6ab0)
struct ULuminARSessionConfig : UARSessionConfig {
	struct FMagicLeapPlanesQuery PlanesQuery; // 0xb0(0x60)
	int32_t MaxPlaneQueryResults; // 0x110(0x04)
	int32_t MinPlaneArea; // 0x114(0x04)
	bool bArbitraryOrientationPlaneDetection; // 0x118(0x01)
	struct FVector PlaneSearchExtents; // 0x11c(0x0c)
	struct TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags; // 0x128(0x10)
	bool bDiscardZeroExtentPlanes; // 0x138(0x01)
	bool bDefaultUseUnreliablePose; // 0x139(0x01)
};

// Class MagicLeapAR.LuminARLightEstimate
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct ULuminARLightEstimate : UARBasicLightEstimate {
	struct TArray<float> AmbientIntensityNits; // 0x48(0x10)

	struct TArray<float> GetAmbientIntensityNits(); // Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a79de0
};

// Class MagicLeapAR.LuminARCandidateImage
// Size: 0x2cff6a68 (Inherited: 0x2cff6a60)
struct ULuminARCandidateImage : UARCandidateImage {
	bool bUseUnreliablePose; // 0x60(0x01)
	bool bImageIsStationary; // 0x61(0x01)
	char pad_2CFF6A62[0x6]; // 0x2cff6a62(0x06)

	bool GetUseUnreliablePose(); // Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a79ef0
	bool GetImageIsStationary(); // Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a79ea0
};

