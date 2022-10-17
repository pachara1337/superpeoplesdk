// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetAnimationBudgetParameters(struct UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x18c8070
	void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled); // Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x18c7fb0
};

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a90)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent {
	char bAutoRegisterWithBudgetAllocator : 1; // 0xbb0(0x01)
	char bAutoCalculateSignificance : 1; // 0xbb0(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xbb0(0x01)
	char pad_2CFF6A90_3 : 5; // 0x2cff6a90(0x01)
	char pad_2CFF6A91[0x2f]; // 0x2cff6a91(0x2f)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator // (Final|Native|Public|BlueprintCallable) // @ game+0x18c8220
};

