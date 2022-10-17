// WidgetBlueprintGeneratedClass UW-Tutorial.UW-Tutorial_C
// Size: 0x2cff6a29 (Inherited: 0x2cff6a88)
struct UUW-Tutorial_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Bg; // 0x290(0x08)
	struct UButton* Button_Focus; // 0x298(0x08)
	struct UButton* Button_Focus2; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel_Exit; // 0x2a8(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Img_Movie; // 0x2c8(0x08)
	struct URichTextBlock* RichTextBlock; // 0x2d0(0x08)
	struct UUW-ButtonCancle_C* UW-ButtonCancle; // 0x2d8(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x2e0(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x2e8(0x08)
	bool bPopup; // 0x2f0(0x01)
	struct UMediaSoundComponent* MediaSoundComp; // 0x2f8(0x08)
	float GammaIntensity; // 0x300(0x04)
	struct UBP_GameSettings_C* Game Settings; // 0x308(0x08)
	struct FTimerHandle SkipNoticeTimer; // 0x310(0x08)
	struct UMediaTexture* MediaTexture; // 0x318(0x08)
	struct UFileMediaSource* Media; // 0x320(0x08)
	bool NextScene; // 0x328(0x01)

	void PlayMedia(); // Function UW-Tutorial.UW-Tutorial_C.PlayMedia // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ToggleExitPopup(); // Function UW-Tutorial.UW-Tutorial_C.ToggleExitPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Move Next Scene(); // Function UW-Tutorial.UW-Tutorial_C.Move Next Scene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UW-Tutorial.UW-Tutorial_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Tutorial.UW-Tutorial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Tutorial.UW-Tutorial_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-Tutorial.UW-Tutorial_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-Tutorial.UW-Tutorial_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Focus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__Button_Focus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__Button_Focus2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function UW-Tutorial.UW-Tutorial_C.BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Tutorial(int32_t EntryPoint); // Function UW-Tutorial.UW-Tutorial_C.ExecuteUbergraph_UW-Tutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

