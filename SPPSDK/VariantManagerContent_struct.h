// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8 {
	Undefined = 0,
	Generic = 1,
	RelativeLocation = 2,
	RelativeRotation = 4,
	RelativeScale3D = 8,
	Visibility = 16,
	Material = 32,
	Color = 64,
	Option = 128,
	EPropertyValueCategory_MAX = 129
};

// ScriptStruct VariantManagerContent.FunctionCaller
// Size: 0x2cff6a0c (Inherited: 0x00)
struct FFunctionCaller {
	struct FName FunctionName; // 0x00(0x0c)
	char pad_C[0x2cff6a00]; // 0x0c(0x2cff6a00)
};

// ScriptStruct VariantManagerContent.CapturedPropSegment
// Size: 0x2cff6928 (Inherited: 0x00)
struct FCapturedPropSegment {
	struct FString PropertyName; // 0x00(0x10)
	int32_t PropertyIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ComponentName; // 0x18(0x10)
	char pad_28[0x2cff6900]; // 0x28(0x2cff6900)
};

