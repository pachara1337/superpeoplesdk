// WidgetBlueprintGeneratedClass GraphicWidget.GraphicWidget_C
// Size: 0x2cff6b14 (Inherited: 0x2cff6ae8)
struct UGraphicWidget_C : UBravoHotelSettingSubWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct USlotItemWidget_C* Anti; // 0x2f0(0x08)
	struct USubTitleSlotWidget_C* display; // 0x2f8(0x08)
	struct USlotItemWidget_C* DisplayMode; // 0x300(0x08)
	struct USlotItemWidget_C* DLSS; // 0x308(0x08)
	struct USlotItemWidget_C* DLSSFrameGeneration; // 0x310(0x08)
	struct USlotItemWidget_C* DLSSSharpen; // 0x318(0x08)
	struct USlotItemWidget_C* DLSSSuperResolution; // 0x320(0x08)
	struct USlotItemWidget_C* DOF; // 0x328(0x08)
	struct USlotItemWidget_C* Effect; // 0x330(0x08)
	struct USlotItemWidget_C* Foliage; // 0x338(0x08)
	struct USlotItemWidget_C* FOV; // 0x340(0x08)
	struct USlotItemWidget_C* FSR; // 0x348(0x08)
	struct USlotItemWidget_C* Gamma; // 0x350(0x08)
	struct USlotItemWidget_C* GlobalIllumination; // 0x358(0x08)
	struct USlotItemWidget_C* GraphicsRHI; // 0x360(0x08)
	struct USlotItemWidget_C* LanguageSetting; // 0x368(0x08)
	struct USlotItemWidget_C* MaxFrameRate; // 0x370(0x08)
	struct USlotItemWidget_C* MaxLobbyFrameRate; // 0x378(0x08)
	struct USlotItemWidget_C* PP; // 0x380(0x08)
	struct USlotItemWidget_C* Reflex; // 0x388(0x08)
	struct USlotItemWidget_C* RenderingStyle; // 0x390(0x08)
	struct USlotItemWidget_C* Resolution; // 0x398(0x08)
	struct UScrollBox* ScrollBox; // 0x3a0(0x08)
	struct USlotItemWidget_C* Shading; // 0x3a8(0x08)
	struct USlotItemWidget_C* Shadow; // 0x3b0(0x08)
	struct USlotItemWidget_C* Sharpen; // 0x3b8(0x08)
	struct USubTitleSlotWidget_C* SubTitleSlotWidget; // 0x3c0(0x08)
	struct USlotItemWidget_C* TAAU; // 0x3c8(0x08)
	struct USlotItemWidget_C* Texture; // 0x3d0(0x08)
	struct USlotItemWidget_C* v-Sync; // 0x3d8(0x08)
	struct USlotItemWidget_C* ViewDistance; // 0x3e0(0x08)
	struct USlotItemWidget_C* XeSS; // 0x3e8(0x08)
	struct USubTitleSlotWidget_C*  ?? ; // 0x3f0(0x08)
	struct USlotItemWidget_C*  ??반적; // 0x3f8(0x08)
	float OldDisplayModeValue; // 0x400(0x04)
	float OldDisplayResolutionValue; // 0x404(0x04)
	struct FTimerHandle ScrollBarTimer; // 0x408(0x08)
	float ReflexCurrentValue; // 0x410(0x04)

	void NewFunction(); // Function GraphicWidget.GraphicWidget_C.NewFunction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function GraphicWidget.GraphicWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(struct UBravoHotelSettingSlotWidget* Value); // Function GraphicWidget.GraphicWidget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function GraphicWidget.GraphicWidget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function GraphicWidget.GraphicWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_GraphicWidget(int32_t EntryPoint); // Function GraphicWidget.GraphicWidget_C.ExecuteUbergraph_GraphicWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

