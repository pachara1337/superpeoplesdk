// WidgetBlueprintGeneratedClass UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6a88)
struct UUW-MatchEnd_ButtonBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UTextBlock* Button_Text; // 0x298(0x08)
	struct UOverlay* Overlay_Button; // 0x2a0(0x08)
	struct FText ButtonText; // 0x2a8(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2f0(0x10)

	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnInitialized(); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MatchEnd_ButtonBase(int32_t EntryPoint); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.ExecuteUbergraph_UW-MatchEnd_ButtonBase // (Final|UbergraphFunction) // @ game+0x2bad3b0
	void OnHovered__DelegateSignature(); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnReleased__DelegateSignature(); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPressed__DelegateSignature(); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnClicked__DelegateSignature(); // Function UW-MatchEnd_ButtonBase.UW-MatchEnd_ButtonBase_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

