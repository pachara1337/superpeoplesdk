// Class ImgMediaFactory.ImgMediaSettings
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct UImgMediaSettings : UObject {
	struct FFrameRate DefaultFrameRate; // 0x30(0x08)
	float CacheBehindPercentage; // 0x38(0x04)
	float CacheSizeGB; // 0x3c(0x04)
	int32_t CacheThreads; // 0x40(0x04)
	int32_t CacheThreadStackSizeKB; // 0x44(0x04)
	float GlobalCacheSizeGB; // 0x48(0x04)
	bool UseGlobalCache; // 0x4c(0x01)
	uint32_t ExrDecoderThreads; // 0x50(0x04)
	struct FString DefaultProxy; // 0x58(0x10)
	bool UseDefaultProxy; // 0x68(0x01)
	char pad_2CFF6962[0x10e]; // 0x2cff6962(0x10e)
};

