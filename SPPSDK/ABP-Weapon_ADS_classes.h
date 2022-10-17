// AnimBlueprintGeneratedClass ABP-Weapon_ADS.ABP-Weapon_ADS_C
// Size: 0x2cff6978 (Inherited: 0x2cff6ad0)
struct UABP-Weapon_ADS_C : UBravoHotelAnimInstanceWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3d8(0x38)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x410(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x430(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x450(0x110)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x560(0xa0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x600(0x110)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x710(0x50)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x760(0x110)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x870(0xc8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x938(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x988(0x50)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x9d8(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xa98(0x50)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0xae8(0x18)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0xb00(0xc8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xbc8(0x50)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0xc18(0x18)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xc30(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xce8(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xd18(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xd48(0x30)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xd78(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xe30(0x30)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xe60(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xf18(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xf48(0x30)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-Weapon_ADS(int32_t EntryPoint); // Function ABP-Weapon_ADS.ABP-Weapon_ADS_C.ExecuteUbergraph_ABP-Weapon_ADS // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

