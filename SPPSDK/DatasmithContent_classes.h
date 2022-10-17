// Class DatasmithContent.DatasmithObjectTemplate
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UDatasmithObjectTemplate : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)
};

// Class DatasmithContent.DatasmithActorTemplate
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a38)
struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	struct TSet<struct FName> Layers; // 0x38(0x50)
	struct TSet<struct FName> Tags; // 0x88(0x50)
};

// Class DatasmithContent.DatasmithAdditionalData
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UDatasmithAdditionalData : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class DatasmithContent.DatasmithAreaLightActor
// Size: 0x2cff6a60 (Inherited: 0x2cff6b08)
struct ADatasmithAreaLightActor : AActor {
	enum class EDatasmithAreaLightActorType LightType; // 0x308(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x309(0x01)
	struct FVector2D Dimensions; // 0x30c(0x08)
	float Intensity; // 0x314(0x04)
	enum class ELightUnits IntensityUnits; // 0x318(0x01)
	struct FLinearColor Color; // 0x31c(0x10)
	float Temperature; // 0x32c(0x04)
	struct UTextureLightProfile* IESTexture; // 0x330(0x08)
	bool bUseIESBrightness; // 0x338(0x01)
	float IESBrightnessScale; // 0x33c(0x04)
	struct FRotator Rotation; // 0x340(0x0c)
	float SourceRadius; // 0x34c(0x04)
	float SourceLength; // 0x350(0x04)
	float AttenuationRadius; // 0x354(0x04)
	float SpotlightInnerAngle; // 0x358(0x04)
	float SpotlightOuterAngle; // 0x35c(0x04)
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// Size: 0x2cff6cb0 (Inherited: 0x2cff6a38)
struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate {
	enum class EDatasmithAreaLightActorType LightType; // 0x38(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x39(0x01)
	struct FVector2D Dimensions; // 0x3c(0x08)
	struct FLinearColor Color; // 0x44(0x10)
	float Intensity; // 0x54(0x04)
	enum class ELightUnits IntensityUnits; // 0x58(0x01)
	float Temperature; // 0x5c(0x04)
	struct TSoftObjectPtr<UTextureLightProfile> IESTexture; // 0x60(0x30)
	bool bUseIESBrightness; // 0x90(0x01)
	float IESBrightnessScale; // 0x94(0x04)
	struct FRotator Rotation; // 0x98(0x0c)
	float SourceRadius; // 0xa4(0x04)
	float SourceLength; // 0xa8(0x04)
	float AttenuationRadius; // 0xac(0x04)
	char pad_2CFF6AA8[0x208]; // 0x2cff6aa8(0x208)
};

// Class DatasmithContent.DatasmithAssetImportData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithAssetImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshImportData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithStaticMeshImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData {
};

// Class DatasmithContent.DatasmithSceneImportData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithSceneImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithTranslatedSceneImportData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithCADImportSceneData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithCADImportSceneData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithMDLSceneImportData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithMDLSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// Size: 0x2cff6a78 (Inherited: 0x2cff6a30)
struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	struct FString Generator; // 0x30(0x10)
	float Version; // 0x40(0x04)
	struct FString Author; // 0x48(0x10)
	struct FString License; // 0x58(0x10)
	struct FString Source; // 0x68(0x10)
	char pad_2CFF6A74[0x4]; // 0x2cff6a74(0x04)
};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// Size: 0x2cff6a40 (Inherited: 0x2cff6a30)
struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	struct FString SourceMeshName; // 0x30(0x10)
};

// Class DatasmithContent.DatasmithFBXSceneImportData
// Size: 0x2cff6a50 (Inherited: 0x2cff6a30)
struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x30(0x01)
	struct FString TexturesDir; // 0x38(0x10)
	char IntermediateSerialization; // 0x48(0x01)
	bool bColorizeMaterials; // 0x49(0x01)
	char pad_2CFF6A43[0xd]; // 0x2cff6a43(0x0d)
};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// Size: 0x2cff6a98 (Inherited: 0x2cff6a50)
struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x50(0x01)
	bool bOptimizeDuplicatedNodes; // 0x51(0x01)
	bool bRemoveInvisibleNodes; // 0x52(0x01)
	bool bSimplifyNodeHierarchy; // 0x53(0x01)
	bool bImportVar; // 0x54(0x01)
	struct FString VarPath; // 0x58(0x10)
	bool bImportPos; // 0x68(0x01)
	struct FString PosPath; // 0x70(0x10)
	bool bImportTml; // 0x80(0x01)
	struct FString TmlPath; // 0x88(0x10)
	char pad_2CFF6A87[0x11]; // 0x2cff6a87(0x11)
};

// Class DatasmithContent.DatasmithVREDAssetImportData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithVREDAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithVREDSceneImportData
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a50)
struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x50(0x01)
	bool bOptimizeDuplicatedNodes; // 0x51(0x01)
	bool bImportMats; // 0x52(0x01)
	struct FString MatsPath; // 0x58(0x10)
	bool bImportVar; // 0x68(0x01)
	bool bCleanVar; // 0x69(0x01)
	struct FString VarPath; // 0x70(0x10)
	bool bImportLightInfo; // 0x80(0x01)
	struct FString LightInfoPath; // 0x88(0x10)
	bool bImportClipInfo; // 0x98(0x01)
	struct FString ClipInfoPath; // 0xa0(0x10)
	char pad_2CFF6A97[0x19]; // 0x2cff6a97(0x19)
};

// Class DatasmithContent.DatasmithIFCSceneImportData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithIFCSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// Size: 0x2cff6a40 (Inherited: 0x2cff6a30)
struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	struct FString SourceGlobalId; // 0x30(0x10)
};

// Class DatasmithContent.DatasmithAssetUserData
// Size: 0x2cff6a80 (Inherited: 0x2cff6a30)
struct UDatasmithAssetUserData : UAssetUserData {
	struct TMap<struct FName, struct FString> MetaData; // 0x30(0x50)
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// Size: 0x2cff6a70 (Inherited: 0x2cff6a38)
struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x38(0x38)
};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a38)
struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x38(0x08)
	struct FDatasmithCameraLensSettingsTemplate LensSettings; // 0x40(0x04)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x44(0x08)
	float CurrentFocalLength; // 0x4c(0x04)
	float CurrentAperture; // 0x50(0x04)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x60(0x40)
	char pad_2CFF6A94[0xc]; // 0x2cff6a94(0x0c)
};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FString GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x195d140
	void GetDatasmithUserDataKeysAndValuesForValue(struct UObject* Object, struct FString StringToMatch, struct TArray<struct FName>& OutKeys, struct TArray<struct FString>& OutValues); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x195cf80
	struct UDatasmithAssetUserData* GetDatasmithUserData(struct UObject* Object); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x195cf00
};

// Class DatasmithContent.DatasmithCustomActionBase
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UDatasmithCustomActionBase : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)
};

// Class DatasmithContent.DatasmithImportedSequencesActor
// Size: 0x2cff6b18 (Inherited: 0x2cff6b08)
struct ADatasmithImportedSequencesActor : AActor {
	struct TArray<struct ULevelSequence*> ImportedSequences; // 0x308(0x10)

	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x195d260
};

// Class DatasmithContent.DatasmithOptionsBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UDatasmithOptionsBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
// Size: 0x2cff6a40 (Inherited: 0x2cff6a30)
struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	struct FDatasmithTessellationOptions options; // 0x30(0x10)
};

// Class DatasmithContent.DatasmithImportOptions
// Size: 0x2cff6a80 (Inherited: 0x2cff6a30)
struct UDatasmithImportOptions : UDatasmithOptionsBase {
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x30(0x01)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x31(0x01)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x32(0x01)
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x33(0x01)
	enum class EDatasmithImportActorPolicy LightImportPolicy; // 0x34(0x01)
	enum class EDatasmithImportActorPolicy CameraImportPolicy; // 0x35(0x01)
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x36(0x01)
	enum class EDatasmithImportMaterialQuality MaterialQuality; // 0x37(0x01)
	struct FDatasmithImportBaseOptions BaseOptions; // 0x3c(0x18)
	struct FDatasmithReimportOptions ReimportOptions; // 0x54(0x02)
	struct FString Filename; // 0x58(0x10)
	struct FString FilePath; // 0x68(0x10)
	char pad_2CFF6A72[0xe]; // 0x2cff6a72(0x0e)
};

// Class DatasmithContent.DatasmithLandscapeTemplate
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	struct UMaterialInterface* LandscapeMaterial; // 0x38(0x08)
	int32_t StaticLightingLOD; // 0x40(0x04)
	char pad_2CFF6A44[0x4]; // 0x2cff6a44(0x04)
};

// Class DatasmithContent.DatasmithLightComponentTemplate
// Size: 0x2cff6a70 (Inherited: 0x2cff6a38)
struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate {
	char bVisible : 1; // 0x38(0x01)
	char CastShadows : 1; // 0x3c(0x01)
	char bUseTemperature : 1; // 0x3c(0x01)
	char bUseIESBrightness : 1; // 0x3c(0x01)
	float Intensity; // 0x40(0x04)
	float Temperature; // 0x44(0x04)
	float IESBrightnessScale; // 0x48(0x04)
	struct FLinearColor LightColor; // 0x4c(0x10)
	struct UMaterialInterface* LightFunctionMaterial; // 0x60(0x08)
	struct UTextureLightProfile* IESTexture; // 0x68(0x08)
	char pad_2CFF6A64_4 : 4; // 0x2cff6a64(0x01)
	char pad_2CFF6A65[0xb]; // 0x2cff6a65(0x0b)
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a38)
struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	struct TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x38(0x30)
	struct TMap<struct FName, float> ScalarParameterValues; // 0x68(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues; // 0xb8(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<UTexture>> TextureParameterValues; // 0x108(0x50)
	struct FDatasmithStaticParameterSetTemplate StaticParameters; // 0x158(0x50)
};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ELightUnits IntensityUnits; // 0x38(0x01)
	float SourceRadius; // 0x3c(0x04)
	float SourceLength; // 0x40(0x04)
	float AttenuationRadius; // 0x44(0x04)
	char pad_2CFF6A45[0x3]; // 0x2cff6a45(0x03)
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// Size: 0x2cff6a90 (Inherited: 0x2cff6a38)
struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	struct FDatasmithPostProcessSettingsTemplate Settings; // 0x40(0x40)
	char bEnabled : 1; // 0x80(0x01)
	char bUnbound : 1; // 0x80(0x01)
	char pad_2CFF6A78_2 : 6; // 0x2cff6a78(0x01)
	char pad_2CFF6A79[0x17]; // 0x2cff6a79(0x17)
};

// Class DatasmithContent.DatasmithScene
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UDatasmithScene : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)
};

// Class DatasmithContent.DatasmithSceneActor
// Size: 0x2cff6a60 (Inherited: 0x2cff6b08)
struct ADatasmithSceneActor : AActor {
	struct UDatasmithScene* Scene; // 0x308(0x08)
	struct TMap<struct FName, struct TSoftObjectPtr<AActor>> RelatedActors; // 0x310(0x50)
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// Size: 0x2cff6b00 (Inherited: 0x2cff6a38)
struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	struct FTransform RelativeTransform; // 0x40(0x30)
	enum class EComponentMobility Mobility; // 0x70(0x01)
	struct TSoftObjectPtr<USceneComponent> AttachParent; // 0x78(0x30)
	struct TSet<struct FName> Tags; // 0xa8(0x50)
	char pad_2CFF6AE9[0x17]; // 0x2cff6ae9(0x17)
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ESkyLightSourceType SourceType; // 0x38(0x01)
	int32_t CubemapResolution; // 0x3c(0x04)
	struct UTextureCube* Cubemap; // 0x40(0x08)
	char pad_2CFF6A45[0x3]; // 0x2cff6a45(0x03)
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// Size: 0x2cff6a40 (Inherited: 0x2cff6a38)
struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x38(0x04)
	float OuterConeAngle; // 0x3c(0x04)
};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// Size: 0x2cff6a50 (Inherited: 0x2cff6a38)
struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	struct UStaticMesh* StaticMesh; // 0x38(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x40(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a38)
struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x38(0x50)
	int32_t LightMapCoordinateIndex; // 0x88(0x04)
	int32_t LightMapResolution; // 0x8c(0x04)
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x90(0x10)
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials; // 0xa0(0x10)
};

