// WidgetBlueprintGeneratedClass UW-LoginWidget.UW-LoginWidget_C
// Size: 0x2cff6af0 (Inherited: 0x2cff6a88)
struct UUW-LoginWidget_C : UBravoHotelLoginWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Blink; // 0x290(0x08)
	struct UWidgetAnimation* FadeIn; // 0x298(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2a8(0x08)
	struct UCanvasPanel* CanvasPanel_Default; // 0x2b0(0x08)
	struct UCanvasPanel* CanvasPanel_JuvenileRestricted; // 0x2b8(0x08)
	struct UCanvasPanel* CanvasPanel_RestrictedUser; // 0x2c0(0x08)
	struct UCanvasPanel* CanvasPanel_ServerInspection; // 0x2c8(0x08)
	struct UCanvasPanel* CanvasPanel_UnableToConnectServer; // 0x2d0(0x08)
	struct UCanvasPanel* CanvasPanel_WaitingServer; // 0x2d8(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2e0(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image_Bg; // 0x308(0x08)
	struct USizeBox* SizeBox; // 0x310(0x08)
	struct USpacer* Spacer; // 0x318(0x08)
	struct UTextBlock* TextBlock; // 0x320(0x08)
	struct UTextBlock* TextBlock; // 0x328(0x08)
	struct UTextBlock* TextBlock; // 0x330(0x08)
	struct UTextBlock* TextBlock; // 0x338(0x08)
	struct UTextBlock* TextBlock_Desc; // 0x340(0x08)
	struct UTextBlock* TextBlock_EndTime; // 0x348(0x08)
	struct UThrobber* Throbber; // 0x350(0x08)
	struct UThrobber* Throbber; // 0x358(0x08)
	struct UTextBlock* TXT-Waitting; // 0x360(0x08)
	struct UUW-ButtonCancle_C* UW-ButtonCancle; // 0x368(0x08)
	struct UUW-ButtonOk_C* UW-ButtonExitGame; // 0x370(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x378(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x380(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x388(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x390(0x08)
	struct UUW-ButtonOk_C* UW-ButtonRetry; // 0x398(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x3a0(0x08)
	struct UBP-TitleWidget_C* TitleWidgetRef; // 0x3a8(0x08)
	int32_t SavedErrorCode; // 0x3b0(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x3b8(0x08)
	struct UFileMediaSource* Media; // 0x3c0(0x08)
	struct UMediaTexture* MediaTexture; // 0x3c8(0x08)
	struct UMediaSoundComponent* MediaSoundComp; // 0x3d0(0x08)
	int32_t ApplyUserInfoCount; // 0x3d8(0x04)
	bool bServicePlatformFlow; // 0x3dc(0x01)
	struct FString ExtraDescription; // 0x3e0(0x10)

	void DefaultMessage(int32_t ErrorCode); // Function UW-LoginWidget.UW-LoginWidget_C.DefaultMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ServicePlatformLogin(); // Function UW-LoginWidget.UW-LoginWidget_C.ServicePlatformLogin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowBlock(); // Function UW-LoginWidget.UW-LoginWidget_C.ShowBlock // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UodateWaitingUser(int32_t UserCount, int32_t Time); // Function UW-LoginWidget.UW-LoginWidget_C.UodateWaitingUser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowNotice(int32_t Idx); // Function UW-LoginWidget.UW-LoginWidget_C.ShowNotice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-LoginWidget.UW-LoginWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoginSucceeded(); // Function UW-LoginWidget.UW-LoginWidget_C.OnLoginSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnCreateCharacter_Event(); // Function UW-LoginWidget.UW-LoginWidget_C.OnCreateCharacter_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void WaitingUserDelegate_Event(int32_t WaitingUserCount, int32_t WaitingTime); // Function UW-LoginWidget.UW-LoginWidget_C.WaitingUserDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-LoginWidget.UW-LoginWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-LoginWidget.UW-LoginWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(int32_t ErrorCode, struct FString ExtraDescription); // Function UW-LoginWidget.UW-LoginWidget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Login(); // Function UW-LoginWidget.UW-LoginWidget_C.Login // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PressAnyKeyDelayTime(); // Function UW-LoginWidget.UW-LoginWidget_C.PressAnyKeyDelayTime // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(struct FString Parameters); // Function UW-LoginWidget.UW-LoginWidget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void QuitGame(float DelayTime); // Function UW-LoginWidget.UW-LoginWidget_C.QuitGame // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonRetry_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__UW-ButtonRetry_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonExitGame_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__UW-ButtonExitGame_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOK_2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__UW-ButtonOK_2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOK_3_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__UW-ButtonOK_3_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOK_4_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__UW-ButtonOK_4_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOK_5_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__UW-ButtonOK_5_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature(); // Function UW-LoginWidget.UW-LoginWidget_C.BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-LoginWidget(int32_t EntryPoint); // Function UW-LoginWidget.UW-LoginWidget_C.ExecuteUbergraph_UW-LoginWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

