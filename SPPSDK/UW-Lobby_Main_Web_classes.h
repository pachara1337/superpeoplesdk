// WidgetBlueprintGeneratedClass UW-Lobby_Main_Web.UW-Lobby_Main_Web_C
// Size: 0x2cff6a48 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Main_Web_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* CopyAni; // 0x290(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x298(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x2a0(0x08)
	struct UBackgroundBlur* Blur; // 0x2a8(0x08)
	struct UButton* Button; // 0x2b0(0x08)
	struct UButton* Button; // 0x2b8(0x08)
	struct UButton* Button; // 0x2c0(0x08)
	struct UButton* Button; // 0x2c8(0x08)
	struct UButton* Button; // 0x2d0(0x08)
	struct UButton* Button; // 0x2d8(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2e0(0x08)
	struct UCheckBox* CheckBox; // 0x2e8(0x08)
	struct UCheckBox* CheckBox; // 0x2f0(0x08)
	struct UBackgroundBlur* ChildTabPageBlur; // 0x2f8(0x08)
	struct UEditableText* Count; // 0x300(0x08)
	struct UEditableText* Count; // 0x308(0x08)
	struct UEditableText* Count; // 0x310(0x08)
	struct UEditableText* CurPoint; // 0x318(0x08)
	struct UEditableText* CurRank; // 0x320(0x08)
	struct UImage* Focus; // 0x328(0x08)
	struct UCanvasPanel* FocusPanel; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UEditableText* League; // 0x348(0x08)
	struct UCoherentUIGTWidget* Lobby; // 0x350(0x08)
	struct UBackgroundBlur* MainTabPageBlur; // 0x358(0x08)
	struct UMultiLineEditableText* MultiLineEditableText; // 0x360(0x08)
	struct UMultiLineEditableText* MultiLineEditableText; // 0x368(0x08)
	struct UEditableText* PassPoint; // 0x370(0x08)
	struct UEditableText* PassRank; // 0x378(0x08)
	struct UEditableText* Reward; // 0x380(0x08)
	struct UEditableText* StartTime; // 0x388(0x08)
	struct UTextBlock* TextBlock; // 0x390(0x08)
	struct UCanvasPanel* tournament; // 0x398(0x08)
	struct UCanvasPanel* TournamentInfo; // 0x3a0(0x08)
	struct UUW-ArmoryWidget_C* UW-ArmoryWidget; // 0x3a8(0x08)
	struct UUW-CustomizedCharacter_C* UW-CustomizedCharacter; // 0x3b0(0x08)
	struct UUW-Exit_Popup_C* UW-Exit_Popup; // 0x3b8(0x08)
	struct UUW-Lobby_ArmoryMain_C* UW-Lobby_ArmoryMain; // 0x3c0(0x08)
	struct UUW-ReplayListWidget02_C* UW-ReplayListWidget02; // 0x3c8(0x08)
	struct UUW-TournamentMatchEnd02Widget_C* UW-TournamentMatchEnd02Widget; // 0x3d0(0x08)
	struct UUW-Volume_C* UW-Volume; // 0x3d8(0x08)
	struct UEditableText* WinnerReward; // 0x3e0(0x08)
	struct FSlateColor NormalTextColor; // 0x3e8(0x28)
	struct FSlateColor HoverTextColor; // 0x410(0x28)
	struct UBP-LobbyWidget_Web_C* LobbyWidgetRef; // 0x438(0x08)
	struct FSlateColor NormalSelectedTextColor; // 0x440(0x28)
	struct FSlateColor HoverSelectedTextColor; // 0x468(0x28)
	struct FLinearColor NormalOptionButtonColor; // 0x490(0x10)
	struct FLinearColor HoverOptionButtonColor; // 0x4a0(0x10)
	struct FTimerHandle MatchingPopupTimerHandle; // 0x4b0(0x08)
	struct FKey PopupKey; // 0x4b8(0x20)
	bool bExitPopupOpen; // 0x4d8(0x01)
	bool bOptionPopupOpen; // 0x4d9(0x01)
	char BattleMode; // 0x4da(0x01)
	struct UDataTable* LobbyCoherentSprite; // 0x4e0(0x08)
	struct USettingMainWidget_C* SettingWidget; // 0x4e8(0x08)
	struct UAkComponent* LobbySound; // 0x4f0(0x08)
	struct FString MainTabName; // 0x4f8(0x10)
	struct UUW-Inventory_ItemSlotHover_C* UW-Inventory_ItemSlotHover; // 0x508(0x08)
	struct UDataTable* LobbyCoherent2DTexture; // 0x510(0x08)
	bool FirstLoadReplayList; // 0x518(0x01)
	struct FString SubTabName; // 0x520(0x10)
	int32_t MainPageBlurHeight; // 0x530(0x04)
	int32_t ChildPageBlurHeight; // 0x534(0x04)
	struct FTimerHandle MainPageBlurTimer; // 0x538(0x08)
	struct FTimerHandle ChildPageBlurTimer; // 0x540(0x08)

	void SetVisibilityTabPageBlurEffect(bool bIsVisible); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetVisibilityTabPageBlurEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Tab Page Blur Effect(int32_t MainPageHeight, int32_t ChildPageHeight); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Update Tab Page Blur Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EndCraft(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.EndCraft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartCraft(struct FResponse_CraftWeapon_Data& CraftWeapon); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.StartCraft // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetHoverWidget(struct UUW-Inventory_ItemSlotHover_C*& UW-Inventory_ItemSlotHover); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.GetHoverWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CreateHoverWidget(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CreateHoverWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedArmoryTab(struct FString TabName); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnChangedArmoryTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void On Changed Main Tab(struct FString MainTabName_, struct FString SubTabName_); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.On Changed Main Tab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseWheel(float Delta); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseY(float Delta); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseY // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseX(float Delta); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMouseX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MatchFailedSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.MatchFailedSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MatchStartSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.MatchStartSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowReplayList(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowReplayList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetArmoryInputBox(bool Visible); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetArmoryInputBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideSelectGameMode(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideSelectGameMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowSelectGameMode(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowSelectGameMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideBlur(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowBlur(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowBlur // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideUI(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowArmoryUI(struct FString ArmoryResultName); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowArmoryUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckKeyUp(struct FKey Input, bool& bResult); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CheckKeyUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckKeyDown(struct FKey Input, bool& bResult); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CheckKeyDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ProcessInput(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ProcessInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClickExit(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ClickExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClickOption(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ClickOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartGame(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.StartGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetMatchingPopup(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ResetMatchingPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetStartButton(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ResetStartButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMatchingStart(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowMatchingStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideMatchingResult(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.HideMatchingResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMatchingResult(int32_t ErrorCode, struct FString ExtraDescription); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ShowMatchingResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetLobbyWidget(struct UBP-LobbyWidget_Web_C* LobbyWidget); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetLobbyWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UIButtonClickSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UIButtonClickSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UIButtonHoverSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UIButtonHoverSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UWidget* OnGenerateWidget(struct FString Item); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnGenerateWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Title_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-Title_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-PUBLICMATCH_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-PUBLICMATCH_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-CUSTOMMATCH_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__BTN-CUSTOMMATCH_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CoherentBind(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CoherentBind // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.OnMatchingFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayUIButtonClickSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.PlayUIButtonClickSound // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayUIBtuttonOverSound(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.PlayUIBtuttonOverSound // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Exit(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Option(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Option // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void FinishLoadEvent(struct FString Path, bool isMainFrame); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.FinishLoadEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  inishLoad_이(struct FString Path, bool isMainFrame); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C. inishLoad_이 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetReceiveInput(bool ReceiveInput); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.SetReceiveInput // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_85_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__Button_85_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMainPageBlurEffect(struct FMargin InMargin); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateMainPageBlurEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateChildPageBlurEffect(struct FMargin InMargin); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.UpdateChildPageBlurEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Main_Web(int32_t EntryPoint); // Function UW-Lobby_Main_Web.UW-Lobby_Main_Web_C.ExecuteUbergraph_UW-Lobby_Main_Web // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

