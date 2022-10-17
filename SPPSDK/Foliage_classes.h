// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x2cff6a50 (Inherited: 0x2cff6b20)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x720(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x730(0x10)
	struct FGuid GenerationGuid; // 0x740(0x10)
};

// Class Foliage.FoliageSettings
// Size: 0x2cff6a70 (Inherited: 0x2cff6a48)
struct UFoliageSettings : UDeveloperSettings {
	struct TArray<struct FCullDistancePreset> CullDistancePresets; // 0x48(0x10)
	int32_t DesiredMaxTrianglesToRender; // 0x58(0x04)
	float MinimumScreenSize; // 0x5c(0x04)
	int32_t MaxOcclusionQueriesPerComponent; // 0x60(0x04)
	int32_t MinOcclusionQueriesPerComponent; // 0x64(0x04)
	int32_t MinInstancesPerOcclusionQuery; // 0x68(0x04)
	char pad_2CFF6A6C[0x4]; // 0x2cff6a6c(0x04)
};

// Class Foliage.FoliageStatistics
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3962640
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3962520
};

// Class Foliage.FoliageType
// Size: 0x2cff6af0 (Inherited: 0x2cff6930)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x30(0x10)
	float Density; // 0x40(0x04)
	float DensityAdjustmentFactor; // 0x44(0x04)
	float Radius; // 0x48(0x04)
	bool bSingleInstanceModeOverrideRadius; // 0x4c(0x01)
	float SingleInstanceModeRadius; // 0x50(0x04)
	enum class EFoliageScaling Scaling; // 0x54(0x01)
	struct FFloatInterval ScaleX; // 0x58(0x08)
	struct FFloatInterval ScaleY; // 0x60(0x08)
	struct FFloatInterval ScaleZ; // 0x68(0x08)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x70(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0xa0(0x01)
	float VertexColorMaskThreshold; // 0xa4(0x04)
	char VertexColorMaskInvert : 1; // 0xa8(0x01)
	struct FFloatInterval ZOffset; // 0xac(0x08)
	char AlignToNormal : 1; // 0xb4(0x01)
	float AlignMaxAngle; // 0xb8(0x04)
	char RandomYaw : 1; // 0xbc(0x01)
	float RandomPitchAngle; // 0xc0(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0xc4(0x08)
	struct FFloatInterval Height; // 0xcc(0x08)
	struct TArray<struct FName> LandscapeLayers; // 0xd8(0x10)
	float MinimumLayerWeight; // 0xe8(0x04)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xf0(0x10)
	float MinimumExclusionLayerWeight; // 0x100(0x04)
	struct FName LandscapeLayer; // 0x104(0x0c)
	char CollisionWithWorld : 1; // 0x110(0x01)
	struct FVector CollisionScale; // 0x114(0x0c)
	struct FBoxSphereBounds MeshBounds; // 0x120(0x1c)
	struct FVector LowBoundOriginRadius; // 0x13c(0x0c)
	enum class EComponentMobility Mobility; // 0x148(0x01)
	enum class ECullDistancePreset CullDistancePreset; // 0x149(0x01)
	bool bOverrideCullDistance; // 0x14a(0x01)
	struct FInt32Interval CullDistance; // 0x14c(0x08)
	float MinScreenSizeScale; // 0x154(0x04)
	char bEnableStaticLighting : 1; // 0x158(0x01)
	char CastShadow : 1; // 0x158(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x158(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x158(0x01)
	char pad_2CFF6A37_0 : 4; // 0x2cff6a37(0x01)
	char bCastDynamicShadow : 1; // 0x158(0x01)
	char bCastStaticShadow : 1; // 0x158(0x01)
	char bCastShadowAsTwoSided : 1; // 0x158(0x01)
	char bReceivesDecals : 1; // 0x158(0x01)
	char bOverrideLightMapRes : 1; // 0x159(0x01)
	int32_t OverriddenLightMapRes; // 0x15c(0x04)
	enum class ELightmapType LightmapType; // 0x160(0x01)
	char bUseAsOccluder : 1; // 0x164(0x01)
	struct FBodyInstance BodyInstance; // 0x168(0x190)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x2f8(0x01)
	char InstanceBodiesSplitRatio; // 0x2f9(0x01)
	struct FLightingChannels LightingChannels; // 0x2fa(0x01)
	char bRenderCustomDepth : 1; // 0x2fc(0x01)
	int32_t CustomDepthStencilValue; // 0x300(0x04)
	int32_t TranslucencySortPriority; // 0x304(0x04)
	float CollisionRadius; // 0x308(0x04)
	float ShadeRadius; // 0x30c(0x04)
	int32_t NumSteps; // 0x310(0x04)
	float InitialSeedDensity; // 0x314(0x04)
	float AverageSpreadDistance; // 0x318(0x04)
	float SpreadVariance; // 0x31c(0x04)
	int32_t SeedsPerStep; // 0x320(0x04)
	int32_t DistributionSeed; // 0x324(0x04)
	float MaxInitialSeedOffset; // 0x328(0x04)
	bool bCanGrowInShade; // 0x32c(0x01)
	bool bSpawnsInShade; // 0x32d(0x01)
	float MaxInitialAge; // 0x330(0x04)
	float MaxAge; // 0x334(0x04)
	float OverlapPriority; // 0x338(0x04)
	struct FFloatInterval ProceduralScale; // 0x33c(0x08)
	struct FRuntimeFloatCurve ScaleCurve; // 0x348(0x88)
	int32_t ChangeCount; // 0x3d0(0x04)
	char ReapplyDensity : 1; // 0x3d4(0x01)
	char ReapplyRadius : 1; // 0x3d4(0x01)
	char ReapplyAlignToNormal : 1; // 0x3d4(0x01)
	char ReapplyRandomYaw : 1; // 0x3d4(0x01)
	char ReapplyScaling : 1; // 0x3d4(0x01)
	char pad_2CFF6C9F_0 : 5; // 0x2cff6c9f(0x01)
	char ReapplyScaleX : 1; // 0x3d4(0x01)
	char ReapplyScaleY : 1; // 0x3d4(0x01)
	char ReapplyScaleZ : 1; // 0x3d4(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x3d5(0x01)
	char ReapplyGroundSlope : 1; // 0x3d5(0x01)
	char ReapplyHeight : 1; // 0x3d5(0x01)
	char ReapplyLandscapeLayers : 1; // 0x3d5(0x01)
	char ReapplyZOffset : 1; // 0x3d5(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x3d5(0x01)
	char ReapplyVertexColorMask : 1; // 0x3d5(0x01)
	char bEnableDensityScaling : 1; // 0x3d5(0x01)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x3d8(0x10)
	int32_t VirtualTextureCullMips; // 0x3e8(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3ec(0x01)
};

// Class Foliage.FoliageType_Actor
// Size: 0x2cff6b00 (Inherited: 0x2cff6af0)
struct UFoliageType_Actor : UFoliageType {
	struct AActor* ActorClass; // 0x3f0(0x08)
	bool bShouldAttachToBaseComponent; // 0x3f8(0x01)
	char pad_2CFF6AF9[0x7]; // 0x2cff6af9(0x07)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x2cff6b10 (Inherited: 0x2cff6af0)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x3f0(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x3f8(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x408(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x2cff6a58 (Inherited: 0x2cff6b08)
struct AInstancedFoliageActor : AActor {
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x2cff6a78 (Inherited: 0x2cff6b18)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x318(0x08)
	struct FVector TouchingActorEntryPosition; // 0x320(0x0c)
	struct FVector FoliageVelocity; // 0x32c(0x0c)
	struct FVector FoliageForce; // 0x338(0x0c)
	struct FVector FoliagePosition; // 0x344(0x0c)
	float FoliageDamageImpulseScale; // 0x350(0x04)
	float FoliageTouchImpulseScale; // 0x354(0x04)
	float FoliageStiffness; // 0x358(0x04)
	float FoliageStiffnessQuadratic; // 0x35c(0x04)
	float FoliageDamping; // 0x360(0x04)
	float MaxDamageImpulse; // 0x364(0x04)
	float MaxTouchImpulse; // 0x368(0x04)
	float MaxForce; // 0x36c(0x04)
	float Mass; // 0x370(0x04)

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // (Final|Native|Protected|HasOutParms) // @ game+0x3962310
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x2cff6a48 (Inherited: 0x2cff6a40)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x340(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x2cff6ae0 (Inherited: 0x2cff6cb8)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xb8(0x08)
	float TileOverlap; // 0xc0(0x04)
	struct AVolume* SpawningVolume; // 0xc8(0x08)
	struct FGuid ProceduralGuid; // 0xd0(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x30(0x04)
	float TileSize; // 0x34(0x04)
	int32_t NumUniqueTiles; // 0x38(0x04)
	float MinimumQuadTreeSize; // 0x3c(0x04)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x48(0x10)
	char pad_2CFF6950[0x120]; // 0x2cff6950(0x120)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // (Final|Native|Public|BlueprintCallable) // @ game+0x3962790
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x30(0x08)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd8(0x10)
	char pad_2CFF6948[0x118]; // 0x2cff6948(0x118)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x2cff6a48 (Inherited: 0x2cff6a40)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x340(0x08)
};

