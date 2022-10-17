// Class CoherentRenderingPlugin.CoherentRenderingSettings
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UCoherentRenderingSettings : UObject {
	enum class ECoherentRenderingSettingsSeverity RenderingLogSeverity; // 0x30(0x01)
	bool ShowWarningsOnScreen; // 0x31(0x01)
	struct FString DeveloperOptions; // 0x38(0x10)
	char pad_2CFF6942[0x106]; // 0x2cff6942(0x106)
};

// Class CoherentRenderingPlugin.CohTextureUserWrapData
// Size: 0x2cff6a80 (Inherited: 0x2cff6930)
struct UCohTextureUserWrapData : UObject {
	struct UTexture* Texture; // 0x78(0x08)
	char pad_2CFF6938[0x148]; // 0x2cff6938(0x148)
};

