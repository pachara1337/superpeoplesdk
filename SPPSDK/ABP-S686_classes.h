// AnimBlueprintGeneratedClass ABP-S686.ABP-S686_C
// Size: 0x2cff69b0 (Inherited: 0x2cff6ad0)
struct UABP-S686_C : UBravoHotelAnimInstanceWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3d8(0x38)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x410(0x50)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x460(0xc8)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x528(0x18)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x540(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x558(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x5a8(0x50)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x5f8(0x18)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x610(0xa0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-S686.ABP-S686_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-S686(int32_t EntryPoint); // Function ABP-S686.ABP-S686_C.ExecuteUbergraph_ABP-S686 // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

