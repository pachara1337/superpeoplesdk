// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0x2cff6ac0 (Inherited: 0x2cff6cb8)
struct UChaosDebugDrawComponent : UActorComponent {
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0x2cff6ac0 (Inherited: 0x2cff6cb8)
struct UChaosEventListenerComponent : UActorComponent {
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x2cff6a78 (Inherited: 0x2cff6ac0)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1d0(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x220(0x50)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x48e39d0
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UChaosSolver : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x2cff6a90 (Inherited: 0x2cff6b08)
struct AChaosSolverActor : AActor {
	float TimeStepMultiplier; // 0x308(0x04)
	int32_t CollisionIterations; // 0x30c(0x04)
	int32_t PushOutIterations; // 0x310(0x04)
	int32_t PushOutPairIterations; // 0x314(0x04)
	float ClusterConnectionFactor; // 0x318(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x31c(0x01)
	bool DoGenerateCollisionData; // 0x31d(0x01)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x320(0x10)
	bool DoGenerateBreakingData; // 0x330(0x01)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x334(0x10)
	bool DoGenerateTrailingData; // 0x344(0x01)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x348(0x10)
	bool bHasFloor; // 0x358(0x01)
	float FloorHeight; // 0x35c(0x04)
	float MassScale; // 0x360(0x04)
	bool bGenerateContactGraph; // 0x364(0x01)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x365(0x03)
	struct UBillboardComponent* SpriteComponent; // 0x368(0x08)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x388(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x48e3ae0
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x48e3ac0
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x2cff6a70 (Inherited: 0x2cff6a48)
struct UChaosSolverSettings : UDeveloperSettings {
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x50(0x20)
	char pad_2CFF6A68[0x8]; // 0x2cff6a68(0x08)
};

