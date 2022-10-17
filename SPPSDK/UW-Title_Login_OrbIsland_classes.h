// WidgetBlueprintGeneratedClass UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C
// Size: 0x2cff6a88 (Inherited: 0x2cff6a88)
struct UUW-Title_Login_OrbIsland_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* CP-Login-FadeIn; // 0x290(0x08)
	struct UWidgetAnimation* Blink; // 0x298(0x08)
	struct UWidgetAnimation* Dot; // 0x2a0(0x08)
	struct UWidgetAnimation* MainCanvas-FadeIn; // 0x2a8(0x08)
	struct UButton* BTN-Login; // 0x2b0(0x08)
	struct UCheckBox* CB-SaveUserName; // 0x2b8(0x08)
	struct UCanvasPanel* CP-Dot; // 0x2c0(0x08)
	struct UCanvasPanel* CP-ErrorMessage; // 0x2c8(0x08)
	struct UCanvasPanel* CP-LOGIN; // 0x2d0(0x08)
	struct UCanvasPanel* CP-MESSAGE; // 0x2d8(0x08)
	struct UEditableTextBox* EDT-ID; // 0x2e0(0x08)
	struct UEditableTextBox* EDT-PASSWORD; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UImage* IMG-ErrorIcon; // 0x320(0x08)
	struct UImage* IMG-Logo; // 0x328(0x08)
	struct UTextBlock* TXT-Connecting; // 0x330(0x08)
	struct UTextBlock* TXT-Error_Message; // 0x338(0x08)
	struct UTextBlock* TXT-Waitting; // 0x340(0x08)
	struct UTextBlock* TXT_Connecting_Dot; // 0x348(0x08)
	struct UUW-Exit_Popup_C* UW-Exit_Popup; // 0x350(0x08)
	struct UBP-TitleWidget_C* TitleWidgetRef; // 0x358(0x08)
	int32_t State; // 0x360(0x04)
	bool bPlayOnce; // 0x364(0x01)
	bool bPopupOpen; // 0x365(0x01)
	struct FKey ExitPopupKey; // 0x368(0x20)

	void SetTitleWidget(struct UBP-TitleWidget_C* TitleWidget); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.SetTitleWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ProcessExitPopup(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessExitPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckKeyUp(struct FKey InputKey, bool& bResult); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.CheckKeyUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckKeyDown(struct FKey InputKey, bool& bResult); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.CheckKeyDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ProcessInput(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessInput // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ProcessLogin(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ProcessLogin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowPressAnyKey(struct UBP-TitleWidget_C* BPTitleWidget); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowPressAnyKey // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowLoginError(int32_t ErrorCode, struct FString ExtraDescription); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowLoginError // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HIdeLoginError(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.HIdeLoginError // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__CB-SaveID_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__CB-SaveID_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Login_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__BTN-Login_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowServerConnecting(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowServerConnecting // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowLoginUI(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ShowLoginUI // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Login_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__BTN-Login_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void InputOpen(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.InputOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetLoginState(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.SetLoginState // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__EDT-PASSWORD_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__EDT-PASSWORD_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__EDT-ID_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.BndEvt__EDT-ID_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Title_Login_OrbIsland(int32_t EntryPoint); // Function UW-Title_Login_OrbIsland.UW-Title_Login_OrbIsland_C.ExecuteUbergraph_UW-Title_Login_OrbIsland // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

