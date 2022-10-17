// Enum KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8 {
	None = 0,
	Spherical = 1,
	Capsule = 2,
	Planar = 3,
	ECollisionLimitType_MAX = 4
};

// Enum KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8 {
	X_Positive = 0,
	X_Negative = 1,
	Y_Positive = 2,
	Y_Negative = 3,
	Z_Positive = 4,
	Z_Negative = 5,
	EBoneForwardAxis_MAX = 6
};

// Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EPlanarConstraint_MAX = 4
};

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// Size: 0x2cff6960 (Inherited: 0x2cffcbd0)
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	struct FBoneReference RootBone; // 0xd0(0x14)
	struct TArray<struct FBoneReference> ExcludeBones; // 0xe8(0x10)
	int32_t TargetFramerate; // 0xf8(0x04)
	bool OverrideTargetFramerate; // 0xfc(0x01)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x100(0x18)
	struct UCurveFloat* DampingCurve; // 0x118(0x08)
	struct UCurveFloat* WorldDampingLocationCurve; // 0x120(0x08)
	struct UCurveFloat* WorldDampingRotationCurve; // 0x128(0x08)
	struct UCurveFloat* StiffnessCurve; // 0x130(0x08)
	struct UCurveFloat* RadiusCurve; // 0x138(0x08)
	struct UCurveFloat* LimitAngleCurve; // 0x140(0x08)
	bool bUpdatePhysicsSettingsInGame; // 0x148(0x01)
	float DummyBoneLength; // 0x14c(0x04)
	enum class EBoneForwardAxis BoneForwardAxis; // 0x150(0x01)
	enum class EPlanarConstraint PlanarConstraint; // 0x151(0x01)
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x158(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x168(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x178(0x10)
	struct UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset; // 0x188(0x08)
	struct TArray<struct FSphericalLimit> SphericalLimitsData; // 0x190(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimitsData; // 0x1a0(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimitsData; // 0x1b0(0x10)
	float TeleportDistanceThreshold; // 0x1c0(0x04)
	float TeleportRotationThreshold; // 0x1c4(0x04)
	struct FVector Gravity; // 0x1c8(0x0c)
	bool bEnableWind; // 0x1d4(0x01)
	float WindScale; // 0x1d8(0x04)
	struct TArray<struct FKawaiiPhysicsModifyBone> ModifyBones; // 0x1e0(0x10)
	float TotalBoneLength; // 0x1f0(0x04)
	struct FTransform PreSkelCompTransform; // 0x200(0x30)
	bool bInitPhysicsSettings; // 0x230(0x01)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// Size: 0x2cff69b0 (Inherited: 0x00)
struct FKawaiiPhysicsModifyBone {
	struct FBoneReference BoneRef; // 0x00(0x14)
	int32_t ParentIndex; // 0x14(0x04)
	struct TArray<int32_t> ChildIndexs; // 0x18(0x10)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x28(0x18)
	struct FVector Location; // 0x40(0x0c)
	struct FVector PrevLocation; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
	struct FQuat PrevRotation; // 0x60(0x10)
	struct FVector PoseLocation; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FQuat PoseRotation; // 0x80(0x10)
	struct FVector PoseScale; // 0x90(0x0c)
	float LengthFromRoot; // 0x9c(0x04)
	bool bDummy; // 0xa0(0x01)
	char pad_A1[0x2cff690f]; // 0xa1(0x2cff690f)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// Size: 0x2cffea18 (Inherited: 0x00)
struct FKawaiiPhysicsSettings {
	float Damping; // 0x00(0x04)
	float WorldDampingLocation; // 0x04(0x04)
	float WorldDampingRotation; // 0x08(0x04)
	float Stiffness; // 0x0c(0x04)
	float Radius; // 0x10(0x04)
	float LimitAngle; // 0x14(0x04)
	char pad_18[0x2cffea00]; // 0x18(0x2cffea00)
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// Size: 0x2cff6a50 (Inherited: 0x00)
struct FCollisionLimitBase {
	struct FBoneReference DrivingBone; // 0x00(0x14)
	struct FVector OffsetLocation; // 0x14(0x0c)
	struct FRotator OffsetRotation; // 0x20(0x0c)
	struct FVector Location; // 0x2c(0x0c)
	char pad_38[0x8]; // 0x38(0x08)
	struct FQuat Rotation; // 0x40(0x10)
	char pad_50[0x2cff6a00]; // 0x50(0x2cff6a00)
};

// ScriptStruct KawaiiPhysics.PlanarLimit
// Size: 0x2cff6960 (Inherited: 0x2cff6a50)
struct FPlanarLimit : FCollisionLimitBase {
	struct FPlane Plane; // 0x50(0x10)
};

// ScriptStruct KawaiiPhysics.CapsuleLimit
// Size: 0x2cff6960 (Inherited: 0x2cff6a50)
struct FCapsuleLimit : FCollisionLimitBase {
	float Radius; // 0x50(0x04)
	float Length; // 0x54(0x04)
};

// ScriptStruct KawaiiPhysics.SphericalLimit
// Size: 0x2cff6960 (Inherited: 0x2cff6a50)
struct FSphericalLimit : FCollisionLimitBase {
	float Radius; // 0x50(0x04)
	enum class ESphericalLimitType LimitType; // 0x54(0x01)
};

// ScriptStruct KawaiiPhysics.CollisionLimitDataBase
// Size: 0x2cffe950 (Inherited: 0x00)
struct FCollisionLimitDataBase {
	struct FName DrivingBoneName; // 0x00(0x0c)
	struct FVector OffsetLocation; // 0x0c(0x0c)
	struct FRotator OffsetRotation; // 0x18(0x0c)
	struct FVector Location; // 0x24(0x0c)
	struct FQuat Rotation; // 0x30(0x10)
	struct FGuid Guid; // 0x40(0x10)
	char pad_50[0x2cffe900]; // 0x50(0x2cffe900)
};

// ScriptStruct KawaiiPhysics.PlanarLimitData
// Size: 0x2cffe960 (Inherited: 0x2cffe950)
struct FPlanarLimitData : FCollisionLimitDataBase {
	struct FPlane Plane; // 0x50(0x10)
};

// ScriptStruct KawaiiPhysics.CapsuleLimitData
// Size: 0x2cff6960 (Inherited: 0x2cffe950)
struct FCapsuleLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50(0x04)
	float Length; // 0x54(0x04)
};

// ScriptStruct KawaiiPhysics.SphericalLimitData
// Size: 0x2cff6960 (Inherited: 0x2cffe950)
struct FSphericalLimitData : FCollisionLimitDataBase {
	float Radius; // 0x50(0x04)
	enum class ESphericalLimitType LimitType; // 0x54(0x01)
};

