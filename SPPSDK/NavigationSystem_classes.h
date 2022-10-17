// Class NavigationSystem.NavigationData
// Size: 0x2cff6b00 (Inherited: 0x2cff6b08)
struct ANavigationData : AActor {
	struct UPrimitiveComponent* RenderingComp; // 0x310(0x08)
	struct FNavDataConfig NavDataConfig; // 0x318(0x90)
	char bEnableDrawing : 1; // 0x3a8(0x01)
	char bForceRebuildOnLoad : 1; // 0x3a8(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x3a8(0x01)
	char bCanBeMainNavData : 1; // 0x3a8(0x01)
	char bCanSpawnOnRebuild : 1; // 0x3a8(0x01)
	char bRebuildAtRuntime : 1; // 0x3a8(0x01)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x3ac(0x01)
	float ObservedPathsTickInterval; // 0x3b0(0x04)
	uint32_t DataVersion; // 0x3b4(0x04)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x498(0x10)
};

// Class NavigationSystem.AbstractNavData
// Size: 0x2cff6b00 (Inherited: 0x2cff6b00)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UCrowdManagerBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class NavigationSystem.NavArea
// Size: 0x2cff6a50 (Inherited: 0x2cff6a38)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x38(0x04)
	float FixedAreaEnteringCost; // 0x3c(0x04)
	struct FColor DrawColor; // 0x40(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x44(0x04)
	char bSupportsAgent0 : 1; // 0x48(0x01)
	char bSupportsAgent1 : 1; // 0x48(0x01)
	char bSupportsAgent2 : 1; // 0x48(0x01)
	char bSupportsAgent3 : 1; // 0x48(0x01)
	char bSupportsAgent4 : 1; // 0x48(0x01)
	char bSupportsAgent5 : 1; // 0x48(0x01)
	char bSupportsAgent6 : 1; // 0x48(0x01)
	char bSupportsAgent7 : 1; // 0x48(0x01)
	char bSupportsAgent8 : 1; // 0x49(0x01)
	char bSupportsAgent9 : 1; // 0x49(0x01)
	char bSupportsAgent10 : 1; // 0x49(0x01)
	char bSupportsAgent11 : 1; // 0x49(0x01)
	char bSupportsAgent12 : 1; // 0x49(0x01)
	char bSupportsAgent13 : 1; // 0x49(0x01)
	char bSupportsAgent14 : 1; // 0x49(0x01)
	char bSupportsAgent15 : 1; // 0x49(0x01)
	char pad_2CFF6A4A[0x6]; // 0x2cff6a4a(0x06)
};

// Class NavigationSystem.NavArea_Default
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a50)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x50(0x08)
	struct UNavArea* Agent1Area; // 0x58(0x08)
	struct UNavArea* Agent2Area; // 0x60(0x08)
	struct UNavArea* Agent3Area; // 0x68(0x08)
	struct UNavArea* Agent4Area; // 0x70(0x08)
	struct UNavArea* Agent5Area; // 0x78(0x08)
	struct UNavArea* Agent6Area; // 0x80(0x08)
	struct UNavArea* Agent7Area; // 0x88(0x08)
	struct UNavArea* Agent8Area; // 0x90(0x08)
	struct UNavArea* Agent9Area; // 0x98(0x08)
	struct UNavArea* Agent10Area; // 0xa0(0x08)
	struct UNavArea* Agent11Area; // 0xa8(0x08)
	struct UNavArea* Agent12Area; // 0xb0(0x08)
	struct UNavArea* Agent13Area; // 0xb8(0x08)
	struct UNavArea* Agent14Area; // 0xc0(0x08)
	struct UNavArea* Agent15Area; // 0xc8(0x08)
};

// Class NavigationSystem.NavCollision
// Size: 0x2cff6ce0 (Inherited: 0x2cff6a78)
struct UNavCollision : UNavCollisionBase {
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x88(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x98(0x10)
	struct UNavArea* AreaClass; // 0xa8(0x08)
	char bGatherConvexGeometry : 1; // 0xb0(0x01)
	char bCreateOnClient : 1; // 0xb0(0x01)
	char pad_2CFF6AA0_2 : 6; // 0x2cff6aa0(0x01)
	char pad_2CFF6AA1[0x23f]; // 0x2cff6aa1(0x23f)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x2cff6b00 (Inherited: 0x2cff6b00)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x2cff6b08 (Inherited: 0x2cff6b08)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x2cff6a60 (Inherited: 0x2cff6a40)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x238(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x250(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x258(0x08)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0x2cff6ac0 (Inherited: 0x2cff6cb8)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb8(0x04)
	float TileRemovalRadius; // 0xbc(0x04)
};

// Class NavigationSystem.NavigationPath
// Size: 0x2cff6a90 (Inherited: 0x2cff6930)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x30(0x10)
	struct TArray<struct FVector> PathPoints; // 0x40(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x50(0x01)
	char pad_2CFF6951[0x13f]; // 0x2cff6951(0x13f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47ebea0
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x22a2580
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47ebe70
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47eb780
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47eb530
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x47eb430
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation // (Final|Native|Public|BlueprintCallable) // @ game+0x47eb010
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x47eaf30
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x30(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x40(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x44(0x04)
	char pad_2CFF6948[0x108]; // 0x2cff6948(0x108)
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x2cff6a60 (Inherited: 0x2cff6a30)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x30(0x08)
	struct ANavigationData* AbstractNavData; // 0x38(0x08)
	struct FName DefaultAgentName; // 0x40(0x0c)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x50(0x30)
	char bAutoCreateNavigationData : 1; // 0x80(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x80(0x01)
	char bAllowClientSideNavigation : 1; // 0x80(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x80(0x01)
	char bTickWhilePaused : 1; // 0x80(0x01)
	char bSupportRebuilding : 1; // 0x80(0x01)
	char bInitialBuildingLocked : 1; // 0x80(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x81(0x01)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x84(0x01)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x88(0x01)
	float ActiveTilesUpdateInterval; // 0x8c(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x90(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0xa0(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0xa8(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xe8(0x10)
	enum class FNavigationSystemRunMode OperationMode; // 0x1d4(0x01)
	float DirtyAreasUpdateFreq; // 0x52c(0x04)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x47eccf0
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x47ecc30
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x46fa9f0
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x47ecbb0
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode // (Final|Native|Public|BlueprintCallable) // @ game+0x47ecb30
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x47ecb10
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x47eca10
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x47ec840
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated // (Final|Native|Public|BlueprintCallable) // @ game+0x47ec7c0
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x47ec5b0
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData // (Final|Native|Public|BlueprintCallable) // @ game+0x47ec4b0
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x47ec2d0
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x47ec0d0
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x47ebed0
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x47ebed0
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x47ebdf0
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x47ebd70
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x47ebba0
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x47eb9d0
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x47eb7b0
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x47eb560
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x47eb4b0
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x47eb280
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x47eb090
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x2cff6a70 (Inherited: 0x2cff6a68)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x68(0x01)
	char bCreateOnClient : 1; // 0x68(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x68(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x01)
	char pad_2CFF6A68_4 : 4; // 0x2cff6a68(0x01)
	char pad_2CFF6A69[0x7]; // 0x2cff6a69(0x07)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x2cff6b00 (Inherited: 0x2cff6b08)
struct ANavigationTestingActor : AActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x318(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x320(0x08)
	char bActAsNavigationInvoker : 1; // 0x328(0x01)
	struct FNavAgentProperties NavAgentProps; // 0x330(0x38)
	struct FVector QueryingExtent; // 0x368(0x0c)
	struct ANavigationData* MyNavData; // 0x378(0x08)
	struct FVector ProjectedLocation; // 0x380(0x0c)
	char bProjectedLocationValid : 1; // 0x38c(0x01)
	char bSearchStart : 1; // 0x38c(0x01)
	float CostLimitFactor; // 0x390(0x04)
	float MinimumCostLimit; // 0x394(0x04)
	char bBacktracking : 1; // 0x398(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x398(0x01)
	char bGatherDetailedInfo : 1; // 0x398(0x01)
	char bDrawDistanceToWall : 1; // 0x398(0x01)
	char bShowNodePool : 1; // 0x398(0x01)
	char pad_2CFF6B79_0 : 5; // 0x2cff6b79(0x01)
	char bShowBestPath : 1; // 0x398(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x398(0x01)
	char bShouldBeVisibleInGame : 1; // 0x398(0x01)
	enum class ENavCostDisplay CostDisplayMode; // 0x39c(0x01)
	struct FVector2D TextCanvasOffset; // 0x3a0(0x08)
	char bPathExist : 1; // 0x3a8(0x01)
	char bPathIsPartial : 1; // 0x3a8(0x01)
	char bPathSearchOutOfNodes : 1; // 0x3a8(0x01)
	float PathfindingTime; // 0x3ac(0x04)
	float PathCost; // 0x3b0(0x04)
	int32_t PathfindingSteps; // 0x3b4(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x3b8(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x3c0(0x08)
	int32_t ShowStepIndex; // 0x3c8(0x04)
	float OffsetFromCornersDistance; // 0x3cc(0x04)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x2cff6ae0 (Inherited: 0x2cffdfc0)
struct UNavLinkComponent : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> LINKS; // 0x4c8(0x10)
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0x2cff6ae8 (Inherited: 0x2cff6cb8)
struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; // 0xdc(0x01)
	struct UObject* CachedNavParent; // 0xe0(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|Native|Public|BlueprintCallable) // @ game+0x47ef410
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x2cff6a98 (Inherited: 0x2cff6ae8)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	uint32_t NavLinkUserId; // 0xf0(0x04)
	struct UNavArea* EnabledAreaClass; // 0xf8(0x08)
	struct UNavArea* DisabledAreaClass; // 0x100(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x108(0x04)
	struct FVector LinkRelativeStart; // 0x10c(0x0c)
	struct FVector LinkRelativeEnd; // 0x118(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x124(0x01)
	char bLinkEnabled : 1; // 0x128(0x01)
	char bNotifyWhenEnabled : 1; // 0x128(0x01)
	char bNotifyWhenDisabled : 1; // 0x128(0x01)
	char bCreateBoxObstacle : 1; // 0x128(0x01)
	struct FVector ObstacleOffset; // 0x12c(0x0c)
	struct FVector ObstacleExtent; // 0x138(0x0c)
	struct UNavArea* ObstacleAreaClass; // 0x148(0x08)
	float BroadcastRadius; // 0x150(0x04)
	float BroadcastInterval; // 0x154(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x158(0x01)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x2cff6ac0 (Inherited: 0x2cffdfc0)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x2cff6a58 (Inherited: 0x2cff6a58)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x2cff6a48 (Inherited: 0x2cff6a40)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x340(0x04)
	char pad_2CFF6A44[0x4]; // 0x2cff6a44(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x2cff6ad0 (Inherited: 0x2cffdfc0)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x2cff6a50 (Inherited: 0x2cff6ae8)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0xe8(0x08)
	struct FVector FailsafeExtent; // 0xf0(0x0c)
	char bIncludeAgentHeight : 1; // 0xfc(0x01)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x47ef390
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x2cff6a50 (Inherited: 0x2cff6a40)
struct ANavModifierVolume : AVolume {
	struct UNavArea* AreaClass; // 0x348(0x08)
	char pad_2CFF6A48[0x8]; // 0x2cff6a48(0x08)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x47ef310
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x2cff6b18 (Inherited: 0x2cff6b08)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x308(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x310(0x01)
	char bLoadOnClient : 1; // 0x311(0x01)
	char pad_2CFF6B11_1 : 7; // 0x2cff6b11(0x01)
	char pad_2CFF6B12[0x6]; // 0x2cff6b12(0x06)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x2cff6ac0 (Inherited: 0x2cffdfc0)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x2cff6ab8 (Inherited: 0x2cff6b00)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x500(0x01)
	char bDrawPolyEdges : 1; // 0x500(0x01)
	char bDrawFilledPolys : 1; // 0x500(0x01)
	char bDrawNavMeshEdges : 1; // 0x500(0x01)
	char bDrawTileBounds : 1; // 0x500(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x500(0x01)
	char bDrawTileLabels : 1; // 0x500(0x01)
	char bDrawPolygonLabels : 1; // 0x500(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x501(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x501(0x01)
	char bDrawNavLinks : 1; // 0x501(0x01)
	char bDrawFailedNavLinks : 1; // 0x501(0x01)
	char bDrawClusters : 1; // 0x501(0x01)
	char bDrawOctree : 1; // 0x501(0x01)
	char bDrawOctreeDetails : 1; // 0x501(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x501(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x502(0x01)
	char bDrawNavMesh : 1; // 0x502(0x01)
	float DrawOffset; // 0x504(0x04)
	char bFixedTilePoolSize : 1; // 0x508(0x01)
	int32_t TilePoolSize; // 0x50c(0x04)
	float TileSizeUU; // 0x510(0x04)
	float CellSize; // 0x514(0x04)
	float CellHeight; // 0x518(0x04)
	float AgentRadius; // 0x51c(0x04)
	float AgentHeight; // 0x520(0x04)
	float AgentMaxHeight; // 0x524(0x04)
	float AgentMaxSlope; // 0x528(0x04)
	float AgentMaxStepHeight; // 0x52c(0x04)
	float MinRegionArea; // 0x530(0x04)
	float MergeRegionSize; // 0x534(0x04)
	float MaxSimplificationError; // 0x538(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x53c(0x04)
	int32_t TileNumberHardLimit; // 0x540(0x04)
	int32_t PolyRefTileBits; // 0x544(0x04)
	int32_t PolyRefNavPolyBits; // 0x548(0x04)
	int32_t PolyRefSaltBits; // 0x54c(0x04)
	struct FVector NavMeshOriginOffset; // 0x550(0x0c)
	float DefaultDrawDistance; // 0x55c(0x04)
	float DefaultMaxSearchNodes; // 0x560(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x564(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x568(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x569(0x01)
	int32_t RegionChunkSplits; // 0x56c(0x04)
	int32_t LayerChunkSplits; // 0x570(0x04)
	char bSortNavigationAreasByCost : 1; // 0x574(0x01)
	char bPerformVoxelFiltering : 1; // 0x574(0x01)
	char bMarkLowHeightAreas : 1; // 0x574(0x01)
	char bFilterLowSpanSequences : 1; // 0x574(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x574(0x01)
	char pad_2CFF6B6D_0 : 5; // 0x2cff6b6d(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x574(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x574(0x01)
	char bStoreEmptyTileLayers : 1; // 0x574(0x01)
	char bUseVirtualFilters : 1; // 0x575(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x575(0x01)
	char bUseVoxelCache : 1; // 0x575(0x01)
	float TileSetUpdateInterval; // 0x578(0x04)
	float HeuristicScale; // 0x57c(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x580(0x04)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x47ef180
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x2cff6a50 (Inherited: 0x2cff6a40)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char pad_2CFF6A40[0x10]; // 0x2cff6a40(0x10)
};

