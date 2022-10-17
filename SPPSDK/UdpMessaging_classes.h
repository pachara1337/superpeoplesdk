// Class UdpMessaging.UdpMessagingSettings
// Size: 0x2cff6aa8 (Inherited: 0x2cff6930)
struct UUdpMessagingSettings : UObject {
	bool EnableTransport; // 0x30(0x01)
	bool bAutoRepair; // 0x31(0x01)
	bool bStopServiceWhenAppDeactivates; // 0x32(0x01)
	struct FString UnicastEndpoint; // 0x38(0x10)
	struct FString MulticastEndpoint; // 0x48(0x10)
	enum class EUdpMessageFormat MessageFormat; // 0x58(0x01)
	char MulticastTimeToLive; // 0x59(0x01)
	struct TArray<struct FString> StaticEndpoints; // 0x60(0x10)
	bool EnableTunnel; // 0x70(0x01)
	struct FString TunnelUnicastEndpoint; // 0x78(0x10)
	struct FString TunnelMulticastEndpoint; // 0x88(0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints; // 0x98(0x10)
	char pad_2CFF6996[0x112]; // 0x2cff6996(0x112)
};

