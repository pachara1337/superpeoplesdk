// WidgetBlueprintGeneratedClass UW-Opening.UW-Opening_C
// Size: 0x2cff6afe (Inherited: 0x2cff6a88)
struct UUW-Opening_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button_Focus; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Img_Movie; // 0x2a8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x2b0(0x08)
	bool bPopup; // 0x2b8(0x01)
	struct UFileMediaSource* Media; // 0x2c0(0x08)
	struct UMediaSoundComponent* MediaSoundComp; // 0x2c8(0x08)
	struct UBP_GameSettings_C* Game Settings; // 0x2d0(0x08)
	float GammaIntensity; // 0x2d8(0x04)
	struct FTimerHandle SkipNoticeTimer; // 0x2e0(0x08)
	struct UMediaTexture* MediaTexture; // 0x2e8(0x08)
	struct FName OpeningFileName; // 0x2f0(0x0c)
	bool End; // 0x2fc(0x01)
	bool NextScene; // 0x2fd(0x01)
	char pad_2CFF6AF3[0xb]; // 0x2cff6af3(0x0b)

	void MoveNextScene(); // Function UW-Opening.UW-Opening_C.MoveNextScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UW-Opening.UW-Opening_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Opening.UW-Opening_C.BndEvt__Button_Focus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-Opening.UW-Opening_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Opening.UW-Opening_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Opening.UW-Opening_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-Opening.UW-Opening_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Opening(int32_t EntryPoint); // Function UW-Opening.UW-Opening_C.ExecuteUbergraph_UW-Opening // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

