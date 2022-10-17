// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMesh
// Size: 0x2cffea18 (Inherited: 0x00)
struct FMagicLeapHandMesh {
	int32_t Version; // 0x00(0x04)
	int32_t DataCount; // 0x04(0x04)
	struct TArray<struct FMagicLeapHandMeshBlock> Data; // 0x08(0x10)
	char pad_18[0x2cffea00]; // 0x18(0x2cffea00)
};

// ScriptStruct MagicLeapHandMeshing.MagicLeapHandMeshBlock
// Size: 0x2cff6928 (Inherited: 0x00)
struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x00(0x04)
	int32_t VertexCount; // 0x04(0x04)
	struct TArray<struct FVector> Vertex; // 0x08(0x10)
	struct TArray<int32_t> Index; // 0x18(0x10)
	char pad_28[0x2cff6900]; // 0x28(0x2cff6900)
};

