// Enum MK3DReplayEditor.EMK3DKeyframeEditingFlags
enum class EMK3DKeyframeEditingFlags : int32 {
	Clear = 0,
	Atomic = 65536,
	AddListOnly = 131072,
	AutoJump = 262144,
	FixedJump = 524288,
	AutoPause = 1048576,
	SaveThumbnail = 2097152,
	EMK3DKeyframeEditingFlags_MAX = 2097153
};

// Enum MK3DReplayEditor.EMK3DTimelineWidgetDirtyFlags
enum class EMK3DTimelineWidgetDirtyFlags : uint8 {
	Clear = 0,
	TimeSliderValidation = 1,
	EMK3DTimelineWidgetDirtyFlags_MAX = 2
};

// ScriptStruct MK3DReplayEditor.ColorGradingLUT
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FColorGradingLUT {
	struct FString KeyName; // 0x00(0x10)
	struct FString FilePath; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct MK3DReplayEditor.FreeCamPathSection
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FFreeCamPathSection {
	char pad_0[0x2cff6a08]; // 0x00(0x2cff6a08)
};

// ScriptStruct MK3DReplayEditor.MK3DKeyframeEditingParam
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FMK3DKeyframeEditingParam {
	char pad_0[0x2cff6a18]; // 0x00(0x2cff6a18)
};

