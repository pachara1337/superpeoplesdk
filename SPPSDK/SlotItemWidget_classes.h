// WidgetBlueprintGeneratedClass SlotItemWidget.SlotItemWidget_C
// Size: 0x2cff6a79 (Inherited: 0x2cff6ac8)
struct USlotItemWidget_C : UBravoHotelSettingSlotWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c8(0x08)
	struct UWidgetAnimation* Over; // 0x5d0(0x08)
	struct UButton* Button; // 0x5d8(0x08)
	struct UButton* Button; // 0x5e0(0x08)
	struct UButton* Button_Type; // 0x5e8(0x08)
	struct UTextBlock* ButtonStyleTitle_Text; // 0x5f0(0x08)
	struct UCanvasPanel* ButtonType; // 0x5f8(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x600(0x08)
	struct UComboBoxString* ComboBoxString; // 0x608(0x08)
	struct UCanvasPanel* ComboBoxType; // 0x610(0x08)
	struct UTextBlock* DisableMultiKey; // 0x618(0x08)
	struct UImage* Down; // 0x620(0x08)
	struct UEditableText* EditableText; // 0x628(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x630(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x638(0x08)
	struct UImage* Image; // 0x640(0x08)
	struct UImage* Image; // 0x648(0x08)
	struct UImage* Image; // 0x650(0x08)
	struct UCanvasPanel* Key; // 0x658(0x08)
	struct UKeyImageWidget_C* KeyImageMain; // 0x660(0x08)
	struct UKeyImageWidget_C* KeyImageSub; // 0x668(0x08)
	struct UTextBlock* KeyLock; // 0x670(0x08)
	struct UArrowBtn_C* LeftA; // 0x678(0x08)
	struct UArrowBtn_C* LeftA; // 0x680(0x08)
	struct UImage* LockMain; // 0x688(0x08)
	struct UImage* LockSub; // 0x690(0x08)
	struct UImage* MainBG; // 0x698(0x08)
	struct UInputKeySelector* MainKeyInput; // 0x6a0(0x08)
	struct UOverlay* Overlay; // 0x6a8(0x08)
	struct UProgressBar* ProgressBar; // 0x6b0(0x08)
	struct UArrowBtn_C* RightA; // 0x6b8(0x08)
	struct UArrowBtn_C* RightA; // 0x6c0(0x08)
	struct UselectTypeBtn_C* SelectBtn1; // 0x6c8(0x08)
	struct UselectTypeBtn_C* SelectBtn2; // 0x6d0(0x08)
	struct UselectTypeBtn_C* SelectBtn3; // 0x6d8(0x08)
	struct UselectTypeBtn_C* SelectBtn4; // 0x6e0(0x08)
	struct UselectTypeBtn_C* SelectBtn5; // 0x6e8(0x08)
	struct UselectTypeBtn_C* SelectBtn6; // 0x6f0(0x08)
	struct UCanvasPanel* SelectType; // 0x6f8(0x08)
	struct UTextBlock* SelectValue; // 0x700(0x08)
	struct USlider* Slider; // 0x708(0x08)
	struct UCanvasPanel* SliderType; // 0x710(0x08)
	struct UImage* SubBG; // 0x718(0x08)
	struct UInputKeySelector* SubKeyInput; // 0x720(0x08)
	struct UTextBlock* T_Button; // 0x728(0x08)
	struct UTextBlock* Title_Text; // 0x730(0x08)
	struct UImage* Up; // 0x738(0x08)
	struct UTextBlock* Value; // 0x740(0x08)
	struct UTextBlock* Value; // 0x748(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x750(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x758(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x760(0x08)
	bool Lock; // 0x768(0x01)
	int32_t Selected SeleteValue; // 0x76c(0x04)
	int32_t TotalListSize; // 0x770(0x04)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> Empty; // 0x778(0x10)
	struct FButtonStyle ButtonStyle; // 0x788(0x2a8)
	struct FPointerEvent NewVar; // 0xa30(0x78)
	bool SliderIsInit; // 0xaa8(0x01)
	struct FText EmptyText; // 0xab0(0x18)
	int32_t TempSaveComboBoxIndex; // 0xac8(0x04)
	struct FInputChord Temp; // 0xad0(0x28)
	float TempValue; // 0xaf8(0x04)
	struct FText PreSliderText; // 0xb00(0x18)
	struct FString LResultString; // 0xb18(0x10)
	bool have.; // 0xb28(0x01)
	bool IsOnEditableText; // 0xb29(0x01)
	bool CompletSettingData; // 0xb2a(0x01)
	struct FSettingInfo CompleteSettingInfo; // 0xb30(0xa0)
	struct FSettingInfo TempSetting; // 0xbd0(0xa0)
	bool ReMarkComboBox; // 0xc70(0x01)
	int32_t DisabledReason; // 0xc74(0x04)
	bool IsDisabledFeature; // 0xc78(0x01)

	void SetDirectValue(float Value, float& OutValue); // Function SlotItemWidget.SlotItemWidget_C.SetDirectValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Feature Active(bool Inactive); // Function SlotItemWidget.SlotItemWidget_C.Set Feature Active // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetOrgKey(bool IsSubKey, struct FInputChord& Key); // Function SlotItemWidget.SlotItemWidget_C.GetOrgKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetCurKey(bool IsSubKey, struct FInputChord& Key); // Function SlotItemWidget.SlotItemWidget_C.GetCurKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function SlotItemWidget.SlotItemWidget_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckMinMaxValue(float CheckValue, struct FString& RetString); // Function SlotItemWidget.SlotItemWidget_C.CheckMinMaxValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckConvertFloatToString(float Value, struct FString& ret); // Function SlotItemWidget.SlotItemWidget_C.CheckConvertFloatToString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEnable(bool State); // Function SlotItemWidget.SlotItemWidget_C.SetEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSliderValue(float InputValue, float& OutValue); // Function SlotItemWidget.SlotItemWidget_C.SetSliderValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetKeyNameFromKey(struct FKey Key, struct FString& Name); // Function SlotItemWidget.SlotItemWidget_C.GetKeyNameFromKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UWidget* OnGenerateWidget(struct FString Item); // Function SlotItemWidget.SlotItemWidget_C.OnGenerateWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function SlotItemWidget.SlotItemWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetValue(float Value); // Function SlotItemWidget.SlotItemWidget_C.SetValue // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Broadcast Change Index(float ValueIndex); // Function SlotItemWidget.SlotItemWidget_C.Broadcast Change Index // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitDataByKeyInfo(bool IsSub, struct FInputActionKeyMapping& Index, bool IsInit); // Function SlotItemWidget.SlotItemWidget_C.InitDataByKeyInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_19_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__MainKeyInput_K2Node_ComponentBoundEvent_10_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__SubKeyInput_K2Node_ComponentBoundEvent_12_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetPercentValue(float Value); // Function SlotItemWidget.SlotItemWidget_C.SetPercentValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSelectIndexComboBox(int32_t Index, bool BroadcastChange); // Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexComboBox // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSelectIndexSelectBox(int32_t Index, bool BroadcastChange); // Function SlotItemWidget.SlotItemWidget_C.SetSelectIndexSelectBox // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitDataByAxisKeyInfo(bool IsSub, struct FInputAxisKeyMapping& Index, bool IsInit); // Function SlotItemWidget.SlotItemWidget_C.InitDataByAxisKeyInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SubSelectingKeyChanged(bool IsSelectingKey); // Function SlotItemWidget.SlotItemWidget_C.SubSelectingKeyChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MainSelectingKeyChanged(bool IsSelectingKey); // Function SlotItemWidget.SlotItemWidget_C.MainSelectingKeyChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_K2Node_ComponentBoundEvent_11_CilckBtn__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_K2Node_ComponentBoundEvent_13_CilckBtn__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_Type_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ResolutionSelected(int32_t Index, int32_t ResolutionX, int32_t ResolutionY); // Function SlotItemWidget.SlotItemWidget_C.ResolutionSelected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDisplayMode(enum class EWindowMode WindowMode); // Function SlotItemWidget.SlotItemWidget_C.SetDisplayMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReMakeComboBox(); // Function SlotItemWidget.SlotItemWidget_C.ReMakeComboBox // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(int32_t LanguageIndex); // Function SlotItemWidget.SlotItemWidget_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function SlotItemWidget.SlotItemWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__LeftA_1_K2Node_ComponentBoundEvent_9_CilckBtn__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__RightA_1_K2Node_ComponentBoundEvent_14_CilckBtn__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_15_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__EditableText_79_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature(); // Function SlotItemWidget.SlotItemWidget_C.BndEvt__Button_440_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(int32_t Index); // Function SlotItemWidget.SlotItemWidget_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetKeyLock(bool IsLock); // Function SlotItemWidget.SlotItemWidget_C.SetKeyLock // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(int32_t LanguageIndex); // Function SlotItemWidget.SlotItemWidget_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetData(); // Function SlotItemWidget.SlotItemWidget_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMultiKey(bool EnableMultiKey); // Function SlotItemWidget.SlotItemWidget_C.SetMultiKey // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CloseKeyInput(); // Function SlotItemWidget.SlotItemWidget_C.CloseKeyInput // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDirectSliderValue(float Value); // Function SlotItemWidget.SlotItemWidget_C.SetDirectSliderValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_SlotItemWidget(int32_t EntryPoint); // Function SlotItemWidget.SlotItemWidget_C.ExecuteUbergraph_SlotItemWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

