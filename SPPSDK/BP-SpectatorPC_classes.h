// BlueprintGeneratedClass BP-SpectatorPC.BP-SpectatorPC_C
// Size: 0x2cff6af9 (Inherited: 0x2cff6ad0)
struct ABP-SpectatorPC_C : ABravoHotelSpectatorController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x18d0(0x08)
	struct ABP-SpectatorPawn_C* Observer; // 0x18d8(0x08)
	bool PlayingKillCam; // 0x18e0(0x01)
	struct UBP-SpectatorWidget_C* AfterGameHUD; // 0x18e8(0x08)
	struct UBravoHotelGameInstance* GameInstanceRef; // 0x18f0(0x08)
	bool bKillCamFinish; // 0x18f8(0x01)
	char pad_2CFF6AF2[0x7]; // 0x2cff6af2(0x07)

	void SetObserver(); // Function BP-SpectatorPC.BP-SpectatorPC_C.SetObserver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-SpectatorPC.BP-SpectatorPC_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void NextObservingTarget(); // Function BP-SpectatorPC.BP-SpectatorPC_C.NextObservingTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreObservingTarget(); // Function BP-SpectatorPC.BP-SpectatorPC_C.PreObservingTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetKillCamStartTime(); // Function BP-SpectatorPC.BP-SpectatorPC_C.SetKillCamStartTime // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnKillcamFinish(); // Function BP-SpectatorPC.BP-SpectatorPC_C.OnKillcamFinish // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-SpectatorPC(int32_t EntryPoint); // Function BP-SpectatorPC.BP-SpectatorPC_C.ExecuteUbergraph_BP-SpectatorPC // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

