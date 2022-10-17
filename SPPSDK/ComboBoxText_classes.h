// WidgetBlueprintGeneratedClass ComboBoxText.ComboBoxText_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a88)
struct UComboBoxText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct USizeBox* SizeBox; // 0x2a0(0x08)
	struct UTextBlock* TextBlock; // 0x2a8(0x08)
	struct FText Text; // 0x2b0(0x18)

	struct UWidget* NewFunction(); // Function ComboBoxText.ComboBoxText_C.NewFunction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ComboBoxText.ComboBoxText_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetColor(struct FLinearColor Color); // Function ComboBoxText.ComboBoxText_C.SetColor // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ComboBoxText(int32_t EntryPoint); // Function ComboBoxText.ComboBoxText_C.ExecuteUbergraph_ComboBoxText // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

