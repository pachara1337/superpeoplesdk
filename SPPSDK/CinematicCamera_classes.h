// Class CinematicCamera.CineCameraComponent
// Size: 0x2cff6aa0 (Inherited: 0x2cff6ca0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x8a0(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x8ac(0x0c)
	struct FCameraLensSettings LensSettings; // 0x8b8(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x8d0(0x60)
	float CurrentFocalLength; // 0x930(0x04)
	float CurrentAperture; // 0x934(0x04)
	float CurrentFocusDistance; // 0x938(0x04)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x948(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x958(0x10)
	struct FString DefaultFilmbackPresetName; // 0x968(0x10)
	struct FString DefaultFilmbackPreset; // 0x978(0x10)
	struct FString DefaultLensPresetName; // 0x988(0x10)
	float DefaultLensFocalLength; // 0x998(0x04)
	float DefaultLensFStop; // 0x99c(0x04)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x3c02810
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x3c02770
	void SetCurrentFocalLength(float& InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c026d0
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c026a0
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c025a0
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c02520
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c024f0
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c02470
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c023a0
};

// Class CinematicCamera.CameraRig_Crane
// Size: 0x2cff6a38 (Inherited: 0x2cff6b08)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x308(0x04)
	float CraneYaw; // 0x30c(0x04)
	float CraneArmLength; // 0x310(0x04)
	bool bLockMountPitch; // 0x314(0x01)
	bool bLockMountYaw; // 0x315(0x01)
	struct USceneComponent* TransformComponent; // 0x318(0x08)
	struct USceneComponent* CraneYawControl; // 0x320(0x08)
	struct USceneComponent* CranePitchControl; // 0x328(0x08)
	struct USceneComponent* CraneCameraMount; // 0x330(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x2cff6a28 (Inherited: 0x2cff6b08)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x308(0x04)
	bool bLockOrientationToRail; // 0x30c(0x01)
	struct USceneComponent* TransformComponent; // 0x310(0x08)
	struct USplineComponent* RailSplineComponent; // 0x318(0x08)
	struct USceneComponent* RailCameraMount; // 0x320(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3c02680
};

// Class CinematicCamera.CineCameraActor
// Size: 0x2cff6a90 (Inherited: 0x2cff6b20)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x920(0x58)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c02380
};

