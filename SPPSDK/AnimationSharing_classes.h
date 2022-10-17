// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x2cff6a90 (Inherited: 0x2cff6a70)
struct UAnimSharingStateInstance : UAnimInstance {
	struct UAnimSequence* AnimationToPlay; // 0x268(0x08)
	float PermutationTimeOffset; // 0x270(0x04)
	float PlayRate; // 0x274(0x04)
	bool bStateBool; // 0x278(0x01)
	struct UAnimSharingInstance* Instance; // 0x280(0x08)
	char pad_2CFF6A89[0x7]; // 0x2cff6a89(0x07)

	void GetInstancedActors(struct TArray<struct AActor*>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x194e6a0
};

// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x2cff6a80 (Inherited: 0x2cff6a70)
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x268(0x08)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x270(0x08)
	float BlendTime; // 0x278(0x04)
	bool bBlendBool; // 0x27c(0x01)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x2cff6a80 (Inherited: 0x2cff6a70)
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> baseComponent; // 0x268(0x08)
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x270(0x08)
	float ALPHA; // 0x278(0x04)
	bool bStateBool; // 0x27c(0x01)
};

// Class AnimationSharing.AnimSharingInstance
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UAnimSharingInstance : UObject {
	struct TArray<struct AActor*> RegisteredActors; // 0x30(0x10)
	struct UAnimationSharingStateProcessor* StateProcessor; // 0xb0(0x08)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; // 0xf0(0x10)
	struct UEnum* StateEnum; // 0x110(0x08)
	struct AActor* SharingActor; // 0x118(0x08)
	char pad_2CFF6968[0xd8]; // 0x2cff6968(0xd8)
};

// Class AnimationSharing.AnimationSharingManager
// Size: 0x2cff6a90 (Inherited: 0x2cff6930)
struct UAnimationSharingManager : UObject {
	struct TArray<struct USkeleton*> Skeletons; // 0x80(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; // 0x30(0x10)
	char pad_2CFF6950[0x140]; // 0x2cff6950(0x140)

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP // (Final|Native|Public|BlueprintCallable) // @ game+0x194e900
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x194e5f0
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x194e530
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x194e500
};

// Class AnimationSharing.AnimationSharingSetup
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UAnimationSharingSetup : UObject {
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x30(0x10)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x40(0x10)
	char pad_2CFF6950[0x100]; // 0x2cff6950(0x100)
};

// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UAnimationSharingStateProcessor : UObject {
	struct TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x30(0x30)
	char pad_2CFF6960[0x100]; // 0x2cff6960(0x100)

	void ProcessActorState(int32_t& OutState, struct AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x194e750
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum // (Native|Event|Public|BlueprintEvent) // @ game+0x194e670
};

