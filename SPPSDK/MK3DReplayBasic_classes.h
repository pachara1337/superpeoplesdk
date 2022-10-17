// Class MK3DReplayBasic.MK3DReplayPC
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMK3DReplayPC : UInterface {
};

// Class MK3DReplayBasic.MK3DReplayExtendableInputOverride
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMK3DReplayExtendableInputOverride : UInterface {
};

// Class MK3DReplayBasic.MK3DReplayManager
// Size: 0x2cff6b08 (Inherited: 0x2cff6b08)
struct AMK3DReplayManager : AActor {
	struct FMK3DReplayVariable Var; // 0x308(0x1d0)

	void ReceivePlaybackTimeAdvance(struct UDemoNetDriver* ThisDemo, uint32_t RecordedCL, float CurrentTime, float TotalTime); // Function MK3DReplayBasic.MK3DReplayManager.ReceivePlaybackTimeAdvance // (Final|Native|Public) // @ game+0x18c14a0
};

// Class MK3DReplayBasic.MK3DReplayWidgets
// Size: 0x2cff6a68 (Inherited: 0x2cff6b08)
struct AMK3DReplayWidgets : AActor {
	struct TArray<struct FMK3DReplayWidgetInfo> WidgetInfoArray; // 0x308(0x10)
};

// Class MK3DReplayBasic.MK3DUserInterfaceManager
// Size: 0x2cff6a68 (Inherited: 0x2cff6b08)
struct AMK3DUserInterfaceManager : AActor {
	struct TArray<struct FUserWidgetInfoForReplay_T> WidgetInfoArray; // 0x308(0x10)
	struct TMap<struct FString, struct UUserWidget*> ReplayWidgetMap; // 0x318(0x50)

	struct AMK3DUserInterfaceManager* Get(); // Function MK3DReplayBasic.MK3DUserInterfaceManager.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18bfdd0
};

// Class MK3DReplayBasic.NativePlayerListItem
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a88)
struct UNativePlayerListItem : UUserWidget {
	struct UButton* Button_PlayerName; // 0x288(0x08)
	struct UTextBlock* Text_PlayerName; // 0x290(0x08)
	char pad_2CFF6A98[0x10]; // 0x2cff6a98(0x10)

	void OnClickPlayerNameButton(); // Function MK3DReplayBasic.NativePlayerListItem.OnClickPlayerNameButton // (Final|Native|Public) // @ game+0x18bffc0
};

// Class MK3DReplayBasic.NativePlayerListWidget
// Size: 0x2cff6a98 (Inherited: 0x2cff6a88)
struct UNativePlayerListWidget : UUserWidget {
	struct UScrollBox* ScrollBox_PlayerName; // 0x288(0x08)
	char pad_2CFF6A90[0x8]; // 0x2cff6a90(0x08)

	void SetPlayerListWidgetButtons(); // Function MK3DReplayBasic.NativePlayerListWidget.SetPlayerListWidgetButtons // (Final|Native|Public) // @ game+0x18c16b0
};

// Class MK3DReplayBasic.NativeReplayEventMarkerBasic
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a88)
struct UNativeReplayEventMarkerBasic : UUserWidget {
	struct UReplayEventBorder* EventBorder; // 0x288(0x08)
	struct UBorder* VisualBorder; // 0x290(0x08)
	struct UTextBlock* EventInform; // 0x298(0x08)
	char pad_2CFF6AA0[0x10]; // 0x2cff6aa0(0x10)

	struct FEventReply OnMouseMoveEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseMoveEventBorder // (Native|Public|HasOutParms) // @ game+0x18c0b00
	struct FEventReply OnMouseLeaveEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseLeaveEventBorder // (Native|Public|HasOutParms) // @ game+0x18c0920
	struct FEventReply OnMouseEnterEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseEnterEventBorder // (Native|Public|HasOutParms) // @ game+0x18c0740
	struct FEventReply OnMouseButtonUpEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonUpEventBorder // (Native|Public|HasOutParms) // @ game+0x18c0560
	struct FEventReply OnMouseButtonDownEventBorder(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.OnMouseButtonDownEventBorder // (Native|Public|HasOutParms) // @ game+0x18c0380
	struct FVector2D GetBorderSize(); // Function MK3DReplayBasic.NativeReplayEventMarkerBasic.GetBorderSize // (Native|Public|HasDefaults) // @ game+0x18bfe00
};

// Class MK3DReplayBasic.NativeReplayKillEventMarker
// Size: 0x2cff6af0 (Inherited: 0x2cff6ab0)
struct UNativeReplayKillEventMarker : UNativeReplayEventMarkerBasic {
	struct FMK3DHighlightKillEvent KillEvent; // 0x2b0(0x30)
	float ClickToJumpDeltaSec; // 0x2e8(0x04)
	char pad_2CFF6AE4[0xc]; // 0x2cff6ae4(0x0c)

	void SetKillEvent(struct FMK3DHighlightKillEvent& InKillEvent); // Function MK3DReplayBasic.NativeReplayKillEventMarker.SetKillEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18c15f0
	void OnReplayJumpComplete(bool bSuccess); // Function MK3DReplayBasic.NativeReplayKillEventMarker.OnReplayJumpComplete // (Final|Native|Protected) // @ game+0x18c0ce0
	int32_t GetEventTime(); // Function MK3DReplayBasic.NativeReplayKillEventMarker.GetEventTime // (Final|Native|Public|BlueprintCallable) // @ game+0x18bfe40
};

// Class MK3DReplayBasic.NativeReplayListItem
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a88)
struct UNativeReplayListItem : UUserWidget {
	struct UButton* ReplayListItemBtn; // 0x288(0x08)
	struct UTextBlock* TextName; // 0x290(0x08)
	struct UTextBlock* TextLive; // 0x298(0x08)
	struct UTextBlock* TextTime; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnSelectedReplayListItemEvent; // 0x2b8(0x10)
	char pad_2CFF6AB8[0x10]; // 0x2cff6ab8(0x10)

	void SetReplayListItemText(struct FString Name, bool IsLive, struct FDateTime Time); // Function MK3DReplayBasic.NativeReplayListItem.SetReplayListItemText // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x18c16d0
	void PlayReplay(); // Function MK3DReplayBasic.NativeReplayListItem.PlayReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x18c1240
	void OnSelectedReplayListItemEvent__DelegateSignature(struct FString ReplayName); // DelegateFunction MK3DReplayBasic.NativeReplayListItem.OnSelectedReplayListItemEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void OnClickedReplayListItemBtn(); // Function MK3DReplayBasic.NativeReplayListItem.OnClickedReplayListItemBtn // (Final|Native|Public) // @ game+0x18c00a0
};

// Class MK3DReplayBasic.NativeReplayListLevel
// Size: 0x2cff6a30 (Inherited: 0x2cff6b10)
struct ANativeReplayListLevel : ALevelScriptActor {
	struct UUserWidget* ReplayListWidget; // 0x310(0x08)
	struct UUserWidget* ReplayListWidgetClass; // 0x318(0x08)

	void ShowMouseCursor(); // Function MK3DReplayBasic.NativeReplayListLevel.ShowMouseCursor // (Final|Native|Protected) // @ game+0x18c1830
	void AddListWidgetToViewPort(); // Function MK3DReplayBasic.NativeReplayListLevel.AddListWidgetToViewPort // (Final|Native|Protected) // @ game+0x18bfa00
};

// Class MK3DReplayBasic.NativeReplayListWidget
// Size: 0x2cff6b18 (Inherited: 0x2cff6a88)
struct UNativeReplayListWidget : UUserWidget {
	struct UEditableTextBox* PageSizeTB; // 0x288(0x08)
	struct UEditableTextBox* CurrentPageTB; // 0x290(0x08)
	struct UScrollBox* ScrollBoxReplayList; // 0x298(0x08)
	struct UButton* RefreshBtn; // 0x2a0(0x08)
	struct UButton* PrevBtn; // 0x2a8(0x08)
	struct UButton* NextBtn; // 0x2b0(0x08)
	struct UTextBlock* TotalReplaysTB; // 0x2b8(0x08)
	struct UTextBlock* TotalPageText; // 0x2c0(0x08)
	struct UTextBlock* ReplayItemInform; // 0x2c8(0x08)
	struct UCheckBox* ShouldKeepChkBox; // 0x2d0(0x08)
	struct UButton* PlayBtn; // 0x2d8(0x08)
	struct UButton* DeleteBtn; // 0x2e0(0x08)
	struct UButton* DeleteOldReplaysBtn; // 0x2e8(0x08)
	struct UEditableTextBox* ReplaysToKeepTB; // 0x2f0(0x08)
	int32_t TotalPages; // 0x2f8(0x04)
	int32_t CurrentPage; // 0x2fc(0x04)
	int32_t PageSize; // 0x300(0x04)
	int32_t TotalReplays; // 0x304(0x04)
	int32_t ReplaysToKeep; // 0x308(0x04)
	char pad_2CFF6B0C[0xc]; // 0x2cff6b0c(0x0c)

	void UpdateTotalReplaysTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalReplaysTB // (Final|Native|Public|BlueprintCallable) // @ game+0x18c1b40
	void UpdateTotalPage(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateTotalPage // (Final|Native|Public|BlueprintCallable) // @ game+0x18c1b20
	bool UpdateShouldKeep(struct FString ReplayName, bool bShouldKeep); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateShouldKeep // (Final|Native|Public|BlueprintCallable) // @ game+0x18c19e0
	void UpdateReplaysToKeepTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplaysToKeepTB // (Final|Native|Public|BlueprintCallable) // @ game+0x18c19c0
	void UpdateReplayStatics(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayStatics // (Final|Native|Public|BlueprintCallable) // @ game+0x18c19a0
	void UpdateReplayListItems(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateReplayListItems // (Final|Native|Public|BlueprintCallable) // @ game+0x18c1980
	void UpdatePageSizeTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdatePageSizeTB // (Final|Native|Public|BlueprintCallable) // @ game+0x18c1960
	void UpdateCurrentPageTB(); // Function MK3DReplayBasic.NativeReplayListWidget.UpdateCurrentPageTB // (Final|Native|Public|BlueprintCallable) // @ game+0x18c1940
	void ShowReplayItemDetail(struct FString inSelectedReplayName); // Function MK3DReplayBasic.NativeReplayListWidget.ShowReplayItemDetail // (Final|Native|Public|BlueprintCallable) // @ game+0x18c1850
	void PlayReplay(struct FString ReplayToPlay, bool bShowSimpleConfirmBox); // Function MK3DReplayBasic.NativeReplayListWidget.PlayReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x18c1260
	void OnTextCommitedReplaysToKeepTB(struct FText& Text, enum class ETextCommit CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedReplaysToKeepTB // (Final|Native|Public|HasOutParms) // @ game+0x18c10a0
	void OnTextCommitedPageSize(struct FText& Text, enum class ETextCommit CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedPageSize // (Final|Native|Public|HasOutParms) // @ game+0x18c0f80
	void OnTextCommitedCurrentPage(struct FText& Text, enum class ETextCommit CommitMethod); // Function MK3DReplayBasic.NativeReplayListWidget.OnTextCommitedCurrentPage // (Final|Native|Public|HasOutParms) // @ game+0x18c0e60
	void OnSelectedReplayListItem(struct FString ReplayName); // Function MK3DReplayBasic.NativeReplayListWidget.OnSelectedReplayListItem // (Final|Native|Public) // @ game+0x18c0d70
	void OnKeepAndDeleteOldReplaysComplete(int32_t nRemainedReplays, bool bSuccess); // Function MK3DReplayBasic.NativeReplayListWidget.OnKeepAndDeleteOldReplaysComplete // (Final|Native|Public) // @ game+0x18c02c0
	void OnEnumerateReplayListComplete(int32_t RetPageIndex, int32_t RetPageSize); // Function MK3DReplayBasic.NativeReplayListWidget.OnEnumerateReplayListComplete // (Final|Native|Public) // @ game+0x18c0200
	void OnDeleteReplayComplete(struct FString ReplayName, bool bSuccess); // Function MK3DReplayBasic.NativeReplayListWidget.OnDeleteReplayComplete // (Final|Native|Public) // @ game+0x18c00c0
	void OnClickedRefreshBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedRefreshBtn // (Final|Native|Public) // @ game+0x18bfeb0
	void OnClickedPrevBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPrevBtn // (Final|Native|Public) // @ game+0x18bfe90
	void OnClickedPlayBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedPlayBtn // (Final|Native|Public) // @ game+0x18c0080
	void OnClickedNextBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedNextBtn // (Final|Native|Public) // @ game+0x18bfe70
	void OnClickedDeleteOldReplaysBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteOldReplaysBtn // (Final|Native|Public) // @ game+0x18c0060
	void OnClickedDeleteBtn(); // Function MK3DReplayBasic.NativeReplayListWidget.OnClickedDeleteBtn // (Final|Native|Public) // @ game+0x18c0040
	void OnCheckStateChangedSouldKeep(bool bIsChecked); // Function MK3DReplayBasic.NativeReplayListWidget.OnCheckStateChangedSouldKeep // (Final|Native|Public) // @ game+0x18bfef0
	void InitUI(); // Function MK3DReplayBasic.NativeReplayListWidget.InitUI // (Final|Native|Public|BlueprintCallable) // @ game+0x18bfed0
	void GetReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetReplayList // (Final|Native|Public|BlueprintCallable) // @ game+0x18bfeb0
	void GetPrevReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetPrevReplayList // (Final|Native|Public|BlueprintCallable) // @ game+0x18bfe90
	void GetNextReplayList(); // Function MK3DReplayBasic.NativeReplayListWidget.GetNextReplayList // (Final|Native|Public|BlueprintCallable) // @ game+0x18bfe70
	void DeleteReplay(struct FString ReplayToDelete, bool bShowSimpleConfirmBox); // Function MK3DReplayBasic.NativeReplayListWidget.DeleteReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x18bfc90
	void ChangeReplaysToKeep(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangeReplaysToKeep // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18bfbc0
	void ChangePageSize(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangePageSize // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18bfaf0
	void ChangeCurrentPage(struct FText& Text); // Function MK3DReplayBasic.NativeReplayListWidget.ChangeCurrentPage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18bfa20
};

// Class MK3DReplayBasic.NativeReplayTimelineBasicWidget
// Size: 0x2cff6ae8 (Inherited: 0x2cff6a88)
struct UNativeReplayTimelineBasicWidget : UUserWidget {
	struct AMK3DReplayManager* ReplayOwner; // 0x288(0x08)
	struct USlider* ReplayTimelineSlider; // 0x290(0x08)
	struct UTextBlock* ReplayCurrentTimeTextBlock; // 0x298(0x08)
	struct UTextBlock* ReplayTotalTimeTextBlock; // 0x2a0(0x08)
	struct UButton* ReplayPauseButton; // 0x2a8(0x08)
	struct UButton* ReplayResumeButton; // 0x2b0(0x08)
	struct UButton* ReplaySpeedUpButton; // 0x2b8(0x08)
	struct UButton* ReplaySpeedDownButton; // 0x2c0(0x08)
	struct UTextBlock* ReplaySpeedTextBlock; // 0x2c8(0x08)
	struct UButton* ReplayEditingButton; // 0x2d0(0x08)
	char pad_2CFF6AD8[0x10]; // 0x2cff6ad8(0x10)

	void ReceivePlayTimeAdvance(struct AMK3DReplayManager* EventOwner, int32_t CurrentTimeInMS, int32_t TotalTimeInMS); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.ReceivePlayTimeAdvance // (Final|Native|Protected) // @ game+0x18c13a0
	void OnValueChangedTimeSlider(float InValue); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnValueChangedTimeSlider // (Final|Native|Public) // @ game+0x18c11c0
	void OnClickSpeedUpButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedUpButton // (Final|Native|Public) // @ game+0x18c0020
	void OnClickSpeedDownButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickSpeedDownButton // (Final|Native|Public) // @ game+0x18c0000
	void OnClickResumeButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickResumeButton // (Final|Native|Public) // @ game+0x18bffe0
	void OnClickPauseButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickPauseButton // (Final|Native|Public) // @ game+0x18bffa0
	void OnClickEditingButton(); // Function MK3DReplayBasic.NativeReplayTimelineBasicWidget.OnClickEditingButton // (Final|Native|Public) // @ game+0x18bff80
};

// Class MK3DReplayBasic.ReplayEventBorder
// Size: 0x2cff6ae0 (Inherited: 0x2cff6ab8)
struct UReplayEventBorder : UBorder {
	struct FDelegate OnMouseEnterEvent; // 0x2b8(0x14)
	char pad_2CFF6ACC[0x14]; // 0x2cff6acc(0x14)
};

// Class MK3DReplayBasic.TimelineBorder
// Size: 0x2cff6ae0 (Inherited: 0x2cff6ab8)
struct UTimelineBorder : UBorder {
	struct FDelegate OnMouseEnterEvent; // 0x2b8(0x14)
	struct FDelegate OnMouseLeaveEvent; // 0x2cc(0x14)
};

