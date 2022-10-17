// BlueprintGeneratedClass BP_KeyInput.BP_KeyInput_C
// Size: 0x2cff6a78 (Inherited: 0x2cff6930)
struct UBP_KeyInput_C : UObject {
	struct FKey Key Input; // 0x30(0x20)
	bool Analog Use Negative Axis; // 0x50(0x01)
	float Analog Previous Axis Value; // 0x54(0x04)
	float Analog Current Axis Value; // 0x58(0x04)
	float World Delta Seconds; // 0x5c(0x04)
	bool Input is Using Delta; // 0x60(0x01)
	struct FString Display Name; // 0x68(0x10)
	char pad_2CFF696E[0x10a]; // 0x2cff696e(0x10a)

	void Generate Display Name(); // Function BP_KeyInput.BP_KeyInput_C.Generate Display Name // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Save Key Input(struct UBP_GameSettings_C* Game Settings, struct FSKeyActionSave& KeySave); // Function BP_KeyInput.BP_KeyInput_C.Save Key Input // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Analog Axis Value(float World Delta Seconds, struct APlayerController* Player Controller); // Function BP_KeyInput.BP_KeyInput_C.Update Analog Axis Value // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Key Input Current State(struct APlayerController* Controller, float& Axis Value, bool& Down, bool& Just Pressed, bool& Just Released); // Function BP_KeyInput.BP_KeyInput_C.Key Input Current State // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init Key Input(struct FSKeyInput Key Input, struct UBP_KeyInput_C*& Input); // Function BP_KeyInput.BP_KeyInput_C.Init Key Input // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

