// Enum BravoHotelApp.EDSConnectionType
enum class EDSConnectionType : uint8 {
	Unknown = 0,
	NewMatching = 1,
	Reconnecting = 2,
	Manually = 3,
	EDSConnectionType_MAX = 4
};

// ScriptStruct BravoHotelApp.BravoHotelNetStatus
// Size: 0x2cff6958 (Inherited: 0x00)
struct FBravoHotelNetStatus {
	struct FString NickName; // 0x00(0x10)
	int32_t spectated; // 0x10(0x04)
	int32_t avg_ping; // 0x14(0x04)
	int32_t max_ping; // 0x18(0x04)
	int32_t min_ping; // 0x1c(0x04)
	int32_t noresnet_frame; // 0x20(0x04)
	float avg_netbuff_pct; // 0x24(0x04)
	float min_netbuff_pct; // 0x28(0x04)
	float max_netbuff_pct; // 0x2c(0x04)
	int32_t received_pkt_bytesec; // 0x30(0x04)
	int32_t received_num_pkt; // 0x34(0x04)
	int32_t received_loss_ratio; // 0x38(0x04)
	int32_t sended_pkt_bytesec; // 0x3c(0x04)
	int32_t sended_num_pkt; // 0x40(0x04)
	int32_t sended_loss_ratio; // 0x44(0x04)
	struct FString nowDate; // 0x48(0x10)
	char pad_58[0x2cff6900]; // 0x58(0x2cff6900)
};

