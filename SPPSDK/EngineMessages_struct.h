// ScriptStruct EngineMessages.EngineServiceNotification
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FEngineServiceNotification {
	struct FString Text; // 0x00(0x10)
	double TimeSeconds; // 0x10(0x08)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FEngineServiceTerminate {
	struct FString UserName; // 0x00(0x10)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FEngineServiceExecuteCommand {
	struct FString Command; // 0x00(0x10)
	struct FString UserName; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// Size: 0x2cffea20 (Inherited: 0x00)
struct FEngineServiceAuthGrant {
	struct FString UserName; // 0x00(0x10)
	struct FString UserToGrant; // 0x10(0x10)
	char pad_20[0x2cffea00]; // 0x20(0x2cffea00)
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FEngineServiceAuthDeny {
	struct FString UserName; // 0x00(0x10)
	struct FString UserToDeny; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct EngineMessages.EngineServicePong
// Size: 0x2cffe950 (Inherited: 0x00)
struct FEngineServicePong {
	struct FString CurrentLevel; // 0x00(0x10)
	int32_t EngineVersion; // 0x10(0x04)
	bool HasBegunPlay; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FGuid InstanceId; // 0x18(0x10)
	struct FString InstanceType; // 0x28(0x10)
	struct FGuid SessionID; // 0x38(0x10)
	float WorldTimeSeconds; // 0x48(0x04)
	char pad_4C[0x2cffe904]; // 0x4c(0x2cffe904)
};

// ScriptStruct EngineMessages.EngineServicePing
// Size: 0x2cff6a01 (Inherited: 0x00)
struct FEngineServicePing {
	char pad_0[0x2cff6a01]; // 0x00(0x2cff6a01)
};

