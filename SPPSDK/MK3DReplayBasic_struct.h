// Enum MK3DReplayBasic.EMK3DReplayCameraFlags
enum class EMK3DReplayCameraFlags : uint8 {
	Free = 0,
	Player = 1,
	Free_CurrentPOV = 2,
	Free_OverrideZeroRoll = 4,
	EMK3DReplayCameraFlags_MAX = 5
};

// Enum MK3DReplayBasic.EMK3DReplayJumpFlags
enum class EMK3DReplayJumpFlags : uint8 {
	TimeInSec = 0,
	TimeInMS = 1,
	TimeInRatio = 2,
	Fixed = 4,
	FixedIfPaused = 8,
	AutoPause = 16,
	ViewTarget = 32,
	EMK3DReplayJumpFlags_MAX = 33
};

// Enum MK3DReplayBasic.EMK3DReplayCameraMode
enum class EMK3DReplayCameraMode : uint8 {
	NotPlay = 0,
	Free = 1,
	Player = 2,
	EMK3DReplayCameraMode_MAX = 3
};

// Enum MK3DReplayBasic.EMK3DReplayMode
enum class EMK3DReplayMode : uint8 {
	NotPlay = 0,
	View = 1,
	Edit = 2,
	Export = 3,
	EMK3DReplayMode_MAX = 4
};

// ScriptStruct MK3DReplayBasic.MK3DReplaySetCameraParam
// Size: 0x2cff6930 (Inherited: 0x00)
struct FMK3DReplaySetCameraParam {
	char pad_0[0x2cff6930]; // 0x00(0x2cff6930)
};

// ScriptStruct MK3DReplayBasic.MK3DReplayJumpParam
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FMK3DReplayJumpParam {
	char pad_0[0x2cff6a18]; // 0x00(0x2cff6a18)
};

// ScriptStruct MK3DReplayBasic.MK3DReplayVariable
// Size: 0x2cffe9d0 (Inherited: 0x00)
struct FMK3DReplayVariable {
	char pad_0[0x1]; // 0x00(0x01)
	enum class EMK3DReplayMode CurrentMode; // 0x01(0x01)
	bool Paused; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t CurrentTimeInMS; // 0x04(0x04)
	int32_t TotalTimeInMS; // 0x08(0x04)
	float CurrentSpeed; // 0x0c(0x04)
	char pad_10[0x188]; // 0x10(0x188)
	struct FMK3DReplayCameraInfo ActiveCamera; // 0x198(0x18)
	struct FMK3DReplayScheduleTask Scheduled; // 0x1b0(0x20)
	char pad_1D0[0x2cffe800]; // 0x1d0(0x2cffe800)
};

// ScriptStruct MK3DReplayBasic.MK3DReplayScheduleTask
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FMK3DReplayScheduleTask {
	struct FString Command; // 0x00(0x10)
	struct FString CommandLine; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct MK3DReplayBasic.MK3DReplayCameraInfo
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FMK3DReplayCameraInfo {
	enum class EMK3DReplayCameraMode CurrentMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Target; // 0x08(0x10)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

// ScriptStruct MK3DReplayBasic.MK3DReplayWidgetInfo
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FMK3DReplayWidgetInfo {
	struct FString KeyName; // 0x00(0x10)
	struct FString FilePath; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct MK3DReplayBasic.UserWidgetInfoForReplay_T
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FUserWidgetInfoForReplay_T {
	struct FString KeyName; // 0x00(0x10)
	struct FString FilePath; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

