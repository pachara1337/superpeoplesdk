// BlueprintGeneratedClass BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C
// Size: 0x2cff6a54 (Inherited: 0x2cff6ac0)
struct ABP-BravoHotel-PlayerController_C : ABravoHotelPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x18c0(0x08)
	struct UBP-HUDInteractionComponent_C* BP-HUDInteractionComponent; // 0x18c8(0x08)
	struct USmartPingSystem_C* SmartPingSystemComponent; // 0x18d0(0x08)
	struct FVector MapSize; // 0x18d8(0x0c)
	struct ABravoHotelBlueZone* BlueZone; // 0x18e8(0x08)
	struct TArray<struct FText> PhoneticAlphabetTable_NATO; // 0x18f0(0x10)
	bool bLineTrace; // 0x1900(0x01)
	struct UUW-BlackMarket_C* UI-BlackMarket; // 0x1908(0x08)
	struct FVector2D LocalScreenPosition; // 0x1910(0x08)
	struct FVector2D MaxViewportSize; // 0x1918(0x08)
	struct UBP-SavedPlayerInventory_C* SavedInventory; // 0x1920(0x08)
	struct TArray<struct FString> DefaultItemList; // 0x1928(0x10)
	struct FString SavedInventorySlotName; // 0x1938(0x10)
	bool bLoadInventoryData; // 0x1948(0x01)
	float MinBrightness; // 0x194c(0x04)
	float MaxBrightness; // 0x1950(0x04)
	float Contrast; // 0x1954(0x04)
	bool bUsePostProcessVolumeOption; // 0x1958(0x01)
	float FilmToeIntensity; // 0x195c(0x04)
	float ColorGradingGlobalGamma; // 0x1960(0x04)
	struct FTimerHandle Timer; // 0x1968(0x08)
	struct FTimerHandle DoubleclickTimer; // 0x1970(0x08)
	float CheckTime; // 0x1978(0x04)
	float DoubleClickTime; // 0x197c(0x04)
	bool CheckDoubleClick; // 0x1980(0x01)
	struct FVector TempLocation; // 0x1984(0x0c)
	struct TArray<struct UUW_UserNameTooltip_C*> NameWidgets; // 0x1990(0x10)
	int32_t CurrentNameWidgetCount; // 0x19a0(0x04)
	bool bNameTooltipMode; // 0x19a4(0x01)
	int32_t SmartPingTypeIndex; // 0x19a8(0x04)
	bool EableSmartPing; // 0x19ac(0x01)
	bool PingLock; // 0x19ad(0x01)
	struct UUserWidget* OperationMessageWidget; // 0x19b0(0x08)
	struct UWBP_SPS_UseItemSelectionMenu_C* SelectionMenu; // 0x19b8(0x08)
	bool IsVisibleSelectionMenu; // 0x19c0(0x01)
	struct TMap<int32_t, struct FName> BoostItemList; // 0x19c8(0x50)
	bool IgnoreMenu; // 0x1a18(0x01)
	struct UWBP_SPS_ThrowWeaponItemSelectionMenu_C* SelectionMenu_ThrowWeapon; // 0x1a20(0x08)
	struct FKey SelectKey; // 0x1a28(0x20)
	struct FName ShowMouseSourceKey; // 0x1a48(0x0c)

	bool HasPerkDeckWidget(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.HasPerkDeckWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UHUDInteractionComponent* GetHUDInteractionComponent(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetHUDInteractionComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	bool IsShowingSystemPopup(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsShowingSystemPopup // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSmartpingInfo(struct FVector ServerLocation, bool IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetSmartpingInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MakeSmartpingInfo(struct FVector ServerLocation, bool IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.MakeSmartpingInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalcZLocation(struct FVector WorldLocation, float& ZLocation); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CalcZLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMakeSmartpingInfo(int32_t PingTypeIndex, struct FVector ServerLocation, bool IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OnMakeSmartpingInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowPerkDeckPopup(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ShowPerkDeckPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsSpectating(bool& IsSpectating); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsSpectating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct UBravoHotelSmartPingSystem* GetSmartPingSystem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetSmartPingSystem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsMatchEnd(bool& State); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsMatchEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsOpenSystemPopup(bool& bResult); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsOpenSystemPopup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetSpectatorTargetRank(bool& Result, int32_t& Rank); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetSpectatorTargetRank // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool IsGlobalPostProcessVolume(struct UObject* Other); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.IsGlobalPostProcessVolume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SaveInventoryData(bool bSaveAppearlance); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SaveInventoryData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckSavedInventoryData(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckSavedInventoryData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDefaultItem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetDefaultItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RunInventoryDataCommand(struct FBP-SavedInventoryItemStructure SavedInventoryData); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.RunInventoryDataCommand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddInBackpackItem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddInBackpackItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddWeaponItem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddWeaponItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddWearableItem(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.AddWearableItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPlayerSpectatorHUD(struct ABravoHotelPlayerHUD*& RefSpectatorHUD); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerSpectatorHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CalcReverseSideScreenPosition(struct FVector WorldLocation, float& OutScreenPositionAngle); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CalcReverseSideScreenPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CorrectionScreenPositionByTeamPositionWidget(struct FVector2D& ScreenPosition, bool& RetOutScreenPosition); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CorrectionScreenPositionByTeamPositionWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetCurrentViewportMaxSizeByTeamPositionWidget(struct FVector2D& ViewportMaxSize); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetCurrentViewportMaxSizeByTeamPositionWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPlayerMainWidget(bool bWantsToCreateIfNull, struct UBravoHotelMainWidget*& Widget); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerMainWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetInventoryWidget(bool bWantsToCreateIfNull, struct UUserWidget*& Widget); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetInventoryWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetPlayerHUD(bool& IsAlive, struct ABravoHotelPlayerHUD*& PlayerHUD); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPlayerHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetPawnPosition(struct FVector& out_Position, struct FVector& out_MapSize); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.GetPawnPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent(struct FKey Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_Ctrl_B_K2Node_InputKeyEvent(struct FKey Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_Ctrl_B_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_AcceptUI_K2Node_InputActionEvent(struct FKey Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_AcceptUI_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_MiniMap_K2Node_InputActionEvent(struct FKey Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_MiniMap_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_CloseUI_K2Node_InputActionEvent(struct FKey Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_CloseUI_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_OptionMenu_K2Node_InputActionEvent(struct FKey Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_OptionMenu_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent(struct FKey Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_ToggleGuideWidget_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent(struct FKey Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_ToggleInGameHUD_K2Node_InputActionEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_J_K2Node_InputKeyEvent(struct FKey Key); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InpActEvt_J_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void OpenMarket(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenMarket // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤ (); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C. »¤ìŠ¤  // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CloseBlackMarket(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CloseBlackMarket // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OpenBlackMarket(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenBlackMarket // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Cheat Event(struct FString CheatCommand); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.Cheat Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SmartPingConfirmHoldUI_BP(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingConfirmHoldUI_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SmartPingCancelHoldUI_BP(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingCancelHoldUI_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SmartPingReleased_BP(bool bIgnoreMenu); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingReleased_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SmartPingPressed_BP(bool bIgnoreMenu); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingPressed_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SmartPingFastAgree(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingFastAgree // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SmartPingHotKey_BP(int32_t Index); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SmartPingHotKey_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClientSetSmartpingInfo(struct FVector ServerLocation, bool IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ClientSetSmartpingInfo // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ServerMakeSmartpingInfo(struct FVector ServerLocation, bool IsAgree); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ServerMakeSmartpingInfo // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputInventory(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OnInputInventory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EnterSceneOfWin(bool bWin); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.EnterSceneOfWin // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void LoadInventoryData(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.LoadInventoryData // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ServerEnterSceneOfWin(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ServerEnterSceneOfWin // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClientEnterSceneOfWin(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ClientEnterSceneOfWin // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OpenPerkDeckPopup(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.OpenPerkDeckPopup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SaveInventoryData(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.K2_SaveInventoryData // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyOperationMessage(struct FText& NotifyText); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.NotifyOperationMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InsertMarker(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.InsertMarker // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(struct FName ItemKey); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetUseItemSelectMenu(bool bIsShow); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetUseItemSelectMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBoostItemSelectMenu(bool bIsShow); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetBoostItemSelectMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(struct FName ItemKey); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetThrowWeaponMenu(bool bIsShow); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetThrowWeaponMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(struct FName ItemKey); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCloseSelectMenu(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.SetCloseSelectMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckNameTooltip(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CheckNameTooltip // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void RemoveallCharacterToolTip(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.RemoveallCharacterToolTip // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateCharacterToolTip(); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.CreateCharacterToolTip // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-BravoHotel-PlayerController(int32_t EntryPoint); // Function BP-BravoHotel-PlayerController.BP-BravoHotel-PlayerController_C.ExecuteUbergraph_BP-BravoHotel-PlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

