// WidgetBlueprintGeneratedClass SettingMainWidget.SettingMainWidget_C
// Size: 0x2cff6a85 (Inherited: 0x2cff6a38)
struct USettingMainWidget_C : UBravoHotelSettingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UImage* 1-1; // 0x440(0x08)
	struct UImage* 2-1; // 0x448(0x08)
	struct UImage* 2-2; // 0x450(0x08)
	struct UButtomButtonWidget_C* ApplyButton; // 0x458(0x08)
	struct USettingSubButtonWidget_C* Audio; // 0x460(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x468(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x470(0x08)
	struct USettingSubButtonWidget_C* Control; // 0x478(0x08)
	struct UVerticalBox* CrossHair; // 0x480(0x08)
	struct UCrossHairDetailInfo_C* CrossHairDetailInfo; // 0x488(0x08)
	struct UCrossHairDetailInfo_C* CrossHairDetailInfo; // 0x490(0x08)
	struct UCrossHairDetailInfo_C* CrossHairDetailInfo; // 0x498(0x08)
	struct UCrossHairDetailInfo_C* CrossHairDetailInfo; // 0x4a0(0x08)
	struct UTextBlock* CurDesc; // 0x4a8(0x08)
	struct UTextBlock* CurDesc2; // 0x4b0(0x08)
	struct UTextBlock* CurTitle; // 0x4b8(0x08)
	struct UButtomButtonWidget_C* DefaultButton; // 0x4c0(0x08)
	struct USettingSubButtonWidget_C* Dev; // 0x4c8(0x08)
	struct USettingSubButtonWidget_C* GamePlay; // 0x4d0(0x08)
	struct UButtomButtonWidget_C* GoBackButton; // 0x4d8(0x08)
	struct USettingSubButtonWidget_C* Graphic; // 0x4e0(0x08)
	struct UImage* Image; // 0x4e8(0x08)
	struct UImage* Image; // 0x4f0(0x08)
	struct UImage* Image; // 0x4f8(0x08)
	struct UImage* Image; // 0x500(0x08)
	struct UImage* Image; // 0x508(0x08)
	struct UImage* Image; // 0x510(0x08)
	struct UImage* Image; // 0x518(0x08)
	struct UImage* Image; // 0x520(0x08)
	struct UImage* Image; // 0x528(0x08)
	struct UImage* Image; // 0x530(0x08)
	struct UImage* Image; // 0x538(0x08)
	struct UImage* Image; // 0x540(0x08)
	struct USettingSubButtonWidget_C* Key; // 0x548(0x08)
	struct UKeyImageWidget_C* KeyImageMain; // 0x550(0x08)
	struct USettingSubButtonWidget_C* Management; // 0x558(0x08)
	struct UProgressBar* ProgressBar; // 0x560(0x08)
	struct UTextBlock* RecommendOption; // 0x568(0x08)
	struct USlider* Slider; // 0x570(0x08)
	struct UTextBlock* TextBlock; // 0x578(0x08)
	struct UTextBlock* TextBlock; // 0x580(0x08)
	struct UTextBlock* TextBlock; // 0x588(0x08)
	struct UTextBlock* TextBlock; // 0x590(0x08)
	struct UTextBlock* TextBlock; // 0x598(0x08)
	struct UTextBlock* TextBlock; // 0x5a0(0x08)
	struct UVerticalBox* VerticalBox; // 0x5a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x5b0(0x08)
	struct FMulticastInlineDelegate EnableButtonEventDispatcher; // 0x5b8(0x10)
	struct UBP_GameSettings_C* Game Settings; // 0x5c8(0x08)
	struct TMap<enum class ESettingType, struct UBravoHotelSettingSlotWidget*> SlotList; // 0x5d0(0x50)
	struct UGraphicWidget_C* GraphicWidget; // 0x620(0x08)
	struct UAudioWidget_C* AudioWidget; // 0x628(0x08)
	struct UControlWidget_C* ControlWidget; // 0x630(0x08)
	struct UKeyWidget_C* KeyWidget; // 0x638(0x08)
	struct UGamePlayWidget_C* GamePlayWidget; // 0x640(0x08)
	struct USettingDevWidget_C* SettingDevWidget; // 0x648(0x08)
	int32_t GraphicSwitcherIndex; // 0x650(0x04)
	int32_t AudioSwitcherIndex; // 0x654(0x04)
	int32_t ControlSwitcherIndex; // 0x658(0x04)
	int32_t KeySwitcherIndex; // 0x65c(0x04)
	int32_t SettingDevSwitcherIndex; // 0x660(0x04)
	int32_t GamePlaySwitcherIndex; // 0x664(0x04)
	struct FTimerHandle KeyNotiTimer; // 0x668(0x08)
	float KeyNotiMessageShowTime; // 0x670(0x04)
	struct TSoftObjectPtr<UTexture2D> TempImg; // 0x678(0x30)
	struct UBravoHotelSettingSlotWidget* SavedDescData; // 0x6a8(0x08)
	struct FSlateColor DisabledReasonColor; // 0x6b0(0x28)
	struct FSlateColor DefaultDescColor; // 0x6d8(0x28)
	struct FSlateColor DisabledDescColor; // 0x700(0x28)
	struct FSlateColor DefaultRecommendedColor; // 0x728(0x28)
	struct FSlateColor DefaultTitleColor; // 0x750(0x28)
	struct USettingManagementWidget_C* ManagementWidget; // 0x778(0x08)
	int32_t SettingManagementSwitcherIndex; // 0x780(0x04)
	bool UsingPreMakeKeyWidget; // 0x784(0x01)

	void SetDisabledReasonDesc(struct USlotItemWidget_C* NewParam); // Function SettingMainWidget.SettingMainWidget_C.SetDisabledReasonDesc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRecommendGraphicOptionDesc(int32_t Index, bool IsGraphicOption); // Function SettingMainWidget.SettingMainWidget_C.SetRecommendGraphicOptionDesc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateWidgetImpl(struct UUserWidget* WidgetClass, struct UBravoHotelSettingSubWidget*& OutWidget, int32_t& OutSwitcherIndex, int32_t& RealIndex); // Function SettingMainWidget.SettingMainWidget_C.CreateWidgetImpl // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckConfirmPopup(int32_t Index, enum class ESettingBigType Type); // Function SettingMainWidget.SettingMainWidget_C.CheckConfirmPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct TArray<struct UBravoHotelSettingSubWidget*> GetSubList(); // Function SettingMainWidget.SettingMainWidget_C.GetSubList // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateWidget(int32_t Index, int32_t& RealIndex); // Function SettingMainWidget.SettingMainWidget_C.CreateWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function SettingMainWidget.SettingMainWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Select Menu(int32_t Index, enum class ESettingBigType Type); // Function SettingMainWidget.SettingMainWidget_C.Select Menu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Binding(); // Function SettingMainWidget.SettingMainWidget_C.Binding // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C* Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Apply_K2Node_ComponentBoundEvent_0_OnClickEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void  ????? (struct UBravoHotelSettingSlotWidget* Value); // Function SettingMainWidget.SettingMainWidget_C. ?????  // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C* Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Default_K2Node_ComponentBoundEvent_1_OnClickEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C* Widget); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__GoBack_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void RefreshDeve(); // Function SettingMainWidget.SettingMainWidget_C.RefreshDeve // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Slider_298_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CheckHaveApplyList(enum class ESettingBigType Type); // Function SettingMainWidget.SettingMainWidget_C.CheckHaveApplyList // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Close Menu(); // Function SettingMainWidget.SettingMainWidget_C.Close Menu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function SettingMainWidget.SettingMainWidget_C.BndEvt__Button_112_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CreateConfirmWidget(int32_t TabIdx, enum class ESettingBigType SelectTabType, int32_t PopupType); // Function SettingMainWidget.SettingMainWidget_C.CreateConfirmWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ApplyImpl(bool UseConfimPopup); // Function SettingMainWidget.SettingMainWidget_C.ApplyImpl // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Desc(struct UBravoHotelSettingSlotWidget* Slot); // Function SettingMainWidget.SettingMainWidget_C.Set Desc // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct UBravoHotelSettingSlotWidget* Value, bool IsSubKey); // Function SettingMainWidget.SettingMainWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void KeyNotiMessage(bool IsDuplicate, struct FInputChord Key, struct FText KeyName); // Function SettingMainWidget.SettingMainWidget_C.KeyNotiMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function SettingMainWidget.SettingMainWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Localization(int32_t LanguageIndex); // Function SettingMainWidget.SettingMainWidget_C.Update Localization // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateVideoMemoryUsageGraph(int32_t UsedVideoMemory, int32_t TotalVideoMemory, int32_t CurrentProcessUsage, int32_t OtherProcessUsage); // Function SettingMainWidget.SettingMainWidget_C.UpdateVideoMemoryUsageGraph // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function SettingMainWidget.SettingMainWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BlackListKey Noti(struct FInputChord Key); // Function SettingMainWidget.SettingMainWidget_C.BlackListKey Noti // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function SettingMainWidget.SettingMainWidget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_SettingMainWidget(int32_t EntryPoint); // Function SettingMainWidget.SettingMainWidget_C.ExecuteUbergraph_SettingMainWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EnableButtonEventDispatcher__DelegateSignature(); // Function SettingMainWidget.SettingMainWidget_C.EnableButtonEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

