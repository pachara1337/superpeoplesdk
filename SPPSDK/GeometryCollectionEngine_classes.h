// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x2cff6a60 (Inherited: 0x2cff6a40)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x238(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x238(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x238(0x01)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x23c(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x254(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x26c(0x18)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x288(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x2d8(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x328(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x338(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x348(0x10)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x49098e0
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x49097e0
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x49096e0
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4909640
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x49095b0
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4909480
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x49093f0
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4909350
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x49092c0
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x4909240
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x195d260
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x49090a0
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x4908de0
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x195d260
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x2cff6b18 (Inherited: 0x2cff6b08)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x308(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x310(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x49090d0
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x2cff6a58 (Inherited: 0x2cff6930)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x30(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x40(0x08)
	struct FGuid CompatibleCollectionState; // 0x48(0x10)
	char pad_2CFF6958[0x100]; // 0x2cff6958(0x100)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x2cff6aa0 (Inherited: 0x2cff6af0)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x4f8(0x08)
	struct UGeometryCollection* RestCollection; // 0x5e0(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x5e8(0x10)
	bool Simulating; // 0x5f8(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0x600(0x01)
	bool EnableClustering; // 0x601(0x01)
	int32_t ClusterGroupIndex; // 0x604(0x04)
	int32_t MaxClusterLevel; // 0x608(0x04)
	struct TArray<float> DamageThreshold; // 0x610(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x620(0x01)
	int32_t CollisionGroup; // 0x624(0x04)
	float CollisionSampleFraction; // 0x628(0x04)
	float LinearEtherDrag; // 0x62c(0x04)
	float AngularEtherDrag; // 0x630(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x638(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x640(0x01)
	struct FVector InitialLinearVelocity; // 0x644(0x0c)
	struct FVector InitialAngularVelocity; // 0x650(0x0c)
	struct FGeomComponentCacheParameters CacheParameters; // 0x660(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x6b0(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x6c0(0x10)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x6e8(0x10)
	float DesiredCacheTime; // 0x6f8(0x04)
	bool CachePlayback; // 0x6fc(0x01)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x700(0x10)
	bool bNotifyBreaks; // 0x710(0x01)
	bool bNotifyCollisions; // 0x711(0x01)
	struct UBodySetup* DummyBodySetup; // 0x970(0x08)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x4909520
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x4908f30
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4908e60
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x2cff6af0 (Inherited: 0x2cff6b08)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x308(0x01)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x310(0x18)
	bool bDebugDrawWholeCollection; // 0x328(0x01)
	bool bDebugDrawHierarchy; // 0x329(0x01)
	bool bDebugDrawClustering; // 0x32a(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x32b(0x01)
	bool bShowRigidBodyId; // 0x32c(0x01)
	bool bShowRigidBodyCollision; // 0x32d(0x01)
	bool bCollisionAtOrigin; // 0x32e(0x01)
	bool bShowRigidBodyTransform; // 0x32f(0x01)
	bool bShowRigidBodyInertia; // 0x330(0x01)
	bool bShowRigidBodyVelocity; // 0x331(0x01)
	bool bShowRigidBodyForce; // 0x332(0x01)
	bool bShowRigidBodyInfos; // 0x333(0x01)
	bool bShowTransformIndex; // 0x334(0x01)
	bool bShowTransform; // 0x335(0x01)
	bool bShowParent; // 0x336(0x01)
	bool bShowLevel; // 0x337(0x01)
	bool bShowConnectivityEdges; // 0x338(0x01)
	bool bShowGeometryIndex; // 0x339(0x01)
	bool bShowGeometryTransform; // 0x33a(0x01)
	bool bShowBoundingBox; // 0x33b(0x01)
	bool bShowFaces; // 0x33c(0x01)
	bool bShowFaceIndices; // 0x33d(0x01)
	bool bShowFaceNormals; // 0x33e(0x01)
	bool bShowSingleFace; // 0x33f(0x01)
	int32_t SingleFaceIndex; // 0x340(0x04)
	bool bShowVertices; // 0x344(0x01)
	bool bShowVertexIndices; // 0x345(0x01)
	bool bShowVertexNormals; // 0x346(0x01)
	bool bUseActiveVisualization; // 0x347(0x01)
	float PointThickness; // 0x348(0x04)
	float LineThickness; // 0x34c(0x04)
	bool bTextShadow; // 0x350(0x01)
	float TextScale; // 0x354(0x04)
	float NormalScale; // 0x358(0x04)
	float AxisScale; // 0x35c(0x04)
	float ArrowScale; // 0x360(0x04)
	struct FColor RigidBodyIdColor; // 0x364(0x04)
	float RigidBodyTransformScale; // 0x368(0x04)
	struct FColor RigidBodyCollisionColor; // 0x36c(0x04)
	struct FColor RigidBodyInertiaColor; // 0x370(0x04)
	struct FColor RigidBodyVelocityColor; // 0x374(0x04)
	struct FColor RigidBodyForceColor; // 0x378(0x04)
	struct FColor RigidBodyInfoColor; // 0x37c(0x04)
	struct FColor TransformIndexColor; // 0x380(0x04)
	float TransformScale; // 0x384(0x04)
	struct FColor LevelColor; // 0x388(0x04)
	struct FColor ParentColor; // 0x38c(0x04)
	float ConnectivityEdgeThickness; // 0x390(0x04)
	struct FColor GeometryIndexColor; // 0x394(0x04)
	float GeometryTransformScale; // 0x398(0x04)
	struct FColor BoundingBoxColor; // 0x39c(0x04)
	struct FColor FaceColor; // 0x3a0(0x04)
	struct FColor FaceIndexColor; // 0x3a4(0x04)
	struct FColor FaceNormalColor; // 0x3a8(0x04)
	struct FColor SingleFaceColor; // 0x3ac(0x04)
	struct FColor VertexColor; // 0x3b0(0x04)
	struct FColor VertexIndexColor; // 0x3b4(0x04)
	struct FColor VertexNormalColor; // 0x3b8(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x3c0(0x08)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0x2cff6ad0 (Inherited: 0x2cff6cb8)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb8(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xc0(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0x2cff6ad8 (Inherited: 0x2cff6930)
struct UGeometryCollection : UObject {
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x48(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x49(0x01)
	int32_t MinLevelSetResolution; // 0x4c(0x04)
	int32_t MaxLevelSetResolution; // 0x50(0x04)
	int32_t MinClusterLevelSetResolution; // 0x54(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x58(0x04)
	float CollisionObjectReductionPercentage; // 0x5c(0x04)
	bool bMassAsDensity; // 0x60(0x01)
	float Mass; // 0x64(0x04)
	float MinimumMassClamp; // 0x68(0x04)
	float CollisionParticlesFraction; // 0x6c(0x04)
	int32_t MaximumCollisionParticles; // 0x70(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x78(0x10)
	bool EnableRemovePiecesOnFracture; // 0x88(0x01)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x90(0x10)
	struct FGuid PersistentGuid; // 0xa0(0x10)
	struct FGuid StateGuid; // 0xb0(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xc0(0x04)
	char pad_2CFF69AC[0x12c]; // 0x2cff69ac(0x12c)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x2cff6aa0 (Inherited: 0x2cff6b08)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x308(0x08)
	struct UMaterial* RayMarchMaterial; // 0x310(0x08)
	float SurfaceTolerance; // 0x318(0x04)
	float Isovalue; // 0x31c(0x04)
	bool Enabled; // 0x320(0x01)
	bool RenderVolumeBoundingBox; // 0x321(0x01)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x2cff6a40 (Inherited: 0x2cff6cb8)
struct USkeletalMeshSimulationComponent : UActorComponent {
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xc0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xc8(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xd0(0x08)
	bool bSimulating; // 0xd8(0x01)
	bool bNotifyCollisions; // 0xd9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xda(0x01)
	float Density; // 0xdc(0x04)
	float MinMass; // 0xe0(0x04)
	float MaxMass; // 0xe4(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xe8(0x01)
	float ImplicitShapeParticlesPerUnitArea; // 0xec(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0xf0(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0xf4(0x04)
	int32_t MinLevelSetResolution; // 0xf8(0x04)
	int32_t MaxLevelSetResolution; // 0xfc(0x04)
	int32_t CollisionGroup; // 0x100(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x104(0x01)
	struct FVector InitialLinearVelocity; // 0x108(0x0c)
	struct FVector InitialAngularVelocity; // 0x114(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x120(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x2cff6a40 (Inherited: 0x2cff6cb8)
struct UStaticMeshSimulationComponent : UActorComponent {
	bool Simulating; // 0xc0(0x01)
	bool bNotifyCollisions; // 0xc1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xc2(0x01)
	float Mass; // 0xc4(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xc8(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xc9(0x01)
	int32_t MinLevelSetResolution; // 0xcc(0x04)
	int32_t MaxLevelSetResolution; // 0xd0(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xd4(0x01)
	struct FVector InitialLinearVelocity; // 0xd8(0x0c)
	struct FVector InitialAngularVelocity; // 0xe4(0x0c)
	float DamageThreshold; // 0xf0(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xf8(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x100(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x108(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x128(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x4909080
};

