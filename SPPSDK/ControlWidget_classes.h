// WidgetBlueprintGeneratedClass ControlWidget.ControlWidget_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6ae8)
struct UControlWidget_C : UBravoHotelSettingSubWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct USlotItemWidget_C* 15XSensitivity; // 0x2f0(0x08)
	struct USlotItemWidget_C* 2XSensitivity; // 0x2f8(0x08)
	struct USlotItemWidget_C* 4XSensitivity; // 0x300(0x08)
	struct USlotItemWidget_C* 6XSensitivity; // 0x308(0x08)
	struct USlotItemWidget_C* 8XSensitivity; // 0x310(0x08)
	struct USlotItemWidget_C* ADSSensitivity; // 0x318(0x08)
	struct USlotItemWidget_C* GeneralSensitivity; // 0x320(0x08)
	struct USlotItemWidget_C* HoldSliding; // 0x328(0x08)
	struct USlotItemWidget_C* HoldTimeSliding; // 0x330(0x08)
	struct USlotItemWidget_C* ReverseLeftAndRight; // 0x338(0x08)
	struct USlotItemWidget_C* ReverseUpAndDown; // 0x340(0x08)
	struct UScrollBox* ScrollBox; // 0x348(0x08)
	struct USlotItemWidget_C* TargetingSensitivity; // 0x350(0x08)
	struct USlotItemWidget_C* ToggleADS; // 0x358(0x08)
	struct USlotItemWidget_C* ToggleAOS; // 0x360(0x08)
	struct USlotItemWidget_C* ToggleCrouch; // 0x368(0x08)
	struct USlotItemWidget_C* ToggleExLean; // 0x370(0x08)
	struct USlotItemWidget_C* ToggleFreeLook; // 0x378(0x08)
	struct USlotItemWidget_C* ToggleSprint; // 0x380(0x08)
	struct USlotItemWidget_C* ToggleSteadyAim; // 0x388(0x08)
	struct USlotItemWidget_C* ToggleWalk; // 0x390(0x08)
	struct USlotItemWidget_C* TotalSensitivity; // 0x398(0x08)
	struct USlotItemWidget_C* UsingDetailSensitivity; // 0x3a0(0x08)
	struct USlotItemWidget_C* VehicleDriverSensitivity; // 0x3a8(0x08)
	struct UVerticalBox* VerticalBox; // 0x3b0(0x08)
	struct USlotItemWidget_C* VerticlaModifier; // 0x3b8(0x08)
	struct USubTitleSlotWidget_C*  ??; // 0x3c0(0x08)
	struct USubTitleSlotWidget_C*  ??코 ; // 0x3c8(0x08)
	struct USubTitleSlotWidget_C*  ??  ; // 0x3d0(0x08)
	struct FTimerHandle ScrollBarTimer; // 0x3d8(0x08)

	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function ControlWidget.ControlWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void DelegateChangeValue_Event(struct UBravoHotelSettingSlotWidget* Value); // Function ControlWidget.ControlWidget_C.DelegateChangeValue_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function ControlWidget.ControlWidget_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function ControlWidget.ControlWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ControlWidget(int32_t EntryPoint); // Function ControlWidget.ControlWidget_C.ExecuteUbergraph_ControlWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

