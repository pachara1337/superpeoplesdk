// BlueprintGeneratedClass BP-SpectatorPawn.BP-SpectatorPawn_C
// Size: 0x2cff6ae1 (Inherited: 0x2cff6ac8)
struct ABP-SpectatorPawn_C : ABravoHotelSpectatorPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UCameraComponent* Camera; // 0x3d0(0x08)
	struct USpringArmComponent* SpringArm; // 0x3d8(0x08)
	bool bKillCam; // 0x3e0(0x01)

	void TargetSetting(); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.TargetSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetTargetByUID(int32_t UID, struct APawn*& TargetPawn); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.GetTargetByUID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void KillCamTarget(); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.KillCamTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSetTarget(); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.OnSetTarget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-SpectatorPawn(int32_t EntryPoint); // Function BP-SpectatorPawn.BP-SpectatorPawn_C.ExecuteUbergraph_BP-SpectatorPawn // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

