// BlueprintGeneratedClass BP_AreaRectLight.BP_AreaRectLight_C
// Size: 0x2cff6ab1 (Inherited: 0x2cff6b08)
struct ABP_AreaRectLight_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UArrowComponent* Arrow; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	struct TArray<struct USpotLightComponent*> LightList; // 0x320(0x10)
	float Intensity; // 0x330(0x04)
	struct FLinearColor Color; // 0x334(0x10)
	float FocalAngleOuter; // 0x344(0x04)
	float FocalAngleInner; // 0x348(0x04)
	float AttenuationDistance; // 0x34c(0x04)
	float LightWidth; // 0x350(0x04)
	float LightLength; // 0x354(0x04)
	bool CastShadows; // 0x358(0x01)
	int32_t LightSamplesSquared; // 0x35c(0x04)
	float SourceRadiusMult; // 0x360(0x04)
	float CenterOfInterestLength; // 0x364(0x04)
	bool Enabled; // 0x368(0x01)
	struct FLightingChannels Channels; // 0x369(0x01)
	float SoftRadius; // 0x36c(0x04)
	float ShadowBias; // 0x370(0x04)
	float ShadowResolutionScale; // 0x374(0x04)
	struct TArray<int32_t> LightSet01; // 0x378(0x10)
	struct TArray<int32_t> LightSet02; // 0x388(0x10)
	struct TArray<int32_t> LightSet03; // 0x398(0x10)
	bool LightVisibility01; // 0x3a8(0x01)
	bool LightVisibility02; // 0x3a9(0x01)
	bool LightVisibility03; // 0x3aa(0x01)
	bool LightVisibility04; // 0x3ab(0x01)
	bool LightVisibility05; // 0x3ac(0x01)
	bool LightVisibility06; // 0x3ad(0x01)
	bool LightVisibility07; // 0x3ae(0x01)
	bool LightVisibility08; // 0x3af(0x01)
	bool LightVisibility09; // 0x3b0(0x01)

	void NewFunction(); // Function BP_AreaRectLight.BP_AreaRectLight_C.NewFunction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void LightArraySetup(); // Function BP_AreaRectLight.BP_AreaRectLight_C.LightArraySetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateLightValues(); // Function BP_AreaRectLight.BP_AreaRectLight_C.UpdateLightValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UserConstructionScript(); // Function BP_AreaRectLight.BP_AreaRectLight_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP_AreaRectLight.BP_AreaRectLight_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP_AreaRectLight(int32_t EntryPoint); // Function BP_AreaRectLight.BP_AreaRectLight_C.ExecuteUbergraph_BP_AreaRectLight // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

