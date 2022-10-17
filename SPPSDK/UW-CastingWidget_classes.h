// WidgetBlueprintGeneratedClass UW-CastingWidget.UW-CastingWidget_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a88)
struct UUW-CastingWidget_C : UBravoHotelItemUseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Flicker; // 0x290(0x08)
	struct UImage* BaseGuage; // 0x298(0x08)
	struct UImage* Guage; // 0x2a0(0x08)
	struct UHorizontalBox* HB_CancelMessage; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UTextBlock* Percent; // 0x2b8(0x08)
	struct UProgressBar* ProgressBar_Item; // 0x2c0(0x08)
	struct URichTextBlock* RichT_Message; // 0x2c8(0x08)
	struct UTextBlock* TextBlock; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_Time; // 0x2d8(0x08)
	struct UTextBlock* UseMessage; // 0x2e0(0x08)
	struct UVerticalBox* VerticalBox; // 0x2e8(0x08)
	float PercentValue; // 0x2f0(0x04)
	bool KnockState; // 0x2f4(0x01)
	float HideTimer; // 0x2f8(0x04)
	struct FProgressBarStyle ProgressStyle; // 0x300(0x1b8)
	bool IsShowRevive; // 0x4b8(0x01)
	float CurrentTime; // 0x4bc(0x04)
	int32_t KeyFontSize; // 0x4c0(0x04)
	float KeySizeScale; // 0x4c4(0x04)

	void IsTarget(struct ABravoHotelCharacter* Target, bool& IsTarget); // Function UW-CastingWidget.UW-CastingWidget_C.IsTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void RefreshCastingUI(); // Function UW-CastingWidget.UW-CastingWidget_C.RefreshCastingUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Casting Info(struct FCastingInfo CastingInfo); // Function UW-CastingWidget.UW-CastingWidget_C.Set Casting Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-CastingWidget.UW-CastingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetCancelMessage(struct FText Desc); // Function UW-CastingWidget.UW-CastingWidget_C.SetCancelMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetData(struct FText& Message, float CastingPercent); // Function UW-CastingWidget.UW-CastingWidget_C.SetData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeCastingUIMessage(struct FCastingInfo NewData); // Function UW-CastingWidget.UW-CastingWidget_C.ChangeCastingUIMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnGameUserSettingsApply_Graphic_Event(struct TArray<enum class ESettingType>& List); // Function UW-CastingWidget.UW-CastingWidget_C.OnGameUserSettingsApply_Graphic_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetCastingInfo(struct FCastingInfo& CastingInfo); // Function UW-CastingWidget.UW-CastingWidget_C.K2_SetCastingInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-CastingWidget(int32_t EntryPoint); // Function UW-CastingWidget.UW-CastingWidget_C.ExecuteUbergraph_UW-CastingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

