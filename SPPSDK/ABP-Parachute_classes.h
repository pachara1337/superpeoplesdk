// AnimBlueprintGeneratedClass ABP-Parachute.ABP-Parachute_C
// Size: 0x2cff6928 (Inherited: 0x2cff6ad0)
struct UABP-Parachute_C : UBravoHotelAnimInstanceParachute {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2d8(0x38)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x310(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x338(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x360(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x388(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3b0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3d8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x450(0x38)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x488(0xe0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x568(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5a0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x618(0x38)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x650(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6c8(0x38)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x700(0xb0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7b0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7d0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x7f0(0x110)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x900(0x110)
	struct FVector RightHandleLocation; // 0xa10(0x0c)
	struct FVector LeftHandleLocation; // 0xa1c(0x0c)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP-Parachute.ABP-Parachute_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Parachute_AnimGraphNode_TransitionResult_DFAECCE14753957E23B3978C5E705C11(); // Function ABP-Parachute.ABP-Parachute_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP-Parachute_AnimGraphNode_TransitionResult_DFAECCE14753957E23B3978C5E705C11 // (BlueprintEvent) // @ game+0x2bad3b0
	void AnimNotify_ResetSkipTransitionFlag(); // Function ABP-Parachute.ABP-Parachute_C.AnimNotify_ResetSkipTransitionFlag // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ABP-Parachute(int32_t EntryPoint); // Function ABP-Parachute.ABP-Parachute_C.ExecuteUbergraph_ABP-Parachute // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

