// WidgetBlueprintGeneratedClass WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C
// Size: 0x2cff6a40 (Inherited: 0x2cff6a88)
struct UWB_ClassicComboBoxButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* VisualNoninteractButton; // 0x290(0x08)
	struct FButtonStyle Original Style; // 0x298(0x2a8)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_WB_ClassicComboBoxButton(int32_t EntryPoint); // Function WB_ClassicComboBoxButton.WB_ClassicComboBoxButton_C.ExecuteUbergraph_WB_ClassicComboBoxButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

