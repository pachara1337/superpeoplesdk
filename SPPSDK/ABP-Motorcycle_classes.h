// AnimBlueprintGeneratedClass ABP-Motorcycle.ABP-Motorcycle_C
// Size: 0x2cff695c (Inherited: 0x2cff6a40)
struct UABP-Motorcycle_C : UBravoHotelVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa40(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xa48(0x20)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xa68(0x10)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xa78(0x10)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0xa88(0xe8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb70(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xb90(0x110)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xca0(0xa0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xd40(0x38)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier; // 0xd78(0x100)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier; // 0xe78(0x100)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0xf78(0x130)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x10a8(0x100)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier; // 0x11a8(0x100)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x12a8(0x130)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x13d8(0x130)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x1508(0x130)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1638(0x110)
	struct UCurveFloat* CV-Motorcycle_Rotate_Center; // 0x1748(0x08)
	struct FRotator RotateCenterValue; // 0x1750(0x0c)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Motorcycle.ABP-Motorcycle_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP-Motorcycle.ABP-Motorcycle_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-Motorcycle(int32_t EntryPoint); // Function ABP-Motorcycle.ABP-Motorcycle_C.ExecuteUbergraph_ABP-Motorcycle // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

