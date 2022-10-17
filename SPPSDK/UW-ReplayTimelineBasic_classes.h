// WidgetBlueprintGeneratedClass UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C
// Size: 0x2cff6a52 (Inherited: 0x2cff6b18)
struct UUW-ReplayTimelineBasic_C : UBravoHotelReplayTimelineWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UImage* Bg; // 0x420(0x08)
	struct UTimelineBorder* Border_Timeline; // 0x428(0x08)
	struct UBorder* Border_TimeToGo; // 0x430(0x08)
	struct UButton* BT_FreeCam; // 0x438(0x08)
	struct UButton* BT_ReplayPause; // 0x440(0x08)
	struct UButton* BT_ReplayResume; // 0x448(0x08)
	struct UButton* BT_SpeedDown; // 0x450(0x08)
	struct UButton* BT_SpeedUp; // 0x458(0x08)
	struct UButton* BT_TimelineScaleDown; // 0x460(0x08)
	struct UButton* BT_TimelineScaleUp; // 0x468(0x08)
	struct UCheckBox* Chk_ShowKill; // 0x470(0x08)
	struct UCheckBox* Chk_ShowKnockout; // 0x478(0x08)
	struct UCheckBox* Chk_ShowMyKill; // 0x480(0x08)
	struct UCheckBox* Chk_ShowMyKnockout; // 0x488(0x08)
	struct UCheckBox* Chk_ShowMyResuscitated; // 0x490(0x08)
	struct UCheckBox* Chk_ShowResuscitated; // 0x498(0x08)
	struct UHorizontalBox* HorizontalBox_Editing; // 0x4a0(0x08)
	struct UButton* ReplayDeleteAllButton; // 0x4a8(0x08)
	struct UButton* ReplayEditButton; // 0x4b0(0x08)
	struct UButton* ReplayExportButton; // 0x4b8(0x08)
	struct UButton* ReplayKeyFrameAddButton; // 0x4c0(0x08)
	struct UButton* ReplayKeyFrameDeleteButton; // 0x4c8(0x08)
	struct UButton* ReplaySaveDataSetButton; // 0x4d0(0x08)
	struct UButton* ReplaySplineShowToggleButton; // 0x4d8(0x08)
	struct UButton* ReplayViewButton; // 0x4e0(0x08)
	struct UScrollBox* ScrollBox_Timeline; // 0x4e8(0x08)
	struct USlider* Slider_TimelineScale; // 0x4f0(0x08)
	struct UTextBlock* T_CameraType; // 0x4f8(0x08)
	struct UTextBlock* T_CurrentTime; // 0x500(0x08)
	struct UTextBlock* T_PlaySpeed; // 0x508(0x08)
	struct UTextBlock* T_TimeToGo; // 0x510(0x08)
	struct UTextBlock* T_TotalTime; // 0x518(0x08)
	float TimelineSizeBoxOffset; // 0x520(0x04)
	struct UUserWidget* Class_EventMarker_Kill; // 0x528(0x08)
	struct UUserWidget* Class_EventMarker_Knockout; // 0x530(0x08)
	float LastViewportSize; // 0x538(0x04)
	bool IsMouseOnBorder; // 0x53c(0x01)
	struct UUserWidget* Class_EventMarker_Resuscitated; // 0x540(0x08)
	struct UUserWidget* Class_EventMarker_WhenReported; // 0x548(0x08)
	enum class ECameraType CameraType; // 0x550(0x01)
	enum class EReplayViewMode ViewMode; // 0x551(0x01)

	void CheckCameraType(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckCameraType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FVector2D GetTimelineToolTipPositionBySlider(struct FString& ToolTipTime); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.GetTimelineToolTipPositionBySlider // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTimeToGo(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimeToGo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckTimeToGo(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckTimeToGo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalcTimelineScale(bool IsUpScale); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CalcTimelineScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTimelineToolTipText(struct FString& Text); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimelineToolTipText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_Border_Timeline_MouseLeave(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseLeave // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTickTime(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTickTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FText Get_T_PlaySpeed_Text(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Get_T_PlaySpeed_Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FEventReply On_Border_Timeline_MouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseMove // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_Border_Timeline_MouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.On_Border_Timeline_MouseEnter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UBravoHotelReplayTimelineEventMarker* CreateEventMarker(enum class EKillType killType); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CreateEventMarker // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckChangeViewportSize(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.CheckChangeViewportSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEventMarkersPos(enum class EKillType killType, float TotalTime); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetEventMarkersPos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTimelineScaleBoxWidth(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.SetTimelineScaleBoxWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TogglePauseResumeButton(bool PauseResume); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.TogglePauseResumeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeCameraTypeDelegate_Event(enum class ECameraType CameraType, struct FString TargetPlayerName); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ChangeCameraTypeDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_FreeCam_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_ReplayPause_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_ReplayResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Slider_302_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnReplayJumpCompleteEvent_Event(bool bSuccess); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.OnReplayJumpCompleteEvent_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BPUpdateTimelineScale(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BPUpdateTimelineScale // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_TimelineScaleDown_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_TimelineScaleDown_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_TimelineScaleUp_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Chk_ShowKill_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowKill_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowKnockout_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_SpeedDown_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_SpeedDown_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__BT_SpeedUp_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ScrollBox_Timeline_K2Node_ComponentBoundEvent_11_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BPUpdateKillEventMarkersPos(enum class EKillType killType, float TotalTime); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BPUpdateKillEventMarkersPos // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnReplayPauseEvent_Event(bool bPaused); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.OnReplayPauseEvent_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyKill_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyKnockout_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowMyResuscitated_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Chk_ShowResuscitated_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__Chk_ShowResuscitated_K2Node_ComponentBoundEvent_18_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ChangeViewModeDelegate_Event(enum class EReplayViewMode ViewMode); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ChangeViewModeDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplayViewButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayViewButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplayEditButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayEditButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplayExportButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayExportButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplaySplineShowToggleButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplaySplineShowToggleButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplayKeyFrameAddButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayKeyFrameAddButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplayKeyFrameDeleteButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayKeyFrameDeleteButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplaySaveDataSetButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplaySaveDataSetButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplayDeleteAllButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayDeleteAllButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.BndEvt__ReplayTimelineSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ReplayTimelineBasic(int32_t EntryPoint); // Function UW-ReplayTimelineBasic.UW-ReplayTimelineBasic_C.ExecuteUbergraph_UW-ReplayTimelineBasic // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

