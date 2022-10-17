// BlueprintGeneratedClass BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C
// Size: 0x2cff6a48 (Inherited: 0x2cff6a30)
struct ABP-DefaultWheeledVehicle_C : ABravoHotelVehicle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe30(0x08)
	struct UTeamInfoUpdaterComponent* TeamInfoUpdater; // 0xe38(0x08)
	struct UAudioComponent* EngineSound; // 0xe40(0x08)

	void SetWaterLevelZ_Func(); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.SetWaterLevelZ_Func // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	float GetCameraTargetArmLength(); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.GetCameraTargetArmLength // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void SetupCamera(); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.SetupCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(struct FKey Key); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(struct FKey Key); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent(struct FKey Key); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent(struct FKey Key); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_One_K2Node_InputKeyEvent(struct FKey Key); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.InpActEvt_One_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_Two_K2Node_InputKeyEvent(struct FKey Key); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.InpActEvt_Two_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_Three_K2Node_InputKeyEvent(struct FKey Key); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.InpActEvt_Three_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_Four_K2Node_InputKeyEvent(struct FKey Key); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.InpActEvt_Four_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void InpActEvt_Five_K2Node_InputKeyEvent(struct FKey Key); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.InpActEvt_Five_K2Node_InputKeyEvent // (BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void SetWaterLevelZ(); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.SetWaterLevelZ // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnBoosterChanged(bool bIsBoosted); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.K2_OnBoosterChanged // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-DefaultWheeledVehicle(int32_t EntryPoint); // Function BP-DefaultWheeledVehicle.BP-DefaultWheeledVehicle_C.ExecuteUbergraph_BP-DefaultWheeledVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

