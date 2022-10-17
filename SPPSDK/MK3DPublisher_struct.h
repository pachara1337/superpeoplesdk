// Enum MK3DPublisher.ERenderPass
enum class ERenderPass : uint8 {
	OnePass = 0,
	TwoPass = 1,
	ERenderPass_MAX = 2
};

// ScriptStruct MK3DPublisher.MK3DPublisherInit
// Size: 0x2cffe968 (Inherited: 0x00)
struct FMK3DPublisherInit {
	char pad_0[0x1]; // 0x00(0x01)
	bool bFakeExport; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString ActiveReplay; // 0x08(0x10)
	struct FString KeyFrameFullPath; // 0x18(0x10)
	int32_t TotalLength; // 0x28(0x04)
	int32_t BeginTime; // 0x2c(0x04)
	int32_t EndTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FMK3DCaptureInit Capture; // 0x38(0x30)
	char pad_68[0x2cffe900]; // 0x68(0x2cffe900)
};

// ScriptStruct MK3DPublisher.MK3DCaptureInit
// Size: 0x2cffe930 (Inherited: 0x00)
struct FMK3DCaptureInit {
	struct FString OutputFile; // 0x00(0x10)
	int32_t Width; // 0x10(0x04)
	int32_t Height; // 0x14(0x04)
	int32_t Fps; // 0x18(0x04)
	int32_t VideoBitrate; // 0x1c(0x04)
	int32_t AudioBitrate; // 0x20(0x04)
	int32_t StartTimeMS; // 0x24(0x04)
	int32_t EndTimeMS; // 0x28(0x04)
	char pad_2C[0x2cffe904]; // 0x2c(0x2cffe904)
};

