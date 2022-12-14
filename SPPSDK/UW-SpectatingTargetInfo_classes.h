// WidgetBlueprintGeneratedClass UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C
// Size: 0x2cff6a38 (Inherited: 0x2cff6a88)
struct UUW-SpectatingTargetInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Spectator_Ani; // 0x290(0x08)
	struct UButton* Button_Report; // 0x298(0x08)
	struct UButton* Button_ScreenCapture; // 0x2a0(0x08)
	struct UCanvasPanel* Canvas_Finding; // 0x2a8(0x08)
	struct UCanvasPanel* Canvas_Target; // 0x2b0(0x08)
	struct UImage* Deco; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* IMG_ClassIcon; // 0x2c8(0x08)
	struct UTextBlock* NickName; // 0x2d0(0x08)
	struct UOverlay* Overlay_Report; // 0x2d8(0x08)
	struct UTextBlock* ReportDescriptionText; // 0x2e0(0x08)
	struct UTextBlock* Text_Report; // 0x2e8(0x08)
	struct UTextBlock* Text_Report; // 0x2f0(0x08)
	struct UTextBlock* TextBlock; // 0x2f8(0x08)
	struct UTextBlock* TextBlock; // 0x300(0x08)
	struct UVerticalBox* VerticalBox_Report; // 0x308(0x08)
	struct UVerticalBox* VerticalBox_ScreenCapture; // 0x310(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x318(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x320(0x08)
	bool IsReportAbleDateTime; // 0x328(0x01)
	struct ABravoHotelPlayerState* TargetPlayerState; // 0x330(0x08)

	void UpdateSpectatingTargetInfo(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.UpdateSpectatingTargetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FText GetWatchedCount(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.GetWatchedCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReportSended(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.ReportSended // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Check Report Enable From User Name(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.Check Report Enable From User Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749(struct UObject* Loaded); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.OnLoaded_4A4EF93A4D64362A89D43DA6D9BD2749 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncClassIcon(struct TSoftObjectPtr<UObject> Image); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.AsyncClassIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetReplayReportAbleDateTime(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.SetReplayReportAbleDateTime // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_ScreenCapture_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.BndEvt__Button_ScreenCapture_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct TArray<enum class ESettingType>& List); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C. ????? // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-SpectatingTargetInfo(int32_t EntryPoint); // Function UW-SpectatingTargetInfo.UW-SpectatingTargetInfo_C.ExecuteUbergraph_UW-SpectatingTargetInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

