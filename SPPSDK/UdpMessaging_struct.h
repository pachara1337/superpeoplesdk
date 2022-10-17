// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8 {
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5
};

// ScriptStruct UdpMessaging.UdpMockMessage
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FUdpMockMessage {
	struct TArray<char> Data; // 0x00(0x10)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

