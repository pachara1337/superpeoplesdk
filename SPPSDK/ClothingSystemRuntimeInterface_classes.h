// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UClothConfigBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UClothingSimulationFactory : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UClothingSimulationInteractor : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)

	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness // (Native|Public|BlueprintCallable) // @ game+0x3d452f0
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated // (Native|Public|BlueprintCallable) // @ game+0x3731ba0
	void EnableGravityOverride(struct FVector& InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3d45260
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride // (Native|Public|BlueprintCallable) // @ game+0x3d45240
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated // (Native|Public|BlueprintCallable) // @ game+0x3731bc0
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UClothSharedSimConfigBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; // 0x30(0x10)
	struct FGuid AssetGuid; // 0x40(0x10)
	char pad_2CFF6950[0x100]; // 0x2cff6950(0x100)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0x2cff6ae8 (Inherited: 0x2cff6930)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector> Vertices; // 0x30(0x10)
	struct TArray<struct FVector> Normals; // 0x40(0x10)
	struct TArray<uint32_t> Indices; // 0x50(0x10)
	struct TArray<float> InverseMasses; // 0x60(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x70(0x10)
	int32_t NumFixedVerts; // 0x80(0x04)
	int32_t MaxBoneWeights; // 0x84(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x88(0x10)
	char pad_2CFF6998[0x150]; // 0x2cff6998(0x150)
};

