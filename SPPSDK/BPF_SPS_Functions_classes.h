// BlueprintGeneratedClass BPF_SPS_Functions.BPF_SPS_Functions_C
// Size: 0x2cff6c30 (Inherited: 0x2cff6a30)
struct UBPF_SPS_Functions_C : UBlueprintFunctionLibrary {
	char pad_2CFF6A30[0x200]; // 0x2cff6a30(0x200)

	void ConvertLoopAnimationType(enum class E_SPS_IconLoopAnimation In Type, struct UObject* __WorldContext, enum class EPingIconLoopAnimationType& Out Type); // Function BPF_SPS_Functions.BPF_SPS_Functions_C.ConvertLoopAnimationType // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ConvertAnimationType(enum class E_SPS_IconTransitionAnimation In Type, struct UObject* __WorldContext, enum class EPingIconTransitionAnimationType& Out Type); // Function BPF_SPS_Functions.BPF_SPS_Functions_C.ConvertAnimationType // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetSineFrequency(float Seed, float Speed, struct UObject* __WorldContext, float& Float); // Function BPF_SPS_Functions.BPF_SPS_Functions_C.GetSineFrequency // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsWorldLocationOffScreen(struct APlayerController* Controller, struct FVector Location, float EdgePercent, struct UObject* __WorldContext, bool& IsOffscreen); // Function BPF_SPS_Functions.BPF_SPS_Functions_C.IsWorldLocationOffScreen // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalculateWorldLocationToEdgeScreenPosition(struct APlayerController* Controller, struct FVector WorldLocation, float EdgePercent, struct UObject* __WorldContext, bool& IsOffscreen, struct FVector2D& ScreenLocation, float& Rotation); // Function BPF_SPS_Functions.BPF_SPS_Functions_C.CalculateWorldLocationToEdgeScreenPosition // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

