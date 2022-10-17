// AnimBlueprintGeneratedClass ABP-Energybar_001.ABP-Energybar_001_C
// Size: 0x2cff6948 (Inherited: 0x2cff6a90)
struct UABP-Energybar_001_C : UBravoHotelAnimInstanceUsableItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x298(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2d0(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x348(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3e8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x460(0xa0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x500(0x18)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x518(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5b8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x630(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6d0(0x78)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Energybar_001.ABP-Energybar_001_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-Energybar_001(int32_t EntryPoint); // Function ABP-Energybar_001.ABP-Energybar_001_C.ExecuteUbergraph_ABP-Energybar_001 // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

