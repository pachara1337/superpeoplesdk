// AnimBlueprintGeneratedClass ABP-ATV.ABP-ATV_C
// Size: 0x2cff6978 (Inherited: 0x2cff6a40)
struct UABP-ATV_C : UBravoHotelVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xa48(0x110)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xb58(0xa0)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xbf8(0x10)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xc08(0x20)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xc28(0x100)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xd28(0x20)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xd48(0x100)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0xe48(0xe8)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xf30(0x100)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x1030(0x10)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1040(0x100)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1140(0x38)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1178(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1278(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1378(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1478(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1578(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1678(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1778(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1878(0x100)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-ATV.ABP-ATV_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-ATV.ABP-ATV_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-ATV(int32_t EntryPoint); // Function ABP-ATV.ABP-ATV_C.ExecuteUbergraph_ABP-ATV // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

