// Class StandinActor.StandInMeshActor
// Size: 0x2cff6b10 (Inherited: 0x2cff6b08)
struct AStandInMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x308(0x08)
};

// Class StandinActor.StandinProxyContainer
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UStandinProxyContainer : UObject {
	struct TArray<struct FStandinProxyEntry> Standins; // 0x30(0x10)
	char pad_2CFF6940[0x100]; // 0x2cff6940(0x100)
};

