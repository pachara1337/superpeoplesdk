// WidgetBlueprintGeneratedClass BP-ChangeCameraEffectSlot.BP-ChangeCameraEffectSlot_C
// Size: 0x2cff6af5 (Inherited: 0x2cff6a88)
struct UBP-ChangeCameraEffectSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UButton* Button; // 0x298(0x08)
	struct UButton* Button; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2a8(0x08)
	struct UComboBoxString* ComboBoxString; // 0x2b0(0x08)
	struct UTextBlock* Loc; // 0x2b8(0x08)
	struct UEditableText* Location; // 0x2c0(0x08)
	struct UEditableText* Rotation; // 0x2c8(0x08)
	struct UTextBlock* WinText1; // 0x2d0(0x08)
	struct FText DefaultKey; // 0x2d8(0x18)
	int32_t SelectedIndex; // 0x2f0(0x04)
	bool NeedUpdate; // 0x2f4(0x01)

	void BndEvt__Button_103_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function BP-ChangeCameraEffectSlot.BP-ChangeCameraEffectSlot_C.BndEvt__Button_103_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function BP-ChangeCameraEffectSlot.BP-ChangeCameraEffectSlot_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP-ChangeCameraEffectSlot.BP-ChangeCameraEffectSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BP-ChangeCameraEffectSlot.BP-ChangeCameraEffectSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function BP-ChangeCameraEffectSlot.BP-ChangeCameraEffectSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function BP-ChangeCameraEffectSlot.BP-ChangeCameraEffectSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-ChangeCameraEffectSlot(int32_t EntryPoint); // Function BP-ChangeCameraEffectSlot.BP-ChangeCameraEffectSlot_C.ExecuteUbergraph_BP-ChangeCameraEffectSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

