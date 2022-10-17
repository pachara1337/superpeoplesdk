// BlueprintGeneratedClass BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C
// Size: 0x2cff6a50 (Inherited: 0x2cff6a48)
struct ABP-DefaultAmphibianVehicle_C : ABP-DefaultWheeledVehicle_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe48(0x08)

	void ReceiveUnpossessed(struct AController* OldController); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.ReceiveUnpossessed // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void PlayCameraShake_ModeChange(); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.PlayCameraShake_ModeChange // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPlaySplashParticle(bool IsToWater); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.OnPlaySplashParticle // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedAmphibiousMode(bool bTrue); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.OnChangedAmphibiousMode // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-DefaultAmphibianVehicle(int32_t EntryPoint); // Function BP-DefaultAmphibianVehicle.BP-DefaultAmphibianVehicle_C.ExecuteUbergraph_BP-DefaultAmphibianVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

