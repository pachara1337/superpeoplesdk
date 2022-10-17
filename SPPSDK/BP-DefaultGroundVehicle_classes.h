// BlueprintGeneratedClass BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C
// Size: 0x2cff6a68 (Inherited: 0x2cff6a48)
struct ABP-DefaultGroundVehicle_C : ABP-DefaultWheeledVehicle_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe48(0x08)
	struct UParticleSystemComponent* SplashParticleComp; // 0xe50(0x08)
	struct UParticleSystemComponent* PlaneParticleComp; // 0xe58(0x08)
	struct FTimerHandle TimerHandle_RemoveAllWaterParticle; // 0xe60(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnPlaySplashParticle(bool IsToWater); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.OnPlaySplashParticle // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void RemoveAllWaterParticle(); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.RemoveAllWaterParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AdjustWaterParticle(); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.AdjustWaterParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-DefaultGroundVehicle(int32_t EntryPoint); // Function BP-DefaultGroundVehicle.BP-DefaultGroundVehicle_C.ExecuteUbergraph_BP-DefaultGroundVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

