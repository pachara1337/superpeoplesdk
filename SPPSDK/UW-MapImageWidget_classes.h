// WidgetBlueprintGeneratedClass UW-MapImageWidget.UW-MapImageWidget_C
// Size: 0x2cff6a28 (Inherited: 0x2cff6a88)
struct UUW-MapImageWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_HideTournament; // 0x290(0x08)
	struct UWidgetAnimation* Anim_ShowTournament; // 0x298(0x08)
	struct UWidgetAnimation* Anim_Hide_Ima; // 0x2a0(0x08)
	struct UWidgetAnimation* Anim_Hide_text; // 0x2a8(0x08)
	struct UWidgetAnimation* Anim_Show_Ima; // 0x2b0(0x08)
	struct UWidgetAnimation* Anim_Show_text; // 0x2b8(0x08)
	struct UTextBlock* AI; // 0x2c0(0x08)
	struct UCanvasPanel* Canvas_Main; // 0x2c8(0x08)
	struct UTextBlock* Crafting; // 0x2d0(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2d8(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2e0(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2e8(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Img_MapImage; // 0x340(0x08)
	struct UTextBlock* MatchType; // 0x348(0x08)
	struct UTextBlock* MaxPlayerCount; // 0x350(0x08)
	struct UOverlay* Overlay_Text; // 0x358(0x08)
	struct UTextBlock* PersonType; // 0x360(0x08)
	struct UTextBlock* T_MapImageDesc; // 0x368(0x08)
	struct UTextBlock* T_MapImageTitle; // 0x370(0x08)
	struct UTextBlock* T_MapImageTitle; // 0x378(0x08)
	struct UTextBlock* T_MapImageTitle; // 0x380(0x08)
	struct UTextBlock* TournamentDesc1; // 0x388(0x08)
	struct URichTextBlock* TournamentDesc22; // 0x390(0x08)
	struct URichTextBlock* TournamentDesc33; // 0x398(0x08)
	struct URichTextBlock* TournamentDesc44; // 0x3a0(0x08)
	struct UTextBlock* TournamentLeague; // 0x3a8(0x08)
	struct UTextBlock* TournamentStep; // 0x3b0(0x08)
	struct UTextBlock* Ultimate; // 0x3b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x3c0(0x08)
	bool IsShowText; // 0x3c8(0x01)
	struct FTimerHandle Timer_HideMapImage; // 0x3d0(0x08)
	int32_t LastZoomLevel; // 0x3d8(0x04)
	float WantOpacity; // 0x3dc(0x04)
	struct UUW-MainWidget_C* MainWidgetRef; // 0x3e0(0x08)
	bool IsShowImage; // 0x3e8(0x01)
	enum class EToggleWidgetModeType LastWidgetType; // 0x3e9(0x01)
	struct FText UltimateText; // 0x3f0(0x18)
	bool IsTournament; // 0x408(0x01)
	struct FString NewVar; // 0x410(0x10)
	float UpdateMapInfoTime; // 0x420(0x04)
	float PreTime; // 0x424(0x04)

	void UpdateWantedOpacity(); // Function UW-MapImageWidget.UW-MapImageWidget_C.UpdateWantedOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckCanTextImage(bool& CanText, bool& CanImage); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckCanTextImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void StartShowAnim(); // Function UW-MapImageWidget.UW-MapImageWidget_C.StartShowAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeShowAnim(); // Function UW-MapImageWidget.UW-MapImageWidget_C.ChangeShowAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateOpacity(); // Function UW-MapImageWidget.UW-MapImageWidget_C.UpdateOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckWorldMapZoomLevel(bool& Changed); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckWorldMapZoomLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetWorldMapZoomLevel(int32_t& ZoomLevel); // Function UW-MapImageWidget.UW-MapImageWidget_C.GetWorldMapZoomLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckToggleWidgetType(bool& Changed); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckToggleWidgetType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckCanHide(bool& CanHide); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckCanHide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetMapInfo(bool& SUCCESS); // Function UW-MapImageWidget.UW-MapImageWidget_C.SetMapInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_199F0E9743CFA7E806886E89E49C9E00(struct UObject* Loaded); // Function UW-MapImageWidget.UW-MapImageWidget_C.OnLoaded_199F0E9743CFA7E806886E89E49C9E00 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMapImage(); // Function UW-MapImageWidget.UW-MapImageWidget_C.ShowMapImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideMapImage(bool SetTimer); // Function UW-MapImageWidget.UW-MapImageWidget_C.HideMapImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DoHideMapImage(); // Function UW-MapImageWidget.UW-MapImageWidget_C.DoHideMapImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncMapImage(struct TSoftObjectPtr<UObject> Image); // Function UW-MapImageWidget.UW-MapImageWidget_C.AsyncMapImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-MapImageWidget.UW-MapImageWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeMapImage(); // Function UW-MapImageWidget.UW-MapImageWidget_C.ChangeMapImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckOpacity(); // Function UW-MapImageWidget.UW-MapImageWidget_C.CheckOpacity // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowTournament(); // Function UW-MapImageWidget.UW-MapImageWidget_C.ShowTournament // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-MapImageWidget.UW-MapImageWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState); // Function UW-MapImageWidget.UW-MapImageWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-MapImageWidget.UW-MapImageWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-MapImageWidget.UW-MapImageWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-MapImageWidget.UW-MapImageWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-MapImageWidget.UW-MapImageWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MapImageWidget(int32_t EntryPoint); // Function UW-MapImageWidget.UW-MapImageWidget_C.ExecuteUbergraph_UW-MapImageWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

