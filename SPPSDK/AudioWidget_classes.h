// WidgetBlueprintGeneratedClass AudioWidget.AudioWidget_C
// Size: 0x2cff6a60 (Inherited: 0x2cff6ae8)
struct UAudioWidget_C : UBravoHotelSettingSubWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct USlotItemWidget_C* Announcer; // 0x2f0(0x08)
	struct USlotItemWidget_C* Effect; // 0x2f8(0x08)
	struct USlotItemWidget_C* Master; // 0x300(0x08)
	struct USlotItemWidget_C* MasterOnOff; // 0x308(0x08)
	struct USlotItemWidget_C* Music; // 0x310(0x08)
	struct UScrollBox* ScrollBox; // 0x318(0x08)
	struct USlotItemWidget_C* UI; // 0x320(0x08)
	struct USlotItemWidget_C* VoiceChanel; // 0x328(0x08)
	struct USlotItemWidget_C* VoiceInput; // 0x330(0x08)
	struct USlotItemWidget_C* VoiceInputMode; // 0x338(0x08)
	struct USlotItemWidget_C* VoiceOutput; // 0x340(0x08)
	struct USubTitleSlotWidget_C*   ; // 0x348(0x08)
	struct USubTitleSlotWidget_C*  ?? ; // 0x350(0x08)
	struct FTimerHandle ScrollBarTimer; // 0x358(0x08)

	void Construct(); // Function AudioWidget.AudioWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function AudioWidget.AudioWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function AudioWidget.AudioWidget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(struct UBravoHotelSettingSlotWidget* Value); // Function AudioWidget.AudioWidget_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_AudioWidget(int32_t EntryPoint); // Function AudioWidget.AudioWidget_C.ExecuteUbergraph_AudioWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

