// WidgetBlueprintGeneratedClass UW-ComboBoxText.UW-ComboBoxText_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a88)
struct UUW-ComboBoxText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UImage* off; // 0x298(0x08)
	struct UImage* On; // 0x2a0(0x08)
	struct UTextBlock* TextBlock; // 0x2a8(0x08)
	struct FText Text; // 0x2b0(0x18)

	void BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-ComboBoxText.UW-ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetSelect(bool IsSelect); // Function UW-ComboBoxText.UW-ComboBoxText_C.SetSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ComboBoxText(int32_t EntryPoint); // Function UW-ComboBoxText.UW-ComboBoxText_C.ExecuteUbergraph_UW-ComboBoxText // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

