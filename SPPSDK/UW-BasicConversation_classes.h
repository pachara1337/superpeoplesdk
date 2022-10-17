// WidgetBlueprintGeneratedClass UW-BasicConversation.UW-BasicConversation_C
// Size: 0x2cff6af0 (Inherited: 0x2cff6aa0)
struct UUW-BasicConversation_C : UBravoHotelConversationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* First; // 0x2a8(0x08)
	struct UWidgetAnimation* Hide; // 0x2b0(0x08)
	struct UWidgetAnimation* Show; // 0x2b8(0x08)
	struct UWidgetAnimation* Idle; // 0x2c0(0x08)
	struct USizeBox* Additional_Popup_Panel_Size_Box; // 0x2c8(0x08)
	struct UImage* Bg; // 0x2d0(0x08)
	struct UImage* Bg; // 0x2d8(0x08)
	struct UImage* Bg; // 0x2e0(0x08)
	struct UButton* Button; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UOverlay* Overlay_Base; // 0x310(0x08)
	struct UTextBlock* TextBlock_Message; // 0x318(0x08)
	struct UTextBlock* TextBlock_SpeakerName; // 0x320(0x08)
	struct UUW-ImageText_C* UW-ImageText; // 0x328(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Face; // 0x330(0x08)
	struct FSentenceData SentenceData; // 0x338(0xb8)

	void Finished_F3AEE8B3477DC5B8B5A3EA8301B8E940(); // Function UW-BasicConversation.UW-BasicConversation_C.Finished_F3AEE8B3477DC5B8B5A3EA8301B8E940 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-BasicConversation.UW-BasicConversation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowSentense(struct FSentenceData& SentenceData); // Function UW-BasicConversation.UW-BasicConversation_C.ShowSentense // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideSentense(); // Function UW-BasicConversation.UW-BasicConversation_C.HideSentense // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_406_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-BasicConversation.UW-BasicConversation_C.BndEvt__Button_406_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BasicConversation(int32_t EntryPoint); // Function UW-BasicConversation.UW-BasicConversation_C.ExecuteUbergraph_UW-BasicConversation // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

