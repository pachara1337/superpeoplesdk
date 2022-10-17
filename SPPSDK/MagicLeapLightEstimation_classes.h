// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// Size: 0x2cff6ac8 (Inherited: 0x2cff6cb8)
struct UMagicLeapLightingTrackingComponent : UActorComponent {
	bool UseGlobalAmbience; // 0xb8(0x01)
	bool UseColorTemp; // 0xb9(0x01)
};

// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMagicLeapLightEstimationFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsTrackerValid(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1aa2140
	bool GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1aa20b0
	bool GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1aa2000
	void DestroyTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1aa1fe0
	bool CreateTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1aa1fb0
};

