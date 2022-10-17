// WidgetBlueprintGeneratedClass UW-ReportUserProgram.UW-ReportUserProgram_C
// Size: 0x2cff6aad (Inherited: 0x2cff6ab8)
struct UUW-ReportUserProgram_C : UBravoHotelReportUserProgramWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UButton* Button; // 0x2c0(0x08)
	struct UButton* Button; // 0x2c8(0x08)
	struct UButton* Button; // 0x2d0(0x08)
	struct UButton* Button; // 0x2d8(0x08)
	struct UCheckBox* CheckBox; // 0x2e0(0x08)
	struct UCheckBox* CheckBox; // 0x2e8(0x08)
	struct UCheckBox* CheckBox; // 0x2f0(0x08)
	struct UCheckBox* CheckBox; // 0x2f8(0x08)
	struct UOverlay* combobox_button_overlay; // 0x300(0x08)
	struct UComboBoxString* combobox_string; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UButton* NormalArrow; // 0x328(0x08)
	struct UButton* OpeningArrow; // 0x330(0x08)
	struct UImage* popup-bg; // 0x338(0x08)
	struct UTextBlock* txt_description; // 0x340(0x08)
	struct UTextBlock* txt_nickname; // 0x348(0x08)
	struct UImage* uw-bg; // 0x350(0x08)
	struct UUW-ButtonCancle_C* UW-ButtonCancle; // 0x358(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x360(0x08)
	struct FText DescriptionText; // 0x368(0x18)
	struct TArray<struct FText> ReportIndexText; // 0x380(0x10)
	struct FText DefaultComboString; // 0x390(0x18)
	int32_t CurrentSelectIndex; // 0x3a8(0x04)
	bool CheckCloseComboArrow; // 0x3ac(0x01)

	void CheckSelectProgramIndex(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.CheckSelectProgramIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOpeningArrow(bool InOpening); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetOpeningArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDefaultComboString(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetDefaultComboString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Report Index Text(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.Set Report Index Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDescriptionText(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetDescriptionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNativeValues(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.SetNativeValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnReportConfirm(); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.OnReportConfirm // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ReportUserProgram(int32_t EntryPoint); // Function UW-ReportUserProgram.UW-ReportUserProgram_C.ExecuteUbergraph_UW-ReportUserProgram // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

