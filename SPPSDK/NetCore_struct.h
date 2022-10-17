// ScriptStruct NetCore.DDoSState
// Size: 0x2cff7128 (Inherited: 0x00)
struct FDDoSState {
	int32_t EscalateQuotaNoconnPacketsPerSec; // 0x00(0x04)
	int32_t EscalateQuotaConnPacketsPerSec; // 0x04(0x04)
	int32_t LimitConnPacketsPerFrame; // 0x08(0x04)
	int32_t EscalateQuotaDisconnPacketsPerSec; // 0x0c(0x04)
	int32_t EscalateQuotaBadPacketsPerSec; // 0x10(0x04)
	int16_t EscalateTimeQuotaMSPerFrame; // 0x14(0x02)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t PacketLimitPerFrame; // 0x18(0x04)
	int32_t PacketTimeLimitMSPerFrame; // 0x1c(0x04)
	int32_t NetConnPacketTimeLimitMSPerFrame; // 0x20(0x04)
	int32_t CooloffTime; // 0x24(0x04)
	char pad_28[0x2cff7100]; // 0x28(0x2cff7100)
};

// ScriptStruct NetCore.DDoSStateConfig
// Size: 0x2cff6938 (Inherited: 0x2cff7128)
struct FDDoSStateConfig : FDDoSState {
	struct FString SeverityCategory; // 0x28(0x10)
};

// ScriptStruct NetCore.NetAnalyticsDataConfig
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FNetAnalyticsDataConfig {
	struct FName DataName; // 0x00(0x0c)
	bool bEnabled; // 0x0c(0x01)
	char pad_D[0x2cff6a03]; // 0x0d(0x2cff6a03)
};

