// ScriptStruct ProjectVersion.ProjectVersionData
// Size: 0x2cffe930 (Inherited: 0x00)
struct FProjectVersionData {
	uint32_t Major; // 0x00(0x04)
	uint32_t Minor; // 0x04(0x04)
	uint32_t Patch; // 0x08(0x04)
	uint32_t Hotfix; // 0x0c(0x04)
	uint32_t ChangeList; // 0x10(0x04)
	uint32_t MaxRemoteChangelist; // 0x14(0x04)
	uint32_t MinRemoteChangelist; // 0x18(0x04)
	uint32_t ReplayVersion; // 0x1c(0x04)
	struct FString GeeGeeAppId; // 0x20(0x10)
	char pad_30[0x2cffe900]; // 0x30(0x2cffe900)
};

