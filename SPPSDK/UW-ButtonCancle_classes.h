// WidgetBlueprintGeneratedClass UW-ButtonCancle.UW-ButtonCancle_C
// Size: 0x2cff6a68 (Inherited: 0x2cff6a88)
struct UUW-ButtonCancle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTextBlock* BtnTextBlock; // 0x290(0x08)
	struct UButton* Button; // 0x298(0x08)
	struct FVector2D Size; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2e8(0x10)
	struct FText Text; // 0x2f8(0x18)
	struct FSlateFontInfo Font; // 0x310(0x58)

	void PreConstruct(bool IsDesignTime); // Function UW-ButtonCancle.UW-ButtonCancle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ButtonCancle.UW-ButtonCancle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetText(struct FText Text); // Function UW-ButtonCancle.UW-ButtonCancle_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIsEnable(bool IsEnable); // Function UW-ButtonCancle.UW-ButtonCancle_C.SetIsEnable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSize(struct FVector2D Size); // Function UW-ButtonCancle.UW-ButtonCancle_C.SetSize // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ButtonCancle(int32_t EntryPoint); // Function UW-ButtonCancle.UW-ButtonCancle_C.ExecuteUbergraph_UW-ButtonCancle // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnUnhovered__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnHovered__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnReleased__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPressed__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnClicked__DelegateSignature(); // Function UW-ButtonCancle.UW-ButtonCancle_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

