// BlueprintGeneratedClass BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C
// Size: 0x2cff6ad9 (Inherited: 0x2cff6ab8)
struct ABP-MK3DSpectatorPawn_C : ABravoHotelMK3DSpectatorPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UCameraComponent* FreeCam; // 0x3c0(0x08)
	struct USpringArmComponent* SpringArm; // 0x3c8(0x08)
	struct UBravoHotelReplayMainWidget* ReplayMainWidget; // 0x3d0(0x08)
	enum class EReplayViewMode ViewMode; // 0x3d8(0x01)

	void GetReplayWidget(struct UBravoHotelReplayMainWidget*& ReplayMainWidget); // Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.GetReplayWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedCurrentSpeedLevel(); // Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.OnChangedCurrentSpeedLevel // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-MK3DSpectatorPawn(int32_t EntryPoint); // Function BP-MK3DSpectatorPawn.BP-MK3DSpectatorPawn_C.ExecuteUbergraph_BP-MK3DSpectatorPawn // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

