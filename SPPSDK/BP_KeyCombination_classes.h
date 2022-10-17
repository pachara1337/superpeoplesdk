// BlueprintGeneratedClass BP_KeyCombination.BP_KeyCombination_C
// Size: 0x2cff6aa0 (Inherited: 0x2cff6930)
struct UBP_KeyCombination_C : UObject {
	struct FString Name; // 0x30(0x10)
	struct TArray<struct UBP_KeyInput_C*> Key Inputs; // 0x40(0x10)
	struct TArray<struct FSKeyInput> Default Combination; // 0x50(0x10)
	bool Can't Be None; // 0x60(0x01)
	struct TArray<struct UBP_KeyConflict_C*> Conflicting Mappings Blocked; // 0x68(0x10)
	struct TArray<struct UBP_KeyConflict_C*> Conflicting Mappings Info; // 0x78(0x10)
	struct FMulticastInlineDelegate Combination Updated; // 0x88(0x10)
	struct UBP_KeyMapping_C* Parent Mapping; // 0x98(0x08)
	char pad_2CFF6999[0x107]; // 0x2cff6999(0x107)

	void Get Key Combination Display Name(struct FString Separator, struct FString No Key Display, enum class EKeyCombinationDisplay Display Type, struct FString& Display Name); // Function BP_KeyCombination.BP_KeyCombination_C.Get Key Combination Display Name // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Add Key Input(struct FSKeyInput InputPin, struct UBP_KeyInput_C*& Input); // Function BP_KeyCombination.BP_KeyCombination_C.Add Key Input // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Equal All Keys(struct TArray<struct FSKeyInput>& Combination, bool& Result); // Function BP_KeyCombination.BP_KeyCombination_C.Equal All Keys // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Equal All Conflicts(struct TArray<struct FSKeyConflict>& Conflicts, bool& Result); // Function BP_KeyCombination.BP_KeyCombination_C.Equal All Conflicts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Evaluate Blocking Combinations(struct APlayerController* Player Controller, bool& Is Active, bool& Just Pressed, bool& Just Released); // Function BP_KeyCombination.BP_KeyCombination_C.Evaluate Blocking Combinations // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Clear Conflicting Combinations(); // Function BP_KeyCombination.BP_KeyCombination_C.Clear Conflicting Combinations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Add Conflicting Combination(struct UBP_KeyCombination_C* Conflicted Combination, enum class EKeyConflict Conflicted ); // Function BP_KeyCombination.BP_KeyCombination_C.Add Conflicting Combination // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Detect Conflict(struct UBP_KeyCombination_C* Input Combination, enum class EKeyConflict& Conflict Type); // Function BP_KeyCombination.BP_KeyCombination_C.Detect Conflict // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Replace Key Combination(struct TArray<struct FSKeyInput>& Key Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Replace Key Combination // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Load Key Combination(struct UBP_GameSettings_C* Game Settings, struct FString Action Name, struct FString Category, struct FString Name, bool Primary); // Function BP_KeyCombination.BP_KeyCombination_C.Load Key Combination // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Save Key Combination(struct UBP_GameSettings_C* Game Settings, struct FSKeyActionSave& KeySave); // Function BP_KeyCombination.BP_KeyCombination_C.Save Key Combination // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Key Combination Current State(struct APlayerController* Player Controller, bool Ignore Conflicts, float& Axis Value, bool& Is Active, bool& Just Pressed, bool& Just Released); // Function BP_KeyCombination.BP_KeyCombination_C.Key Combination Current State // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init Key Combination(struct FString Name, bool Can't Be None, struct TArray<struct FSKeyInput>& Key Combination, struct UBP_KeyCombination_C*& Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Init Key Combination // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Combination Updated__DelegateSignature(struct UBP_KeyCombination_C* Combination); // Function BP_KeyCombination.BP_KeyCombination_C.Combination Updated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

