// Enum LowEntryExtendedStandardLibrary.ELowEntryBatteryState
enum class ELowEntryBatteryState : uint8 {
	Charging = 0,
	Discharging = 1,
	Full = 2,
	NotCharging = 3,
	Unknown = 4,
	ELowEntryBatteryState_MAX = 5
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary0to9
enum class ELowEntryExtendedStandardLibrary0to9 : uint8 {
	_0_ = 0,
	_1_ = 1,
	_2_ = 2,
	_3_ = 3,
	_4_ = 4,
	_5_ = 5,
	_6_ = 6,
	_7_ = 7,
	_8_ = 8,
	_9_ = 9,
	_MAX = 10
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary1to10other
enum class ELowEntryExtendedStandardLibrary1to10other : uint8 {
	_1_ = 1,
	_2_ = 2,
	_3_ = 3,
	_4_ = 4,
	_5_ = 5,
	_6_ = 6,
	_7_ = 7,
	_8_ = 8,
	_9_ = 9,
	_10_ = 10,
	Other = 0,
	ELowEntryExtendedStandardLibrary1to10other_MAX = 11
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibraryTrueOrFalse
enum class ELowEntryExtendedStandardLibraryTrueOrFalse : uint8 {
	_True_ = 0,
	_False_ = 1,
	_MAX = 2
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryHmacAlgorithm
enum class ELowEntryHmacAlgorithm : uint8 {
	MD5 = 0,
	SHA1 = 1,
	SHA256 = 2,
	SHA512 = 3,
	ELowEntryHmacAlgorithm_MAX = 4
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryImageFormat
enum class ELowEntryImageFormat : uint8 {
	Invalid = 0,
	PNG = 1,
	JPEG = 2,
	GrayscaleJPEG = 3,
	BMP = 4,
	ICO = 5,
	EXR = 6,
	ICNS = 7,
	ELowEntryImageFormat_MAX = 8
};

// Enum LowEntryExtendedStandardLibrary.ELowEntryRGBFormat
enum class ELowEntryRGBFormat : uint8 {
	Invalid = 0,
	RGBA = 1,
	BGRA = 2,
	Gray = 3,
	ELowEntryRGBFormat_MAX = 4
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenType
enum class ELowEntrySplitScreenType : uint8 {
	None = 0,
	TwoPlayer_Horizontal = 1,
	TwoPlayer_Vertical = 2,
	ThreePlayer_FavorTop = 3,
	ThreePlayer_FavorBottom = 4,
	ThreePlayer_Vertical = 5,
	FourPlayer_Grid = 6,
	FourPlayer_Vertical = 7,
	ELowEntrySplitScreenType_MAX = 8
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeThreePlayers
enum class ELowEntrySplitScreenTypeThreePlayers : uint8 {
	FavorTop = 0,
	FavorBottom = 1,
	ELowEntrySplitScreenTypeThreePlayers_MAX = 2
};

// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwoPlayers
enum class ELowEntrySplitScreenTypeTwoPlayers : uint8 {
	Horizontal = 0,
	Vertical = 1,
	ELowEntrySplitScreenTypeTwoPlayers_MAX = 2
};

// ScriptStruct LowEntryExtendedStandardLibrary.LowEntryRegexCaptureGroup
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FLowEntryRegexCaptureGroup {
	int32_t CaptureGroupNumber; // 0x00(0x04)
	int32_t BeginIndex; // 0x04(0x04)
	int32_t EndIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Match; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct LowEntryExtendedStandardLibrary.LowEntryRegexMatch
// Size: 0x2cffe930 (Inherited: 0x00)
struct FLowEntryRegexMatch {
	int32_t MatchNumber; // 0x00(0x04)
	int32_t BeginIndex; // 0x04(0x04)
	int32_t EndIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Match; // 0x10(0x10)
	struct TArray<struct FLowEntryRegexCaptureGroup> CaptureGroups; // 0x20(0x10)
	char pad_30[0x2cffe900]; // 0x30(0x2cffe900)
};

