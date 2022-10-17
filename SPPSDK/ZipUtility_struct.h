// Enum ZipUtility.ZipUtilityCompressionLevel
enum class ZipUtilityCompressionLevel : uint8 {
	COMPRESSION_LEVEL_NONE = 0,
	COMPRESSION_LEVEL_FAST = 1,
	COMPRESSION_LEVEL_NORMAL = 2,
	COMPRESSION_LEVEL_MAX = 3
};

// Enum ZipUtility.EZipUtilityCompressionFormat
enum class EZipUtilityCompressionFormat : uint8 {
	COMPRESSION_FORMAT_UNKNOWN = 0,
	COMPRESSION_FORMAT_SEVEN_ZIP = 1,
	COMPRESSION_FORMAT_ZIP = 2,
	COMPRESSION_FORMAT_GZIP = 3,
	COMPRESSION_FORMAT_BZIP2 = 4,
	COMPRESSION_FORMAT_RAR = 5,
	COMPRESSION_FORMAT_TAR = 6,
	COMPRESSION_FORMAT_ISO = 7,
	COMPRESSION_FORMAT_CAB = 8,
	COMPRESSION_FORMAT_LZMA = 9,
	COMPRESSION_FORMAT_LZMA86 = 10,
	COMPRESSION_FORMAT_MAX = 11
};

// Enum ZipUtility.EZipUtilityCompletionState
enum class EZipUtilityCompletionState : uint8 {
	SUCCESS = 0,
	FAILURE_NOT_FOUND = 1,
	FAILURE_UNKNOWN = 2,
	EZipUtilityCompletionState_MAX = 3
};

