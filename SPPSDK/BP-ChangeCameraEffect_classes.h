// WidgetBlueprintGeneratedClass BP-ChangeCameraEffect.BP-ChangeCameraEffect_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a88)
struct UBP-ChangeCameraEffect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBP-ChangeCameraEffectSlot_C* BP-ChangeCameraEffectSlot; // 0x290(0x08)
	struct UBP-ChangeCameraEffectSlot_C* BP-ChangeCameraEffectSlot; // 0x298(0x08)
	struct UBP-ChangeCameraEffectSlot_C* BP-ChangeCameraEffectSlot; // 0x2a0(0x08)
	struct UBP-ChangeCameraEffectSlot_C* BP-ChangeCameraEffectSlot; // 0x2a8(0x08)
	struct UButton* Button; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct AActor* Temp; // 0x2c0(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP-ChangeCameraEffect.BP-ChangeCameraEffect_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_157_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BP-ChangeCameraEffect.BP-ChangeCameraEffect_C.BndEvt__Button_157_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-ChangeCameraEffect(int32_t EntryPoint); // Function BP-ChangeCameraEffect.BP-ChangeCameraEffect_C.ExecuteUbergraph_BP-ChangeCameraEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

