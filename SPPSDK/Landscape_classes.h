// Class Landscape.ControlPointMeshActor
// Size: 0x2cff6b10 (Inherited: 0x2cff6b08)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x308(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x558(0x04)
};

// Class Landscape.LandscapeProxy
// Size: 0x2cff6ab8 (Inherited: 0x2cff6b08)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x308(0x08)
	struct FGuid LandscapeGuid; // 0x310(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x330(0x08)
	int32_t MaxLODLevel; // 0x338(0x04)
	float LODDistanceFactor; // 0x33c(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x340(0x01)
	float ComponentScreenSizeToUseSubSections; // 0x344(0x04)
	float LOD0ScreenSize; // 0x348(0x04)
	float LOD0DistributionSetting; // 0x34c(0x04)
	float LODDistributionSetting; // 0x350(0x04)
	float TessellationComponentScreenSize; // 0x354(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x358(0x01)
	float TessellationComponentScreenSizeFalloff; // 0x35c(0x04)
	int32_t OccluderGeometryLOD; // 0x360(0x04)
	int32_t StaticLightingLOD; // 0x364(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x368(0x08)
	float StreamingDistanceMultiplier; // 0x370(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x378(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x3a0(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x3a8(0x10)
	bool bMeshHoles; // 0x3b8(0x01)
	char MeshHolesMaxLod; // 0x3b9(0x01)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x3c0(0x10)
	int32_t VirtualTextureNumLods; // 0x3d0(0x04)
	int32_t VirtualTextureLodBias; // 0x3d4(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3d8(0x01)
	float NegativeZBoundsExtension; // 0x3dc(0x04)
	float PositiveZBoundsExtension; // 0x3e0(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x3e8(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x3f8(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x408(0x10)
	bool bHasLandscapeGrass; // 0x47c(0x01)
	float StaticLightingResolution; // 0x480(0x04)
	char bCastStaticShadow : 1; // 0x484(0x01)
	char bCastShadowAsTwoSided : 1; // 0x484(0x01)
	char bCastFarShadow : 1; // 0x484(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x488(0x01)
	struct FLightingChannels LightingChannels; // 0x489(0x01)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x48c(0x01)
	char bRenderCustomDepth : 1; // 0x48c(0x01)
	int32_t CustomDepthStencilValue; // 0x490(0x04)
	float LDMaxDrawDistance; // 0x494(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x498(0x18)
	int32_t CollisionMipLevel; // 0x4b0(0x04)
	int32_t SimpleCollisionMipLevel; // 0x4b4(0x04)
	float CollisionThickness; // 0x4b8(0x04)
	struct FBodyInstance BodyInstance; // 0x4c0(0x190)
	char bGenerateOverlapEvents : 1; // 0x650(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x650(0x01)
	int32_t ComponentSizeQuads; // 0x654(0x04)
	int32_t SubsectionSizeQuads; // 0x658(0x04)
	int32_t NumSubsections; // 0x65c(0x04)
	char bUsedForNavigation : 1; // 0x660(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x660(0x01)
	bool bUseDynamicMaterialInstance; // 0x664(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x665(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x666(0x01)
	bool bHasLayersContent; // 0x667(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x668(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x39a3720
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39a3640
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39a3560
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x195d260
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|Native|Public|BlueprintCallable) // @ game+0x39a3220
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x39a3190
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x2304e10
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // @ game+0x23eb350
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x39a3110
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x2304d10
};

// Class Landscape.Landscape
// Size: 0x2cff6ab8 (Inherited: 0x2cff6ab8)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x2cff6b08 (Inherited: 0x2cff6b08)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x174cbb0
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x2bad3b0
	void GetBlueprintRenderDependencies(struct TArray<struct UTexture2D*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
};

// Class Landscape.LandscapeComponent
// Size: 0x2cff6ab0 (Inherited: 0x2cffdfc0)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x4c0(0x04)
	int32_t SectionBaseY; // 0x4c4(0x04)
	int32_t ComponentSizeQuads; // 0x4c8(0x04)
	int32_t SubsectionSizeQuads; // 0x4cc(0x04)
	int32_t NumSubsections; // 0x4d0(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x4d8(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x4e0(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x4e8(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x4f8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x508(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x518(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x528(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x538(0x08)
	struct FVector4 WeightmapScaleBias; // 0x540(0x10)
	float WeightmapSubsectionOffset; // 0x550(0x04)
	struct FVector4 HeightmapScaleBias; // 0x560(0x10)
	struct FBox CachedLocalBox; // 0x570(0x1c)
	LazyObjectProperty CollisionComponent; // 0x58c(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x5a8(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x5b0(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x5c0(0x10)
	struct FGuid MapBuildDataId; // 0x5d0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x5e0(0x10)
	int32_t CollisionMipLevel; // 0x5f0(0x04)
	int32_t SimpleCollisionMipLevel; // 0x5f4(0x04)
	float NegativeZBoundsExtension; // 0x5f8(0x04)
	float PositiveZBoundsExtension; // 0x5fc(0x04)
	float StaticLightingResolution; // 0x600(0x04)
	int32_t ForcedLOD; // 0x604(0x04)
	int32_t LODBias; // 0x608(0x04)
	struct FGuid StateID; // 0x60c(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x61c(0x10)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x630(0x08)
	char MobileBlendableLayerMask; // 0x638(0x01)
	struct UMaterialInterface* MobileMaterialInterface; // 0x640(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x648(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x658(0x10)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39a0c90
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x39a0b80
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x39a0aa0
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x2cff6b08 (Inherited: 0x2cff6b08)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x2cff6a58 (Inherited: 0x2cff6b08)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x2cff6ac0 (Inherited: 0x2cffdfc0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x30(0x10)
	char bEnableDensityScaling : 1; // 0x40(0x01)
	struct UStaticMesh* GrassMesh; // 0x48(0x08)
	float GrassDensity; // 0x50(0x04)
	float PlacementJitter; // 0x54(0x04)
	int32_t StartCullDistance; // 0x58(0x04)
	int32_t EndCullDistance; // 0x5c(0x04)
	bool RandomRotation; // 0x60(0x01)
	bool AlignToSurface; // 0x61(0x01)
	char pad_2CFF695A_1 : 7; // 0x2cff695a(0x01)
	char pad_2CFF695B[0x10d]; // 0x2cff695b(0x10d)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x2cff6aa0 (Inherited: 0x2cffdfc0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x4c0(0x10)
	int32_t SectionBaseX; // 0x4d0(0x04)
	int32_t SectionBaseY; // 0x4d4(0x04)
	int32_t CollisionSizeQuads; // 0x4d8(0x04)
	float CollisionScale; // 0x4dc(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x4e0(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x4e8(0x10)
	struct FGuid HeightfieldGuid; // 0x4f8(0x10)
	struct FBox CachedLocalBox; // 0x508(0x1c)
	LazyObjectProperty RenderComponent; // 0x524(0x1c)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x550(0x10)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39a3530
};

// Class Landscape.LandscapeInfo
// Size: 0x2cff6b18 (Inherited: 0x2cff6930)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x30(0x1c)
	struct FGuid LandscapeGuid; // 0x4c(0x10)
	int32_t ComponentSizeQuads; // 0x5c(0x04)
	int32_t SubsectionSizeQuads; // 0x60(0x04)
	int32_t ComponentNumSubsections; // 0x64(0x04)
	struct FVector DrawScale; // 0x68(0x0c)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x118(0x10)
	char pad_2CFF6984[0x194]; // 0x2cff6984(0x194)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x2cff6a88 (Inherited: 0x2cff6930)
struct ULandscapeInfoMap : UObject {
	char pad_2CFF6930[0x158]; // 0x2cff6930(0x158)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x30(0x0c)
	struct UPhysicalMaterial* PhysMaterial; // 0x40(0x08)
	float Hardness; // 0x48(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x4c(0x10)
	char pad_2CFF6958[0x108]; // 0x2cff6958(0x108)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x2cff6a30 (Inherited: 0x2cff6b18)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x418(0x10)
	char bIsLayerThumbnail : 1; // 0x428(0x01)
	char bDisableTessellation : 1; // 0x428(0x01)
	char bMobile : 1; // 0x428(0x01)
	char bEditorToolUsage : 1; // 0x428(0x01)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x2cff6ac0 (Inherited: 0x2cff6aa0)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x5a0(0x10)
	char pad_2CFF6AB0[0x10]; // 0x2cff6ab0(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x2cff6b10 (Inherited: 0x2cff6b08)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x308(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x2cff6a80 (Inherited: 0x2cff6a60)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x558(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x568(0x10)
	int8_t ProxyLOD; // 0x578(0x01)
};

// Class Landscape.LandscapeSettings
// Size: 0x2cff6a50 (Inherited: 0x2cff6a48)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x48(0x04)
	char pad_2CFF6A4C[0x4]; // 0x2cff6a4c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x2cff6af0 (Inherited: 0x2cffdfc0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x4c0(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x4d0(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x4e0(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x39a6730
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0x2cff6ab0 (Inherited: 0x2cff6930)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Width; // 0x48(0x04)
	float LayerWidthRatio; // 0x4c(0x04)
	float SideFalloff; // 0x50(0x04)
	float LeftSideFalloffFactor; // 0x54(0x04)
	float RightSideFalloffFactor; // 0x58(0x04)
	float LeftSideLayerFalloffFactor; // 0x5c(0x04)
	float RightSideLayerFalloffFactor; // 0x60(0x04)
	float EndFalloff; // 0x64(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x68(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa8(0x08)
	char pad_2CFF69AC[0x104]; // 0x2cff69ac(0x104)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0x2cff6ab8 (Inherited: 0x2cff6930)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x30(0x30)
	struct FInterpCurveVector SplineInfo; // 0x60(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa8(0x10)
	char pad_2CFF69B4[0x104]; // 0x2cff69b4(0x104)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ab8)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x6b8(0x1c)
	char pad_2CFF6AD4[0x4]; // 0x2cff6ad4(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a38)
struct ULandscapeSubsystem : UWorldSubsystem {
	char pad_2CFF6A38[0x68]; // 0x2cff6a38(0x68)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x30(0x20)
	struct FGuid LayerGuid; // 0x50(0x10)
	char pad_2CFF6960[0x100]; // 0x2cff6960(0x100)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x2cff6c68 (Inherited: 0x2cffd348)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x48(0x10)
	struct FGuid ExpressionGUID; // 0x58(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x2cff6a60 (Inherited: 0x2cffd348)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x48(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x49(0x01)
	float MappingScale; // 0x4c(0x04)
	float MappingRotation; // 0x50(0x04)
	float MappingPanU; // 0x54(0x04)
	float MappingPanV; // 0x58(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x2cff6a68 (Inherited: 0x2cffd348)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x48(0x0c)
	float PreviewWeight; // 0x54(0x04)
	struct FGuid ExpressionGUID; // 0x58(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x2cff6aa0 (Inherited: 0x2cffd348)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x48(0x10)
	struct FExpressionInput LayerNotUsed; // 0x64(0x10)
	struct FName ParameterName; // 0x80(0x0c)
	char PreviewUsed : 1; // 0x8c(0x01)
	struct FGuid ExpressionGUID; // 0x90(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x2cff6ab0 (Inherited: 0x2cffd348)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x48(0x10)
	struct FExpressionInput Layer; // 0x64(0x10)
	struct FName ParameterName; // 0x80(0x0c)
	float PreviewWeight; // 0x8c(0x04)
	struct FVector ConstBase; // 0x90(0x0c)
	struct FGuid ExpressionGUID; // 0x9c(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x2cff6a58 (Inherited: 0x2cffd348)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x48(0x10)
};

