// Enum UFSM.FSM_Transition
enum class FSM_Transition : uint8 {
	Aborted = 0,
	Succeeded = 1,
	FSM_MAX = 2
};

// Enum UFSM.ESeverity
enum class ESeverity : uint8 {
	Fatal = 0,
	Error = 1,
	Warning = 2,
	Info = 3,
	ESeverity_MAX = 4
};

// ScriptStruct UFSM.SM_SetMachineState
// Size: 0x2cffe940 (Inherited: 0x2cff8610)
struct FSM_SetMachineState : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct FName FSM; // 0x20(0x0c)
	struct FName ASM; // 0x2c(0x0c)
	bool EveryFrame; // 0x38(0x01)
	char pad_2CFF8639[0x6307]; // 0x2cff8639(0x6307)
};

// ScriptStruct UFSM.SM_BlendStateMachines
// Size: 0x2cff6930 (Inherited: 0x2cff8610)
struct FSM_BlendStateMachines : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct FPoseLink BlendPose; // 0x20(0x10)
};

// ScriptStruct UFSM.MachinePayloadData
// Size: 0x2cffea10 (Inherited: 0x00)
struct FMachinePayloadData {
	struct TArray<struct UStateAction*> Actions; // 0x00(0x10)
	char pad_10[0x2cffea00]; // 0x10(0x2cffea00)
};

// ScriptStruct UFSM.SM_Link
// Size: 0x2cffea18 (Inherited: 0x00)
struct FSM_Link {
	struct FName NextState; // 0x00(0x0c)
	struct FName Function; // 0x0c(0x0c)
	char pad_18[0x2cffea00]; // 0x18(0x2cffea00)
};

// ScriptStruct UFSM.SM_State
// Size: 0x2cff6948 (Inherited: 0x00)
struct FSM_State {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStateMachineComponent* Owner; // 0x10(0x08)
	struct FMulticastInlineDelegate OnBeginState; // 0x18(0x10)
	struct FMulticastInlineDelegate OnUpdateState; // 0x28(0x10)
	struct FMulticastInlineDelegate OnExitState; // 0x38(0x10)
	char pad_48[0x2cff6900]; // 0x48(0x2cff6900)
};

// ScriptStruct UFSM.SM_ExitEvent
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FSM_ExitEvent {
	char StateID; // 0x00(0x01)
	char NextStateID; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName NextStateName; // 0x04(0x0c)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct UFSM.SM_UpdateEvent
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FSM_UpdateEvent {
	char StateID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StateTime; // 0x04(0x04)
	char pad_8[0x2cff6a00]; // 0x08(0x2cff6a00)
};

// ScriptStruct UFSM.SM_BeginEvent
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FSM_BeginEvent {
	char StateID; // 0x00(0x01)
	char PreviousStateID; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName PreviousStateName; // 0x04(0x0c)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

