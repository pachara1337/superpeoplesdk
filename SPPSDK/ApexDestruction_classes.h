// Class ApexDestruction.DestructibleActor
// Size: 0x2cff6b20 (Inherited: 0x2cff6b08)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x308(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x310(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x2cff6af0 (Inherited: 0x2cff6b00)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x700(0x01)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x708(0x10)
	bool bEnableHardSleeping; // 0x718(0x01)
	float LargeChunkThreshold; // 0x71c(0x04)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x730(0x10)
	struct FMulticastInlineDelegate OnFractureEffectSpawned; // 0x740(0x10)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x12b5ed0
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x12b5ea0
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x12b5cf0
	void ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x12b5b80
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0x2cff6ac0 (Inherited: 0x2cff6930)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x30(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x34(0x24)
	int32_t RandomSeed; // 0x58(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x60(0x10)
	int32_t OriginalSubmeshCount; // 0x70(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x78(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x88(0x10)
	char pad_2CFF6990[0x130]; // 0x2cff6990(0x130)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x2cff6a58 (Inherited: 0x2cff6ab8)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x3b8(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x440(0x10)
};

