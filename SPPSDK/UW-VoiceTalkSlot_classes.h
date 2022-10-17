// WidgetBlueprintGeneratedClass UW-VoiceTalkSlot.UW-VoiceTalkSlot_C
// Size: 0x2cff6a68 (Inherited: 0x2cff6a88)
struct UUW-VoiceTalkSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UImage* death; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Img_LogOut; // 0x2c0(0x08)
	struct UImage* Img_Voice; // 0x2c8(0x08)
	struct UImage* Img_Voice; // 0x2d0(0x08)
	struct UOverlay* Overlay_Death; // 0x2d8(0x08)
	struct USlider* Slider; // 0x2e0(0x08)
	struct UTextBlock* T_PlayerIndex; // 0x2e8(0x08)
	struct UTextBlock* T_PlayerName; // 0x2f0(0x08)
	struct UTextBlock* TextBlock; // 0x2f8(0x08)
	struct UVerticalBox* VerticalBox; // 0x300(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x308(0x08)
	struct FMulticastInlineDelegate EventDispatcher_ChangeVolumeState; // 0x310(0x10)
	struct FVoiceTalkState CurVoiceTalkState; // 0x320(0x30)
	struct UPaperSprite* PingImage; // 0x350(0x08)
	struct FString PlayerName; // 0x358(0x10)

	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(struct FVoiceTalkState VoiceTalkState); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-VoiceTalkSlot(int32_t EntryPoint); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.ExecuteUbergraph_UW-VoiceTalkSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_ChangeVolumeState__DelegateSignature(struct FVoiceTalkState VoiceTalkState); // Function UW-VoiceTalkSlot.UW-VoiceTalkSlot_C.EventDispatcher_ChangeVolumeState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

