// BlueprintGeneratedClass ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C
// Size: 0x2cff6ae3 (Inherited: 0x2cff6cb8)
struct UProjectileTrajectoryComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct TArray<struct UParticleSystemComponent*> BeamsArray; // 0xc0(0x10)
	struct UDecalComponent* Decal; // 0xd0(0x08)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector InitialVelocity; // 0xe4(0x0c)
	float PathLifeTime; // 0xf0(0x04)
	float TimeInterval; // 0xf4(0x04)
	enum class E_DrawingType DrawingType; // 0xf8(0x01)
	struct FVector DesiredStartLocation; // 0xfc(0x0c)
	struct FVector InitialLocalVelocity; // 0x108(0x0c)
	struct UParticleSystem* BeamParticle; // 0x118(0x08)
	struct FLinearColor DebugColor; // 0x120(0x10)
	float DebugThickness; // 0x130(0x04)
	struct FLinearColor ParticleColor; // 0x134(0x10)
	float ParticleColorMultipler; // 0x144(0x04)
	struct UMaterialInterface* DecalMaterial; // 0x148(0x08)
	struct FLinearColor DecalColor; // 0x150(0x10)
	struct FVector DecalScale; // 0x160(0x0c)
	bool ConstantScale?; // 0x16c(0x01)
	struct FTimerHandle ResizerTimer; // 0x170(0x08)
	struct FVector DecalScaleMin; // 0x178(0x0c)
	struct FVector DecalScaleMax; // 0x184(0x0c)
	float ScaleTime; // 0x190(0x04)
	bool ScaleStart?; // 0x194(0x01)
	struct FVector Gravity; // 0x198(0x0c)
	float InitXAxisValue; // 0x1a4(0x04)
	bool CreateBeam; // 0x1a8(0x01)
	int32_t HitBeamIndex; // 0x1ac(0x04)
	struct USplineMeshComponent* SplineStaticMesh; // 0x1b0(0x08)
	struct TArray<struct USplineMeshComponent*> SplineMeshArray; // 0x1b8(0x10)
	struct FVector SM-IndicatorScale; // 0x1c8(0x0c)
	struct UStaticMeshComponent* SM-Indicator; // 0x1d8(0x08)
	bool Hit; // 0x1e0(0x01)
	bool bForceStop; // 0x1e1(0x01)
	bool FPSMode; // 0x1e2(0x01)

	void InterpProjectileTrajectoryJumpState(bool Jump, struct FVector Location, struct FRotator Rotation, struct FVector& StartLocation, struct FVector& Velocity); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.InterpProjectileTrajectoryJumpState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResizeDecalFunc(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResizeDecalFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetParticleColorDecalColor(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SetParticleColorDecalColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalculateStartLocationAndLocalVelocity(struct FVector& StartLocaton, struct FVector&  n??tialLocalVelocit); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.CalculateStartLocationAndLocalVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ClearBeams(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ClearBeams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddNewBeam(struct FVector NewSourcePoint, struct FVector NewTargetPoint, int32_t Index); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.AddNewBeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void VisualizeSegment(enum class E_DrawingType Selection, struct FVector Point1, struct FVector Point2, int32_t Index); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.VisualizeSegment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetSegmentAtTime(struct FVector StartLocation, struct FVector InitialVelocity, struct FVector Gravity, float Time1, float Time2, struct FVector& Point1, struct FVector& Point2); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.GetSegmentAtTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DrawProjectileTrajectory(struct FVector DesiredStartLocation, struct FVector Gravity, struct FVector InitialLocalVelocity, float PathLifeTime, float TimeInterval); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.DrawProjectileTrajectory // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BreakDrawingLoop(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.BreakDrawingLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void StartDraw(struct FVector DesiredStartLocation, struct FVector Gravity, struct FVector InitialLocalVelocity, float PathLifeTime, float TimeInterval, enum class E_DrawingType DrawingType); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StartDraw // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopDraw(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.StopDraw // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SpawnActorFromClass(struct AActor* Class, struct FTransform SpawnTransform, struct FVector ProjectileVelocity, struct USoundBase* Sound, struct FVector NewScale3D, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct APawn* Instigator); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.SpawnActorFromClass // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ForceStopDraw(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ForceStopDraw // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetForceStopDraw(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ResetForceStopDraw // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void IsFPS(bool bIsThirdPerson); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.IsFPS // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ProjectileTrajectoryComponent(int32_t EntryPoint); // Function ProjectileTrajectoryComponent.ProjectileTrajectoryComponent_C.ExecuteUbergraph_ProjectileTrajectoryComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

