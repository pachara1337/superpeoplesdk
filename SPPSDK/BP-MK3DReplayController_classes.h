// BlueprintGeneratedClass BP-MK3DReplayController.BP-MK3DReplayController_C
// Size: 0x2cff6a60 (Inherited: 0x2cff6a40)
struct ABP-MK3DReplayController_C : ABravoHotelMK3DReplayController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd40(0x08)
	struct UBP-HUDInteractionComponent_C* BP-HUDInteractionComponent; // 0xd48(0x08)
	int32_t OpenedWidgetNum; // 0xd50(0x04)
	enum class EReplayViewMode ViewMode; // 0xd54(0x01)
	struct UUserWidget* OperationMessageWidget; // 0xd58(0x08)
	char pad_2CFF6A5D[0x3]; // 0x2cff6a5d(0x03)

	struct UHUDInteractionComponent* GetHUDInteractionComponent(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.GetHUDInteractionComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CheckItemListHide(enum class ECameraType CameraType); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.CheckItemListHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetReplaySpectatorPawn(struct ABP-MK3DSpectatorPawn_C*& ReplaySpectatorPawn); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.GetReplaySpectatorPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void InitWorldMapOption(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.InitWorldMapOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMaxViewportSize(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.SetMaxViewportSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeViewMode(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnChangeViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeCameraType(enum class ECameraType CameraType); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnChangeCameraType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisibilityPerkDeck(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.SetVisibilityPerkDeck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeInputMode(bool ShowMouse); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeInputMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckInputMode(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.CheckInputMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_CloseUI_K2Node_InputActionEvent(struct FKey Key); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_CloseUI_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_MiniMap_K2Node_InputActionEvent(struct FKey Key); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_MiniMap_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent(struct FKey Key); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void OnInputWorldMap(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputWorldMap // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputReplayTimelineWidget(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputReplayTimelineWidget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputItemListWidget(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputItemListWidget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputPlayerListWidget(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputPlayerListWidget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeCameraTypeDelegate_Event(enum class ECameraType CameraType, struct FString TargetPlayerName); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeCameraTypeDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeViewModeDelegate_Event(enum class EReplayViewMode ViewMode); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ChangeViewModeDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnViewportSizedBP(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnViewportSizedBP // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputItemList(); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.OnInputItemList // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyOperationMessage(struct FText& NotifyText); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.NotifyOperationMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-MK3DReplayController(int32_t EntryPoint); // Function BP-MK3DReplayController.BP-MK3DReplayController_C.ExecuteUbergraph_BP-MK3DReplayController // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

