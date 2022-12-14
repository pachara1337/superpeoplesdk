// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8 {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5
};

// Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8 {
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3
};

// Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8 {
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3
};

// ScriptStruct TimeManagement.TimedDataInputEvaluationData
// Size: 0x2cff6d08 (Inherited: 0x00)
struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x00(0x04)
	float DistanceToOldestSampleSeconds; // 0x04(0x04)
	char pad_8[0x2cff6d00]; // 0x08(0x2cff6d00)
};

// ScriptStruct TimeManagement.TimedDataChannelSampleTime
// Size: 0x2cffea18 (Inherited: 0x00)
struct FTimedDataChannelSampleTime {
	char pad_0[0x2cffea18]; // 0x00(0x2cffea18)
};

