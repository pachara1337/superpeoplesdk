// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8 {
	SIT_Float = 0,
	SIT_Float2 = 1,
	SIT_Float3 = 2,
	SIT_Float4 = 3,
	SIT_Integer = 4,
	SIT_Image = 5,
	SIT_Unused = 6,
	SIT_Unused = 7,
	SIT_Integer2 = 8,
	SIT_Integer3 = 9,
	SIT_Integer4 = 10,
	SIT_MAX = 11
};

// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8 {
	SGM_PlatformDefault = 0,
	SGM_Baked = 1,
	SGM_OnLoadSync = 2,
	SGM_OnLoadSyncAndCache = 3,
	SGM_OnLoadAsync = 4,
	SGM_OnLoadAsyncAndCache = 5,
	SGM_MAX = 6
};

// Enum SubstanceCore.EDefaultSubstanceTextureSize
enum class EDefaultSubstanceTextureSize : uint8 {
	Size = 0,
	Size = 4,
	Size = 5,
	Size = 6,
	Size = 7,
	Size = 8,
	Size = 9,
	Size = 10,
	Size = 11,
	Size = 12,
	Size_MAX = 13
};

// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8 {
	SET_CPU = 0,
	SET_GPU = 1,
	SET_MAX = 2
};

// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8 {
	ERL = 0,
	ERL = 1,
	ERL = 2,
	ERL = 3,
	ERL = 4,
	ERL = 5,
	ERL = 6,
	ERL = 7,
	ERL = 8,
	ERL = 9,
	ERL_MAX = 10
};

// ScriptStruct SubstanceCore.SubstanceInstanceDesc
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FSubstanceInstanceDesc {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FSubstanceInputDesc> Inputs; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct SubstanceCore.SubstanceInputDesc
// Size: 0x2cffe018 (Inherited: 0x00)
struct FSubstanceInputDesc {
	struct FString Name; // 0x00(0x10)
	enum class ESubstanceInputType Type; // 0x10(0x01)
	char pad_11[0x2cffe007]; // 0x11(0x2cffe007)
};

// ScriptStruct SubstanceCore.SubstanceFloatInputDesc
// Size: 0x2cff6948 (Inherited: 0x2cffe018)
struct FSubstanceFloatInputDesc : FSubstanceInputDesc {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> MAX; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.SubstanceIntInputDesc
// Size: 0x2cff6948 (Inherited: 0x2cffe018)
struct FSubstanceIntInputDesc : FSubstanceInputDesc {
	struct TArray<int32_t> Min; // 0x18(0x10)
	struct TArray<int32_t> MAX; // 0x28(0x10)
	struct TArray<int32_t> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.SubstanceConnection
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FSubstanceConnection {
	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

