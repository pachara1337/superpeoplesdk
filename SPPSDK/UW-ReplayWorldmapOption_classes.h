// WidgetBlueprintGeneratedClass UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a88)
struct UUW-ReplayWorldMapOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCanvasPanel* Canvas_Main; // 0x290(0x08)
	struct UCheckBox* CB_DrawDeathPosition; // 0x298(0x08)
	struct UCheckBox* CB_DrawFireDirection; // 0x2a0(0x08)
	struct UCheckBox* CB_DrawHitted; // 0x2a8(0x08)
	struct UCheckBox* CB_DrawPersonalSupplyBox; // 0x2b0(0x08)
	struct UCheckBox* CB_TransportDropBox; // 0x2b8(0x08)
	struct ABP-MK3DReplayController_C* ReplayController; // 0x2c0(0x08)
	struct UBravoHotelMainWidget* MainWidget; // 0x2c8(0x08)
	struct ABravoHotelPlayerHUD* PlayerHUD; // 0x2d0(0x08)

	void Init(); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__CB_DrawFireDirection_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawFireDirection_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawHitted_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__CB_DrawDeathPosition_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawDeathPosition_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_DrawPersonalSupplyBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.BndEvt__CB_TransportDropBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ReplayWorldMapOption(int32_t EntryPoint); // Function UW-ReplayWorldmapOption.UW-ReplayWorldMapOption_C.ExecuteUbergraph_UW-ReplayWorldMapOption // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

