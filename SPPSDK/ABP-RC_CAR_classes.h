// AnimBlueprintGeneratedClass ABP-RC_CAR.ABP-RC_CAR_C
// Size: 0x2cff6968 (Inherited: 0x2cff6a40)
struct UABP-RC_CAR_C : UBravoHotelVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xa48(0x10)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xa58(0x20)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xa78(0x100)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xb78(0xa0)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xc18(0x100)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xd18(0x20)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xd38(0x100)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xe38(0x10)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xe48(0x100)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xf48(0x38)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0xf80(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1080(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1180(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1280(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1380(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1480(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1580(0x100)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1680(0x100)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0x1780(0xe8)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-RC_CAR.ABP-RC_CAR_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-RC_CAR.ABP-RC_CAR_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-RC_CAR(int32_t EntryPoint); // Function ABP-RC_CAR.ABP-RC_CAR_C.ExecuteUbergraph_ABP-RC_CAR // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

