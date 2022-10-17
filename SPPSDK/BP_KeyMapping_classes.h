// BlueprintGeneratedClass BP_KeyMapping.BP_KeyMapping_C
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UBP_KeyMapping_C : UObject {
	struct FString Name; // 0x30(0x10)
	float Scale; // 0x40(0x04)
	struct UBP_KeyCombination_C* Primary Combination; // 0x48(0x08)
	struct UBP_KeyCombination_C* Secondary Combination; // 0x50(0x08)
	struct UBP_KeyAction_C* Parent Action; // 0x58(0x08)
	char pad_2CFF695C[0x104]; // 0x2cff695c(0x104)

	void Revert To Default KeyMapping(); // Function BP_KeyMapping.BP_KeyMapping_C.Revert To Default KeyMapping // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Load Key Mapping(struct UBP_GameSettings_C* Game Settings, struct FString Action Name, struct FString Category); // Function BP_KeyMapping.BP_KeyMapping_C.Load Key Mapping // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Save Key Mapping(struct UBP_GameSettings_C* Game Settings, struct FSKeyActionSave& KeySave); // Function BP_KeyMapping.BP_KeyMapping_C.Save Key Mapping // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Key Mapping Current State(struct APlayerController* Player Controller, float& Mapping Value, bool& Is Active, bool& Just Pressed, bool& Just Released); // Function BP_KeyMapping.BP_KeyMapping_C.Key Mapping Current State // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init Key Mapping(struct FSKeyMapping Key Mapping, struct UBP_KeyMapping_C*& Mapping); // Function BP_KeyMapping.BP_KeyMapping_C.Init Key Mapping // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

