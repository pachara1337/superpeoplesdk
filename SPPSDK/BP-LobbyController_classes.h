// BlueprintGeneratedClass BP-LobbyController.BP-LobbyController_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6ab0)
struct ABP-LobbyController_C : ABravoHotelLobbyPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7b0(0x08)
	struct UBP-HUDInteractionComponentBase_C* BP-HUDInteractionComponentBase; // 0x7b8(0x08)
	struct FMulticastInlineDelegate EventDispatcher_PlayLobbySound; // 0x7c0(0x10)
	struct FMulticastInlineDelegate EventDispatcher_StopLobbySound; // 0x7d0(0x10)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x7e0(0x08)
	struct UUserWidget* OperationMessageWidget; // 0x7e8(0x08)
	enum class ESceneType CurrentSceneType; // 0x7f0(0x01)
	struct UBP-LobbyWidget_Web_C* LobbyWidgetRef; // 0x7f8(0x08)
	char pad_2CFF6AF9[0x7]; // 0x2cff6af9(0x07)

	void CanInput(bool& bCheck); // Function BP-LobbyController.BP-LobbyController_C.CanInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckCohLoad(bool& bCheck); // Function BP-LobbyController.BP-LobbyController_C.CheckCohLoad // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckWantPopupEvent(bool& bCheck); // Function BP-LobbyController.BP-LobbyController_C.CheckWantPopupEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct UHUDInteractionComponent* GetHUDInteractionComponent(); // Function BP-LobbyController.BP-LobbyController_C.GetHUDInteractionComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void UpdateMouseWheel(float Delta); // Function BP-LobbyController.BP-LobbyController_C.UpdateMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseY(float Delta); // Function BP-LobbyController.BP-LobbyController_C.UpdateMouseY // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseX(float Delta); // Function BP-LobbyController.BP-LobbyController_C.UpdateMouseX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateDefaultSkin(); // Function BP-LobbyController.BP-LobbyController_C.CreateDefaultSkin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetLobbyMainWidget(struct UBP-LobbyWidget_Web_C*& Widget); // Function BP-LobbyController.BP-LobbyController_C.GetLobbyMainWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void InpActEvt_CloseUI_K2Node_InputActionEvent(struct FKey Key); // Function BP-LobbyController.BP-LobbyController_C.InpActEvt_CloseUI_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_LobbyMoveTab_K2Node_InputActionEvent(struct FKey Key); // Function BP-LobbyController.BP-LobbyController_C.InpActEvt_LobbyMoveTab_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpAxisEvt_Turn_K2Node_InputAxisEvent(float AxisValue); // Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_Turn_K2Node_InputAxisEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent(float AxisValue); // Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent(float AxisValue); // Function BP-LobbyController.BP-LobbyController_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void PlayTutorial(); // Function BP-LobbyController.BP-LobbyController_C.PlayTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-LobbyController.BP-LobbyController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyOperationMessage(struct FText& NotifyText); // Function BP-LobbyController.BP-LobbyController_C.NotifyOperationMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangedSceneDelegate_Event(enum class ESceneType SceneType); // Function BP-LobbyController.BP-LobbyController_C.ChangedSceneDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputPopupEvent(); // Function BP-LobbyController.BP-LobbyController_C.OnInputPopupEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateOptionPopup(); // Function BP-LobbyController.BP-LobbyController_C.CreateOptionPopup // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-LobbyController(int32_t EntryPoint); // Function BP-LobbyController.BP-LobbyController_C.ExecuteUbergraph_BP-LobbyController // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_StopLobbySound__DelegateSignature(); // Function BP-LobbyController.BP-LobbyController_C.EventDispatcher_StopLobbySound__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_PlayLobbySound__DelegateSignature(); // Function BP-LobbyController.BP-LobbyController_C.EventDispatcher_PlayLobbySound__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

