// WidgetBlueprintGeneratedClass UW-CouponPopUpWidget.UW-CouponPopUpWidget_C
// Size: 0x2cff6a49 (Inherited: 0x2cff6a88)
struct UUW-CouponPopUpWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UButton* Button; // 0x298(0x08)
	struct UButton* Button; // 0x2a0(0x08)
	struct UEditableText* EditableText; // 0x2a8(0x08)
	struct UImage* IMG-BG; // 0x2b0(0x08)
	struct UImage* Img_Bottom; // 0x2b8(0x08)
	struct UImage* Img_Bottom2; // 0x2c0(0x08)
	struct UImage* Img_Bottom2; // 0x2c8(0x08)
	struct UImage* Img_Bottom3; // 0x2d0(0x08)
	struct UImage* Img_Gradient; // 0x2d8(0x08)
	struct UImage* Img_Gradient; // 0x2e0(0x08)
	struct UImage* Img_Inputbox; // 0x2e8(0x08)
	struct UTextBlock* TextBlock; // 0x2f0(0x08)
	struct UTextBlock* TextBlock; // 0x2f8(0x08)
	struct UUW-ButtonCancle_C* UW-ButtonCancle; // 0x300(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x308(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x310(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x318(0x08)
	struct FString LResultString; // 0x320(0x10)
	bool SendPacket; // 0x330(0x01)
	bool PacketResult; // 0x331(0x01)
	struct FString PreString; // 0x338(0x10)
	bool Init; // 0x348(0x01)

	void IsAlphabet(struct FString Char, bool& ret); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.IsAlphabet // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowType(int32_t Type); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.ShowType // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_245_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.BndEvt__Button_245_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_76_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetResult(bool IsSuccess, int32_t ErrorCode); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.SetResult // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__EditableText_540_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.BndEvt__EditableText_540_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOk_118_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.BndEvt__UW-ButtonOk_118_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-CouponPopUpWidget(int32_t EntryPoint); // Function UW-CouponPopUpWidget.UW-CouponPopUpWidget_C.ExecuteUbergraph_UW-CouponPopUpWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

