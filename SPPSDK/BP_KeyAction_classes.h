// BlueprintGeneratedClass BP_KeyAction.BP_KeyAction_C
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UBP_KeyAction_C : UObject {
	struct FString Action Name; // 0x30(0x10)
	struct FString Category; // 0x40(0x10)
	struct TArray<struct UBP_KeyMapping_C*> Key Mappings; // 0x50(0x10)
	char pad_2CFF6960[0x100]; // 0x2cff6960(0x100)

	void Get Mapping(struct FString Mapping Name, struct UBP_KeyMapping_C*& Mapping, bool& SUCCESS); // Function BP_KeyAction.BP_KeyAction_C.Get Mapping // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Load Action(struct UBP_GameSettings_C* Game Settings); // Function BP_KeyAction.BP_KeyAction_C.Load Action // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Save Action(struct UBP_GameSettings_C* Game Settings); // Function BP_KeyAction.BP_KeyAction_C.Save Action // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Key Action Current State(struct APlayerController* Player Controller, float& Action Axis Value, bool& Just Pressed, bool& Just Released); // Function BP_KeyAction.BP_KeyAction_C.Key Action Current State // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init Key Action(struct FSKeyAction Key Action, struct FString Action Name, struct UBP_KeyAction_C*& Action); // Function BP_KeyAction.BP_KeyAction_C.Init Key Action // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

