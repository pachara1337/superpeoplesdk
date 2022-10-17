// WidgetBlueprintGeneratedClass ArrowBtn.ArrowBtn_C
// Size: 0x2cff6ac9 (Inherited: 0x2cff6a88)
struct UArrowBtn_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UImage* Normal; // 0x298(0x08)
	struct UImage* Over; // 0x2a0(0x08)
	struct UOverlay* Overlay; // 0x2a8(0x08)
	struct UImage* Press; // 0x2b0(0x08)
	struct FMulticastInlineDelegate CilckBtn; // 0x2b8(0x10)
	bool IsLeft; // 0x2c8(0x01)

	void Construct(); // Function ArrowBtn.ArrowBtn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ArrowBtn.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function ArrowBtn.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ArrowBtn.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ArrowBtn.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function ArrowBtn.ArrowBtn_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ArrowBtn(int32_t EntryPoint); // Function ArrowBtn.ArrowBtn_C.ExecuteUbergraph_ArrowBtn // (Final|UbergraphFunction) // @ game+0x2bad3b0
	void CilckBtn__DelegateSignature(); // Function ArrowBtn.ArrowBtn_C.CilckBtn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

