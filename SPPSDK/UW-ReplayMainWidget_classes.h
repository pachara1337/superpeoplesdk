// WidgetBlueprintGeneratedClass UW-ReplayMainWidget.UW-ReplayMainWidget_C
// Size: 0x2cff6b14 (Inherited: 0x2cff6a90)
struct UUW-ReplayMainWidget_C : UBravoHotelReplayMainWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* Anim_ToggleItemList; // 0x298(0x08)
	struct UWidgetAnimation* Anim_TogglePlayerList; // 0x2a0(0x08)
	struct UWidgetAnimation* Anim_ToggleTimeline; // 0x2a8(0x08)
	struct UCanvasPanel* Canvas_Main; // 0x2b0(0x08)
	struct UUW-ReplayFreeCamSpeedWidget_C* UW-ReplayFreeCamSpeedWidget; // 0x2b8(0x08)
	struct UUW-ReplayGuideWidget_C* UW-ReplayGuideWidget; // 0x2c0(0x08)
	struct UUW-ReplayTimelineBasic_C* UW-ReplayTimelineBasic; // 0x2c8(0x08)
	struct UUW-ReplayWorldMapOption_C* UW-ReplayWorldMapOption; // 0x2d0(0x08)
	struct UUW-SpectatingTargetInfo_C* UW-SpectatingTargetInfo; // 0x2d8(0x08)
	struct UUW-WatchingEquippedItemWidget_C* UW-WatchingEquippedItemWidget; // 0x2e0(0x08)
	struct UUW-WatchingPlayersWidget_C* UW-WatchingPlayersWidget; // 0x2e8(0x08)
	struct ABP-MK3DReplayController_C* ReplayController; // 0x2f0(0x08)
	struct TArray<struct UUW_ReplayUserNameTooltip_C*> UserNameTooltips; // 0x2f8(0x10)
	struct UBravoHotelMainWidget* MainWidget; // 0x308(0x08)
	int32_t UserNameTooltipsNum; // 0x310(0x04)

	void SetEnableUserNameTooltips(enum class ECameraType CameraType); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.SetEnableUserNameTooltips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckWorldMapOption(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.CheckWorldMapOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMainWidget(bool& IsValid, struct UBravoHotelMainWidget*& MainWidget); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.GetMainWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RemoveAllUserNameTooltips(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.RemoveAllUserNameTooltips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateUserNameTooltip(struct ABravoHotelPlayerState* PlayerState); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.CreateUserNameTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set User Name Tooltip(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Set User Name Tooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ToggleTimeline(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ToggleTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TogglePlayerList(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.TogglePlayerList // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ToggleItemList(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ToggleItemList // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeCameraTypeDelegate_Event(enum class ECameraType CameraType, struct FString TargetPlayerName); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ChangeCameraTypeDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void InitWorldMapOption(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.InitWorldMapOption // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedPlayerInfos(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.OnChangedPlayerInfos // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedFreeCamSpeedLevel(float SpeedLevel); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.OnChangedFreeCamSpeedLevel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Show(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide(); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ReplayMainWidget(int32_t EntryPoint); // Function UW-ReplayMainWidget.UW-ReplayMainWidget_C.ExecuteUbergraph_UW-ReplayMainWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

