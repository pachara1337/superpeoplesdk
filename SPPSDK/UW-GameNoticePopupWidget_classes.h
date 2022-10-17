// WidgetBlueprintGeneratedClass UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a88)
struct UUW-GameNoticePopupWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UTextBlock* Notice; // 0x298(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x2a0(0x08)

	void SetMessage(struct FText Str); // Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.SetMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-GameNoticePopupWidget(int32_t EntryPoint); // Function UW-GameNoticePopupWidget.UW-GameNoticePopupWidget_C.ExecuteUbergraph_UW-GameNoticePopupWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

