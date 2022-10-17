// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// Size: 0x2cff6940 (Inherited: 0x00)
struct FClothCollisionData {
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // 0x00(0x10)
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10(0x10)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; // 0x20(0x10)
	struct TArray<struct FClothCollisionPrim_Box> Boxes; // 0x30(0x10)
	char pad_40[0x2cff6900]; // 0x40(0x2cff6900)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// Size: 0x2cffe930 (Inherited: 0x00)
struct FClothCollisionPrim_Box {
	struct FVector LocalPosition; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat LocalRotation; // 0x10(0x10)
	struct FVector HalfExtents; // 0x20(0x0c)
	int32_t BoneIndex; // 0x2c(0x04)
	char pad_30[0x2cffe900]; // 0x30(0x2cffe900)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x2cff6928 (Inherited: 0x00)
struct FClothCollisionPrim_Convex {
	struct TArray<struct FPlane> Planes; // 0x00(0x10)
	struct TArray<struct FVector> SurfacePoints; // 0x10(0x10)
	int32_t BoneIndex; // 0x20(0x04)
	char pad_24[0x2cff6904]; // 0x24(0x2cff6904)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x00(0x08)
	char pad_8[0x2cff6a00]; // 0x08(0x2cff6a00)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// Size: 0x2cff6a14 (Inherited: 0x00)
struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	struct FVector LocalPosition; // 0x08(0x0c)
	char pad_14[0x2cff6a00]; // 0x14(0x2cff6a00)
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// Size: 0x2cff694c (Inherited: 0x00)
struct FClothVertBoneData {
	int32_t NumInfluences; // 0x00(0x04)
	uint16_t BoneIndices[0xc]; // 0x04(0x18)
	float BoneWeights[0xc]; // 0x1c(0x30)
	char pad_4C[0x2cff6900]; // 0x4c(0x2cff6900)
};

