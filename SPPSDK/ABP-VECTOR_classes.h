// AnimBlueprintGeneratedClass ABP-VECTOR.ABP-VECTOR_C
// Size: 0x2cff6950 (Inherited: 0x2cff6ad0)
struct UABP-VECTOR_C : UBravoHotelAnimInstanceWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3d8(0x38)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x410(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4c0(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x538(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b0(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x628(0x78)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x6a0(0x50)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x6f0(0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x7b8(0xc0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x878(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x890(0x50)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x8e0(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x8f8(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x948(0x50)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x998(0x18)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x9b0(0xa0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-VECTOR.ABP-VECTOR_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-VECTOR(int32_t EntryPoint); // Function ABP-VECTOR.ABP-VECTOR_C.ExecuteUbergraph_ABP-VECTOR // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

