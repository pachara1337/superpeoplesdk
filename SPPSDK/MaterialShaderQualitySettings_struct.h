// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8 {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileCSMQuality_MAX = 4
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x2cff6a09 (Inherited: 0x00)
struct FMaterialQualityOverrides {
	bool bDiscardQualityDuringCook; // 0x00(0x01)
	bool bEnableOverride; // 0x01(0x01)
	bool bForceFullyRough; // 0x02(0x01)
	bool bForceNonMetal; // 0x03(0x01)
	bool bForceDisableLMDirectionality; // 0x04(0x01)
	bool bForceLQReflections; // 0x05(0x01)
	bool bForceDisablePreintegratedGF; // 0x06(0x01)
	bool bDisableMaterialNormalCalculation; // 0x07(0x01)
	enum class EMobileCSMQuality MobileCSMQuality; // 0x08(0x01)
	char pad_9[0x2cff6a00]; // 0x09(0x2cff6a00)
};

