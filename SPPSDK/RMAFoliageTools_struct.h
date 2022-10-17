// Enum RMAFoliageTools.ERMAFoliageToolsIncludeMode
enum class ERMAFoliageToolsIncludeMode : uint8 {
	RMAIM_All = 0,
	RMAIM_Selection = 1,
	RMAIM_MAX = 2
};

// ScriptStruct RMAFoliageTools.RMAFoliageToolsBuffer
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FRMAFoliageToolsBuffer {
	struct TArray<struct FTransform> Transform; // 0x00(0x10)
	struct TArray<struct UStaticMesh*> Mesh; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

