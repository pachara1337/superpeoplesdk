// Class CableComponent.CableActor
// Size: 0x2cff6b10 (Inherited: 0x2cff6b08)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x308(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x2cff6a90 (Inherited: 0x2cff6af0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x4f0(0x01)
	bool bAttachEnd; // 0x4f1(0x01)
	struct FComponentReference AttachEndTo; // 0x4f8(0x30)
	struct FName AttachEndToSocketName; // 0x528(0x0c)
	struct FVector EndLocation; // 0x534(0x0c)
	float CableLength; // 0x540(0x04)
	int32_t NumSegments; // 0x544(0x04)
	float SubstepTime; // 0x548(0x04)
	int32_t SolverIterations; // 0x54c(0x04)
	bool bEnableStiffness; // 0x550(0x01)
	bool bEnableCollision; // 0x551(0x01)
	float CollisionFriction; // 0x554(0x04)
	struct FVector CableForce; // 0x558(0x0c)
	float CableGravityScale; // 0x564(0x04)
	float CableWidth; // 0x568(0x04)
	int32_t NumSides; // 0x56c(0x04)
	float TileMaterial; // 0x570(0x04)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1b087a0
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0x1b08670
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b085c0
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b08590
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b08560
};

