// Class UFSM.FSMInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UFSMInterface : UInterface {

	void OnInitializedFSM(struct UStateMachineComponent* Context); // Function UFSM.FSMInterface.OnInitializedFSM // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1421930
	void OnAnyUpdateState(struct UStateMachineComponent* Context, struct FName WithStateName, char WithStateID, float WithStateTime); // Function UFSM.FSMInterface.OnAnyUpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x14217d0
	void OnAnyExitState(struct UStateMachineComponent* Context, struct FName WithStateName, char WithStateID); // Function UFSM.FSMInterface.OnAnyExitState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x14216b0
	void OnAnyBeginState(struct UStateMachineComponent* Context, struct FName WithStateName, char WithStateID, char WithPrevious); // Function UFSM.FSMInterface.OnAnyBeginState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1421550
};

// Class UFSM.FSM_SetState_Async
// Size: 0x2cff6a80 (Inherited: 0x2cff6a38)
struct UFSM_SetState_Async : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	struct FName StateName; // 0x40(0x0c)
	float Timer; // 0x4c(0x04)
	bool Repeat; // 0x50(0x01)
	struct FTimerHandle TimerHandle; // 0x58(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x60(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x70(0x10)
	char pad_2CFF6A79[0x7]; // 0x2cff6a79(0x07)

	struct UFSM_SetState_Async* FSM_SetState_Async(struct UStateMachineComponent* FSM, float WaitForSeconds, struct FName Name, bool Loop); // Function UFSM.FSM_SetState_Async.FSM_SetState_Async // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1420db0
	void Execute(); // Function UFSM.FSM_SetState_Async.Execute // (Final|Native|Private) // @ game+0x141ff60
};

// Class UFSM.FSM_SetStateID_Async
// Size: 0x2cff6a78 (Inherited: 0x2cff6a38)
struct UFSM_SetStateID_Async : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	char StateID; // 0x40(0x01)
	float Timer; // 0x44(0x04)
	bool Repeat; // 0x48(0x01)
	struct FTimerHandle TimerHandle; // 0x50(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x58(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x68(0x10)
	char pad_2CFF6A6E[0xa]; // 0x2cff6a6e(0x0a)

	struct UFSM_SetStateID_Async* FSM_SetStateID_Async(struct UStateMachineComponent* FSM, float WaitForSeconds, char ID, bool Loop); // Function UFSM.FSM_SetStateID_Async.FSM_SetStateID_Async // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1420650
	void Execute(); // Function UFSM.FSM_SetStateID_Async.Execute // (Final|Native|Private) // @ game+0x141fee0
};

// Class UFSM.FSM_SetState_ConditionalAsync
// Size: 0x2cff6a80 (Inherited: 0x2cff6a38)
struct UFSM_SetState_ConditionalAsync : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	enum class FSM_Transition Conditional; // 0x40(0x01)
	struct FName StateName; // 0x44(0x0c)
	float Timer; // 0x50(0x04)
	bool Repeat; // 0x54(0x01)
	struct FTimerHandle TimerHandle; // 0x58(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x60(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x70(0x10)
	char pad_2CFF6A7A[0x6]; // 0x2cff6a7a(0x06)

	struct UFSM_SetState_ConditionalAsync* FSM_SetState_ConditionalAsync(struct UStateMachineComponent* FSM, float WaitForSeconds, struct FName Name, enum class FSM_Transition Condition, bool Loop); // Function UFSM.FSM_SetState_ConditionalAsync.FSM_SetState_ConditionalAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1421140
	void Execute(); // Function UFSM.FSM_SetState_ConditionalAsync.Execute // (Final|Native|Private) // @ game+0x141ffa0
};

// Class UFSM.FSM_SetStateID_ConditionalAsync
// Size: 0x2cff6a78 (Inherited: 0x2cff6a38)
struct UFSM_SetStateID_ConditionalAsync : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	enum class FSM_Transition Conditional; // 0x40(0x01)
	char StateID; // 0x41(0x01)
	float Timer; // 0x44(0x04)
	bool Repeat; // 0x48(0x01)
	struct FTimerHandle TimerHandle; // 0x50(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x58(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x68(0x10)
	char pad_2CFF6A6F[0x9]; // 0x2cff6a6f(0x09)

	struct UFSM_SetStateID_ConditionalAsync* FSM_SetStateID_ConditionalAsync(struct UStateMachineComponent* FSM, float WaitForSeconds, char ID, enum class FSM_Transition Condition, bool Loop); // Function UFSM.FSM_SetStateID_ConditionalAsync.FSM_SetStateID_ConditionalAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14209c0
	void Execute(); // Function UFSM.FSM_SetStateID_ConditionalAsync.Execute // (Final|Native|Private) // @ game+0x141ff20
};

// Class UFSM.FSM_SetState_AsyncWithCallbacks
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a38)
struct UFSM_SetState_AsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	struct FDelegate InBegin; // 0x40(0x14)
	struct FDelegate InExit; // 0x54(0x14)
	struct FName StateName; // 0x68(0x0c)
	float Timer; // 0x74(0x04)
	bool Repeat; // 0x78(0x01)
	struct FTimerHandle TimerHandle; // 0x80(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x88(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x98(0x10)
	char pad_2CFF6AA1[0x7]; // 0x2cff6aa1(0x07)

	struct UFSM_SetState_AsyncWithCallbacks* FSM_SetState_AsyncWithCallbacks(struct UStateMachineComponent* FSM, float WaitForSeconds, struct FName Name, bool Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_AsyncWithCallbacks.FSM_SetState_AsyncWithCallbacks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1420f00
	void Execute(); // Function UFSM.FSM_SetState_AsyncWithCallbacks.Execute // (Final|Native|Private) // @ game+0x141ff80
};

// Class UFSM.FSM_SetStateID_AsyncWithCallbacks
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a38)
struct UFSM_SetStateID_AsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	struct FDelegate InBegin; // 0x40(0x14)
	struct FDelegate InExit; // 0x54(0x14)
	char StateID; // 0x68(0x01)
	float Timer; // 0x6c(0x04)
	bool Repeat; // 0x70(0x01)
	struct FTimerHandle TimerHandle; // 0x78(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x80(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x90(0x10)
	char pad_2CFF6A96[0xa]; // 0x2cff6a96(0x0a)

	struct UFSM_SetStateID_AsyncWithCallbacks* FSM_SetStateID_AsyncWithCallbacks(struct UStateMachineComponent* FSM, float WaitForSeconds, char ID, bool Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.FSM_SetStateID_AsyncWithCallbacks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1420790
	void Execute(); // Function UFSM.FSM_SetStateID_AsyncWithCallbacks.Execute // (Final|Native|Private) // @ game+0x141ff00
};

// Class UFSM.FSM_SetState_ConditionalAsyncWithCallbacks
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a38)
struct UFSM_SetState_ConditionalAsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	enum class FSM_Transition Conditional; // 0x40(0x01)
	struct FDelegate InBegin; // 0x44(0x14)
	struct FDelegate InExit; // 0x58(0x14)
	struct FName StateName; // 0x6c(0x0c)
	float Timer; // 0x78(0x04)
	bool Repeat; // 0x7c(0x01)
	struct FTimerHandle TimerHandle; // 0x80(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x88(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x98(0x10)
	char pad_2CFF6AA2[0x6]; // 0x2cff6aa2(0x06)

	struct UFSM_SetState_ConditionalAsyncWithCallbacks* FSM_SetState_ConditionalAsyncWithCallbacks(struct UStateMachineComponent* FSM, float WaitForSeconds, struct FName Name, enum class FSM_Transition Condition, bool Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.FSM_SetState_ConditionalAsyncWithCallbacks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14212d0
	void Execute(); // Function UFSM.FSM_SetState_ConditionalAsyncWithCallbacks.Execute // (Final|Native|Private) // @ game+0x141ffc0
};

// Class UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a38)
struct UFSM_SetStateID_ConditionalAsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	enum class FSM_Transition Conditional; // 0x40(0x01)
	struct FDelegate InBegin; // 0x44(0x14)
	struct FDelegate InExit; // 0x58(0x14)
	char StateID; // 0x6c(0x01)
	float Timer; // 0x70(0x04)
	bool Repeat; // 0x74(0x01)
	struct FTimerHandle TimerHandle; // 0x78(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x80(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x90(0x10)
	char pad_2CFF6A97[0x9]; // 0x2cff6a97(0x09)

	struct UFSM_SetStateID_ConditionalAsyncWithCallbacks* FSM_SetStateID_ConditionalAsyncWithCallbacks(struct UStateMachineComponent* FSM, float WaitForSeconds, char ID, enum class FSM_Transition Condition, bool Loop, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.FSM_SetStateID_ConditionalAsyncWithCallbacks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1420b40
	void Execute(); // Function UFSM.FSM_SetStateID_ConditionalAsyncWithCallbacks.Execute // (Final|Native|Private) // @ game+0x141ff40
};

// Class UFSM.FSM_FinishState_Async
// Size: 0x2cff6a70 (Inherited: 0x2cff6a38)
struct UFSM_FinishState_Async : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	float Timer; // 0x40(0x04)
	struct FTimerHandle TimerHandle; // 0x48(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x50(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x60(0x10)
	char pad_2CFF6A6C[0x4]; // 0x2cff6a6c(0x04)

	struct UFSM_FinishState_Async* FSM_FinishState_Async(struct UStateMachineComponent* FSM, float WaitForSeconds); // Function UFSM.FSM_FinishState_Async.FSM_FinishState_Async // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x141ffe0
	void Execute(); // Function UFSM.FSM_FinishState_Async.Execute // (Final|Native|Private) // @ game+0x141fe60
};

// Class UFSM.FSM_FinishState_ConditionalAsync
// Size: 0x2cff6a80 (Inherited: 0x2cff6a38)
struct UFSM_FinishState_ConditionalAsync : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	enum class FSM_Transition Conditional; // 0x40(0x01)
	struct FName FallbackState; // 0x44(0x0c)
	float Timer; // 0x50(0x04)
	struct FTimerHandle TimerHandle; // 0x58(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x60(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x70(0x10)
	char pad_2CFF6A79[0x7]; // 0x2cff6a79(0x07)

	struct UFSM_FinishState_ConditionalAsync* FSM_FinishState_ConditionalAsync(struct UStateMachineComponent* FSM, enum class FSM_Transition Condition, float WaitForSeconds, struct FName Fallback); // Function UFSM.FSM_FinishState_ConditionalAsync.FSM_FinishState_ConditionalAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1420250
	void Execute(); // Function UFSM.FSM_FinishState_ConditionalAsync.Execute // (Final|Native|Private) // @ game+0x141fea0
};

// Class UFSM.FSM_FinishState_AsyncWithCallbacks
// Size: 0x2cff6a98 (Inherited: 0x2cff6a38)
struct UFSM_FinishState_AsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	struct FDelegate InBegin; // 0x40(0x14)
	struct FDelegate InExit; // 0x54(0x14)
	float Timer; // 0x68(0x04)
	struct FTimerHandle TimerHandle; // 0x70(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x78(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0x88(0x10)
	char pad_2CFF6A94[0x4]; // 0x2cff6a94(0x04)

	struct UFSM_FinishState_AsyncWithCallbacks* FSM_FinishState_AsyncWithCallbacks(struct UStateMachineComponent* FSM, float WaitForSeconds, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.FSM_FinishState_AsyncWithCallbacks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14200b0
	void Execute(); // Function UFSM.FSM_FinishState_AsyncWithCallbacks.Execute // (Final|Native|Private) // @ game+0x141fe80
};

// Class UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a38)
struct UFSM_FinishState_ConditionalAsyncWithCallbacks : UBlueprintAsyncActionBase {
	struct UStateMachineComponent* Target; // 0x38(0x08)
	enum class FSM_Transition Conditional; // 0x40(0x01)
	struct FDelegate InBegin; // 0x44(0x14)
	struct FDelegate InExit; // 0x58(0x14)
	struct FDelegate InFallback; // 0x6c(0x14)
	struct FName FallbackState; // 0x80(0x0c)
	float Timer; // 0x8c(0x04)
	struct FTimerHandle TimerHandle; // 0x90(0x08)
	struct FMulticastInlineDelegate OnSuccess; // 0x98(0x10)
	struct FMulticastInlineDelegate OnAborted; // 0xa8(0x10)
	char pad_2CFF6AB5[0x3]; // 0x2cff6ab5(0x03)

	struct UFSM_FinishState_ConditionalAsyncWithCallbacks* FSM_FinishState_ConditionalAsyncWithCallbacks(struct UStateMachineComponent* FSM, enum class FSM_Transition Condition, float WaitForSeconds, struct FName Fallback, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback, struct FDelegate& BeginFallbackStateCallback); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.FSM_FinishState_ConditionalAsyncWithCallbacks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14203a0
	void Execute(); // Function UFSM.FSM_FinishState_ConditionalAsyncWithCallbacks.Execute // (Final|Native|Private) // @ game+0x141fec0
};

// Class UFSM.BTTask_FSM_AddState
// Size: 0x2cff6ad0 (Inherited: 0x2cff6aa8)
struct UBTTask_FSM_AddState : UBTTask_BlackboardBase {
	struct UStateMachineComponent* FSM; // 0xa8(0x08)
	struct FName TargetFSM; // 0xb0(0x0c)
	struct FName NewStateName; // 0xbc(0x0c)
	bool Debug; // 0xc8(0x01)
	bool ForceSuccess; // 0xc9(0x01)
	char pad_2CFF6ACA[0x6]; // 0x2cff6aca(0x06)
};

// Class UFSM.BTTask_FSM_SetState
// Size: 0x2cff6ad0 (Inherited: 0x2cff6aa8)
struct UBTTask_FSM_SetState : UBTTask_BlackboardBase {
	struct UStateMachineComponent* FSM; // 0xa8(0x08)
	struct FName TargetFSM; // 0xb0(0x0c)
	struct FName StateName; // 0xbc(0x0c)
	bool Debug; // 0xc8(0x01)
	bool ForceSuccess; // 0xc9(0x01)
	char pad_2CFF6ACA[0x6]; // 0x2cff6aca(0x06)
};

// Class UFSM.BTTask_FSM_RemoveState
// Size: 0x2cff6ad0 (Inherited: 0x2cff6aa8)
struct UBTTask_FSM_RemoveState : UBTTask_BlackboardBase {
	struct UStateMachineComponent* FSM; // 0xa8(0x08)
	struct FName TargetFSM; // 0xb0(0x0c)
	struct FName StateName; // 0xbc(0x0c)
	bool Debug; // 0xc8(0x01)
	bool ForceSuccess; // 0xc9(0x01)
	char pad_2CFF6ACA[0x6]; // 0x2cff6aca(0x06)
};

// Class UFSM.BTTask_FSM_CheckState
// Size: 0x2cff6ad0 (Inherited: 0x2cff6aa8)
struct UBTTask_FSM_CheckState : UBTTask_BlackboardBase {
	struct UStateMachineComponent* FSM; // 0xa8(0x08)
	struct FName TargetFSM; // 0xb0(0x0c)
	struct FName StateName; // 0xbc(0x0c)
	bool Debug; // 0xc8(0x01)
	bool ForceSuccess; // 0xc9(0x01)
	char pad_2CFF6ACA[0x6]; // 0x2cff6aca(0x06)
};

// Class UFSM.FSMHelper
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UFSMHelper : UBlueprintFunctionLibrary {

	enum class FSM_Transition FSM_EvaluateTwoBools(bool& BoolA, bool& AndB); // Function UFSM.FSMHelper.FSM_EvaluateTwoBools // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424ee0
	enum class FSM_Transition FSM_EvaluateTransitions(enum class FSM_Transition& Equals, enum class FSM_Transition& To); // Function UFSM.FSMHelper.FSM_EvaluateTransitions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423860
	enum class FSM_Transition FSM_EvaluateThreeBools(bool& BoolA, bool& AndB, bool& AndC); // Function UFSM.FSMHelper.FSM_EvaluateThreeBools // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424db0
	enum class FSM_Transition FSM_EvaluateTextEquals(struct FText& Equals, struct FText& To); // Function UFSM.FSMHelper.FSM_EvaluateTextEquals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424c40
	enum class FSM_Transition FSM_EvaluateTextConstEquals(struct FText& Equals, struct FText& To); // Function UFSM.FSMHelper.FSM_EvaluateTextConstEquals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424c40
	enum class FSM_Transition FSM_EvaluateStringEquals(struct FString& Equals, struct FString& To); // Function UFSM.FSMHelper.FSM_EvaluateStringEquals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424b10
	enum class FSM_Transition FSM_EvaluateStringConstEquals(struct FString Equals, struct FString To); // Function UFSM.FSMHelper.FSM_EvaluateStringConstEquals // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1424a10
	enum class FSM_Transition FSM_EvaluateNameEquals(struct FName& Equals, struct FName& To); // Function UFSM.FSMHelper.FSM_EvaluateNameEquals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424910
	enum class FSM_Transition FSM_EvaluateNameConstEquals(struct FName& Equals, struct FName& To); // Function UFSM.FSMHelper.FSM_EvaluateNameConstEquals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424910
	enum class FSM_Transition FSM_EvaluateIntSmallerOrEqual(int32_t& IsSmallerOrEquals, int32_t& To); // Function UFSM.FSMHelper.FSM_EvaluateIntSmallerOrEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424830
	enum class FSM_Transition FSM_EvaluateIntSmaller(int32_t& IsSmaller, int32_t& Than); // Function UFSM.FSMHelper.FSM_EvaluateIntSmaller // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424750
	enum class FSM_Transition FSM_EvaluateIntGreaterOrEqual(int32_t& IsGreaterOrEquals, int32_t& To); // Function UFSM.FSMHelper.FSM_EvaluateIntGreaterOrEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424670
	enum class FSM_Transition FSM_EvaluateIntGreater(int32_t& IsGreater, int32_t& Than); // Function UFSM.FSMHelper.FSM_EvaluateIntGreater // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424590
	enum class FSM_Transition FSM_EvaluateIntEquals(int32_t& Equals, int32_t& To); // Function UFSM.FSMHelper.FSM_EvaluateIntEquals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14244b0
	enum class FSM_Transition FSM_EvaluateFourBools(bool& BoolA, bool& AndB, bool& AndC, bool& AndD); // Function UFSM.FSMHelper.FSM_EvaluateFourBools // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424320
	enum class FSM_Transition FSM_EvaluateFloatSmallerOrEqual(float& IsSmallerOrEquals, float& To); // Function UFSM.FSMHelper.FSM_EvaluateFloatSmallerOrEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424240
	enum class FSM_Transition FSM_EvaluateFloatSmaller(float& IsSmaller, float& Than); // Function UFSM.FSMHelper.FSM_EvaluateFloatSmaller // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424160
	enum class FSM_Transition FSM_EvaluateFloatGreaterOrEqual(float& IsGreaterOrEquals, float& To); // Function UFSM.FSMHelper.FSM_EvaluateFloatGreaterOrEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1424080
	enum class FSM_Transition FSM_EvaluateFloatGreater(float& IsGreater, float& Than); // Function UFSM.FSMHelper.FSM_EvaluateFloatGreater // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423fa0
	enum class FSM_Transition FSM_EvaluateFloatEquals(float& Equals, float& To); // Function UFSM.FSMHelper.FSM_EvaluateFloatEquals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423ec0
	enum class FSM_Transition FSM_EvaluateFiveBools(bool& BoolA, bool& AndB, bool& AndC, bool& AndD, bool& AndE); // Function UFSM.FSMHelper.FSM_EvaluateFiveBools // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423cc0
	enum class FSM_Transition FSM_EvaluateByteSmallerOrEqual(char& IsSmallerOrEquals, char& To); // Function UFSM.FSMHelper.FSM_EvaluateByteSmallerOrEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423be0
	enum class FSM_Transition FSM_EvaluateByteSmaller(char& IsSmaller, char& Than); // Function UFSM.FSMHelper.FSM_EvaluateByteSmaller // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423b00
	enum class FSM_Transition FSM_EvaluateByteGreaterOrEqual(char& IsGreaterOrEquals, char& To); // Function UFSM.FSMHelper.FSM_EvaluateByteGreaterOrEqual // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423a20
	enum class FSM_Transition FSM_EvaluateByteGreater(char& IsGreater, char& Than); // Function UFSM.FSMHelper.FSM_EvaluateByteGreater // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423940
	enum class FSM_Transition FSM_EvaluateByteEquals(char& Equals, char& To); // Function UFSM.FSMHelper.FSM_EvaluateByteEquals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423860
	enum class FSM_Transition FSM_EvaluateBoolEquals(bool& Equals, bool& To); // Function UFSM.FSMHelper.FSM_EvaluateBoolEquals // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1423860
	enum class FSM_Transition FSM_EvaluateBool(bool& Bool); // Function UFSM.FSMHelper.FSM_EvaluateBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14237d0
};

// Class UFSM.RSM
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct URSM : UObject {
	struct FGuid SGUID; // 0x30(0x10)
	int32_t PlayerId; // 0x40(0x04)
	struct TWeakObjectPtr<struct UObject> Owner; // 0x44(0x08)
	char pad_2CFF694C[0x104]; // 0x2cff694c(0x104)
};

// Class UFSM.ReactiveStateMachine
// Size: 0x2cff6ae8 (Inherited: 0x2cff6a50)
struct UReactiveStateMachine : URSM {
	struct TArray<struct UStateAction*> StateGraph; // 0x60(0x10)
	float MachineTime; // 0x70(0x04)
	struct FMulticastInlineDelegate _OnEntry; // 0x78(0x10)
	struct FMulticastInlineDelegate _OnExit; // 0x88(0x10)
	struct TMap<struct FGuid, struct FMachinePayloadData> MachineData; // 0x98(0x50)
	char pad_2CFF6AD4[0x14]; // 0x2cff6ad4(0x14)

	void Update(float DeltaTime); // Function UFSM.ReactiveStateMachine.Update // (Final|Native|Private) // @ game+0x1425c90
	void OnUpdate(float DeltaTime); // Function UFSM.ReactiveStateMachine.OnUpdate // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnExit(); // Function UFSM.ReactiveStateMachine.OnExit // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnEntry(); // Function UFSM.ReactiveStateMachine.OnEntry // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnConstruct(); // Function UFSM.ReactiveStateMachine.OnConstruct // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	bool IsMachineActive(); // Function UFSM.ReactiveStateMachine.IsMachineActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425870
	void Init(); // Function UFSM.ReactiveStateMachine.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x1425500
	float GetStateMachineUpdateTime(); // Function UFSM.ReactiveStateMachine.GetStateMachineUpdateTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x14254a0
	struct UReactiveStateMachine* GetOwnerAsStateMachine(); // Function UFSM.ReactiveStateMachine.GetOwnerAsStateMachine // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x14252f0
	struct AHUD* GetOwnerAsHUD(); // Function UFSM.ReactiveStateMachine.GetOwnerAsHUD // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x1425440
	struct AGameModeBase* GetOwnerAsGameMode(); // Function UFSM.ReactiveStateMachine.GetOwnerAsGameMode // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x1425410
	struct AAIController* GetOwnerAsControllerAI(); // Function UFSM.ReactiveStateMachine.GetOwnerAsControllerAI // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x14253e0
	struct APlayerController* GetOwnerAsController(); // Function UFSM.ReactiveStateMachine.GetOwnerAsController // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x14253b0
	struct UActorComponent* GetOwnerAsComponent(); // Function UFSM.ReactiveStateMachine.GetOwnerAsComponent // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x1425380
	struct ACharacter* GetOwnerAsCharacter(); // Function UFSM.ReactiveStateMachine.GetOwnerAsCharacter // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x1425350
	struct AActor* GetOwnerAsActor(); // Function UFSM.ReactiveStateMachine.GetOwnerAsActor // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x1425320
	struct UObject* GetOwner(); // Function UFSM.ReactiveStateMachine.GetOwner // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x14252c0
	void Exit(); // Function UFSM.ReactiveStateMachine.Exit // (Final|Native|Private) // @ game+0x14237b0
	void Entry(); // Function UFSM.ReactiveStateMachine.Entry // (Final|Native|Private) // @ game+0x1423790
	void End(); // Function UFSM.ReactiveStateMachine.End // (Final|Native|Public|BlueprintCallable) // @ game+0x1423770
};

// Class UFSM.StateAction
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UStateAction : URSM {

	bool WasInputKeyJustReleased(struct FKey Key); // Function UFSM.StateAction.WasInputKeyJustReleased // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425e10
	bool WasInputKeyJustPressed(struct FKey Key); // Function UFSM.StateAction.WasInputKeyJustPressed // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425d10
	void StopBehavior(struct AAIController* AI); // Function UFSM.StateAction.StopBehavior // (Final|Native|Protected|BlueprintCallable) // @ game+0x1425c10
	void StartBehavior(struct AAIController* AI); // Function UFSM.StateAction.StartBehavior // (Final|Native|Protected|BlueprintCallable) // @ game+0x1425b90
	void RunBehaviorTree(struct AAIController* AI, struct UBehaviorTree* BehaviorTree); // Function UFSM.StateAction.RunBehaviorTree // (Final|Native|Protected|BlueprintCallable) // @ game+0x1425ad0
	void ResumeBehavior(struct AAIController* AI); // Function UFSM.StateAction.ResumeBehavior // (Final|Native|Protected|BlueprintCallable) // @ game+0x1425a50
	void RestartBehavior(struct AAIController* AI); // Function UFSM.StateAction.RestartBehavior // (Final|Native|Protected|BlueprintCallable) // @ game+0x14259d0
	void RequestExit(); // Function UFSM.StateAction.RequestExit // (Final|Native|Protected|BlueprintCallable) // @ game+0x14259b0
	void PauseBehavior(struct AAIController* AI); // Function UFSM.StateAction.PauseBehavior // (Final|Native|Protected|BlueprintCallable) // @ game+0x1425930
	void OnConstruct(struct UReactiveStateMachine* FSM); // Function UFSM.StateAction.OnConstruct // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	bool IsShiftPressed(); // Function UFSM.StateAction.IsShiftPressed // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425900
	bool IsPrimaryPlayer(); // Function UFSM.StateAction.IsPrimaryPlayer // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x14258d0
	bool IsPaused(); // Function UFSM.StateAction.IsPaused // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x14258a0
	bool IsKeyPressed(struct FKey Key); // Function UFSM.StateAction.IsKeyPressed // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425770
	bool IsInputEnabled(); // Function UFSM.StateAction.IsInputEnabled // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425740
	bool IsCtrlPressed(); // Function UFSM.StateAction.IsCtrlPressed // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425710
	bool IsCmdPressed(); // Function UFSM.StateAction.IsCmdPressed // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x14256e0
	bool IsBehaviorPaused(struct AAIController* AI); // Function UFSM.StateAction.IsBehaviorPaused // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425650
	bool IsAxisInverted(struct FKey AxisKey); // Function UFSM.StateAction.IsAxisInverted // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425550
	bool IsAltPressed(); // Function UFSM.StateAction.IsAltPressed // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425520
	struct FVector2D GetViewportSize(); // Function UFSM.StateAction.GetViewportSize // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x14254c0
	struct APlayerController* GetPlayerController(); // Function UFSM.StateAction.GetPlayerController // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425470
	struct UReactiveStateMachine* GetOwner(); // Function UFSM.StateAction.GetOwner // (Final|Native|Private|BlueprintCallable|BlueprintPure) // @ game+0x14252f0
	float GetMouseSensitivityY(); // Function UFSM.StateAction.GetMouseSensitivityY // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425290
	float GetMouseSensitivityX(); // Function UFSM.StateAction.GetMouseSensitivityX // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425260
	struct FVector2D GetMousePosition(); // Function UFSM.StateAction.GetMousePosition // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425220
	float GetKeyValue(struct FKey Key); // Function UFSM.StateAction.GetKeyValue // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425120
	float GetKeyDownDuration(struct FKey Key); // Function UFSM.StateAction.GetKeyDownDuration // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1425020
	struct AActor* GetControllerViewTarget(); // Function UFSM.StateAction.GetControllerViewTarget // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1424ff0
	struct AAIController* GetControllerAI(); // Function UFSM.StateAction.GetControllerAI // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1424fc0
	void Execute(float DeltaTime); // Function UFSM.StateAction.Execute // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
};

// Class UFSM.ReactiveStateMachineFactory
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UReactiveStateMachineFactory : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)

	struct UReactiveStateMachine* SpawnMachine(struct UObject* Context, struct UObject* MachineClass, struct FString MachineID); // Function UFSM.ReactiveStateMachineFactory.SpawnMachine // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x142d0a0
	void ExitMachine(struct UReactiveStateMachine* Context); // Function UFSM.ReactiveStateMachineFactory.ExitMachine // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x14299d0
	void EnterMachine(struct UReactiveStateMachine* Context); // Function UFSM.ReactiveStateMachineFactory.EnterMachine // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1429760
};

// Class UFSM.FSMSettings
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UFSMSettings : UObject {
	bool EnableInterfaceStatePropagation; // 0x30(0x01)
	bool SuppressRPCWarnings; // 0x31(0x01)
	float DefaultTickInterval; // 0x34(0x04)
	struct TArray<struct FName> DefaultStates; // 0x38(0x10)
	char pad_2CFF6946[0x102]; // 0x2cff6946(0x102)
};

// Class UFSM.RSMSubsystem
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct URSMSubsystem : ULocalPlayerSubsystem {
	struct TArray<struct UReactiveStateMachine*> MachineStack; // 0x38(0x10)
};

// Class UFSM.StateMachineABP
// Size: 0x2cff6a90 (Inherited: 0x2cff6a70)
struct UStateMachineABP : UAnimInstance {
	struct UStateMachineComponent* FSM; // 0x268(0x08)
	bool OverrideFSM; // 0x270(0x01)
	struct FName TargetFSM; // 0x274(0x0c)
	struct FName TargetASM; // 0x280(0x0c)

	struct UStateMachineComponent* GetFSMComponentByName(struct FName Name); // Function UFSM.StateMachineABP.GetFSMComponentByName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142a180
	struct UStateMachineComponent* GetFSMComponent(); // Function UFSM.StateMachineABP.GetFSMComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142a150
};

// Class UFSM.StateMachineComponent
// Size: 0x2cff6aa0 (Inherited: 0x2cff6cb8)
struct UStateMachineComponent : UActorComponent {
	struct FSM_ExitEvent FSM_ExitArguments; // 0xc0(0x10)
	struct FSM_BeginEvent FSM_BeginArguments; // 0xd0(0x10)
	struct FSM_UpdateEvent FSM_UpdateArguments; // 0xe0(0x08)
	bool IsOverriden; // 0xf0(0x01)
	bool IsFullyInitialized; // 0xf1(0x01)
	char StateID; // 0xf2(0x01)
	char PreviousStateID; // 0xf3(0x01)
	float StateTime; // 0xf4(0x04)
	struct FSM_State STATE_Null; // 0xf8(0x48)
	struct TMap<char, struct FSM_State> State; // 0x140(0x50)
	struct FDelegate InBegin; // 0x190(0x14)
	struct FDelegate InUpdate; // 0x1a4(0x14)
	struct FDelegate InExit; // 0x1b8(0x14)
	struct FName StartupState; // 0x1cc(0x0c)
	struct TArray<struct FName> States; // 0x1d8(0x10)
	struct TMap<struct FName, struct FSM_Link> LINKS; // 0x1e8(0x50)
	bool UseEnumFromCPP; // 0x238(0x01)
	struct FString CPP_EnumName; // 0x240(0x10)
	struct UEnum* K2_Enumerator; // 0x250(0x08)
	enum class ELifetimeCondition ReplicationMode; // 0x258(0x01)
	bool BlueprintAutoFlowFSM; // 0x259(0x01)
	bool BlueprintAutoFlowTransitions; // 0x25a(0x01)
	bool AlwaysTickFSM; // 0x25b(0x01)
	bool ReplicateStateID; // 0x25c(0x01)
	bool ReplicatePreviousStateID; // 0x25d(0x01)
	bool ReplicateStateTime; // 0x25e(0x01)
	bool Debug; // 0x25f(0x01)
	struct FMulticastInlineDelegate OnInitialized; // 0x260(0x10)
	struct FMulticastInlineDelegate OnBegin; // 0x270(0x10)
	struct FMulticastInlineDelegate OnUpdate; // 0x280(0x10)
	struct FMulticastInlineDelegate OnExit; // 0x290(0x10)

	void Update(char UpState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Update // (Native|Protected|HasOutParms) // @ game+0x142d1f0
	void SetStateWithCallbacks(struct FName Name, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateWithCallbacks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142cb80
	void SetStateValueWithCallbacks(struct FSM_State& Value, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateValueWithCallbacks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142c590
	void SetStateValue_ConditionalWithCallbacks(struct FSM_State& Value, enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateValue_ConditionalWithCallbacks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142c920
	void SetStateValue_Conditional(struct FSM_State& Value, enum class FSM_Transition Condition, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetStateValue_Conditional // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142c7b0
	void SetStateValue(struct FSM_State& Value, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetStateValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142c440
	void SetStateIDWithCallbacks(char ID, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateIDWithCallbacks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142bf70
	void SetStateID_ConditionalWithCallbacks(char ID, enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetStateID_ConditionalWithCallbacks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142c240
	void SetStateID_Conditional(char ID, enum class FSM_Transition Condition, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetStateID_Conditional // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142c130
	void SetStateID(char ID, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetStateID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142bea0
	void SetState_ConditionalWithCallbacks(struct FName Name, enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.SetState_ConditionalWithCallbacks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142ce90
	void SetState_Conditional(struct FName Name, enum class FSM_Transition Condition, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetState_Conditional // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142cd60
	void SetState(struct FName Name, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.SetState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142bdb0
	void SERVER_SetStateValue(struct FSM_State Value, bool Validate); // Function UFSM.StateMachineComponent.SERVER_SetStateValue // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x142bc50
	void SERVER_SetStateID(char ID, bool Validate); // Function UFSM.StateMachineComponent.SERVER_SetStateID // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x142bb50
	void SERVER_SetState(struct FName Name, bool Validate); // Function UFSM.StateMachineComponent.SERVER_SetState // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x142ba20
	void SERVER_RemoveState(struct FName Name, bool Validate); // Function UFSM.StateMachineComponent.SERVER_RemoveState // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x142b8f0
	void SERVER_MakeStates(struct TArray<struct FName> NewStates, bool Validate); // Function UFSM.StateMachineComponent.SERVER_MakeStates // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x142b7d0
	void SERVER_GoToFSM(struct UStateMachineComponent* TargetMachine, bool Validate); // Function UFSM.StateMachineComponent.SERVER_GoToFSM // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x142b6d0
	void SERVER_FinishState(bool Validate); // Function UFSM.StateMachineComponent.SERVER_FinishState // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x142b610
	void SERVER_AddState(char ID, struct FName Name, bool Validate); // Function UFSM.StateMachineComponent.SERVER_AddState // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x142b4b0
	void SERVER_ActivateFSM(bool Validate); // Function UFSM.StateMachineComponent.SERVER_ActivateFSM // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x142b3f0
	void RemoveState(struct FName Name, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.RemoveState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142b300
	enum class FSM_Transition Pure_SetStateByID(char ID); // Function UFSM.StateMachineComponent.Pure_SetStateByID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142b270
	enum class FSM_Transition Pure_SetState(struct FName Name); // Function UFSM.StateMachineComponent.Pure_SetState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142b1c0
	enum class FSM_Transition Pure_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.Pure_RemoveState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142b110
	enum class FSM_Transition Pure_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.Pure_AddState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142b020
	void OnREP_StateTime(float& Time); // Function UFSM.StateMachineComponent.OnREP_StateTime // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x142af80
	void OnREP_StateID(char& ID); // Function UFSM.StateMachineComponent.OnREP_StateID // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x142aee0
	void OnREP_PreviousStateID(char& PreviousID); // Function UFSM.StateMachineComponent.OnREP_PreviousStateID // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x142ae40
	void OnInitializedFSM(struct UStateMachineComponent* Context); // Function UFSM.StateMachineComponent.OnInitializedFSM // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x142adb0
	void OnAnyUpdateState(struct UStateMachineComponent* Context, struct FName WithStateName, char WithStateID, float WithStateTime); // Function UFSM.StateMachineComponent.OnAnyUpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x142ac50
	void OnAnyExitState(struct UStateMachineComponent* Context, struct FName WithStateName, char WithStateID); // Function UFSM.StateMachineComponent.OnAnyExitState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x142ab30
	void OnAnyBeginState(struct UStateMachineComponent* Context, struct FName WithStateName, char WithStateID, char WithPrevious); // Function UFSM.StateMachineComponent.OnAnyBeginState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x142a9d0
	void MULTI_SetStateValue(struct FSM_State Value); // Function UFSM.StateMachineComponent.MULTI_SetStateValue // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x142a7e0
	void MULTI_SetStateID(char ID); // Function UFSM.StateMachineComponent.MULTI_SetStateID // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x142a760
	void MULTI_SetState(struct FName Name); // Function UFSM.StateMachineComponent.MULTI_SetState // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x142a6c0
	void MULTI_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.MULTI_RemoveState // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x142a620
	void MULTI_MakeStates(struct TArray<struct FName> NewStates); // Function UFSM.StateMachineComponent.MULTI_MakeStates // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x142a580
	void MULTI_GoToFSM(struct UStateMachineComponent* TargetMachine); // Function UFSM.StateMachineComponent.MULTI_GoToFSM // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x142a4f0
	void MULTI_FinishState(); // Function UFSM.StateMachineComponent.MULTI_FinishState // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x142a4d0
	void MULTI_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.MULTI_AddState // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x142a3f0
	void MULTI_ActivateFSM(); // Function UFSM.StateMachineComponent.MULTI_ActivateFSM // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x142a3d0
	void MakeStates(struct TArray<struct FName>& NewStates, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.MakeStates // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142a8c0
	bool IsInitializedFSM(); // Function UFSM.StateMachineComponent.IsInitializedFSM // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142a3b0
	void GoToFSM(struct UStateMachineComponent* TargetMachine, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.GoToFSM // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x142a2e0
	float GetTime(); // Function UFSM.StateMachineComponent.GetTime // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142a2c0
	struct FName GetPreviousStateName(); // Function UFSM.StateMachineComponent.GetPreviousStateName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142a250
	char GetPreviousStateID(); // Function UFSM.StateMachineComponent.GetPreviousStateID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142a230
	struct FName GetCurrentStateName(); // Function UFSM.StateMachineComponent.GetCurrentStateName // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142a110
	char GetCurrentStateID(); // Function UFSM.StateMachineComponent.GetCurrentStateID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142a0f0
	struct FSM_State GetActiveState(); // Function UFSM.StateMachineComponent.GetActiveState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x142a070
	void FSM_UpdateArgs(struct FSM_UpdateEvent StateInfo); // Function UFSM.StateMachineComponent.FSM_UpdateArgs // (Final|Native|Private) // @ game+0x1429b70
	void FSM_TransitionRule(enum class FSM_Transition& Condition); // Function UFSM.StateMachineComponent.FSM_TransitionRule // (Final|Native|Private|HasOutParms) // @ game+0x1429b00
	void FSM_ExitArgs(struct FSM_ExitEvent StateInfo); // Function UFSM.StateMachineComponent.FSM_ExitArgs // (Final|Native|Private) // @ game+0x1429a90
	void FSM_BeginArgs(struct FSM_BeginEvent StateInfo); // Function UFSM.StateMachineComponent.FSM_BeginArgs // (Final|Native|Private) // @ game+0x1429a90
	void FinishStateWithCallbacks(enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.FinishStateWithCallbacks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1429c60
	void FinishState_ConditionalWithCallbacks(enum class FSM_Transition Condition, enum class FSM_Transition& Transition, struct FDelegate& ExitPreviousStateCallback, struct FDelegate& BeginNextStateCallback); // Function UFSM.StateMachineComponent.FinishState_ConditionalWithCallbacks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1429eb0
	void FinishState_Conditional(enum class FSM_Transition Condition, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.FinishState_Conditional // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1429de0
	void FinishState(enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.FinishState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1429bd0
	bool Exit(char ExitState, char NextState, enum class FSM_Transition& Transition, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Exit // (Native|Protected|HasOutParms) // @ game+0x1429820
	void Event_OnUpdateState(char CurrentState, struct FName StateName, float StateTimer); // Function UFSM.StateMachineComponent.Event_OnUpdateState // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event_OnExitState(char CurrentState, struct FName StateName, enum class FSM_Transition Transition); // Function UFSM.StateMachineComponent.Event_OnExitState // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event_OnConstruct(); // Function UFSM.StateMachineComponent.Event_OnConstruct // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event_OnBeginState(char CurrentState, char PreviousState, struct FName StateName, enum class FSM_Transition Transition); // Function UFSM.StateMachineComponent.Event_OnBeginState // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Enter(char InState, struct FDelegate& Callback); // Function UFSM.StateMachineComponent.Enter // (Native|Protected|HasOutParms) // @ game+0x1429660
	void CLIENT_SetStateValue(struct FSM_State Value); // Function UFSM.StateMachineComponent.CLIENT_SetStateValue // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1429580
	void CLIENT_SetStateID(char ID); // Function UFSM.StateMachineComponent.CLIENT_SetStateID // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1429500
	void CLIENT_SetState(struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_SetState // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1429460
	void CLIENT_RemoveState(struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_RemoveState // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x14293c0
	void CLIENT_MakeStates(struct TArray<struct FName> NewStates); // Function UFSM.StateMachineComponent.CLIENT_MakeStates // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1429320
	void CLIENT_GoToFSM(struct UStateMachineComponent* TargetMachine); // Function UFSM.StateMachineComponent.CLIENT_GoToFSM // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1429290
	void CLIENT_FinishState(); // Function UFSM.StateMachineComponent.CLIENT_FinishState // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1429270
	void CLIENT_AddState(char ID, struct FName Name); // Function UFSM.StateMachineComponent.CLIENT_AddState // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1429190
	void CLIENT_ActivateFSM(); // Function UFSM.StateMachineComponent.CLIENT_ActivateFSM // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1429170
	struct FSM_State AddState(char ID, struct FName Name, enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.AddState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1429000
	void ActivateFSM(enum class FSM_Transition& Transition); // Function UFSM.StateMachineComponent.ActivateFSM // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1428f70
};

