// WidgetBlueprintGeneratedClass UW-PopupWidget.UW-PopupWidget_C
// Size: 0x2cff6a90 (Inherited: 0x2cff6ab8)
struct UUW-PopupWidget_C : UBravoHotelPopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* Bg; // 0x2c0(0x08)
	struct UTextBlock* Desc; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UOverlay* Overlay; // 0x2d8(0x08)
	struct URichTextBlock* RichTextBlock; // 0x2e0(0x08)
	struct USpacer* Spacer; // 0x2e8(0x08)
	struct UTextBlock* TextBlock; // 0x2f0(0x08)
	struct UThrobber* Throbber; // 0x2f8(0x08)
	struct UTextBlock* Title; // 0x300(0x08)
	struct UUW-ButtonCancle_C* UW-Button1; // 0x308(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x310(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x318(0x08)
	struct FName MapNameToExit; // 0x320(0x0c)
	bool IsExitGame; // 0x32c(0x01)
	struct ABravoHotelPlayerController* ControllerRef; // 0x330(0x08)
	bool IsTutorial; // 0x338(0x01)
	bool IsDeathCam; // 0x339(0x01)
	struct FMulticastInlineDelegate EventDispatcher_MoveToDeathCam; // 0x340(0x10)
	bool IsPerkDeckSelectMode; // 0x350(0x01)
	struct FMulticastInlineDelegate EventDispatcher_TrySelectMode; // 0x358(0x10)
	bool OkayType; // 0x368(0x01)
	struct FMulticastInlineDelegate EventDispatcher_Ok; // 0x370(0x10)
	struct FMulticastInlineDelegate EventDispatcher_Cancel; // 0x380(0x10)

	void SetOptionChangedFromBenchmark(); // Function UW-PopupWidget.UW-PopupWidget_C.SetOptionChangedFromBenchmark // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PerkDeckSelectMode(); // Function UW-PopupWidget.UW-PopupWidget_C.PerkDeckSelectMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsStartedGame(bool& bRet); // Function UW-PopupWidget.UW-PopupWidget_C.IsStartedGame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsSoloPlay(bool& bRet); // Function UW-PopupWidget.UW-PopupWidget_C.IsSoloPlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMessage(int32_t ErrorCode, struct FString ErrorID, struct FString Param, struct FString& Title, struct FString& Desc); // Function UW-PopupWidget.UW-PopupWidget_C.GetMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EnterDeathCam(bool IsWinningCam, bool IsTargetCameraKiller); // Function UW-PopupWidget.UW-PopupWidget_C.EnterDeathCam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EnterWindow(); // Function UW-PopupWidget.UW-PopupWidget_C.EnterWindow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMyTeamAlive(bool& ALIVE); // Function UW-PopupWidget.UW-PopupWidget_C.GetMyTeamAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EnterLobby(); // Function UW-PopupWidget.UW-PopupWidget_C.EnterLobby // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PopupWidget.UW-PopupWidget_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PopupWidget.UW-PopupWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-PopupWidget.UW-PopupWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void PlayerLogout(); // Function UW-PopupWidget.UW-PopupWidget_C.PlayerLogout // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void LeaveGame(); // Function UW-PopupWidget.UW-PopupWidget_C.LeaveGame // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedFinalRankDelegate_Event(); // Function UW-PopupWidget.UW-PopupWidget_C.OnChangedFinalRankDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void FinalResult_Internal(); // Function UW-PopupWidget.UW-PopupWidget_C.FinalResult_Internal // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveLobby(); // Function UW-PopupWidget.UW-PopupWidget_C.MoveLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Show(); // Function UW-PopupWidget.UW-PopupWidget_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide(); // Function UW-PopupWidget.UW-PopupWidget_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-PopupWidget.UW-PopupWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void QuitGame(float DelayTime); // Function UW-PopupWidget.UW-PopupWidget_C.QuitGame // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-PopupWidget.UW-PopupWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__UW-Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOK_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.BndEvt__UW-ButtonOK_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetMessageImpl(struct FText& InTitle, struct FText& InDesc); // Function UW-PopupWidget.UW-PopupWidget_C.SetMessageImpl // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOkButtonText(struct FText& InDisplayText); // Function UW-PopupWidget.UW-PopupWidget_C.SetOkButtonText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCancelButtonText(struct FText& InDisplayText); // Function UW-PopupWidget.UW-PopupWidget_C.SetCancelButtonText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PopupWidget(int32_t EntryPoint); // Function UW-PopupWidget.UW-PopupWidget_C.ExecuteUbergraph_UW-PopupWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_Cancel__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_Cancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_Ok__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_Ok__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_TrySelectMode__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_TrySelectMode__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_MoveToDeathCam__DelegateSignature(); // Function UW-PopupWidget.UW-PopupWidget_C.EventDispatcher_MoveToDeathCam__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

