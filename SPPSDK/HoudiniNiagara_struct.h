// Enum HoudiniNiagara.EHoudiniAttributes
enum class EHoudiniAttributes : uint8 {
	HOUDINI_ATTR_BEGIN = 0,
	Position = 0,
	Normal = 1,
	Time = 2,
	POINTID = 3,
	ALIVE = 4,
	LIFE = 5,
	Color = 6,
	ALPHA = 7,
	Velocity = 8,
	Type = 9,
	Impulse = 10,
	HOUDINI_ATTR_SIZE = 11,
	HOUDINI_ATTR_END = 10,
	EHoudiniAttributes_MAX = 12
};

// ScriptStruct HoudiniNiagara.PointIndexes
// Size: 0x2cffea10 (Inherited: 0x00)
struct FPointIndexes {
	struct TArray<int32_t> RowIndexes; // 0x00(0x10)
	char pad_10[0x2cffea00]; // 0x10(0x2cffea00)
};

// ScriptStruct HoudiniNiagara.HoudiniEvent
// Size: 0x2cff6948 (Inherited: 0x00)
struct FHoudiniEvent {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	float Impulse; // 0x18(0x04)
	struct FVector Velocity; // 0x1c(0x0c)
	int32_t POINTID; // 0x28(0x04)
	float Time; // 0x2c(0x04)
	float LIFE; // 0x30(0x04)
	struct FLinearColor Color; // 0x34(0x10)
	int32_t Type; // 0x44(0x04)
	char pad_48[0x2cff6900]; // 0x48(0x2cff6900)
};

