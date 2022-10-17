// WidgetBlueprintGeneratedClass UW-HUDMessageWidget.UW-HUDMessageWidget_C
// Size: 0x2cff6a50 (Inherited: 0x2cff6b00)
struct UUW-HUDMessageWidget_C : UBravoHotelHUDMessageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* Anim_9WarningMessage; // 0x308(0x08)
	struct UWidgetAnimation* Anim_10SupplyMessage; // 0x310(0x08)
	struct UWidgetAnimation* Anim_8LevelUpMessage; // 0x318(0x08)
	struct UWidgetAnimation* Anim_4GameStartMessage; // 0x320(0x08)
	struct UWidgetAnimation* Anim_27Revival; // 0x328(0x08)
	struct UWidgetAnimation* Anim_TeamKillWarning; // 0x330(0x08)
	struct UCanvasPanel* 0BlueZoneDesc; // 0x338(0x08)
	struct UCanvasPanel* 10SupplyMessage; // 0x340(0x08)
	struct UCanvasPanel* 11BroadcastMessage; // 0x348(0x08)
	struct UCanvasPanel* 12TeamKillWarning; // 0x350(0x08)
	struct UCanvasPanel* 13ActionDescription; // 0x358(0x08)
	struct UCanvasPanel* 14Action; // 0x360(0x08)
	struct UCanvasPanel* 15CastingMessage; // 0x368(0x08)
	struct UCanvasPanel* 16CastingCount; // 0x370(0x08)
	struct UCanvasPanel* 17CastingCancelInfo; // 0x378(0x08)
	struct UCanvasPanel* 18ActionMessage; // 0x380(0x08)
	struct UCanvasPanel* 19CoreInfo; // 0x388(0x08)
	struct UCanvasPanel* 1BlueZoneName; // 0x390(0x08)
	struct UCanvasPanel* 20ZeroingDistance; // 0x398(0x08)
	struct UCanvasPanel* 21PlayerReportInfo; // 0x3a0(0x08)
	struct UCanvasPanel* 22SpectatorCount; // 0x3a8(0x08)
	struct UCanvasPanel* 23PlayerInfo; // 0x3b0(0x08)
	struct UCanvasPanel* 24RoundOverInfo; // 0x3b8(0x08)
	struct UCanvasPanel* 25RoundOver; // 0x3c0(0x08)
	struct UCanvasPanel* 26GuideWidget; // 0x3c8(0x08)
	struct UCanvasPanel* 27Revival; // 0x3d0(0x08)
	struct UCanvasPanel* 28RequestMessageInfo; // 0x3d8(0x08)
	struct UCanvasPanel* 29EndResuscitated; // 0x3e0(0x08)
	struct UCanvasPanel* 2GameCountDown; // 0x3e8(0x08)
	struct UCanvasPanel* 30ItemCancelMessage; // 0x3f0(0x08)
	struct UCanvasPanel* 32CoreInfoRichText; // 0x3f8(0x08)
	struct UCanvasPanel* 3GameCountDownNum; // 0x400(0x08)
	struct UCanvasPanel* 4GameStartMessage; // 0x408(0x08)
	struct UCanvasPanel* 5ChangeClassInfo; // 0x410(0x08)
	struct UCanvasPanel* 6KillMessage; // 0x418(0x08)
	struct UCanvasPanel* 7KillCount; // 0x420(0x08)
	struct UCanvasPanel* 8LevelUpMessage; // 0x428(0x08)
	struct UCanvasPanel* 9WarningMessage; // 0x430(0x08)
	struct UCanvasPanel* HUDList; // 0x438(0x08)
	struct UImage* Image; // 0x440(0x08)
	struct UImage* Image; // 0x448(0x08)
	struct UImage* Image; // 0x450(0x08)
	struct UImage* Image; // 0x458(0x08)
	struct UImage* Image; // 0x460(0x08)
	struct UImage* Image; // 0x468(0x08)
	struct UImage* Image; // 0x470(0x08)
	struct UImage* Image_background; // 0x478(0x08)
	struct UImage* Image_Clock; // 0x480(0x08)
	struct URichTextBlock* RichT_ResustingOwnerName; // 0x488(0x08)
	struct URichTextBlock* RichTextBlock; // 0x490(0x08)
	struct URichTextBlock* ShowMessage<Red18>Free<>; // 0x498(0x08)
	struct UUW-GuideWidget_C* UW-GuideWidget; // 0x4a0(0x08)
	struct UUW-ListWidget_C* UW-ListWidget_CoreInfo; // 0x4a8(0x08)
	struct UUW-ListWidget_C* UW-ListWidget_MyKillMessage; // 0x4b0(0x08)
	struct UUW-ListWidget_C* UW-ListWidget_Request; // 0x4b8(0x08)
	struct UUW-MyKillCountMessageWidget_C* UW-MyKillCountMessageWidget; // 0x4c0(0x08)
	struct UUW-Timer_C* UW-Timer; // 0x4c8(0x08)
	struct TMap<enum class EHUDMessageType, int32_t> LastPriority; // 0x4d0(0x50)
	int32_t TeamKillWarningAnimLoopNum; // 0x520(0x04)
	struct FText CheatMessage; // 0x528(0x18)
	bool bWantsRed; // 0x540(0x01)
	struct UObject* ImgDecoratorObject; // 0x548(0x08)

	void GetMyKillCountMessageWidget(struct UUW-MyKillCountMessageWidget_C*& KillCountWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetMyKillCountMessageWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ShowCustomAnim(struct UPanelWidget* PanelWidget, struct UWidgetAnimation* CustomAnim); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowCustomAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowResuscitatingWidget(); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowResuscitatingWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Request Message Widget(struct UUW-ListWidget_C*& Result); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.Get Request Message Widget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void AddCoreInfoWidget(struct FText Message); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.AddCoreInfoWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetCoreInfoWidget(struct UUW-ListWidget_C*& CoreInfoWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetCoreInfoWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ShowGuideWidget(struct FText Message); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowGuideWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayTeamKillWarningAnim(); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.PlayTeamKillWarningAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetPriority(enum class EHUDMessageType MessageType, struct UPanelWidget* PanelWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ResetPriority // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMessageText(struct UPanelWidget* PanelWidget, struct FText Message); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.SetMessageText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckPriority(enum class EHUDMessageType MessageType, int32_t Priority, bool& CanMessage); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.CheckPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPanelWidget(enum class EHUDMessageType MessageType, struct UPanelWidget*& PanelWidget); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.GetPanelWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void HideHUDMessage(enum class EHUDMessageType MessageType); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.HideHUDMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowHUDMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHUDMessageAtNum(enum class EHUDMessageType MessageType); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ShowHUDMessageAtNum // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-HUDMessageWidget(int32_t EntryPoint); // Function UW-HUDMessageWidget.UW-HUDMessageWidget_C.ExecuteUbergraph_UW-HUDMessageWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

