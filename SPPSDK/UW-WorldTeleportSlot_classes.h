// WidgetBlueprintGeneratedClass UW-WorldTeleportSlot.UW-WorldTeleportSlot_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6a88)
struct UUW-WorldTeleportSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Pressed_Animation; // 0x290(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x298(0x08)
	struct UButton* Button; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Pressed; // 0x2c0(0x08)
	struct UImage* pressed_effect; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnClick; // 0x2d0(0x10)
	int32_t Index; // 0x2e0(0x04)
	struct FName AreaName; // 0x2e4(0x0c)
	struct FMulticastInlineDelegate OnHover; // 0x2f0(0x10)

	void Construct(); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Animation State(bool IsShow); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.Animation State // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_313_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.BndEvt__Button_313_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetIndex(int32_t Index); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.SetIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_313_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.BndEvt__Button_313_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_313_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.BndEvt__Button_313_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_313_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.BndEvt__Button_313_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_313_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.BndEvt__Button_313_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-WorldTeleportSlot(int32_t EntryPoint); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.ExecuteUbergraph_UW-WorldTeleportSlot // (Final|UbergraphFunction) // @ game+0x2bad3b0
	void OnHover__DelegateSignature(bool IsHover); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Onclick__DelegateSignature(int32_t Index); // Function UW-WorldTeleportSlot.UW-WorldTeleportSlot_C.Onclick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

