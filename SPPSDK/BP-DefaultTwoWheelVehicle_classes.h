// BlueprintGeneratedClass BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a68)
struct ABP-DefaultTwoWheelVehicle_C : ABP-DefaultGroundVehicle_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe68(0x08)
	struct FRotator AdditionalStuntRotation; // 0xe70(0x0c)
	bool Pressed_Pitch; // 0xe7c(0x01)
	bool Pressed_Roll; // 0xe7d(0x01)
	bool AutoRotate_Roll; // 0xe7e(0x01)
	bool CanStunt_Roll; // 0xe7f(0x01)
	float StuntValue_Pitch; // 0xe80(0x04)
	float StuntValue_Roll; // 0xe84(0x04)
	float StuntInterpSpeed_Pitch; // 0xe88(0x04)
	float StuntInterpSpeed_Roll; // 0xe8c(0x04)
	float StuntInterpSpeedRate; // 0xe90(0x04)
	float StuntDirection_Pitch; // 0xe94(0x04)
	float StuntDirection_Roll; // 0xe98(0x04)
	float TargetStunt_Pitch; // 0xe9c(0x04)
	float TargetStunt_Roll; // 0xea0(0x04)
	float ParkingForceValue; // 0xea4(0x04)
	float RaisingForceValue; // 0xea8(0x04)
	struct FTimerHandle Handle_SetParkingForce; // 0xeb0(0x08)
	char pad_2CFF6AB4[0x4]; // 0x2cff6ab4(0x04)

	void Stunt(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.Stunt // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ServerAddStuntRotation(struct FRotator AdditionalRot); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ServerAddStuntRotation // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartPitch(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartPitch // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopPitch(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopPitch // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalcStuntValuePitch(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValuePitch // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalcStuntValueRoll(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.CalcStuntValueRoll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartRoll(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StartRoll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopRoll(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StopRoll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetStunt(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ResetStunt // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StuntSpeedInterp(); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.StuntSpeedInterp // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-DefaultTwoWheelVehicle(int32_t EntryPoint); // Function BP-DefaultTwoWheelVehicle.BP-DefaultTwoWheelVehicle_C.ExecuteUbergraph_BP-DefaultTwoWheelVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

