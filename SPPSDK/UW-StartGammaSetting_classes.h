// WidgetBlueprintGeneratedClass UW-StartGammaSetting.UW-StartGammaSetting_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6a88)
struct UUW-StartGammaSetting_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button_Ok; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct USlider* Slider_Gamma; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_Gamma; // 0x2c0(0x08)
	struct UBP_GameSettings_C* Game Settings; // 0x2c8(0x08)
	float Gamma Strength Slider Value; // 0x2d0(0x04)
	struct FText Gamma Strength Edit Value; // 0x2d8(0x18)
	struct FMulticastInlineDelegate ClosedWidgetDelegate; // 0x2f0(0x10)
	char pad_2CFF6AFC[0x4]; // 0x2cff6afc(0x04)

	void Refresh Video Settings(); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.Refresh Video Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Refresh Gamma Intensity(float Strength); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.Refresh Gamma Intensity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.BndEvt__Slider_138_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.BndEvt__Button_479_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-StartGammaSetting(int32_t EntryPoint); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.ExecuteUbergraph_UW-StartGammaSetting // (Final|UbergraphFunction) // @ game+0x2bad3b0
	void ClosedWidgetDelegate__DelegateSignature(); // Function UW-StartGammaSetting.UW-StartGammaSetting_C.ClosedWidgetDelegate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

