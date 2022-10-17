// BlueprintGeneratedClass BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C
// Size: 0x2cff6a68 (Inherited: 0x2cff6a48)
struct ABP-DefaultWaterVehicle_C : ABP-DefaultWheeledVehicle_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe48(0x08)
	struct FTimerHandle Handle_IsAnyHit; // 0xe50(0x08)
	bool IsAnyHit; // 0xe58(0x01)
	struct AActor* LastHitActor; // 0xe60(0x08)
	char pad_2CFF6A61[0x7]; // 0x2cff6a61(0x07)

	void CheckLastHitActor(); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckLastHitActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsLandscape(bool& IsLandscape); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.IsLandscape // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void CheckAnyHit(); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.CheckAnyHit // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetGate(); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ResetGate // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-DefaultWaterVehicle(int32_t EntryPoint); // Function BP-DefaultWaterVehicle.BP-DefaultWaterVehicle_C.ExecuteUbergraph_BP-DefaultWaterVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

