// BlueprintGeneratedClass BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C
// Size: 0x2cff6a49 (Inherited: 0x2cff6af8)
struct UBP-HUDInteractionComponentBase_C : UHUDInteractionComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf8(0x08)
	struct APlayerController* PlayerController; // 0x100(0x08)
	bool bAlreadySetOptionWidget; // 0x108(0x01)
	float defaultContrast; // 0x10c(0x04)
	float defaultMaxBrightness; // 0x110(0x04)
	float defaultMinBrightness; // 0x114(0x04)
	float MinBrightness; // 0x118(0x04)
	float MaxBrightness; // 0x11c(0x04)
	float Contrast; // 0x120(0x04)
	bool bUsePostProcessVolumeOption; // 0x124(0x01)
	float ColorGradingGlobalGamma; // 0x128(0x04)
	float FilmToeIntensity; // 0x12c(0x04)
	bool IsInWidget; // 0x130(0x01)
	bool bInputModeUI; // 0x131(0x01)
	struct TArray<struct FName> InputActionsToBlock; // 0x138(0x10)
	bool IsRetrySetMousePosition; // 0x148(0x01)

	void SetInputMode(struct UUserWidget* Widget, bool bUIMode); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetInputMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckAnyAction(bool& AnyAction); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckAnyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckAnyCloseUI(bool& AnyClosed); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckAnyCloseUI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void InputCloseUI(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputCloseUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Callback(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.Callback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMousePositionToCenter(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetMousePositionToCenter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckInputState(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.CheckInputState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetActionBlocked(bool WantsToBlock, struct TArray<struct FName>& ActionNames, struct UUserWidget* Widget); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetActionBlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool IsGlobalPostProcessVolume(struct UObject* Other); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.IsGlobalPostProcessVolume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetPostProcessVolumeDefaultOption(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.SetPostProcessVolumeDefaultOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitOptionWidget(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InitOptionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsSpectating(bool& IsSpectating); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.IsSpectating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetPlayerHUD(bool& IsAlive, struct ABravoHotelPlayerHUD*& PlayerHUD); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.GetPlayerHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void InputOptionMenu(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputOptionMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void InputModeGame(struct UUserWidget* Widget); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputModeGame // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InputModeUI(struct UUserWidget* Widget); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputModeUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InputToggleIngameHUD(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.InputToggleIngameHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-HUDInteractionComponentBase(int32_t EntryPoint); // Function BP-HUDInteractionComponentBase.BP-HUDInteractionComponentBase_C.ExecuteUbergraph_BP-HUDInteractionComponentBase // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

