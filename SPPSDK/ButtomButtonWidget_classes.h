// WidgetBlueprintGeneratedClass ButtomButtonWidget.ButtomButtonWidget_C
// Size: 0x2cff6a23 (Inherited: 0x2cff6a88)
struct UButtomButtonWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UOverlay* ApplyBtn; // 0x290(0x08)
	struct UImage* ApplyDisable; // 0x298(0x08)
	struct UImage* ApplyNormalBg; // 0x2a0(0x08)
	struct UImage* ApplyOverBg; // 0x2a8(0x08)
	struct UImage* ApplyPressBg; // 0x2b0(0x08)
	struct UButton* Button; // 0x2b8(0x08)
	struct UImage* Lock; // 0x2c0(0x08)
	struct UImage* NormalBg; // 0x2c8(0x08)
	struct UOverlay* NormalBtn; // 0x2d0(0x08)
	struct UImage* OverBg; // 0x2d8(0x08)
	struct UImage* PressBg; // 0x2e0(0x08)
	struct UTextBlock* Title_Text; // 0x2e8(0x08)
	struct FText Title; // 0x2f0(0x18)
	struct FMulticastInlineDelegate OnClickEventDispatcher; // 0x308(0x10)
	bool IsDisableBnt; // 0x318(0x01)
	int32_t CurType; // 0x31c(0x04)
	bool ColorType; // 0x320(0x01)
	bool Applytype; // 0x321(0x01)
	bool NewVar; // 0x322(0x01)

	void Set DisableBtn(bool IsDisable); // Function ButtomButtonWidget.ButtomButtonWidget_C.Set DisableBtn // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function ButtomButtonWidget.ButtomButtonWidget_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetState(int32_t Type, int32_t Selection); // Function ButtomButtonWidget.ButtomButtonWidget_C.SetState // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetColortype(bool ColorType); // Function ButtomButtonWidget.ButtomButtonWidget_C.SetColortype // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function ButtomButtonWidget.ButtomButtonWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ButtomButtonWidget(int32_t EntryPoint); // Function ButtomButtonWidget.ButtomButtonWidget_C.ExecuteUbergraph_ButtomButtonWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C* Widget); // Function ButtomButtonWidget.ButtomButtonWidget_C.OnClickEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

