// WidgetBlueprintGeneratedClass UW-GuideWidget.UW-GuideWidget_C
// Size: 0x2cff6a68 (Inherited: 0x2cff6a88)
struct UUW-GuideWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCanvasPanel* ADS_Pannel; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x298(0x08)
	struct UCanvasPanel* Descent_Pannel; // 0x2a0(0x08)
	struct UCanvasPanel* Drive_Pannel; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UKeyImageWidget_C* Key_ADSZeroingM; // 0x2d0(0x08)
	struct UKeyImageWidget_C* Key_ADSZeroingP; // 0x2d8(0x08)
	struct UKeyImageWidget_C* Key_ADSZoomIn; // 0x2e0(0x08)
	struct UKeyImageWidget_C* Key_ADSZoomOut; // 0x2e8(0x08)
	struct UKeyImageWidget_C* KeyImageWidget_ExitLadder; // 0x2f0(0x08)
	struct UCanvasPanel* Ladder_Pannel; // 0x2f8(0x08)
	struct UCanvasPanel* Parachuting_Pannel; // 0x300(0x08)
	struct UCanvasPanel* SmartPing_Pannel; // 0x308(0x08)
	struct UCanvasPanel* Spectate_Pannel; // 0x310(0x08)
	struct UCanvasPanel* Swim_Pannel; // 0x318(0x08)
	struct UTextBlock* T_ADSZeroingM; // 0x320(0x08)
	struct UTextBlock* T_ADSZeroingP; // 0x328(0x08)
	struct UTextBlock* T_ADSZoomIn; // 0x330(0x08)
	struct UTextBlock* T_ADSZoomOut; // 0x338(0x08)
	struct UCanvasPanel* TrainingParachute_Pannel; // 0x340(0x08)
	struct UCanvasPanel* TrainingTeleport_Pannel; // 0x348(0x08)
	struct UCanvasPanel* UseItem_Pannel; // 0x350(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Guide; // 0x358(0x08)
	struct UCanvasPanel* WorldMap_Pannel; // 0x360(0x08)

	void OnChangeApplyGamePlay(struct TArray<enum class ESettingType>& List); // Function UW-GuideWidget.UW-GuideWidget_C.OnChangeApplyGamePlay // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeApplyKey(struct TArray<enum class EKeySettingType>& List); // Function UW-GuideWidget.UW-GuideWidget_C.OnChangeApplyKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeApplyGamePlay3(struct TArray<enum class EKeySettingType>& List); // Function UW-GuideWidget.UW-GuideWidget_C.OnChangeApplyGamePlay3 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateWorldMapGuideOpacity(int32_t PreZoomLevel, int32_t NewZoomLevel); // Function UW-GuideWidget.UW-GuideWidget_C.UpdateWorldMapGuideOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMainVisibility(enum class EToggleWidgetModeType& ToggleType); // Function UW-GuideWidget.UW-GuideWidget_C.UpdateMainVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RefreshKeys(struct TArray<enum class EKeySettingType>& KeyTypeList); // Function UW-GuideWidget.UW-GuideWidget_C.RefreshKeys // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckADSMode(); // Function UW-GuideWidget.UW-GuideWidget_C.CheckADSMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateVisibleSpectateWidget(); // Function UW-GuideWidget.UW-GuideWidget_C.UpdateVisibleSpectateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGuideMode(struct FText Message); // Function UW-GuideWidget.UW-GuideWidget_C.SetGuideMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-GuideWidget.UW-GuideWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-GuideWidget.UW-GuideWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-GuideWidget(int32_t EntryPoint); // Function UW-GuideWidget.UW-GuideWidget_C.ExecuteUbergraph_UW-GuideWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

