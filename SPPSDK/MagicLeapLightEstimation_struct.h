// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
enum class EMagicLeapLightEstimationCamera : uint8 {
	Left = 0,
	Right = 1,
	FarLeft = 2,
	FarRight = 3,
	EMagicLeapLightEstimationCamera_MAX = 4
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
// Size: 0x2cffea20 (Inherited: 0x00)
struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x00(0x04)
	struct FLinearColor AmbientColor; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FTimespan Timestamp; // 0x18(0x08)
	char pad_20[0x2cffea00]; // 0x20(0x2cffea00)
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FMagicLeapLightEstimationAmbientGlobalState {
	struct TArray<float> AmbientIntensityNits; // 0x00(0x10)
	struct FTimespan Timestamp; // 0x10(0x08)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

