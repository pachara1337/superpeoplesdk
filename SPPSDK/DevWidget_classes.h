// WidgetBlueprintGeneratedClass DevWidget.DevWidget_C
// Size: 0x2cff6a29 (Inherited: 0x2cff6ae8)
struct UDevWidget_C : UBravoHotelSettingSubWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UButton* ButtonClearStats; // 0x2f0(0x08)
	struct UButton* ButtonDebugVehicle; // 0x2f8(0x08)
	struct UButton* ButtonEngine; // 0x300(0x08)
	struct UButton* ButtonFPS; // 0x308(0x08)
	struct UButton* ButtonGameplayTick; // 0x310(0x08)
	struct UButton* ButtonMemory; // 0x318(0x08)
	struct UButton* ButtonNetwork; // 0x320(0x08)
	struct UButton* ButtonParticles; // 0x328(0x08)
	struct UButton* ButtonSceneRendering; // 0x330(0x08)
	struct UButton* ButtonStatSlow; // 0x338(0x08)
	struct UButton* ButtonUnitGraph; // 0x340(0x08)
	struct UComboBoxString* ComboBoxViewModes; // 0x348(0x08)
	struct UComboBoxString* ComboBoxViewModes1; // 0x350(0x08)
	struct UButton* DeleteSettingsSaveFile; // 0x358(0x08)
	struct USlider* GameSpeed; // 0x360(0x08)
	struct UEditableText* GameSpeedEdit; // 0x368(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x370(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x378(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x380(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x388(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x390(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x398(0x08)
	struct UCheckBox* PauseGame; // 0x3a0(0x08)
	struct UCheckBox* TemporalAACatmullRomCheck; // 0x3a8(0x08)
	struct UEditableText* TemporalAACurrentFrameWeightEdit; // 0x3b0(0x08)
	struct UEditableText* TemporalAAFilterSizeEdit; // 0x3b8(0x08)
	struct UCheckBox* TemporalAAPauseCorrectChek; // 0x3c0(0x08)
	struct UEditableText* TemporalAASamplesEdit; // 0x3c8(0x08)
	struct UEditableText* TonemapperSharpenEdit; // 0x3d0(0x08)
	struct UHorizontalBox* ToolTip_DeleteSettings; // 0x3d8(0x08)
	struct UHorizontalBox* ToolTip_GameSpeed; // 0x3e0(0x08)
	struct UHorizontalBox* ToolTip_PauseGame; // 0x3e8(0x08)
	struct UVerticalBox* ToolTip_StatCommands; // 0x3f0(0x08)
	struct UVerticalBox* ToolTip_ViewModes; // 0x3f8(0x08)
	struct UVerticalBox* ToolTip_ViewModes; // 0x400(0x08)
	struct UBP_GameSettings_C* Game Settings; // 0x408(0x08)
	float Time Dilation Value Binding; // 0x410(0x04)
	struct FText Time Dilation Text Binding; // 0x418(0x18)
	struct FMulticastInlineDelegate Settings File Deleted; // 0x430(0x10)
	struct FMulticastInlineDelegate Pause Game When Menu Open; // 0x440(0x10)
	struct FText TemporalAAFilterSizeTextBinding; // 0x450(0x18)
	struct FText TemporalAACurrentFrameWeightTextBinding; // 0x468(0x18)
	struct FText TemporalAASamplesTextBinding; // 0x480(0x18)
	struct FText TonemapperSharpenTextBinding; // 0x498(0x18)
	float TemporalAAFilterSizeValue; // 0x4b0(0x04)
	float TemporalAACurrentFrameWeightValue; // 0x4b4(0x04)
	int32_t TemporalAASamplesValue; // 0x4b8(0x04)
	float TonemapperSharpenValue; // 0x4bc(0x04)
	struct FName TempKey; // 0x4c0(0x0c)
	struct TMap<struct FName, struct FString> Temp; // 0x4d0(0x50)
	enum class ESettingType Type; // 0x520(0x01)
	float TempValue2; // 0x524(0x04)
	bool IsOnDebugVehicle; // 0x528(0x01)

	struct UWidget* Generate Combobox Widget Item(struct FString Item); // Function DevWidget.DevWidget_C.Generate Combobox Widget Item // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Refresh Slider Time Dilation(float Value); // Function DevWidget.DevWidget_C.Refresh Slider Time Dilation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Refresh Pause Game(bool InIsChecked); // Function DevWidget.DevWidget_C.Refresh Pause Game // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function DevWidget.DevWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__My Slider_K2Node_ComponentBoundEvent_1112_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function DevWidget.DevWidget_C.BndEvt__My Slider_K2Node_ComponentBoundEvent_1112_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__My CheckBox_K2Node_ComponentBoundEvent_1130_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function DevWidget.DevWidget_C.BndEvt__My CheckBox_K2Node_ComponentBoundEvent_1130_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__My Button_K2Node_ComponentBoundEvent_2111_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__My Button_K2Node_ComponentBoundEvent_2111_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__My Edit Value_K2Node_ComponentBoundEvent_165_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__My Edit Value_K2Node_ComponentBoundEvent_165_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_248_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonMemory_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonNetwork_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonParticles_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonStatTick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonSceneRendering_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonInitViews_K2Node_ComponentBoundEvent_591_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonEngine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DevWidget.DevWidget_C.BndEvt__MyComboBox_K2Node_ComponentBoundEvent_128_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonStatSlow_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__ButtonClearStats_K2Node_ComponentBoundEvent_739_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TemporalAAFilterSizeEdit_K2Node_ComponentBoundEvent_881_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TemporalAACurrentFrameWeightEdit_K2Node_ComponentBoundEvent_1061_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TemporalAASamplesEdit_K2Node_ComponentBoundEvent_1099_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function DevWidget.DevWidget_C.BndEvt__TonemapperSharpenEdit_K2Node_ComponentBoundEvent_1141_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function DevWidget.DevWidget_C.BndEvt__TemporalAACatmullRomCheck_K2Node_ComponentBoundEvent_1217_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function DevWidget.DevWidget_C.BndEvt__TemporalAAPauseCorrectChek_K2Node_ComponentBoundEvent_1237_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function DevWidget.DevWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DevWidget.DevWidget_C.BndEvt__ComboBoxViewModes1_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void InitDefault(); // Function DevWidget.DevWidget_C.InitDefault // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_DevWidget(int32_t EntryPoint); // Function DevWidget.DevWidget_C.ExecuteUbergraph_DevWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void Pause Game When Menu Open__DelegateSignature(bool Pause Game On Menu Open); // Function DevWidget.DevWidget_C.Pause Game When Menu Open__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Settings File Deleted__DelegateSignature(); // Function DevWidget.DevWidget_C.Settings File Deleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

