// WidgetBlueprintGeneratedClass SettingSubButtonWidget.SettingSubButtonWidget_C
// Size: 0x2cff6b14 (Inherited: 0x2cff6a88)
struct USettingSubButtonWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBorder* Border; // 0x290(0x08)
	struct UButton* Button; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UTextBlock* Title_Text; // 0x2a8(0x08)
	int32_t Index; // 0x2b0(0x04)
	struct FLinearColor DeActive; // 0x2b4(0x10)
	struct FLinearColor Active; // 0x2c4(0x10)
	struct FMulticastInlineDelegate ClickEventDispatcher; // 0x2d8(0x10)
	struct FText Title; // 0x2e8(0x18)
	enum class ESettingBigType Type; // 0x300(0x01)
	bool IsActive; // 0x301(0x01)
	struct FLinearColor Over; // 0x304(0x10)
	char pad_2CFF6B0E[0x6]; // 0x2cff6b0e(0x06)

	void Click Event(int32_t Index, enum class ESettingBigType Type); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.Click Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.BndEvt__Button_221_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void UpdateText(); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.UpdateText // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_SettingSubButtonWidget(int32_t EntryPoint); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.ExecuteUbergraph_SettingSubButtonWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void ClickEventDispatcher__DelegateSignature(int32_t Index, enum class ESettingBigType Type); // Function SettingSubButtonWidget.SettingSubButtonWidget_C.ClickEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

