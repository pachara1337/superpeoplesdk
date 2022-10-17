// WidgetBlueprintGeneratedClass UW-ReportUser.UW-ReportUser_C
// Size: 0x2cff6a71 (Inherited: 0x2cff6ab8)
struct UUW-ReportUser_C : UBravoHotelReportUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UOverlay* combobox_button_overlay; // 0x2c0(0x08)
	struct UComboBoxString* combobox_string; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UButton* NormalArrow; // 0x2e8(0x08)
	struct UButton* OpeningArrow; // 0x2f0(0x08)
	struct UImage* popup-bg; // 0x2f8(0x08)
	struct UTextBlock* txt_description; // 0x300(0x08)
	struct UTextBlock* txt_nickname; // 0x308(0x08)
	struct UImage* uw-bg; // 0x310(0x08)
	struct UUW-ButtonCancle_C* UW-ButtonCancle; // 0x318(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x320(0x08)
	struct FText DescriptionText; // 0x328(0x18)
	struct TArray<struct FText> ReportIndexText; // 0x340(0x10)
	struct FText DefaultComboString; // 0x350(0x18)
	int32_t CurrentSelectIndex; // 0x368(0x04)
	int32_t SelectIndexFromProgram; // 0x36c(0x04)
	bool CheckCloseComboArrow; // 0x370(0x01)

	void SetOpeningArrow(bool InOpening); // Function UW-ReportUser.UW-ReportUser_C.SetOpeningArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetReportComboStringFromProgramWidget(int32_t InSelectIndex); // Function UW-ReportUser.UW-ReportUser_C.SetReportComboStringFromProgramWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetReportComboString(); // Function UW-ReportUser.UW-ReportUser_C.SetReportComboString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDefaultComboString(); // Function UW-ReportUser.UW-ReportUser_C.SetDefaultComboString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetReportIndexText(); // Function UW-ReportUser.UW-ReportUser_C.SetReportIndexText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDescriptionText(); // Function UW-ReportUser.UW-ReportUser_C.SetDescriptionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNativeValues(); // Function UW-ReportUser.UW-ReportUser_C.SetNativeValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-ReportUser.UW-ReportUser_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ReportUser.UW-ReportUser_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature(); // Function UW-ReportUser.UW-ReportUser_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function UW-ReportUser.UW-ReportUser_C.BndEvt__combobox_string_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-ReportUser.UW-ReportUser_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnReportConfirm(); // Function UW-ReportUser.UW-ReportUser_C.OnReportConfirm // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ReportUser(int32_t EntryPoint); // Function UW-ReportUser.UW-ReportUser_C.ExecuteUbergraph_UW-ReportUser // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

