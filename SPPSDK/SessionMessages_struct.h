// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x2cff6a01 (Inherited: 0x00)
struct FSessionServiceLogUnsubscribe {
	char pad_0[0x2cff6a01]; // 0x00(0x2cff6a01)
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x2cffea01 (Inherited: 0x00)
struct FSessionServiceLogSubscribe {
	char pad_0[0x2cffea01]; // 0x00(0x2cffea01)
};

// ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x2cffe940 (Inherited: 0x00)
struct FSessionServiceLog {
	struct FName Category; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Data; // 0x10(0x10)
	struct FGuid InstanceId; // 0x20(0x10)
	double TimeSeconds; // 0x30(0x08)
	char Verbosity; // 0x38(0x01)
	char pad_39[0x2cffe907]; // 0x39(0x2cffe907)
};

// ScriptStruct SessionMessages.SessionServicePong
// Size: 0x2cff6990 (Inherited: 0x00)
struct FSessionServicePong {
	bool Authorized; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BuildDate; // 0x08(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid InstanceId; // 0x28(0x10)
	struct FString InstanceName; // 0x38(0x10)
	struct FString PlatformName; // 0x48(0x10)
	struct FGuid SessionID; // 0x58(0x10)
	struct FString SessionName; // 0x68(0x10)
	struct FString SessionOwner; // 0x78(0x10)
	bool Standalone; // 0x88(0x01)
	char pad_89[0x2cff6907]; // 0x89(0x2cff6907)
};

// ScriptStruct SessionMessages.SessionServicePing
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FSessionServicePing {
	struct FString UserName; // 0x00(0x10)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

