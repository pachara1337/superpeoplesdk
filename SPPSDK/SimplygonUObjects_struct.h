// Enum SimplygonUObjects.EGeometryDataFieldType
enum class EGeometryDataFieldType : uint8 {
	Coords = 0,
	TexCoords = 1,
	Normals = 2,
	Tangents = 3,
	Bitangents = 4,
	Colors = 5,
	TriangleIds = 6,
	MaterialIds = 7,
	EGeometryDataFieldType_MAX = 8
};

// Enum SimplygonUObjects.EOutputPixelFormat
enum class EOutputPixelFormat : uint8 {
	R8G8B8A8 = 0,
	R8G8B8 = 1,
	R8 = 2,
	R16G16B16A16 = 3,
	R16G16B16 = 4,
	R16 = 5,
	EOutputPixelFormat_MAX = 6
};

// Enum SimplygonUObjects.EOutputOpacityType
enum class EOutputOpacityType : uint8 {
	Opacity = 0,
	Transparency = 1,
	EOutputOpacityType_MAX = 2
};

// Enum SimplygonUObjects.EOutputDDSCompressionType
enum class EOutputDDSCompressionType : int32 {
	NoCompression = -1,
	BC1 = 0,
	BC2 = 1,
	BC3 = 2,
	BC4 = 3,
	BC5 = 4,
	EOutputDDSCompressionType_MAX = 5
};

// Enum SimplygonUObjects.EOutputImageFileFormat
enum class EOutputImageFileFormat : uint8 {
	BMP = 0,
	DDS = 1,
	JPEG = 2,
	PNG = 3,
	TGA = 4,
	TIFF = 5,
	EOutputImageFileFormat_MAX = 6
};

// Enum SimplygonUObjects.EFillMode
enum class EFillMode : uint8 {
	Interpolate = 0,
	NearestNeighbor = 1,
	NoFill = 2,
	EFillMode_MAX = 3
};

// Enum SimplygonUObjects.EDitherType
enum class EDitherType : uint8 {
	NoDither = 0,
	FloydSteinberg = 1,
	JarvisJudiceNinke = 2,
	Sierra = 3,
	EDitherType_MAX = 4
};

// Enum SimplygonUObjects.EOpacityChannelComponent
enum class EOpacityChannelComponent : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EOpacityChannelComponent_MAX = 4
};

// Enum SimplygonUObjects.ESurfaceTransferMode
enum class ESurfaceTransferMode : uint8 {
	Fast = 0,
	Accurate = 1,
	ESurfaceTransferMode_MAX = 2
};

// Enum SimplygonUObjects.ERemeshingMode
enum class ERemeshingMode : uint8 {
	Outside = 0,
	Inside = 1,
	Manual = 2,
	ERemeshingMode_MAX = 3
};

// Enum SimplygonUObjects.EHoleFilling
enum class EHoleFilling : uint8 {
	Disabled = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EHoleFilling_MAX = 4
};

// Enum SimplygonUObjects.ESurfaceAreaScale
enum class ESurfaceAreaScale : uint8 {
	LargestInstance = 0,
	SmallestInstance = 1,
	Average = 2,
	ESurfaceAreaScale_MAX = 3
};

// Enum SimplygonUObjects.EChartAggregatorMode
enum class EChartAggregatorMode : uint8 {
	TextureSizeProportions = 0,
	SurfaceArea = 1,
	OriginalPixelDensity = 2,
	UVSizeProportions = 3,
	EChartAggregatorMode_MAX = 4
};

// Enum SimplygonUObjects.ETexCoordGeneratorType
enum class ETexCoordGeneratorType : uint8 {
	Parameterizer = 0,
	ChartAggregator = 1,
	ETexCoordGeneratorType_MAX = 2
};

// Enum SimplygonUObjects.EWeightsFromColorMode
enum class EWeightsFromColorMode : uint8 {
	Standard = 0,
	High = 1,
	Low = 2,
	EWeightsFromColorMode_MAX = 3
};

// Enum SimplygonUObjects.EWeightsFromColorComponent
enum class EWeightsFromColorComponent : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EWeightsFromColorComponent_MAX = 4
};

// Enum SimplygonUObjects.EBoneReductionTargetStopCondition
enum class EBoneReductionTargetStopCondition : uint8 {
	Any = 0,
	All = 1,
	EBoneReductionTargetStopCondition_MAX = 2
};

// Enum SimplygonUObjects.EComputeVisibilityMode
enum class EComputeVisibilityMode : uint8 {
	DirectX = 0,
	Software = 1,
	EComputeVisibilityMode_MAX = 2
};

// Enum SimplygonUObjects.EDataCreationPreferences
enum class EDataCreationPreferences : uint8 {
	OnlyUseOriginalData = 0,
	PreferOriginalData = 1,
	PreferOptimizedResult = 2,
	EDataCreationPreferences_MAX = 3
};

// Enum SimplygonUObjects.ESymmetryAxis
enum class ESymmetryAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ESymmetryAxis_MAX = 3
};

// Enum SimplygonUObjects.EReductionHeuristics
enum class EReductionHeuristics : uint8 {
	Fast = 0,
	Consistent = 1,
	EReductionHeuristics_MAX = 2
};

// Enum SimplygonUObjects.EReductionTargetStopCondition
enum class EReductionTargetStopCondition : uint8 {
	Any = 0,
	All = 1,
	EReductionTargetStopCondition_MAX = 2
};

// ScriptStruct SimplygonUObjects.SimplygonPipelineSettings
// Size: 0x2d003e08 (Inherited: 0x00)
struct FSimplygonPipelineSettings {
	char pad_0[0x2d003e08]; // 0x00(0x2d003e08)
};

// ScriptStruct SimplygonUObjects.AggregationPipelineSettings
// Size: 0x2cff69b0 (Inherited: 0x2d003e08)
struct FAggregationPipelineSettings : FSimplygonPipelineSettings {
	struct FAggregationSettings AggregationSettings; // 0x08(0x28)
	struct FVisibilitySettings VisibilitySettings; // 0x30(0x48)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x78(0x30)
	struct FVertexWeightSettings VertexWeightSettings; // 0xa8(0x28)
	struct FMappingImageSettings MappingImageSettings; // 0xd0(0xa8)
	struct FGenerateLightmapTexCoordSettings GenerateLightmapTexCoordSettings; // 0x178(0x28)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x1a0(0x10)
};

// ScriptStruct SimplygonUObjects.GenerateLightmapTexCoordSettings
// Size: 0x2cff6928 (Inherited: 0x00)
struct FGenerateLightmapTexCoordSettings {
	char GenerateLightmapTexCoord : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LightmapTexCoordLevel; // 0x04(0x04)
	struct FString LightmapTexCoordName; // 0x08(0x10)
	enum class EChartAggregatorMode ChartAggregatorMode; // 0x18(0x04)
	uint32_t TextureWidth; // 0x1c(0x04)
	uint32_t TextureHeight; // 0x20(0x04)
	uint32_t GutterSpace; // 0x24(0x04)
	char pad_28[0x2cff6900]; // 0x28(0x2cff6900)
};

// ScriptStruct SimplygonUObjects.MappingImageSettings
// Size: 0x2cff69a8 (Inherited: 0x00)
struct FMappingImageSettings {
	char GenerateMappingImage : 1; // 0x00(0x01)
	char GenerateTexCoords : 1; // 0x00(0x01)
	char GenerateTangents : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t InputMaterialCount; // 0x04(0x04)
	char UseFullRetexturing : 1; // 0x08(0x01)
	char ApplyNewMaterialIds : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32_t OutputMaterialCount; // 0x0c(0x04)
	char ReplaceMappingImages : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	uint32_t MaximumLayers; // 0x14(0x04)
	char AllowTransparencyMapping : 1; // 0x18(0x01)
	char UseAutomaticTextureSize : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float AutomaticTextureSizeMultiplier; // 0x1c(0x04)
	char ForcePower2Texture : 1; // 0x20(0x01)
	char OnlyParameterizeInvalidUVs : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t TexCoordLevel; // 0x24(0x04)
	struct FString TexCoordName; // 0x28(0x10)
	enum class ETexCoordGeneratorType TexCoordGeneratorType; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FInputMaterialSettings> InputMaterialSettings; // 0x40(0x10)
	struct TArray<struct FOutputMaterialSettings> OutputMaterialSettings; // 0x50(0x10)
	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x60(0x40)
	struct FParameterizerSettings ParameterizerSettings; // 0xa0(0x08)
	char pad_A8[0x2cff6900]; // 0xa8(0x2cff6900)
};

// ScriptStruct SimplygonUObjects.ParameterizerSettings
// Size: 0x2cff6b08 (Inherited: 0x00)
struct FParameterizerSettings {
	float MaxStretch; // 0x00(0x04)
	float LargeChartsImportance; // 0x04(0x04)
	char pad_8[0x2cff6b00]; // 0x08(0x2cff6b00)
};

// ScriptStruct SimplygonUObjects.ChartAggregatorSettings
// Size: 0x2cff6940 (Inherited: 0x00)
struct FChartAggregatorSettings {
	enum class EChartAggregatorMode ChartAggregatorMode; // 0x00(0x04)
	enum class ESurfaceAreaScale SurfaceAreaScale; // 0x04(0x04)
	int32_t OriginalTexCoordLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString OriginalTexCoordName; // 0x10(0x10)
	char SeparateOverlappingCharts : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString OriginalChartProportionsChannel; // 0x28(0x10)
	char LockUVRotation : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x2cff6907]; // 0x39(0x2cff6907)
};

// ScriptStruct SimplygonUObjects.OutputMaterialSettings
// Size: 0x2cffe010 (Inherited: 0x00)
struct FOutputMaterialSettings {
	uint32_t TextureWidth; // 0x00(0x04)
	uint32_t TextureHeight; // 0x04(0x04)
	uint32_t MultisamplingLevel; // 0x08(0x04)
	uint32_t GutterSpace; // 0x0c(0x04)
	char pad_10[0x2cffe000]; // 0x10(0x2cffe000)
};

// ScriptStruct SimplygonUObjects.InputMaterialSettings
// Size: 0x2cff6a04 (Inherited: 0x00)
struct FInputMaterialSettings {
	int32_t MaterialMapping; // 0x00(0x04)
	char pad_4[0x2cff6a00]; // 0x04(0x2cff6a00)
};

// ScriptStruct SimplygonUObjects.VertexWeightSettings
// Size: 0x2cff6928 (Inherited: 0x00)
struct FVertexWeightSettings {
	char UseVertexWeightsInReducer : 1; // 0x00(0x01)
	char UseVertexWeightsInTexcoordGenerator : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString WeightsFromColorName; // 0x08(0x10)
	int32_t WeightsFromColorLevel; // 0x18(0x04)
	enum class EWeightsFromColorComponent WeightsFromColorComponent; // 0x1c(0x04)
	float WeightsFromColorMultiplier; // 0x20(0x04)
	enum class EWeightsFromColorMode WeightsFromColorMode; // 0x24(0x04)
	char pad_28[0x2cff6900]; // 0x28(0x2cff6900)
};

// ScriptStruct SimplygonUObjects.GeometryCullingSettings
// Size: 0x2cff6930 (Inherited: 0x00)
struct FGeometryCullingSettings {
	char UseClippingPlanes : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ClippingPlaneSelectionSetID; // 0x04(0x04)
	struct FString ClippingPlaneSelectionSetName; // 0x08(0x10)
	char UseClippingGeometry : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t ClippingGeometrySelectionSetID; // 0x1c(0x04)
	struct FString ClippingGeometrySelectionSetName; // 0x20(0x10)
	char pad_30[0x2cff6900]; // 0x30(0x2cff6900)
};

// ScriptStruct SimplygonUObjects.VisibilitySettings
// Size: 0x2cff6948 (Inherited: 0x00)
struct FVisibilitySettings {
	char UseVisibilityWeightsInReducer : 1; // 0x00(0x01)
	char UseVisibilityWeightsInTexcoordGenerator : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float VisibilityWeightsPower; // 0x04(0x04)
	char CullOccludedGeometry : 1; // 0x08(0x01)
	char ForceVisibilityCalculation : 1; // 0x08(0x01)
	char UseBackfaceCulling : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t CameraSelectionSetID; // 0x0c(0x04)
	struct FString CameraSelectionSetName; // 0x10(0x10)
	int32_t OccluderSelectionSetID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString OccluderSelectionSetName; // 0x28(0x10)
	float FillNonVisibleAreaThreshold; // 0x38(0x04)
	char RemoveTrianglesNotOccludingOtherTriangles : 1; // 0x3c(0x01)
	char ConservativeMode : 1; // 0x3c(0x01)
	char pad_3C_2 : 6; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	enum class EComputeVisibilityMode ComputeVisibilityMode; // 0x40(0x04)
	char pad_44[0x2cff6904]; // 0x44(0x2cff6904)
};

// ScriptStruct SimplygonUObjects.AggregationSettings
// Size: 0x2cff6928 (Inherited: 0x00)
struct FAggregationSettings {
	char MergeGeometries : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ProcessSelectionSetID; // 0x04(0x04)
	struct FString ProcessSelectionSetName; // 0x08(0x10)
	char KeepUnprocessedSceneMeshes : 1; // 0x18(0x01)
	char EnableGeometryCulling : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float GeometryCullingPrecision; // 0x1c(0x04)
	char SubdivideGeometryBasedOnUVTiles : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	uint32_t SubdivisionTileSize; // 0x24(0x04)
	char pad_28[0x2cff6900]; // 0x28(0x2cff6900)
};

// ScriptStruct SimplygonUObjects.RemeshingPipelineSettings
// Size: 0x2cffe9c0 (Inherited: 0x2d003e08)
struct FRemeshingPipelineSettings : FSimplygonPipelineSettings {
	struct FRemeshingSettings RemeshingSettings; // 0x08(0x38)
	struct FBoneSettings BoneSettings; // 0x40(0x50)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x90(0x30)
	struct FVisibilitySettings VisibilitySettings; // 0xc0(0x48)
	struct FMappingImageSettings MappingImageSettings; // 0x108(0xa8)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x1b0(0x10)
};

// ScriptStruct SimplygonUObjects.BoneSettings
// Size: 0x2cffe950 (Inherited: 0x00)
struct FBoneSettings {
	char UseBoneReducer : 1; // 0x00(0x01)
	char BoneReductionTargetBoneRatioEnabled : 1; // 0x00(0x01)
	char RemoveUnusedBones : 1; // 0x00(0x01)
	char LimitBonesPerVertex : 1; // 0x00(0x01)
	char BoneReductionTargetBoneCountEnabled : 1; // 0x00(0x01)
	char BoneReductionTargetMaxDeviationEnabled : 1; // 0x00(0x01)
	char pad_0_6 : 2; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t MaxBonePerVertex; // 0x04(0x04)
	char BoneReductionTargetOnScreenSizeEnabled : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	enum class EBoneReductionTargetStopCondition BoneReductionTargetStopCondition; // 0x0c(0x04)
	float BoneReductionTargetBoneRatio; // 0x10(0x04)
	uint32_t BoneReductionTargetBoneCount; // 0x14(0x04)
	float BoneReductionTargetMaxDeviation; // 0x18(0x04)
	uint32_t BoneReductionTargetOnScreenSize; // 0x1c(0x04)
	int32_t LockBoneSelectionSetID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString LockBoneSelectionSetName; // 0x28(0x10)
	int32_t RemoveBoneSelectionSetID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString RemoveBoneSelectionSetName; // 0x40(0x10)
	char pad_50[0x2cffe900]; // 0x50(0x2cffe900)
};

// ScriptStruct SimplygonUObjects.RemeshingSettings
// Size: 0x2cff6938 (Inherited: 0x00)
struct FRemeshingSettings {
	uint32_t OnScreenSize; // 0x00(0x04)
	enum class EHoleFilling HoleFilling; // 0x04(0x04)
	enum class ERemeshingMode RemeshingMode; // 0x08(0x04)
	enum class ESurfaceTransferMode SurfaceTransferMode; // 0x0c(0x04)
	float HardEdgeAngle; // 0x10(0x04)
	char TransferNormals : 1; // 0x14(0x01)
	char TransferColors : 1; // 0x14(0x01)
	char pad_14_2 : 6; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t ProcessSelectionSetID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ProcessSelectionSetName; // 0x20(0x10)
	char KeepUnprocessedSceneMeshes : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x2cff6907]; // 0x31(0x2cff6907)
};

// ScriptStruct SimplygonUObjects.ReductionPipelineSettings
// Size: 0x2cff6930 (Inherited: 0x2d003e08)
struct FReductionPipelineSettings : FSimplygonPipelineSettings {
	struct FReductionSettings ReductionSettings; // 0x08(0x90)
	struct FRepairSettings RepairSettings; // 0x98(0x14)
	struct FNormalCalculationSettings NormalCalculationSettings; // 0xac(0x0c)
	struct FVisibilitySettings VisibilitySettings; // 0xb8(0x48)
	struct FBoneSettings BoneSettings; // 0x100(0x50)
	struct FVertexWeightSettings VertexWeightSettings; // 0x150(0x28)
	struct FMappingImageSettings MappingImageSettings; // 0x178(0xa8)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x220(0x10)
};

// ScriptStruct SimplygonUObjects.NormalCalculationSettings
// Size: 0x2cff6a0c (Inherited: 0x00)
struct FNormalCalculationSettings {
	char ReplaceNormals : 1; // 0x00(0x01)
	char ReplaceTangents : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HardEdgeAngle; // 0x04(0x04)
	char RepairInvalidNormals : 1; // 0x08(0x01)
	char ReorthogonalizeTangentSpace : 1; // 0x08(0x01)
	char ScaleByArea : 1; // 0x08(0x01)
	char ScaleByAngle : 1; // 0x08(0x01)
	char SnapNormalsToFlatSurfaces : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x2cff6a03]; // 0x09(0x2cff6a03)
};

// ScriptStruct SimplygonUObjects.RepairSettings
// Size: 0x2cff6a14 (Inherited: 0x00)
struct FRepairSettings {
	char UseTJunctionRemover : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TJuncDist; // 0x04(0x04)
	float WeldDist; // 0x08(0x04)
	char WeldOnlyBorderVertices : 1; // 0x0c(0x01)
	char WeldOnlyWithinMaterial : 1; // 0x0c(0x01)
	char WeldOnlyWithinSceneNode : 1; // 0x0c(0x01)
	char WeldOnlyBetweenSceneNodes : 1; // 0x0c(0x01)
	char UseWelding : 1; // 0x0c(0x01)
	char pad_C_5 : 3; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	uint32_t ProgressivePasses; // 0x10(0x04)
	char pad_14[0x2cff6a00]; // 0x14(0x2cff6a00)
};

// ScriptStruct SimplygonUObjects.ReductionSettings
// Size: 0x2cff6990 (Inherited: 0x00)
struct FReductionSettings {
	char ReductionTargetTriangleRatioEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ReductionTargetTriangleRatio; // 0x04(0x04)
	char ReductionTargetTriangleCountEnabled : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32_t ReductionTargetTriangleCount; // 0x0c(0x04)
	char ReductionTargetMaxDeviationEnabled : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ReductionTargetMaxDeviation; // 0x14(0x04)
	char ReductionTargetOnScreenSizeEnabled : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	uint32_t ReductionTargetOnScreenSize; // 0x1c(0x04)
	enum class EReductionTargetStopCondition ReductionTargetStopCondition; // 0x20(0x04)
	enum class EReductionHeuristics ReductionHeuristics; // 0x24(0x04)
	float GeometryImportance; // 0x28(0x04)
	float MaterialImportance; // 0x2c(0x04)
	float TextureImportance; // 0x30(0x04)
	float ShadingImportance; // 0x34(0x04)
	float GroupImportance; // 0x38(0x04)
	float VertexColorImportance; // 0x3c(0x04)
	float EdgeSetImportance; // 0x40(0x04)
	float SkinningImportance; // 0x44(0x04)
	float CurvatureImportance; // 0x48(0x04)
	char CreateGeomorphGeometry : 1; // 0x4c(0x01)
	char AllowDegenerateTexCoords : 1; // 0x4c(0x01)
	char KeepSymmetry : 1; // 0x4c(0x01)
	char UseAutomaticSymmetryDetection : 1; // 0x4c(0x01)
	char UseSymmetryQuadRetriangulator : 1; // 0x4c(0x01)
	char pad_4C_5 : 3; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	enum class ESymmetryAxis SymmetryAxis; // 0x50(0x04)
	float SymmetryOffset; // 0x54(0x04)
	float SymmetryDetectionTolerance; // 0x58(0x04)
	enum class EDataCreationPreferences DataCreationPreferences; // 0x5c(0x04)
	char GenerateGeomorphData : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float OutwardMoveMultiplier; // 0x64(0x04)
	float InwardMoveMultiplier; // 0x68(0x04)
	float MaxEdgeLength; // 0x6c(0x04)
	char UseHighQualityNormalCalculation : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t ProcessSelectionSetID; // 0x74(0x04)
	struct FString ProcessSelectionSetName; // 0x78(0x10)
	char MergeGeometries : 1; // 0x88(0x01)
	char KeepUnprocessedSceneMeshes : 1; // 0x88(0x01)
	char LockGeometricBorder : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x2cff6907]; // 0x89(0x2cff6907)
};

// ScriptStruct SimplygonUObjects.VertexColorCasterSettings
// Size: 0x2cff6960 (Inherited: 0x00)
struct FVertexColorCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x04)
	enum class EDitherType DitherType; // 0x14(0x04)
	enum class EFillMode FillMode; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString OpacityChannel; // 0x20(0x10)
	char UseMultisampling : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t OutputColorLevel; // 0x34(0x04)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x38(0x04)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x3c(0x04)
	uint32_t Dilation; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString OutputColorName; // 0x48(0x10)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x58(0x04)
	float ColorSpaceEdgeThreshold; // 0x5c(0x04)
	char pad_60[0x2cff6900]; // 0x60(0x2cff6900)
};

// ScriptStruct SimplygonUObjects.GeometryDataCasterSettings
// Size: 0x2cff6990 (Inherited: 0x00)
struct FGeometryDataCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x04)
	enum class EDitherType DitherType; // 0x14(0x04)
	enum class EFillMode FillMode; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString OpacityChannel; // 0x20(0x10)
	char UseMultisampling : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	enum class EGeometryDataFieldType GeometryDataFieldType; // 0x34(0x04)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x38(0x04)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x3c(0x04)
	uint32_t Dilation; // 0x40(0x04)
	uint32_t GeometryDataFieldIndex; // 0x44(0x04)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x48(0x04)
	float MappingInfR; // 0x4c(0x04)
	float MappingSupR; // 0x50(0x04)
	float MappingInfG; // 0x54(0x04)
	float MappingSupG; // 0x58(0x04)
	float MappingInfB; // 0x5c(0x04)
	float MappingSupB; // 0x60(0x04)
	float MappingInfA; // 0x64(0x04)
	float MappingSupA; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FVector4 MappingInf; // 0x70(0x10)
	struct FVector4 MappingSup; // 0x80(0x10)
	char pad_90[0x2cff6900]; // 0x90(0x2cff6900)
};

// ScriptStruct SimplygonUObjects.AmbientOcclusionCasterSettings
// Size: 0x2cff6958 (Inherited: 0x00)
struct FAmbientOcclusionCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x04)
	enum class EDitherType DitherType; // 0x14(0x04)
	enum class EFillMode FillMode; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString OpacityChannel; // 0x20(0x10)
	char UseMultisampling : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	uint32_t RaysPerPixel; // 0x34(0x04)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x38(0x04)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x3c(0x04)
	uint32_t Dilation; // 0x40(0x04)
	float OcclusionFalloff; // 0x44(0x04)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x48(0x04)
	float OcclusionMultiplier; // 0x4c(0x04)
	char UseSimpleOcclusionMode : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x2cff6907]; // 0x51(0x2cff6907)
};

// ScriptStruct SimplygonUObjects.DisplacementCasterSettings
// Size: 0x2cffe958 (Inherited: 0x00)
struct FDisplacementCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x04)
	enum class EDitherType DitherType; // 0x14(0x04)
	enum class EFillMode FillMode; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString OpacityChannel; // 0x20(0x10)
	char UseMultisampling : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DistanceScaling; // 0x34(0x04)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x38(0x04)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x3c(0x04)
	uint32_t Dilation; // 0x40(0x04)
	char GenerateScalarDisplacement : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x48(0x04)
	char GenerateTangentSpaceDisplacement : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t NormalMapTexCoordLevel; // 0x50(0x04)
	char pad_54[0x2cffe904]; // 0x54(0x2cffe904)
};

// ScriptStruct SimplygonUObjects.NormalCasterSettings
// Size: 0x2cff6950 (Inherited: 0x00)
struct FNormalCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x04)
	enum class EDitherType DitherType; // 0x14(0x04)
	enum class EFillMode FillMode; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString OpacityChannel; // 0x20(0x10)
	char UseMultisampling : 1; // 0x30(0x01)
	char FlipBackfacingNormals : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x34(0x04)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x38(0x04)
	uint32_t Dilation; // 0x3c(0x04)
	char GenerateTangentSpaceNormals : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x44(0x04)
	char FlipGreen : 1; // 0x48(0x01)
	char CalculateBitangentPerFragment : 1; // 0x48(0x01)
	char NormalizeInterpolatedTangentSpace : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x2cff6907]; // 0x49(0x2cff6907)
};

// ScriptStruct SimplygonUObjects.OpacityCasterSettings
// Size: 0x2cff6948 (Inherited: 0x00)
struct FOpacityCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x04)
	enum class EDitherType DitherType; // 0x14(0x04)
	enum class EFillMode FillMode; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString OpacityChannel; // 0x20(0x10)
	char UseMultisampling : 1; // 0x30(0x01)
	char OutputSRGB : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x34(0x04)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x38(0x04)
	uint32_t Dilation; // 0x3c(0x04)
	enum class EOutputOpacityType OutputOpacityType; // 0x40(0x04)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x44(0x04)
	char pad_48[0x2cff6900]; // 0x48(0x2cff6900)
};

// ScriptStruct SimplygonUObjects.ColorCasterSettings
// Size: 0x2cff6950 (Inherited: 0x00)
struct FColorCasterSettings {
	struct FString MaterialChannel; // 0x00(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x10(0x04)
	enum class EDitherType DitherType; // 0x14(0x04)
	enum class EFillMode FillMode; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString OpacityChannel; // 0x20(0x10)
	char UseMultisampling : 1; // 0x30(0x01)
	char BakeOpacityInAlpha : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x34(0x04)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x38(0x04)
	uint32_t Dilation; // 0x3c(0x04)
	enum class EOutputOpacityType OutputOpacityType; // 0x40(0x04)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x44(0x04)
	char SkipCastingIfNoInputChannel : 1; // 0x48(0x01)
	char OutputSRGB : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x2cff6907]; // 0x49(0x2cff6907)
};

