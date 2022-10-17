// BlueprintGeneratedClass Exploration_Lobby2.SequenceDirector_C
// Size: 0x2cff6a70 (Inherited: 0x2cff6a38)
struct USequenceDirector_C : ULevelSequenceDirector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x38(0x08)
	struct TArray<struct UStaticMeshComponent*> LocalMeshComponents; // 0x40(0x10)
	struct TArray<struct UStaticMeshComponent*> SequencerMeshComponents; // 0x50(0x10)
	float LobbyTransitionValue; // 0x60(0x04)
	struct FTimerHandle LobbyTransitionTimerHandle; // 0x68(0x08)
	char pad_2CFF6A6C[0x4]; // 0x2cff6a6c(0x04)

	void SequenceEvent__ENTRYPOINTSequenceDirector(); // Function Exploration_Lobby2.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTSequenceDirector(); // Function Exploration_Lobby2.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTSequenceDirector(); // Function Exploration_Lobby2.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTSequenceDirector(); // Function Exploration_Lobby2.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitMesh(int32_t SlotIndex, struct FString ObjectTagName); // Function Exploration_Lobby2.SequenceDirector_C.InitMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayWhooshSound(); // Function Exploration_Lobby2.SequenceDirector_C.PlayWhooshSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ApplyGachaMesh(); // Function Exploration_Lobby2.SequenceDirector_C.ApplyGachaMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function Exploration_Lobby2.SequenceDirector_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MaterialTransition(); // Function Exploration_Lobby2.SequenceDirector_C.MaterialTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function Exploration_Lobby2.SequenceDirector_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void LobbyTransitionEnded(); // Function Exploration_Lobby2.SequenceDirector_C.LobbyTransitionEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint); // Function Exploration_Lobby2.SequenceDirector_C.ExecuteUbergraph_SequenceDirector // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

