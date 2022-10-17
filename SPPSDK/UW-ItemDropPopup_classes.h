// WidgetBlueprintGeneratedClass UW-ItemDropPopup.UW-ItemDropPopup_C
// Size: 0x2cff6b20 (Inherited: 0x2cff6a88)
struct UUW-ItemDropPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* BlockMouse; // 0x290(0x08)
	struct UButton* Button_Close; // 0x298(0x08)
	struct UButton* Button_Max; // 0x2a0(0x08)
	struct UButton* Button_Min; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct USlider* Slider; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_MaxCount; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_MinCount; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_Title; // 0x2d0(0x08)
	struct UEditableTextBox* TextBox_DropCount; // 0x2d8(0x08)
	struct UUW-ButtonCancle_C* UW-ButtonCancle; // 0x2e0(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x2e8(0x08)
	int32_t CurrentCount; // 0x2f0(0x04)
	int32_t MaxCount; // 0x2f4(0x04)
	struct FText LastEnteredText; // 0x2f8(0x18)
	struct FInventoryItemInfo ItemInfo; // 0x310(0xb0)
	struct FInventoryItemDetailInfo ItemDetailInfo; // 0x3c0(0x530)
	struct ABravoHotelPickup* PickupRef; // 0x8f0(0x08)
	struct ABravoHotelDropBoxActor* DropBoxRef; // 0x8f8(0x08)
	struct ABravoHotelCharacter* StealableCharacter; // 0x900(0x08)
	struct UUW-InventoryWidget_C* InventoryWidget; // 0x908(0x08)
	bool bClosing; // 0x910(0x01)
	struct UUW-Inventory_MaterialSlot_C* MaterialSlot; // 0x918(0x08)

	void CheckNumeric(struct FString CheckString, bool& CheckResult); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.CheckNumeric // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetButtonTextColor(bool IsHover, bool IsPress, struct FSlateColor& TextColor); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.GetButtonTextColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDefault(bool InvenWeightCheck); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetDefault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTextBoxText(int32_t CurrentCount); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetTextBoxText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSliderValue(int32_t CurrentCount); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.SetSliderValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__TextBox_DropCount_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Slider_136_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Close(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Accept(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.Accept // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ItemDropPopup(int32_t EntryPoint); // Function UW-ItemDropPopup.UW-ItemDropPopup_C.ExecuteUbergraph_UW-ItemDropPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

