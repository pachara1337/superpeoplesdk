// AnimBlueprintGeneratedClass ABP-ACR.ABP-ACR_C
// Size: 0x2cff69d8 (Inherited: 0x2cff6ad0)
struct UABP-ACR_C : UBravoHotelAnimInstanceWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3d8(0x38)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x410(0x50)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x460(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x510(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x588(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x600(0x78)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x678(0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x740(0xc0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x800(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x818(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x868(0x50)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x8b8(0x18)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8d0(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x970(0x50)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x9c0(0x18)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-ACR.ABP-ACR_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-ACR(int32_t EntryPoint); // Function ABP-ACR.ABP-ACR_C.ExecuteUbergraph_ABP-ACR // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

