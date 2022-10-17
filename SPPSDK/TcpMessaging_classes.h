// Class TcpMessaging.TcpMessagingSettings
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x30(0x01)
	struct FString ListenEndpoint; // 0x38(0x10)
	struct TArray<struct FString> ConnectToEndpoints; // 0x48(0x10)
	int32_t ConnectionRetryDelay; // 0x58(0x04)
	bool bStopServiceWhenAppDeactivates; // 0x5c(0x01)
	char pad_2CFF6956[0x10a]; // 0x2cff6956(0x10a)
};

