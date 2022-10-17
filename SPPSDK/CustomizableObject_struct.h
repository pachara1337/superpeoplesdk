// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8 {
	All = 0,
	ClientOnly = 1,
	ECustomizableObjectRelevancy_MAX = 2
};

// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8 {
	Planar = 0,
	Cylindrical = 1,
	Wrapping = 2,
	ECustomizableObjectProjectorType_MAX = 3
};

// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8 {
	Full = 0,
	Local = 1,
	LocalAndChildren = 2,
	AddWorkingSetNoChildren = 3,
	AddWorkingSetAndChildren = 4,
	EMutableCompileMeshType_MAX = 5
};

// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8 {
	COGT_TOGGLE = 0,
	COGT_ALL = 1,
	COGT_ONE = 2,
	COGT_ONE_OR_NONE = 3,
	COGT_MAX = 4
};

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8 {
	None = 0,
	Bool = 1,
	Int = 2,
	Float = 3,
	Color = 4,
	Projector = 5,
	Texture = 6,
	EMutableParameterType_MAX = 7
};

// ScriptStruct CustomizableObject.ParameterDecorations
// Size: 0x2cffea10 (Inherited: 0x00)
struct FParameterDecorations {
	struct TArray<struct UTexture2D*> Images; // 0x00(0x10)
	char pad_10[0x2cffea00]; // 0x10(0x2cffea00)
};

// ScriptStruct CustomizableObject.GeneratedMaterial
// Size: 0x2cffea10 (Inherited: 0x00)
struct FGeneratedMaterial {
	struct TArray<struct FGeneratedTexture> Textures; // 0x00(0x10)
	char pad_10[0x2cffea00]; // 0x10(0x2cffea00)
};

// ScriptStruct CustomizableObject.GeneratedTexture
// Size: 0x2cff6b20 (Inherited: 0x00)
struct FGeneratedTexture {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
	char pad_20[0x2cff6b00]; // 0x20(0x2cff6b00)
};

// ScriptStruct CustomizableObject.GeneratedMesh
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FGeneratedMesh {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* Mesh; // 0x08(0x08)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct CustomizableObject.CustomizableObjectMeshToMeshVertData
// Size: 0x2cff6c40 (Inherited: 0x00)
struct FCustomizableObjectMeshToMeshVertData {
	struct FVector4 PositionBaryCoordsAndDist; // 0x00(0x10)
	struct FVector4 NormalBaryCoordsAndDist; // 0x10(0x10)
	struct FVector4 TangentBaryCoordsAndDist; // 0x20(0x10)
	uint16_t SourceMeshVertIndices[0x4]; // 0x30(0x08)
	uint32_t SourceAssetIndex; // 0x38(0x04)
	uint32_t SourceAssetLodIndex; // 0x3c(0x04)
	char pad_40[0x2cff6c00]; // 0x40(0x2cff6c00)
};

// ScriptStruct CustomizableObject.ClothDataInfo
// Size: 0x2cff6a0c (Inherited: 0x00)
struct FClothDataInfo {
	int32_t MeshToMeshDataStartIndex; // 0x00(0x04)
	int32_t MeshToMeshDataCount; // 0x04(0x04)
	int32_t AssetLodIndex; // 0x08(0x04)
	char pad_C[0x2cff6a00]; // 0x0c(0x2cff6a00)
};

// ScriptStruct CustomizableObject.MorphTargetVertexIndex
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FMorphTargetVertexIndex {
	int32_t MorphIndex; // 0x00(0x04)
	int32_t VertexIndex; // 0x04(0x04)
	char pad_8[0x2cff6a00]; // 0x08(0x2cff6a00)
};

// ScriptStruct CustomizableObject.MaskOutTexture
// Size: 0x2cffea18 (Inherited: 0x00)
struct FMaskOutTexture {
	int32_t SizeX; // 0x00(0x04)
	int32_t SizeY; // 0x04(0x04)
	struct TArray<uint32_t> Data; // 0x08(0x10)
	char pad_18[0x2cffea00]; // 0x18(0x2cffea00)
};

// ScriptStruct CustomizableObject.MutableModelParameterProperties
// Size: 0x2cff6d20 (Inherited: 0x00)
struct FMutableModelParameterProperties {
	struct FString Name; // 0x00(0x10)
	enum class EMutableParameterType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t ImageDescriptionCount; // 0x14(0x04)
	struct TArray<struct FMutableModelParameterValue> PossibleValues; // 0x18(0x10)
	struct FMutableParamUIMetadata ParamUIMetadata; // 0x28(0xf8)
	char pad_120[0x2cff6c00]; // 0x120(0x2cff6c00)
};

// ScriptStruct CustomizableObject.MutableParamUIMetadata
// Size: 0x2cffdaf8 (Inherited: 0x00)
struct FMutableParamUIMetadata {
	struct FString ObjectFriendlyName; // 0x00(0x10)
	struct FString UISectionName; // 0x10(0x10)
	int32_t UIOrder; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftObjectPtr<UTexture2D> UIThumbnail; // 0x28(0x30)
	struct TMap<struct FString, struct FString> ExtraInformation; // 0x58(0x50)
	struct TMap<struct FString, struct TSoftObjectPtr<UObject>> ExtraAssets; // 0xa8(0x50)
	char pad_F8[0x2cffda00]; // 0xf8(0x2cffda00)
};

// ScriptStruct CustomizableObject.MutableModelParameterValue
// Size: 0x2cffe018 (Inherited: 0x00)
struct FMutableModelParameterValue {
	struct FString Name; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x2cffe004]; // 0x14(0x2cffe004)
};

// ScriptStruct CustomizableObject.MutableModelImageProperties
// Size: 0x2cffea20 (Inherited: 0x00)
struct FMutableModelImageProperties {
	struct FString TextureParameterName; // 0x00(0x10)
	enum class TextureFilter Filter; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char SRGB : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t LODBias; // 0x18(0x04)
	char pad_1C[0x2cffea04]; // 0x1c(0x2cffea04)
};

// ScriptStruct CustomizableObject.CustomizableObjectExportOptions
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FCustomizableObjectExportOptions {
	bool bTextureCompression; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString TargetPlatform; // 0x08(0x10)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

// ScriptStruct CustomizableObject.CompilationOptions
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FCompilationOptions {
	bool bTextureCompression; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t OptimizationLevel; // 0x04(0x04)
	bool bUseParallelCompilation; // 0x08(0x01)
	bool bUseDiskCompilation; // 0x09(0x01)
	char pad_A[0x2cff6a16]; // 0x0a(0x2cff6a16)
};

// ScriptStruct CustomizableObject.ProfileParameterDat
// Size: 0x2cff6970 (Inherited: 0x00)
struct FProfileParameterDat {
	struct FString ProfileName; // 0x00(0x10)
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x10(0x10)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x20(0x10)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x30(0x10)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x40(0x10)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x50(0x10)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x60(0x10)
	char pad_70[0x2cff6900]; // 0x70(0x2cff6900)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
// Size: 0x2cff6968 (Inherited: 0x00)
struct FCustomizableObjectProjectorParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	struct FCustomizableObjectProjector Value; // 0x10(0x38)
	struct FString UID; // 0x48(0x10)
	struct TArray<struct FCustomizableObjectProjector> RangeValues; // 0x58(0x10)
	char pad_68[0x2cff6900]; // 0x68(0x2cff6900)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
// Size: 0x2cff6a38 (Inherited: 0x00)
struct FCustomizableObjectProjector {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector Up; // 0x18(0x0c)
	struct FVector Scale; // 0x24(0x0c)
	enum class ECustomizableObjectProjectorType ProjectionType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Angle; // 0x34(0x04)
	char pad_38[0x2cff6a00]; // 0x38(0x2cff6a00)
};

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
// Size: 0x2cff6930 (Inherited: 0x00)
struct FCustomizableObjectVectorParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
	char pad_30[0x2cff6900]; // 0x30(0x2cff6900)
};

// ScriptStruct CustomizableObject.CustomizableObjectTextureParameterValue
// Size: 0x2cff6928 (Inherited: 0x00)
struct FCustomizableObjectTextureParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	uint64_t ParameterValue; // 0x10(0x08)
	struct FString UID; // 0x18(0x10)
	char pad_28[0x2cff6900]; // 0x28(0x2cff6900)
};

// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
// Size: 0x2cff6938 (Inherited: 0x00)
struct FCustomizableObjectFloatParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UID; // 0x18(0x10)
	struct TArray<float> ParameterRangeValues; // 0x28(0x10)
	char pad_38[0x2cff6900]; // 0x38(0x2cff6900)
};

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
// Size: 0x2cff6940 (Inherited: 0x00)
struct FCustomizableObjectIntParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	struct FString ParameterValueName; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
	struct TArray<struct FString> ParameterRangeValueNames; // 0x30(0x10)
	char pad_40[0x2cff6900]; // 0x40(0x2cff6900)
};

// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
// Size: 0x2cff6928 (Inherited: 0x00)
struct FCustomizableObjectBoolParameterValue {
	struct FString ParameterName; // 0x00(0x10)
	bool ParameterValue; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString UID; // 0x18(0x10)
	char pad_28[0x2cff6900]; // 0x28(0x2cff6900)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// Size: 0x2cff6930 (Inherited: 0x00)
struct FCustomizableObjectIdentifier {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString CustomizableObjectName; // 0x10(0x10)
	struct FString Guid; // 0x20(0x10)
	char pad_30[0x2cff6900]; // 0x30(0x2cff6900)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdPair
// Size: 0x2cffea20 (Inherited: 0x00)
struct FCustomizableObjectIdPair {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString CustomizableObjectName; // 0x10(0x10)
	char pad_20[0x2cffea00]; // 0x20(0x2cffea00)
};

// ScriptStruct CustomizableObject.CustomizedMaterialTexture2D
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FCustomizedMaterialTexture2D {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture2D* Texture; // 0x10(0x08)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FPendingReleaseSkeletalMeshInfo {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	double Timestamp; // 0x08(0x08)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct CustomizableObject.ParameterUIData
// Size: 0x2cff6928 (Inherited: 0x00)
struct FParameterUIData {
	struct FString Name; // 0x00(0x10)
	struct FMutableParamUIMetadata ParamUIMetadata; // 0x10(0xf8)
	enum class EMutableParameterType Type; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct FIntegerParameterUIData> ArrayIntegerParameterOption; // 0x110(0x10)
	enum class ECustomizableObjectGroupType IntegerParameterGroupType; // 0x120(0x01)
	bool bDontCompressRuntimeTextures; // 0x121(0x01)
	char pad_122[0x2cff6806]; // 0x122(0x2cff6806)
};

// ScriptStruct CustomizableObject.IntegerParameterUIData
// Size: 0x2cffea08 (Inherited: 0x00)
struct FIntegerParameterUIData {
	struct FString Name; // 0x00(0x10)
	struct FMutableParamUIMetadata ParamUIMetadata; // 0x10(0xf8)
	char pad_108[0x2cffe900]; // 0x108(0x2cffe900)
};

