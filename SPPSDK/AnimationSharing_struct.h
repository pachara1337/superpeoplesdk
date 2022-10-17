// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// Size: 0x2cff6930 (Inherited: 0x2cff6a28)
struct FTickAnimationSharingFunction : FTickFunction {
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FAnimationSharingScalability {
	struct FPerPlatformBool UseBlendTransitions; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FPerPlatformFloat BlendSignificanceValue; // 0x04(0x04)
	struct FPerPlatformInt MaximumNumberConcurrentBlends; // 0x08(0x04)
	struct FPerPlatformFloat TickSignificanceValue; // 0x0c(0x04)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// Size: 0x2cff6938 (Inherited: 0x00)
struct FPerSkeletonAnimationSharingSetup {
	char pad_0[0x30]; // 0x00(0x30)
	struct USkeleton* Skeleton; // 0x30(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x18(0x08)
	struct UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x28(0x08)
	struct UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x20(0x08)
	struct UAnimationSharingStateProcessor* StateProcessorClass; // 0x00(0x08)
	struct TArray<struct FAnimationStateEntry> AnimationStates; // 0x08(0x10)
	char pad_68[0x2cff68d0]; // 0x68(0x2cff68d0)
};

// ScriptStruct AnimationSharing.AnimationStateEntry
// Size: 0x2cff6c30 (Inherited: 0x00)
struct FAnimationStateEntry {
	char State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FAnimationSetup> AnimationSetups; // 0x08(0x10)
	bool bOnDemand; // 0x18(0x01)
	bool bAdditive; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float BlendTime; // 0x1c(0x04)
	bool bReturnToPreviousState; // 0x20(0x01)
	bool bSetNextState; // 0x21(0x01)
	char NextState; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24(0x04)
	float WiggleTimePercentage; // 0x28(0x04)
	bool bRequiresCurves; // 0x2c(0x01)
	char pad_2D[0x2cff6c03]; // 0x2d(0x2cff6c03)
};

// ScriptStruct AnimationSharing.AnimationSetup
// Size: 0x2cff6d18 (Inherited: 0x00)
struct FAnimationSetup {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	struct UAnimSharingStateInstance* AnimBlueprint; // 0x08(0x08)
	struct FPerPlatformInt NumRandomizedInstances; // 0x10(0x04)
	struct FPerPlatformBool Enabled; // 0x14(0x01)
	char pad_15[0x2cff6d03]; // 0x15(0x2cff6d03)
};

