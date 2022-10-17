// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8 {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4
};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size: 0x2cff6958 (Inherited: 0x00)
struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x00(0x01)
	char bDrawDebugLookAtTrackingPosition : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LookAtTrackingInterpSpeed; // 0x04(0x04)
	char pad_8[0x10]; // 0x08(0x10)
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x18(0x30)
	struct FVector RelativeOffset; // 0x48(0x0c)
	char bAllowRoll : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x2cff6903]; // 0x55(0x2cff6903)
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x2cffe960 (Inherited: 0x00)
struct FCameraFocusSettings {
	enum class ECameraFocusMethod FocusMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ManualFocusDistance; // 0x04(0x04)
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x08(0x40)
	char bDrawDebugFocusPlane : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FColor DebugFocusPlaneColor; // 0x4c(0x04)
	char bSmoothFocusChanges : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FocusSmoothingInterpSpeed; // 0x54(0x04)
	float FocusOffset; // 0x58(0x04)
	char pad_5C[0x2cffe904]; // 0x5c(0x2cffe904)
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size: 0x2cffe940 (Inherited: 0x00)
struct FCameraTrackingFocusSettings {
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x00(0x30)
	struct FVector RelativeOffset; // 0x30(0x0c)
	char bDrawDebugTrackingFocusPoint : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x2cffe903]; // 0x3d(0x2cffe903)
};

// ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x2cffe928 (Inherited: 0x00)
struct FNamedLensPreset {
	struct FString Name; // 0x00(0x10)
	struct FCameraLensSettings LensSettings; // 0x10(0x18)
	char pad_28[0x2cffe900]; // 0x28(0x2cffe900)
};

// ScriptStruct CinematicCamera.CameraLensSettings
// Size: 0x2cffea18 (Inherited: 0x00)
struct FCameraLensSettings {
	float MinFocalLength; // 0x00(0x04)
	float MaxFocalLength; // 0x04(0x04)
	float MinFStop; // 0x08(0x04)
	float MaxFStop; // 0x0c(0x04)
	float MinimumFocusDistance; // 0x10(0x04)
	int32_t DiaphragmBladeCount; // 0x14(0x04)
	char pad_18[0x2cffea00]; // 0x18(0x2cffea00)
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FNamedFilmbackPreset {
	struct FString Name; // 0x00(0x10)
	struct FCameraFilmbackSettings FilmbackSettings; // 0x10(0x0c)
	char pad_1C[0x2cff6a04]; // 0x1c(0x2cff6a04)
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0x2cff6a0c (Inherited: 0x00)
struct FCameraFilmbackSettings {
	float SensorWidth; // 0x00(0x04)
	float SensorHeight; // 0x04(0x04)
	float SensorAspectRatio; // 0x08(0x04)
	char pad_C[0x2cff6a00]; // 0x0c(0x2cff6a00)
};

