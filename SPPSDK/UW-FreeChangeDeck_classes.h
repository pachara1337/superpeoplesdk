// WidgetBlueprintGeneratedClass UW-FreeChangeDeck.UW-FreeChangeDeck_C
// Size: 0x2cff6b08 (Inherited: 0x2cff6a88)
struct UUW-FreeChangeDeck_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* IMG-BG; // 0x298(0x08)
	struct UImage* Img_Bottom; // 0x2a0(0x08)
	struct UImage* Img_Bottom2; // 0x2a8(0x08)
	struct UImage* Img_Bottom3; // 0x2b0(0x08)
	struct UTextBlock* TextBlock; // 0x2b8(0x08)
	struct UTextBlock* TextBlock; // 0x2c0(0x08)
	struct UTextBlock* TextBlock; // 0x2c8(0x08)
	struct UUW-ButtonCancle_C* UW-ButtonCancle; // 0x2d0(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x2d8(0x08)
	struct UUW-FreeTicket_C* UW-FreeTicket; // 0x2e0(0x08)
	struct UUW-FreeTicket_C* UW-FreeTicket; // 0x2e8(0x08)
	struct UUW-FreeTicket_C* UW-FreeTicket; // 0x2f0(0x08)
	struct FMulticastInlineDelegate OnUseEventDispatcher; // 0x2f8(0x10)

	void IsAlphabet(struct FString Char, bool& ret); // Function UW-FreeChangeDeck.UW-FreeChangeDeck_C.IsAlphabet // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn_Input_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function UW-FreeChangeDeck.UW-FreeChangeDeck_C.BndEvt__Btn_Input_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function UW-FreeChangeDeck.UW-FreeChangeDeck_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(int32_t HaveCount, int32_t UseCount); // Function UW-FreeChangeDeck.UW-FreeChangeDeck_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UW-FreeChangeDeck.UW-FreeChangeDeck_C.BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function UW-FreeChangeDeck.UW-FreeChangeDeck_C.BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-FreeChangeDeck(int32_t EntryPoint); // Function UW-FreeChangeDeck.UW-FreeChangeDeck_C.ExecuteUbergraph_UW-FreeChangeDeck // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnUseEventDispatcher__DelegateSignature(); // Function UW-FreeChangeDeck.UW-FreeChangeDeck_C.OnUseEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

