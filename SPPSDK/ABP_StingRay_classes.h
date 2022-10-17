// AnimBlueprintGeneratedClass ABP_StingRay.ABP_StingRay_C
// Size: 0x2cff6978 (Inherited: 0x2cff6a40)
struct UABP_StingRay_C : UBravoHotelVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xa48(0x110)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xb58(0xa0)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xbf8(0x10)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier; // 0xc08(0x100)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xd08(0x20)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0xd28(0xe8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xe10(0x20)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xe30(0x10)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xe40(0x38)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_StingRay.ABP_StingRay_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_StingRay.ABP_StingRay_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP_StingRay(int32_t EntryPoint); // Function ABP_StingRay.ABP_StingRay_C.ExecuteUbergraph_ABP_StingRay // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

