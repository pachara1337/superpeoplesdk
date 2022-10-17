// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8 {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8 {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8 {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8 {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8 {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8 {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8 {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8 {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8 {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8 {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8 {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8 {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8 {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8 {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8 {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8 {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8 {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8 {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8 {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8 {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4
};

// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8 {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8 {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8 {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8 {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8 {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6
};

// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8 {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0x2cffcbd0 (Inherited: 0x2cff8610)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x04)
	float ActualAlpha; // 0x24(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x28(0x01)
	bool bAlphaBoolEnabled; // 0x29(0x01)
	float ALPHA; // 0x2c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x30(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x38(0x48)
	struct FName AlphaCurveName; // 0x80(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c(0x30)
	char pad_2CFF86BA[0x4516]; // 0x2cff86ba(0x4516)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0x2cffd0e0 (Inherited: 0x2cff6930)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x30(0x04)
	float Y; // 0x34(0x04)
	float Z; // 0x38(0x04)
	float PlayRate; // 0x3c(0x04)
	bool bLoop; // 0x40(0x01)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41(0x01)
	float StartPosition; // 0x44(0x04)
	struct UBlendSpaceBase* BlendSpace; // 0x48(0x08)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0xd8(0x08)
	char pad_2CFF6956[0x678a]; // 0x2cff6956(0x678a)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x2cff69c0 (Inherited: 0x2cffd0e0)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; // 0x140(0x10)
	int32_t LODThreshold; // 0x150(0x04)
	struct FName SourceSocketName; // 0x154(0x0c)
	struct FName PivotSocketName; // 0x160(0x0c)
	struct FVector LookAtLocation; // 0x16c(0x0c)
	struct FVector SocketAxis; // 0x178(0x0c)
	float ALPHA; // 0x184(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x2cff6950 (Inherited: 0x2cffcbd0)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xd0(0x04)
	float AngularDampingOverride; // 0xd4(0x04)
	struct FBoneReference RelativeSpaceBone; // 0x140(0x14)
	struct FBoneReference BoundBone; // 0x154(0x14)
	struct FBoneReference ChainEnd; // 0x168(0x14)
	struct FVector BoxExtents; // 0x17c(0x0c)
	struct FVector LocalJointOffset; // 0x188(0x0c)
	float GravityScale; // 0x194(0x04)
	struct FVector GravityOverride; // 0x198(0x0c)
	float LinearSpringConstant; // 0x1a4(0x04)
	float AngularSpringConstant; // 0x1a8(0x04)
	float WindScale; // 0x1ac(0x04)
	struct FVector ComponentLinearAccScale; // 0x1b0(0x0c)
	struct FVector ComponentLinearVelScale; // 0x1bc(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1c8(0x0c)
	float AngularBiasOverride; // 0x1d4(0x04)
	int32_t NumSolverIterationsPreUpdate; // 0x1d8(0x04)
	int32_t NumSolverIterationsPostUpdate; // 0x1dc(0x04)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1e0(0x48)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x228(0x10)
	float SphereCollisionRadius; // 0x238(0x04)
	struct FVector ExternalForce; // 0x23c(0x0c)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x248(0x10)
	enum class AnimPhysCollisionType CollisionType; // 0x258(0x01)
	enum class AnimPhysSimSpaceType SimulationSpace; // 0x259(0x01)
	char bUseSphericalLimits : 1; // 0x25c(0x01)
	char bUsePlanarLimit : 1; // 0x25c(0x01)
	char bDoUpdate : 1; // 0x25c(0x01)
	char bDoEval : 1; // 0x25c(0x01)
	char bOverrideLinearDamping : 1; // 0x25c(0x01)
	char bOverrideAngularBias : 1; // 0x25c(0x01)
	char bOverrideAngularDamping : 1; // 0x25c(0x01)
	char bEnableWind : 1; // 0x25c(0x01)
	char pad_2CFFCCF3_0 : 1; // 0x2cffccf3(0x01)
	char bUseGravityOverride : 1; // 0x25d(0x01)
	char bLinearSpring : 1; // 0x25d(0x01)
	char bAngularSpring : 1; // 0x25d(0x01)
	char bChain : 1; // 0x25d(0x01)
	struct FRotationRetargetingInfo RetargetingSettings; // 0x260(0x130)
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x2cffdf30 (Inherited: 0x00)
struct FRotationRetargetingInfo {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform Source; // 0x10(0x30)
	struct FTransform Target; // 0x40(0x30)
	enum class ERotationComponent RotationComponent; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector TwistAxis; // 0x74(0x0c)
	bool bUseAbsoluteAngle; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float SourceMinimum; // 0x84(0x04)
	float SourceMaximum; // 0x88(0x04)
	float TargetMinimum; // 0x8c(0x04)
	float TargetMaximum; // 0x90(0x04)
	enum class EEasingFuncType EasingType; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FRuntimeFloatCurve CustomCurve; // 0x98(0x88)
	bool bFlipEasing; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float EasingWeight; // 0x124(0x04)
	bool bClamp; // 0x128(0x01)
	char pad_129[0x2cffde07]; // 0x129(0x2cffde07)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x2cffdf50 (Inherited: 0x00)
struct FAnimPhysPlanarLimit {
	struct FBoneReference DrivingBone; // 0x00(0x14)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform PlaneTransform; // 0x20(0x30)
	char pad_50[0x2cffdf00]; // 0x50(0x2cffdf00)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x2cff6928 (Inherited: 0x00)
struct FAnimPhysSphericalLimit {
	struct FBoneReference DrivingBone; // 0x00(0x14)
	struct FVector SphereLocalOffset; // 0x14(0x0c)
	float LimitRadius; // 0x20(0x04)
	enum class ESphericalLimitType LimitType; // 0x24(0x01)
	char pad_25[0x2cff6903]; // 0x25(0x2cff6903)
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x2cff6948 (Inherited: 0x00)
struct FAnimPhysConstraintSetup {
	enum class AnimPhysLinearConstraintType LinearXLimitType; // 0x00(0x01)
	enum class AnimPhysLinearConstraintType LinearYLimitType; // 0x01(0x01)
	enum class AnimPhysLinearConstraintType LinearZLimitType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector LinearAxesMin; // 0x04(0x0c)
	struct FVector LinearAxesMax; // 0x10(0x0c)
	enum class AnimPhysAngularConstraintType AngularConstraintType; // 0x1c(0x01)
	enum class AnimPhysTwistAxis TwistAxis; // 0x1d(0x01)
	enum class AnimPhysTwistAxis AngularTargetAxis; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float ConeAngle; // 0x20(0x04)
	struct FVector AngularLimitsMin; // 0x24(0x0c)
	struct FVector AngularLimitsMax; // 0x30(0x0c)
	struct FVector AngularTarget; // 0x3c(0x0c)
	char pad_48[0x2cff6900]; // 0x48(0x2cff6900)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0x2cff69d0 (Inherited: 0x2cff8610)
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	float ALPHA; // 0x30(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x34(0x08)
	int32_t LODThreshold; // 0x3c(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94(0x30)
	enum class EAnimAlphaInputType AlphaInputType; // 0xc8(0x01)
	bool bAlphaBoolEnabled; // 0xc9(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0x2cff69f0 (Inherited: 0x2cffcbd0)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0xd0(0x10)
	struct TArray<struct FVector> AngularOffsets; // 0xe0(0x10)
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size: 0x2cffdf2c (Inherited: 0x00)
struct FAngularRangeLimit {
	struct FVector LimitMin; // 0x00(0x0c)
	struct FVector LimitMax; // 0x0c(0x0c)
	struct FBoneReference Bone; // 0x18(0x14)
	char pad_2C[0x2cffdf00]; // 0x2c(0x2cffdf00)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x2cff6968 (Inherited: 0x2cff8610)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x30(0x10)
	float ALPHA; // 0x50(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	enum class EBoneControlSpace TransformsSpace; // 0x60(0x01)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x2cff692c (Inherited: 0x00)
struct FBlendBoneByChannelEntry {
	struct FBoneReference SourceBone; // 0x00(0x14)
	struct FBoneReference TargetBone; // 0x14(0x14)
	bool bBlendTranslation; // 0x28(0x01)
	bool bBlendRotation; // 0x29(0x01)
	bool bBlendScale; // 0x2a(0x01)
	char pad_2B[0x2cff6901]; // 0x2b(0x2cff6901)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0x2cffe998 (Inherited: 0x2cff8610)
struct FAnimNode_BlendListBase : FAnimNode_Base {
	struct TArray<struct FPoseLink> BlendPose; // 0x10(0x10)
	struct TArray<float> BlendTime; // 0x20(0x10)
	enum class EBlendListTransitionType TransitionType; // 0x30(0x01)
	enum class EAlphaBlendOption BlendType; // 0x31(0x01)
	bool bResetChildOnActivation; // 0x32(0x01)
	struct UCurveFloat* CustomBlendCurve; // 0x38(0x08)
	struct UBlendProfile* BlendProfile; // 0x40(0x08)
	char pad_2CFF8643[0x6355]; // 0x2cff8643(0x6355)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0x2cff69a0 (Inherited: 0x2cffe998)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0x2cff69b0 (Inherited: 0x2cffe998)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	struct TArray<int32_t> EnumToPoseIndex; // 0x98(0x10)
	char ActiveEnumValue; // 0xa8(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0x2cff69a0 (Inherited: 0x2cffe998)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0x2cff69e8 (Inherited: 0x2cffd0e0)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe0(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x2cff6930 (Inherited: 0x2cffcbd0)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xd0(0x14)
	struct UCurveFloat* DrivingCurve; // 0xe8(0x08)
	float Multiplier; // 0xf0(0x04)
	float RangeMin; // 0xf4(0x04)
	float RangeMax; // 0xf8(0x04)
	float RemappedMin; // 0xfc(0x04)
	float RemappedMax; // 0x100(0x04)
	struct FName ParameterName; // 0x104(0x0c)
	struct FBoneReference TargetBone; // 0x110(0x14)
	enum class EDrivenDestinationMode DestinationMode; // 0x124(0x01)
	enum class EDrivenBoneModificationMode ModificationMode; // 0x125(0x01)
	enum class EComponentType SourceComponent; // 0x126(0x01)
	char bUseRange : 1; // 0x127(0x01)
	char bAffectTargetTranslationX : 1; // 0x127(0x01)
	char bAffectTargetTranslationY : 1; // 0x127(0x01)
	char bAffectTargetTranslationZ : 1; // 0x127(0x01)
	char bAffectTargetRotationX : 1; // 0x127(0x01)
	char bAffectTargetRotationY : 1; // 0x127(0x01)
	char bAffectTargetRotationZ : 1; // 0x127(0x01)
	char bAffectTargetScaleX : 1; // 0x127(0x01)
	char bAffectTargetScaleY : 1; // 0x128(0x01)
	char bAffectTargetScaleZ : 1; // 0x128(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x2cff69a0 (Inherited: 0x2cffcbd0)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct FVector EffectorLocation; // 0xd0(0x0c)
	enum class EBoneControlSpace EffectorLocationSpace; // 0xdc(0x01)
	struct FBoneSocketTarget EffectorTarget; // 0xe0(0x70)
	struct FBoneReference TipBone; // 0x150(0x14)
	struct FBoneReference RootBone; // 0x164(0x14)
	float Precision; // 0x178(0x04)
	int32_t MaxIterations; // 0x17c(0x04)
	bool bStartFromTail; // 0x180(0x01)
	bool bEnableRotationLimit; // 0x181(0x01)
	struct TArray<float> RotationLimitPerJoints; // 0x188(0x10)
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x2cffe970 (Inherited: 0x00)
struct FBoneSocketTarget {
	bool bUseSocket; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBoneReference BoneReference; // 0x04(0x14)
	char pad_18[0x8]; // 0x18(0x08)
	struct FSocketReference SocketReference; // 0x20(0x50)
	char pad_70[0x2cffe900]; // 0x70(0x2cffe900)
};

// ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x2cff6a50 (Inherited: 0x00)
struct FSocketReference {
	char pad_0[0x30]; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x0c)
	char pad_3C[0x2cff6a14]; // 0x3c(0x2cff6a14)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x2cff6a18 (Inherited: 0x2cffcbd0)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xd0(0x14)
	struct TArray<struct FConstraint> ConstraintSetup; // 0xe8(0x10)
	struct TArray<float> ConstraintWeights; // 0xf8(0x10)
};

// ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x2cff6d20 (Inherited: 0x00)
struct FConstraint {
	struct FBoneReference TargetBone; // 0x00(0x14)
	enum class EConstraintOffsetOption OffsetOption; // 0x14(0x01)
	enum class ETransformConstraintType TransformType; // 0x15(0x01)
	struct FFilterOptionPerAxis PerAxis; // 0x16(0x03)
	char pad_19[0x2cff6d07]; // 0x19(0x2cff6d07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0x2cffea00 (Inherited: 0x2cffcbd0)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xd0(0x14)
	struct FBoneReference TargetBone; // 0xe4(0x14)
	bool bCopyTranslation; // 0xf8(0x01)
	bool bCopyRotation; // 0xf9(0x01)
	bool bCopyScale; // 0xfa(0x01)
	enum class EBoneControlSpace ControlSpace; // 0xfb(0x01)
	char pad_2CFFCBFC[0x1e04]; // 0x2cffcbfc(0x1e04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0x2cff6a08 (Inherited: 0x2cffcbd0)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xd0(0x14)
	struct FBoneReference TargetBone; // 0xe4(0x14)
	bool bCopyTranslation; // 0xf8(0x01)
	bool bCopyRotation; // 0xf9(0x01)
	bool bCopyScale; // 0xfa(0x01)
	enum class CopyBoneDeltaMode CopyMode; // 0xfb(0x01)
	float TranslationMultiplier; // 0xfc(0x04)
	float RotationMultiplier; // 0x100(0x04)
	float ScaleMultiplier; // 0x104(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x2cff6940 (Inherited: 0x2cff8610)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x08)
	bool bUseAttachedParent; // 0x18(0x01)
	bool bCopyCurves; // 0x19(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x2cff6940 (Inherited: 0x2cff8610)
struct FAnimNode_CurveSource : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct FName SourceBinding; // 0x20(0x0c)
	float ALPHA; // 0x2c(0x04)
	struct TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x2cffe9b0 (Inherited: 0x2cffcbd0)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	struct FTransform EffectorTransform; // 0xd0(0x30)
	struct FBoneSocketTarget EffectorTarget; // 0x100(0x70)
	struct FBoneReference TipBone; // 0x170(0x14)
	struct FBoneReference RootBone; // 0x184(0x14)
	float Precision; // 0x198(0x04)
	int32_t MaxIterations; // 0x19c(0x04)
	enum class EBoneControlSpace EffectorTransformSpace; // 0x1a0(0x01)
	enum class EBoneRotationSource EffectorRotationSource; // 0x1a1(0x01)
	char pad_2CFFCCA2[0x1d0e]; // 0x2cffcca2(0x1d0e)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x2cff6938 (Inherited: 0x2cffcbd0)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	struct FBoneReference RightHandFK; // 0xd0(0x14)
	struct FBoneReference LeftHandFK; // 0xe4(0x14)
	struct FBoneReference RightHandIK; // 0xf8(0x14)
	struct FBoneReference LeftHandIK; // 0x10c(0x14)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x120(0x10)
	float HandFKWeight; // 0x130(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0x2cff69c0 (Inherited: 0x2cff8610)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct TArray<struct FPoseLink> BlendPoses; // 0x20(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x30(0x10)
	struct TArray<float> BlendWeights; // 0x40(0x10)
	bool bMeshSpaceRotationBlend; // 0x50(0x01)
	bool bMeshSpaceScaleBlend; // 0x51(0x01)
	enum class ECurveBlendOption CurveBlendOption; // 0x52(0x01)
	bool bBlendRootMotionBasedOnRootBone; // 0x53(0x01)
	int32_t LODThreshold; // 0x58(0x04)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60(0x10)
	struct FGuid SkeletonGuid; // 0x70(0x10)
	struct FGuid VirtualBoneGuid; // 0x80(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0x2cffea00 (Inherited: 0x2cffcbd0)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xd0(0x04)
	int32_t MaxIterations; // 0xd4(0x04)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0xd8(0x10)
	char pad_2CFFCBE8[0x1e18]; // 0x2cffcbe8(0x1e18)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x2cffe934 (Inherited: 0x00)
struct FAnimLegIKDefinition {
	struct FBoneReference IKFootBone; // 0x00(0x14)
	struct FBoneReference FKFootBone; // 0x14(0x14)
	int32_t NumBonesInLimb; // 0x28(0x04)
	float MinRotationAngle; // 0x2c(0x04)
	enum class EAxis FootBoneForwardAxis; // 0x30(0x01)
	enum class EAxis HingeRotationAxis; // 0x31(0x01)
	bool bEnableRotationLimit; // 0x32(0x01)
	bool bEnableKneeTwistCorrection; // 0x33(0x01)
	char pad_34[0x2cffe900]; // 0x34(0x2cffe900)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0x2cff69a0 (Inherited: 0x00)
struct FAnimLegIKData {
	char pad_0[0x2cff69a0]; // 0x00(0x2cff69a0)
};

// ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x2cffe938 (Inherited: 0x00)
struct FIKChain {
	char pad_0[0x2cffe938]; // 0x00(0x2cffe938)
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x2cff6940 (Inherited: 0x00)
struct FIKChainLink {
	char pad_0[0x2cff6940]; // 0x00(0x2cff6940)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x2cff69d0 (Inherited: 0x2cffcbd0)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xd0(0x14)
	struct FBoneSocketTarget LookAtTarget; // 0xf0(0x70)
	struct FVector LookAtLocation; // 0x160(0x0c)
	struct FAxis LookAt_Axis; // 0x16c(0x10)
	bool bUseLookUpAxis; // 0x17c(0x01)
	enum class EInterpolationBlend InterpolationType; // 0x17d(0x01)
	struct FAxis LookUp_Axis; // 0x180(0x10)
	float LookAtClamp; // 0x190(0x04)
	float InterpolationTime; // 0x194(0x04)
	float InterpolationTriggerThreashold; // 0x198(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x2cff6c38 (Inherited: 0x2cff8610)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	bool bMeshSpaceAdditive; // 0x30(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x2cffea10 (Inherited: 0x2cffcbd0)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xd0(0x14)
	struct FVector Translation; // 0xe4(0x0c)
	struct FRotator Rotation; // 0xf0(0x0c)
	struct FVector Scale; // 0xfc(0x0c)
	enum class EBoneModificationMode TranslationMode; // 0x108(0x01)
	enum class EBoneModificationMode RotationMode; // 0x109(0x01)
	enum class EBoneModificationMode ScaleMode; // 0x10a(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0x10b(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x10c(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x10d(0x01)
	char pad_2CFFCC0E[0x1e02]; // 0x2cffcc0e(0x1e02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x2cff6958 (Inherited: 0x2cff8610)
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct TArray<float> CurveValues; // 0x20(0x10)
	struct TArray<struct FName> CurveNames; // 0x30(0x10)
	float ALPHA; // 0x50(0x04)
	enum class EModifyCurveApplyMode ApplyMode; // 0x54(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x2cff6950 (Inherited: 0x2cff8610)
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	struct TArray<struct FPoseLink> Poses; // 0x10(0x10)
	struct TArray<float> DesiredAlphas; // 0x20(0x10)
	struct FInputScaleBias AlphaScaleBias; // 0x40(0x08)
	bool bAdditiveNode; // 0x48(0x01)
	bool bNormalizeAlpha; // 0x49(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x2cff6a10 (Inherited: 0x2cffcbd0)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToObserve; // 0xd0(0x14)
	enum class EBoneControlSpace DisplaySpace; // 0xe4(0x01)
	bool bRelativeToRefPose; // 0xe5(0x01)
	struct FVector Translation; // 0xe8(0x0c)
	struct FRotator Rotation; // 0xf4(0x0c)
	struct FVector Scale; // 0x100(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0x2cffce78 (Inherited: 0x2cff6930)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	struct UPoseAsset* PoseAsset; // 0x30(0x08)
	char pad_2CFF6938[0x6540]; // 0x2cff6938(0x6540)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0x2cff6998 (Inherited: 0x2cffce78)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x78(0x10)
	enum class EAlphaBlendOption BlendOption; // 0x88(0x01)
	struct UCurveFloat* CustomCurve; // 0x90(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0x2cff6998 (Inherited: 0x2cffce78)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	struct FName PoseName; // 0x78(0x0c)
	float PoseWeight; // 0x84(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x2cff6930 (Inherited: 0x2cffce78)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x78(0x10)
	struct TArray<struct FBoneReference> SourceBones; // 0x88(0x10)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0x98(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0xa8(0x10)
	struct FBoneReference EvalSpaceBone; // 0xe8(0x14)
	struct FRBFParams RBFParams; // 0xfc(0x2c)
	enum class EPoseDriverSource DriveSource; // 0x128(0x01)
	enum class EPoseDriverOutput DriveOutput; // 0x129(0x01)
	char bOnlyDriveSelectedBones : 1; // 0x12a(0x01)
};

// ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x2cffdf2c (Inherited: 0x00)
struct FRBFParams {
	int32_t TargetDimensions; // 0x00(0x04)
	enum class ERBFSolverType SolverType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float Radius; // 0x08(0x04)
	enum class ERBFFunctionType Function; // 0x0c(0x01)
	enum class ERBFDistanceMethod DistanceMethod; // 0x0d(0x01)
	enum class EBoneAxis TwistAxis; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float WeightThreshold; // 0x10(0x04)
	enum class ERBFNormalizeMethod NormalizeMethod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector MedianReference; // 0x18(0x0c)
	float MedianMin; // 0x24(0x04)
	float MedianMax; // 0x28(0x04)
	char pad_2C[0x2cffdf00]; // 0x2c(0x2cffdf00)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0x2cffdfc0 (Inherited: 0x00)
struct FPoseDriverTarget {
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x00(0x10)
	struct FRotator TargetRotation; // 0x10(0x0c)
	float TargetScale; // 0x1c(0x04)
	enum class ERBFDistanceMethod DistanceMethod; // 0x20(0x01)
	enum class ERBFFunctionType FunctionType; // 0x21(0x01)
	bool bApplyCustomCurve; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct FRichCurve CustomCurve; // 0x28(0x80)
	struct FName DrivenName; // 0xa8(0x0c)
	char pad_B4[0x8]; // 0xb4(0x08)
	bool bIsHidden; // 0xbc(0x01)
	char pad_BD[0x2cffdf03]; // 0xbd(0x2cffdf03)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x2cffea18 (Inherited: 0x00)
struct FPoseDriverTransform {
	struct FVector TargetTranslation; // 0x00(0x0c)
	struct FRotator TargetRotation; // 0x0c(0x0c)
	char pad_18[0x2cffea00]; // 0x18(0x2cffea00)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0x2cff69b0 (Inherited: 0x2cff8610)
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	struct FName SnapshotName; // 0x10(0x0c)
	struct FPoseSnapshot Snapshot; // 0x20(0x40)
	enum class ESnapshotSourceMode Mode; // 0x60(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x2cff6978 (Inherited: 0x2cff8610)
struct FAnimNode_RandomPlayer : FAnimNode_Base {
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x10(0x10)
	bool bShuffleMode; // 0x70(0x01)
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x2cffdf50 (Inherited: 0x00)
struct FRandomPlayerSequenceEntry {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float ChanceToPlay; // 0x08(0x04)
	int32_t MinLoopCount; // 0x0c(0x04)
	int32_t MaxLoopCount; // 0x10(0x04)
	float MinPlayRate; // 0x14(0x04)
	float MaxPlayRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FAlphaBlend BlendIn; // 0x20(0x30)
	char pad_50[0x2cffdf00]; // 0x50(0x2cffdf00)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x2cff6a10 (Inherited: 0x2cff8610)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x2cffea18 (Inherited: 0x2cff8610)
struct FAnimNode_RefPose : FAnimNode_Base {
	enum class ERefPoseType RefPoseType; // 0x10(0x01)
	char pad_2CFF8611[0x6407]; // 0x2cff8611(0x6407)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0x2cff69e0 (Inherited: 0x2cffcbd0)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x2cff69c0 (Inherited: 0x2cffcbd0)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xd0(0x08)
	struct FVector OverrideWorldGravity; // 0x178(0x0c)
	struct FVector ExternalForce; // 0x184(0x0c)
	struct FVector ComponentLinearAccScale; // 0x190(0x0c)
	struct FVector ComponentLinearVelScale; // 0x19c(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1a8(0x0c)
	float CachedBoundsScale; // 0x1b4(0x04)
	struct FBoneReference BaseBoneRef; // 0x1b8(0x14)
	enum class ECollisionChannel OverlapChannel; // 0x1cc(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x1cd(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1ce(0x01)
	char bEnableWorldGeometry : 1; // 0x1d0(0x01)
	char bOverrideWorldGravity : 1; // 0x1d0(0x01)
	char bTransferBoneVelocities : 1; // 0x1d0(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x1d0(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1d0(0x01)
	struct FSolverIterations OverrideSolverIterations; // 0x1d4(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// Size: 0x2cff69b0 (Inherited: 0x2cffcbd0)
struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xd0(0x08)
	struct FVector OverrideWorldGravity; // 0xd8(0x0c)
	struct FVector ExternalForce; // 0xe4(0x0c)
	struct FVector ComponentLinearAccScale; // 0xf0(0x0c)
	struct FVector ComponentLinearVelScale; // 0xfc(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x108(0x0c)
	float CachedBoundsScale; // 0x114(0x04)
	struct FBoneReference BaseBoneRef; // 0x118(0x14)
	enum class ECollisionChannel OverlapChannel; // 0x12c(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x12d(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x12e(0x01)
	char bEnableWorldGeometry : 1; // 0x12f(0x01)
	char bOverrideWorldGravity : 1; // 0x12f(0x01)
	char bTransferBoneVelocities : 1; // 0x12f(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x12f(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x12f(0x01)
	struct FSolverIterations OverrideSolverIterations; // 0x130(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0x2cff69a0 (Inherited: 0x2cff8610)
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	float Pitch; // 0x20(0x04)
	float Yaw; // 0x24(0x04)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x58(0x30)
	struct FRotator MeshToComponent; // 0x88(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0x2cff6a00 (Inherited: 0x2cffcbd0)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	struct FBoneReference TargetBone; // 0xd0(0x14)
	struct FBoneReference SourceBone; // 0xe4(0x14)
	float Multiplier; // 0xf8(0x04)
	enum class EBoneAxis RotationAxisToRefer; // 0xfc(0x01)
	bool bIsAdditive; // 0xfd(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x2cff6990 (Inherited: 0x2cffd0e0)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; // 0xe0(0x10)
	int32_t LODThreshold; // 0xf0(0x04)
	float ALPHA; // 0xf4(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0xf8(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x100(0x48)
	struct FName AlphaCurveName; // 0x148(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x154(0x30)
	enum class EAnimAlphaInputType AlphaInputType; // 0x188(0x01)
	bool bAlphaBoolEnabled; // 0x189(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x2cff6980 (Inherited: 0x2cff8610)
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	float DefaultChainLength; // 0x20(0x04)
	struct FBoneReference ChainStartBone; // 0x24(0x14)
	struct FBoneReference ChainEndBone; // 0x38(0x14)
	struct FVector TargetLocation; // 0x4c(0x0c)
	float ALPHA; // 0x58(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x60(0x08)
	enum class EScaleChainInitialLength ChainInitialLength; // 0x68(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x2cff6948 (Inherited: 0x2cff6930)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x30(0x08)
	float ExplicitTime; // 0x38(0x04)
	bool bShouldLoop; // 0x3c(0x01)
	bool bTeleportToExplicitTime; // 0x3d(0x01)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x3e(0x01)
	float StartPosition; // 0x40(0x04)
	char pad_2CFF6943[0x5]; // 0x2cff6943(0x05)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x2cffe950 (Inherited: 0x2cff8610)
struct FAnimNode_Slot : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	struct FName SlotName; // 0x20(0x0c)
	bool bAlwaysUpdateSourcePose; // 0x2c(0x01)
	char pad_2CFF862D[0x6323]; // 0x2cff862d(0x6323)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x2cff6970 (Inherited: 0x2cffcbd0)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference StartBone; // 0xd0(0x14)
	struct FBoneReference EndBone; // 0xe4(0x14)
	enum class ESplineBoneAxis BoneAxis; // 0xf8(0x01)
	bool bAutoCalculateSpline; // 0xf9(0x01)
	int32_t PointCount; // 0xfc(0x04)
	struct TArray<struct FTransform> ControlPoints; // 0x100(0x10)
	float Roll; // 0x110(0x04)
	float TwistStart; // 0x114(0x04)
	float TwistEnd; // 0x118(0x04)
	struct FAlphaBlend TwistBlend; // 0x120(0x30)
	float Stretch; // 0x150(0x04)
	float Offset; // 0x154(0x04)
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FSplineIKCachedBoneData {
	struct FBoneReference Bone; // 0x00(0x14)
	int32_t RefSkeletonIndex; // 0x14(0x04)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x2cff6938 (Inherited: 0x2cffcbd0)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SpringBone; // 0xd0(0x14)
	float MaxDisplacement; // 0xe4(0x04)
	float SpringStiffness; // 0xe8(0x04)
	float SpringDamping; // 0xec(0x04)
	float ErrorResetThresh; // 0xf0(0x04)
	char bLimitDisplacement : 1; // 0x130(0x01)
	char bTranslateX : 1; // 0x130(0x01)
	char bTranslateY : 1; // 0x130(0x01)
	char bTranslateZ : 1; // 0x130(0x01)
	char bRotateX : 1; // 0x130(0x01)
	char bRotateY : 1; // 0x130(0x01)
	char bRotateZ : 1; // 0x130(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x2cff6938 (Inherited: 0x2cffcb38)
struct FAnimNode_StateResult : FAnimNode_Root {
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x2cffe970 (Inherited: 0x2cffcbd0)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	struct FBoneReference TrailBone; // 0x100(0x14)
	int32_t ChainLength; // 0x114(0x04)
	enum class EAxis ChainBoneAxis; // 0x118(0x01)
	char bInvertChainBoneAxis : 1; // 0x119(0x01)
	char bLimitStretch : 1; // 0x119(0x01)
	char bLimitRotation : 1; // 0x119(0x01)
	char bUsePlanarLimit : 1; // 0x119(0x01)
	char bActorSpaceFakeVel : 1; // 0x119(0x01)
	char bReorientParentToChild : 1; // 0x119(0x01)
	float MaxDeltaTime; // 0x11c(0x04)
	float RelaxationSpeedScale; // 0x120(0x04)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x128(0x88)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1b0(0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x1e0(0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x1f0(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x200(0x10)
	float StretchLimit; // 0x210(0x04)
	struct FVector FakeVelocity; // 0x214(0x0c)
	struct FBoneReference BaseJoint; // 0x220(0x14)
	float LastBoneRotationAnimAlphaBlend; // 0x234(0x04)
	char pad_2CFFCD01_6 : 2; // 0x2cffcd01(0x01)
	char pad_2CFFCD02[0x1c6e]; // 0x2cffcd02(0x1c6e)
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// Size: 0x2cffe018 (Inherited: 0x00)
struct FRotationLimit {
	struct FVector LimitMin; // 0x00(0x0c)
	struct FVector LimitMax; // 0x0c(0x0c)
	char pad_18[0x2cffe000]; // 0x18(0x2cffe000)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x2cff6c50 (Inherited: 0x2cffcbd0)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	struct FReferenceBoneFrame BaseFrame; // 0xd0(0x24)
	struct FReferenceBoneFrame TwistFrame; // 0xf4(0x24)
	struct FAxis TwistPlaneNormalAxis; // 0x118(0x10)
	float RangeMax; // 0x128(0x04)
	float RemappedMin; // 0x12c(0x04)
	float RemappedMax; // 0x130(0x04)
	struct FAnimCurveParam Curve; // 0x134(0x10)
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x2cff6924 (Inherited: 0x00)
struct FReferenceBoneFrame {
	struct FBoneReference Bone; // 0x00(0x14)
	struct FAxis Axis; // 0x14(0x10)
	char pad_24[0x2cff6900]; // 0x24(0x2cff6900)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x2cff6a10 (Inherited: 0x2cffcbd0)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKBone; // 0xd0(0x14)
	float StartStretchRatio; // 0xe4(0x04)
	float MaxStretchScale; // 0xe8(0x04)
	struct FVector EffectorLocation; // 0xec(0x0c)
	struct FBoneSocketTarget EffectorTarget; // 0x100(0x70)
	struct FVector JointTargetLocation; // 0x170(0x0c)
	struct FBoneSocketTarget JointTarget; // 0x180(0x70)
	struct FAxis TwistAxis; // 0x1f0(0x10)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x200(0x01)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x201(0x01)
	char bAllowStretching : 1; // 0x202(0x01)
	char bTakeRotationFromEffectorSpace : 1; // 0x202(0x01)
	char bMaintainEffectorRelRot : 1; // 0x202(0x01)
	char bAllowTwist : 1; // 0x202(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0x2cff69c8 (Inherited: 0x2cff8610)
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x01)
	char bAlphaBoolEnabled : 1; // 0x31(0x01)
	char pad_2CFF8631_1 : 2; // 0x2cff8631(0x01)
	char bResetChildOnActivation : 1; // 0x31(0x01)
	float ALPHA; // 0x34(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x38(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0x2cff6960 (Inherited: 0x2cffcdf0)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct AnimGraphRuntime.PositionHistory
// Size: 0x2cffe930 (Inherited: 0x00)
struct FPositionHistory {
	struct TArray<struct FVector> Positions; // 0x00(0x10)
	float Range; // 0x10(0x04)
	char pad_14[0x2cffe91c]; // 0x14(0x2cffe91c)
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FRBFEntry {
	struct TArray<float> Values; // 0x00(0x10)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0x2cffe9a0 (Inherited: 0x2cff6a10)
struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10(0x04)
	bool bApplyCustomCurve; // 0x14(0x01)
	struct FRichCurve CustomCurve; // 0x18(0x80)
	enum class ERBFDistanceMethod DistanceMethod; // 0x98(0x01)
	enum class ERBFFunctionType FunctionType; // 0x99(0x01)
	char pad_2CFF6A97[0x7f09]; // 0x2cff6a97(0x7f09)
};

