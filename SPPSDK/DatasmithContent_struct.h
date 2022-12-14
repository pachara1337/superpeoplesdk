// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8 {
	Point = 0,
	Spot = 1,
	Rect = 2,
	EDatasmithAreaLightActorType_MAX = 3
};

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8 {
	Rectangle = 0,
	Disc = 1,
	Sphere = 2,
	Cylinder = 3,
	None = 4,
	EDatasmithAreaLightActorShape_MAX = 5
};

// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8 {
	StitchingNone = 0,
	StitchingHeal = 1,
	StitchingSew = 2,
	EDatasmithCADStitchingTechnique_MAX = 3
};

// Enum DatasmithContent.EDatasmithImportHierarchy
enum class EDatasmithImportHierarchy : uint8 {
	UseMultipleActors = 0,
	UseSingleActor = 1,
	UseOneBlueprint = 2,
	EDatasmithImportHierarchy_MAX = 3
};

// Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8 {
	NewLevel = 0,
	CurrentLevel = 1,
	AssetsOnly = 2,
	EDatasmithImportScene_MAX = 3
};

// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8 {
	LIGHTMAP = 0,
	LIGHTMAP = 1,
	LIGHTMAP = 2,
	LIGHTMAP = 3,
	LIGHTMAP = 4,
	LIGHTMAP = 5,
	LIGHTMAP = 6,
	LIGHTMAP_MAX = 7
};

// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8 {
	LIGHTMAP = 0,
	LIGHTMAP = 1,
	LIGHTMAP = 2,
	LIGHTMAP = 3,
	LIGHTMAP = 4,
	LIGHTMAP = 5,
	LIGHTMAP_MAX = 6
};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8 {
	UseNoFresnelCurves = 0,
	UseSimplifierFresnelCurves = 1,
	UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality_MAX = 3
};

// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8 {
	Update = 0,
	Full = 1,
	Ignore = 2,
	EDatasmithImportActorPolicy_MAX = 3
};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8 {
	Replace = 0,
	Update = 1,
	Use = 2,
	Ignore = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4
};

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8 {
	Current = 0,
	All = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2
};

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// Size: 0x2cffe938 (Inherited: 0x00)
struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x00(0x01)
	char bAllowRoll : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x08(0x30)
	char pad_38[0x2cffe900]; // 0x38(0x2cffe900)
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// Size: 0x2cffe940 (Inherited: 0x00)
struct FDatasmithPostProcessSettingsTemplate {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_VignetteIntensity : 1; // 0x00(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x00(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x00(0x01)
	char bOverride_CameraISO : 1; // 0x00(0x01)
	char bOverride_CameraShutterSpeed : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	char bOverride_DepthOfFieldFstop : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float WhiteTemp; // 0x08(0x04)
	float VignetteIntensity; // 0x0c(0x04)
	struct FLinearColor FilmWhitePoint; // 0x10(0x10)
	struct FVector4 ColorSaturation; // 0x20(0x10)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float CameraISO; // 0x34(0x04)
	float CameraShutterSpeed; // 0x38(0x04)
	float DepthOfFieldFstop; // 0x3c(0x04)
	char pad_40[0x2cffe900]; // 0x40(0x2cffe900)
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FDatasmithCameraFocusSettingsTemplate {
	enum class ECameraFocusMethod FocusMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ManualFocusDistance; // 0x04(0x04)
	char pad_8[0x2cff6a00]; // 0x08(0x2cff6a00)
};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// Size: 0x2cff6a04 (Inherited: 0x00)
struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x00(0x04)
	char pad_4[0x2cff6a00]; // 0x04(0x2cff6a00)
};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x00(0x04)
	float SensorHeight; // 0x04(0x04)
	char pad_8[0x2cff6a00]; // 0x08(0x2cff6a00)
};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x00(0x04)
	float MaxEdgeLength; // 0x04(0x04)
	float NormalTolerance; // 0x08(0x04)
	enum class EDatasmithCADStitchingTechnique StitchingTechnique; // 0x0c(0x01)
	char pad_D[0x2cff6a03]; // 0x0d(0x2cff6a03)
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// Size: 0x2cffea18 (Inherited: 0x00)
struct FDatasmithImportBaseOptions {
	enum class EDatasmithImportScene SceneHandling; // 0x00(0x01)
	bool bIncludeGeometry; // 0x01(0x01)
	bool bIncludeMaterial; // 0x02(0x01)
	bool bIncludeLight; // 0x03(0x01)
	bool bIncludeCamera; // 0x04(0x01)
	bool bIncludeAnimation; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FDatasmithAssetImportOptions AssetOptions; // 0x08(0x0c)
	struct FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x14(0x04)
	char pad_18[0x2cffea00]; // 0x18(0x2cffea00)
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// Size: 0x2cffea04 (Inherited: 0x00)
struct FDatasmithStaticMeshImportOptions {
	enum class EDatasmithImportLightmapMin MinLightmapResolution; // 0x00(0x01)
	enum class EDatasmithImportLightmapMax MaxLightmapResolution; // 0x01(0x01)
	bool bGenerateLightmapUVs; // 0x02(0x01)
	bool bRemoveDegenerates; // 0x03(0x01)
	char pad_4[0x2cffea00]; // 0x04(0x2cffea00)
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// Size: 0x2cff6a0c (Inherited: 0x00)
struct FDatasmithAssetImportOptions {
	struct FName PackagePath; // 0x00(0x0c)
	char pad_C[0x2cff6a00]; // 0x0c(0x2cff6a00)
};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// Size: 0x2cff6a02 (Inherited: 0x00)
struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x00(0x01)
	bool bRespawnDeletedActors; // 0x01(0x01)
	char pad_2[0x2cff6a00]; // 0x02(0x2cff6a00)
};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// Size: 0x2cff6c50 (Inherited: 0x00)
struct FDatasmithStaticParameterSetTemplate {
	struct TMap<struct FName, bool> StaticSwitchParameters; // 0x00(0x50)
	char pad_50[0x2cff6c00]; // 0x50(0x2cff6c00)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// Size: 0x2cff6950 (Inherited: 0x00)
struct FDatasmithMeshSectionInfoMapTemplate {
	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map; // 0x00(0x50)
	char pad_50[0x2cff6900]; // 0x50(0x2cff6900)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// Size: 0x2cff6d04 (Inherited: 0x00)
struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x00(0x04)
	char pad_4[0x2cff6d00]; // 0x04(0x2cff6d00)
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FDatasmithStaticMaterialTemplate {
	struct FName MaterialSlotName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInterface* MaterialInterface; // 0x10(0x08)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FDatasmithMeshBuildSettingsTemplate {
	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bBuildAdjacencyBuffer : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x00(0x01)
	char bGenerateLightmapUVs : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MinLightmapResolution; // 0x04(0x04)
	int32_t SrcLightmapIndex; // 0x08(0x04)
	int32_t DstLightmapIndex; // 0x0c(0x04)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

