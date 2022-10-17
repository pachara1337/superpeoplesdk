// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x2cff6a80 (Inherited: 0x2cff6930)
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x30(0x50)
	char pad_2CFF6980[0x100]; // 0x2cff6980(0x100)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UShaderPlatformQualitySettings : UObject {
	struct FMaterialQualityOverrides QualityOverrides[0x3]; // 0x30(0x1b)
	char pad_2CFF694B[0x115]; // 0x2cff694b(0x115)
};

