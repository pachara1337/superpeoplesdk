// ScriptStruct BuildPatchServices.FileManifestData
// Size: 0x2cff6968 (Inherited: 0x00)
struct FFileManifestData {
	struct FString Filename; // 0x00(0x10)
	struct FSHAHashData FileHash; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FChunkPartData> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x01)
	bool bIsCompressed; // 0x61(0x01)
	char pad_62[0x2cff6906]; // 0x62(0x2cff6906)
};

// ScriptStruct BuildPatchServices.ChunkPartData
// Size: 0x2cff6d18 (Inherited: 0x00)
struct FChunkPartData {
	struct FGuid Guid; // 0x00(0x10)
	uint32_t Offset; // 0x10(0x04)
	uint32_t Size; // 0x14(0x04)
	char pad_18[0x2cff6d00]; // 0x18(0x2cff6d00)
};

// ScriptStruct BuildPatchServices.SHAHashData
// Size: 0x2cff6a14 (Inherited: 0x00)
struct FSHAHashData {
	char Hash[0x14]; // 0x00(0x14)
	char pad_14[0x2cff6a00]; // 0x14(0x2cff6a00)
};

// ScriptStruct BuildPatchServices.ChunkInfoData
// Size: 0x2cff6940 (Inherited: 0x00)
struct FChunkInfoData {
	struct FGuid Guid; // 0x00(0x10)
	uint64_t Hash; // 0x10(0x08)
	struct FSHAHashData ShaHash; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64_t FileSize; // 0x30(0x08)
	char GroupNumber; // 0x38(0x01)
	char pad_39[0x2cff6907]; // 0x39(0x2cff6907)
};

// ScriptStruct BuildPatchServices.CustomFieldData
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FCustomFieldData {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

