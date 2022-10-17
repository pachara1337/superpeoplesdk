// WidgetBlueprintGeneratedClass SettingDevWidget.SettingDevWidget_C
// Size: 0x2cff6b18 (Inherited: 0x2cff6ae8)
struct USettingDevWidget_C : UBravoHotelSettingSubWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UButton* Button_Standalone; // 0x2f0(0x08)
	struct UButton* Button_TrainingMode; // 0x2f8(0x08)
	struct UButton* ButtonGod; // 0x300(0x08)
	struct UDevWidget_C* DevWidget; // 0x308(0x08)
	struct UScrollBox* ScrollBox; // 0x310(0x08)

	void Construct(); // Function SettingDevWidget.SettingDevWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SettingDevWidget.SettingDevWidget_C.BndEvt__ButtonOpenCheat_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function SettingDevWidget.SettingDevWidget_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_TrainingMode_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function SettingDevWidget.SettingDevWidget_C.BndEvt__Button_TrainingMode_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_SettingDevWidget(int32_t EntryPoint); // Function SettingDevWidget.SettingDevWidget_C.ExecuteUbergraph_SettingDevWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

