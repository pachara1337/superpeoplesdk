// AnimBlueprintGeneratedClass ABP-Riverine.ABP-Riverine_C
// Size: 0x2cff6990 (Inherited: 0x2cff6a40)
struct UABP-Riverine_C : UBravoHotelVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xa48(0x38)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xa80(0x10)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xa90(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xab0(0x110)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xbc0(0xa0)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xc60(0x10)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xc70(0x20)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Riverine.ABP-Riverine_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-Riverine.ABP-Riverine_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-Riverine(int32_t EntryPoint); // Function ABP-Riverine.ABP-Riverine_C.ExecuteUbergraph_ABP-Riverine // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

