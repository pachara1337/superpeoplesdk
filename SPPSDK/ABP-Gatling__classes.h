// AnimBlueprintGeneratedClass ABP-Gatling_.ABP-Gatling__C
// Size: 0x2cff69b0 (Inherited: 0x2cff6ad0)
struct UABP-Gatling__C : UBravoHotelAnimInstanceWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3d8(0x38)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x410(0x50)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x460(0xc8)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x528(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x540(0x50)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x590(0x18)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x5a8(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x5c0(0x50)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x610(0xa0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Gatling_.ABP-Gatling__C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-Gatling_(int32_t EntryPoint); // Function ABP-Gatling_.ABP-Gatling__C.ExecuteUbergraph_ABP-Gatling_ // (Final|UbergraphFunction) // @ game+0x2bad3b0
};
