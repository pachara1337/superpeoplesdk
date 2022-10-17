// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
// Size: 0x2cff6b10 (Inherited: 0x00)
struct FMagicLeapSharedWorldSharedData {
	struct TArray<struct FGuid> PinIDs; // 0x00(0x10)
	char pad_10[0x2cff6b00]; // 0x10(0x2cff6b00)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
// Size: 0x2cff6b10 (Inherited: 0x00)
struct FMagicLeapSharedWorldAlignmentTransforms {
	struct TArray<struct FTransform> AlignmentTransforms; // 0x00(0x10)
	char pad_10[0x2cff6b00]; // 0x10(0x2cff6b00)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FMagicLeapSharedWorldLocalData {
	struct TArray<struct FMagicLeapSharedWorldPinData> LocalPins; // 0x00(0x10)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// Size: 0x2cff6b20 (Inherited: 0x00)
struct FMagicLeapSharedWorldPinData {
	struct FGuid PinID; // 0x00(0x10)
	struct FMagicLeapARPinState PinState; // 0x10(0x10)
	char pad_20[0x2cff6b00]; // 0x20(0x2cff6b00)
};

