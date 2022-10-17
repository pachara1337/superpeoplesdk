// AnimBlueprintGeneratedClass ABP-AKM.ABP-AKM_C
// Size: 0x2cff69d8 (Inherited: 0x2cff6ad0)
struct UABP-AKM_C : UBravoHotelAnimInstanceWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x3d8(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x488(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x500(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x578(0x78)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x5f0(0x50)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x640(0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x708(0xc0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x7c8(0x18)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x7e0(0x38)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x818(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x868(0x50)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x8b8(0x18)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x8d0(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x8e8(0x50)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x938(0xa0)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-AKM.ABP-AKM_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-AKM(int32_t EntryPoint); // Function ABP-AKM.ABP-AKM_C.ExecuteUbergraph_ABP-AKM // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

