// Class MK3DPublisher.AudioCapturer
// Size: 0x2cff6a38 (Inherited: 0x2cff6b08)
struct AAudioCapturer : AActor {
};

// Class MK3DPublisher.MK3DCapturerManager
// Size: 0x2cff6c50 (Inherited: 0x2cff6b08)
struct AMK3DCapturerManager : AActor {
	char pad_2CFF6B08[0x148]; // 0x2cff6b08(0x148)
};

// Class MK3DPublisher.MK3DPublisherManager
// Size: 0x2cff6a98 (Inherited: 0x2cff6b08)
struct AMK3DPublisherManager : AActor {
	struct FMK3DPublisherInit Conf; // 0x308(0x68)
};

// Class MK3DPublisher.ViewportCapturer
// Size: 0x2cff6a60 (Inherited: 0x2cff6b08)
struct AViewportCapturer : AActor {
	struct AMK3DPublisherManager* PublisherOwner; // 0x308(0x08)
};

