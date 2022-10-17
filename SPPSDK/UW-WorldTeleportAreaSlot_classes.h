// WidgetBlueprintGeneratedClass UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C
// Size: 0x2cff6af8 (Inherited: 0x2cff6a88)
struct UUW-WorldTeleportAreaSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_Bt; // 0x290(0x08)
	struct UImage* Anim; // 0x298(0x08)
	struct UButton* Button; // 0x2a0(0x08)
	struct UImage* Hover; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Pressed; // 0x2b8(0x08)
	struct UTextBlock* Title_Text; // 0x2c0(0x08)
	int32_t Index; // 0x2c8(0x04)
	struct FMulticastInlineDelegate OverState; // 0x2d0(0x10)
	struct FName AreaName; // 0x2e0(0x0c)
	struct UUW-WorldTeleportSlot_C* TeleportSlot; // 0x2f0(0x08)
	char pad_2CFF6AF0[0x8]; // 0x2cff6af0(0x08)

	void BindHoverEvent(); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.BindHoverEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AnimationPlay(bool IsHover); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.AnimationPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C* Widget); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(int32_t Index, struct FName AreaName); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_41_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_41_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void GoArea(); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.GoArea // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_41_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_41_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_41_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-WorldTeleportAreaSlot(int32_t EntryPoint); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.ExecuteUbergraph_UW-WorldTeleportAreaSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OverState__DelegateSignature(int32_t Index, bool IsOver); // Function UW-WorldTeleportAreaSlot.UW-WorldTeleportAreaSlot_C.OverState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

