// Class OnlineSubsystem.NamedInterfaces
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct UNamedInterfaces : UObject {
	struct TArray<struct FNamedInterface> NamedInterfaces; // 0x30(0x10)
	struct TArray<struct FNamedInterfaceDef> NamedInterfaceDefs; // 0x40(0x10)
	char pad_2CFF6950[0x118]; // 0x2cff6950(0x118)
};

// Class OnlineSubsystem.TurnBasedMatchInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UTurnBasedMatchInterface : UInterface {

	void OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMatchEnded(struct FString Match); // Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
};

