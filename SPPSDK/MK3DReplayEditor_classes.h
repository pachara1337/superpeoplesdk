// Class MK3DReplayEditor.KeyFrameCameraModifier
// Size: 0x2cff6a60 (Inherited: 0x2cff6a50)
struct UKeyFrameCameraModifier : UCameraModifier {
	struct AMK3DKeyFrameManager* KeyFrameOwner; // 0x50(0x08)
	char pad_2CFF6A58[0x8]; // 0x2cff6a58(0x08)
};

// Class MK3DReplayEditor.KeyFramePostProcessEffect
// Size: 0x2cff6b00 (Inherited: 0x2cff6b08)
struct AKeyFramePostProcessEffect : AActor {
	struct UPostProcessComponent* PostProcessComponent; // 0x308(0x08)
	struct TArray<struct FColorGradingLUT> ColorGradingLUTFiles; // 0x8f0(0x10)
};

// Class MK3DReplayEditor.KeyFrameSplineActor
// Size: 0x2cff6a70 (Inherited: 0x2cff6b08)
struct AKeyFrameSplineActor : AActor {
	struct USplineComponent* SplineComponent; // 0x308(0x08)
	struct UStaticMesh* PointMeshCache; // 0x320(0x08)
	struct FString PointMeshPath; // 0x348(0x10)
	struct FVector PointOffset; // 0x358(0x0c)
	float PointScale; // 0x364(0x04)
	int32_t PointInterval; // 0x368(0x04)
};

// Class MK3DReplayEditor.MK3DEditorTimelineWidget
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMK3DEditorTimelineWidget : UInterface {
};

// Class MK3DReplayEditor.MK3DKeyFrameManager
// Size: 0x2cff6ad0 (Inherited: 0x2cff6b08)
struct AMK3DKeyFrameManager : AActor {
	struct AMK3DReplayManager* ReplayOwner; // 0x310(0x08)
	struct AMK3DReplayWidgets* WidgetOwner; // 0x318(0x08)
	struct UKeyFrameCameraModifier* KeyFrameCameraModifier; // 0x3a8(0x08)
	struct TWeakObjectPtr<struct APawn> KeyFrameViewTargetCache; // 0x3c8(0x08)

	void RelayExportProgressUpdate(struct AMK3DPublisherManager* EventOwner, struct FString progress, struct FString ExtraParam); // Function MK3DReplayEditor.MK3DKeyFrameManager.RelayExportProgressUpdate // (Final|Native|Private) // @ game+0x18a49b0
	void ReceiveScreenshotRequestProcessed(); // Function MK3DReplayEditor.MK3DKeyFrameManager.ReceiveScreenshotRequestProcessed // (Final|Native|Private) // @ game+0x18a4990
	void OnReplayModeChange(struct AMK3DReplayManager* EventOwner, enum class EMK3DReplayMode OldMode, enum class EMK3DReplayMode CurrentMode); // Function MK3DReplayEditor.MK3DKeyFrameManager.OnReplayModeChange // (Final|Native|Private) // @ game+0x18a4890
};

