// WidgetBlueprintGeneratedClass SettingManagementWidget.SettingManagementWidget_C
// Size: 0x2cff6a30 (Inherited: 0x2cff6ae8)
struct USettingManagementWidget_C : UBravoHotelSettingManagementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UButton* Button; // 0x2f0(0x08)
	struct UButton* Button; // 0x2f8(0x08)
	struct UComboBoxString* ComboBoxString; // 0x300(0x08)
	struct UEditableText* EditableText; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UMultiLineEditableText* MultiLineEditableText; // 0x318(0x08)
	struct FString SearchType; // 0x320(0x10)

	void BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SettingManagementWidget.SettingManagementWidget_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__EditableText_132_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function SettingManagementWidget.SettingManagementWidget_C.BndEvt__EditableText_132_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function SettingManagementWidget.SettingManagementWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__MultiLineEditableText_227_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function SettingManagementWidget.SettingManagementWidget_C.BndEvt__MultiLineEditableText_227_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void K2_HttpDSConnectInfoResponse(struct FString Data); // Function SettingManagementWidget.SettingManagementWidget_C.K2_HttpDSConnectInfoResponse // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function SettingManagementWidget.SettingManagementWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__EditableText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function SettingManagementWidget.SettingManagementWidget_C.BndEvt__EditableText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_96_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function SettingManagementWidget.SettingManagementWidget_C.BndEvt__ComboBoxString_96_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_SettingManagementWidget(int32_t EntryPoint); // Function SettingManagementWidget.SettingManagementWidget_C.ExecuteUbergraph_SettingManagementWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

