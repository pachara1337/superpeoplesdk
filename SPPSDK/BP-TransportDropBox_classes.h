// BlueprintGeneratedClass BP-TransportDropBox.BP-TransportDropBox_C
// Size: 0x2cff6a35 (Inherited: 0x2cff6ae8)
struct ABP-TransportDropBox_C : ABravoHotelTransportDropBoxActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	float OverWater_CV_OverWater_77012AB948B572A268E63583418444D0; // 0x4f0(0x04)
	enum class ETimelineDirection OverWater__Direction_77012AB948B572A268E63583418444D0; // 0x4f4(0x01)
	struct UTimelineComponent* OverWater; // 0x4f8(0x08)
	float HittingWater_CV_OverWater_7E5F9D2E4D0DDDC70F2F67AD035A6212; // 0x500(0x04)
	enum class ETimelineDirection HittingWater__Direction_7E5F9D2E4D0DDDC70F2F67AD035A6212; // 0x504(0x01)
	struct UTimelineComponent* HittingWater; // 0x508(0x08)
	float LandingTimer; // 0x510(0x04)
	struct TArray<struct FSpawnItemResult> ItemResult; // 0x518(0x10)
	float ParachuteTimer; // 0x528(0x04)
	float LandingDelay; // 0x52c(0x04)
	float ForceLandingDelaySeconds; // 0x530(0x04)
	bool bLandedOnGround; // 0x534(0x01)

	void OverWater__FinishedFunc(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OverWater__FinishedFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void OverWater__UpdateFunc(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OverWater__UpdateFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void HittingWater__FinishedFunc(); // Function BP-TransportDropBox.BP-TransportDropBox_C.HittingWater__FinishedFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void HittingWater__UpdateFunc(); // Function BP-TransportDropBox.BP-TransportDropBox_C.HittingWater__UpdateFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void NormalHitSound(); // Function BP-TransportDropBox.BP-TransportDropBox_C.NormalHitSound // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void WaterHitSound(); // Function BP-TransportDropBox.BP-TransportDropBox_C.WaterHitSound // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnActivated(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetLastPosition(struct FVector Location, struct FRotator Rotation); // Function BP-TransportDropBox.BP-TransportDropBox_C.SetLastPosition // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cutoff(); // Function BP-TransportDropBox.BP-TransportDropBox_C.Cutoff // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OpenDropBoxEvent(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OpenDropBoxEvent // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnOverWater(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OnOverWater // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnHittingWater(); // Function BP-TransportDropBox.BP-TransportDropBox_C.OnHittingWater // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GenerateItems(struct FName ItemKey); // Function BP-TransportDropBox.BP-TransportDropBox_C.GenerateItems // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemInBlueprint(struct FName& ItemKey); // Function BP-TransportDropBox.BP-TransportDropBox_C.SetItemInBlueprint // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void LandedOnWaterEvent(); // Function BP-TransportDropBox.BP-TransportDropBox_C.LandedOnWaterEvent // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP-TransportDropBox.BP-TransportDropBox_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-TransportDropBox(int32_t EntryPoint); // Function BP-TransportDropBox.BP-TransportDropBox_C.ExecuteUbergraph_BP-TransportDropBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

