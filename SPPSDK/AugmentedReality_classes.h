// Class AugmentedReality.ARSessionConfig
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a38)
struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x38(0x01)
	bool bGenerateCollisionForMeshData; // 0x39(0x01)
	bool bGenerateNavMeshForMeshData; // 0x3a(0x01)
	bool bUseMeshDataForOcclusion; // 0x3b(0x01)
	bool bRenderMeshDataInWireframe; // 0x3c(0x01)
	bool bTrackSceneObjects; // 0x3d(0x01)
	bool bUsePersonSegmentationForOcclusion; // 0x3e(0x01)
	enum class EARWorldAlignment WorldAlignment; // 0x3f(0x01)
	enum class EARSessionType SessionType; // 0x40(0x01)
	enum class EARPlaneDetectionMode PlaneDetectionMode; // 0x41(0x01)
	bool bHorizontalPlaneDetection; // 0x42(0x01)
	bool bVerticalPlaneDetection; // 0x43(0x01)
	bool bEnableAutoFocus; // 0x44(0x01)
	enum class EARLightEstimationMode LightEstimationMode; // 0x45(0x01)
	enum class EARFrameSyncMode FrameSyncMode; // 0x46(0x01)
	bool bEnableAutomaticCameraOverlay; // 0x47(0x01)
	bool bEnableAutomaticCameraTracking; // 0x48(0x01)
	bool bResetCameraTracking; // 0x49(0x01)
	bool bResetTrackedObjects; // 0x4a(0x01)
	struct TArray<struct UARCandidateImage*> CandidateImages; // 0x50(0x10)
	int32_t MaxNumSimultaneousImagesTracked; // 0x60(0x04)
	enum class EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x64(0x01)
	struct TArray<char> WorldMapData; // 0x68(0x10)
	struct TArray<struct UARCandidateObject*> CandidateObjects; // 0x78(0x10)
	struct FARVideoFormat DesiredVideoFormat; // 0x88(0x0c)
	enum class EARFaceTrackingDirection FaceTrackingDirection; // 0x94(0x01)
	enum class EARFaceTrackingUpdate FaceTrackingUpdate; // 0x95(0x01)
	struct TArray<char> SerializedARCandidateImageDatabase; // 0x98(0x10)
	enum class EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8(0x01)
	char pad_2CFF6A9F[0x11]; // 0x2cff6a9f(0x11)

	bool ShouldResetTrackedObjects(); // Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3741b80
	bool ShouldResetCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3741b50
	bool ShouldRenderCameraOverlay(); // Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3741b20
	bool ShouldEnableCameraTracking(); // Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3741af0
	bool ShouldEnableAutoFocus(); // Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3741ac0
	void SetWorldMapData(struct TArray<char> WorldMapData); // Function AugmentedReality.ARSessionConfig.SetWorldMapData // (Final|Native|Public|BlueprintCallable) // @ game+0x37419d0
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature); // Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable // (Final|Native|Public|BlueprintCallable) // @ game+0x3741950
	void SetResetTrackedObjects(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x37418c0
	void SetResetCameraTracking(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetResetCameraTracking // (Final|Native|Public|BlueprintCallable) // @ game+0x3741830
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x37417b0
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection); // Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x3741730
	void SetEnableAutoFocus(bool bNewValue); // Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x37416a0
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat); // Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x3741600
	void SetCandidateObjectList(struct TArray<struct UARCandidateObject*>& InCandidateObjects); // Function AugmentedReality.ARSessionConfig.SetCandidateObjectList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3741550
	struct TArray<char> GetWorldMapData(); // Function AugmentedReality.ARSessionConfig.GetWorldMapData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740a50
	enum class EARWorldAlignment GetWorldAlignment(); // Function AugmentedReality.ARSessionConfig.GetWorldAlignment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740a20
	enum class EARSessionType GetSessionType(); // Function AugmentedReality.ARSessionConfig.GetSessionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x183c000
	enum class EARPlaneDetectionMode GetPlaneDetectionMode(); // Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37405f0
	int32_t GetMaxNumSimultaneousImagesTracked(); // Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740530
	enum class EARLightEstimationMode GetLightEstimationMode(); // Function AugmentedReality.ARSessionConfig.GetLightEstimationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740200
	enum class EARFrameSyncMode GetFrameSyncMode(); // Function AugmentedReality.ARSessionConfig.GetFrameSyncMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37401d0
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37401a0
	enum class EARFaceTrackingDirection GetFaceTrackingDirection(); // Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740170
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType(); // Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3478980
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature(); // Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740140
	struct FARVideoFormat GetDesiredVideoFormat(); // Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740000
	struct TArray<struct UARCandidateObject*> GetCandidateObjectList(); // Function AugmentedReality.ARSessionConfig.GetCandidateObjectList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x373ff00
	struct TArray<struct UARCandidateImage*> GetCandidateImageList(); // Function AugmentedReality.ARSessionConfig.GetCandidateImageList // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x373fe70
	void AddCandidateObject(struct UARCandidateObject* CandidateObject); // Function AugmentedReality.ARSessionConfig.AddCandidateObject // (Final|Native|Public|BlueprintCallable) // @ game+0x373f0c0
	void AddCandidateImage(struct UARCandidateImage* NewCandidateImage); // Function AugmentedReality.ARSessionConfig.AddCandidateImage // (Final|Native|Public|BlueprintCallable) // @ game+0x373f040
};

// Class AugmentedReality.ARLightEstimate
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UARLightEstimate : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AugmentedReality.ARBasicLightEstimate
// Size: 0x2cff6a48 (Inherited: 0x2cff6a30)
struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x30(0x04)
	float AmbientColorTemperatureKelvin; // 0x34(0x04)
	struct FLinearColor AmbientColor; // 0x38(0x10)

	float GetAmbientIntensityLumens(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x373fde0
	float GetAmbientColorTemperatureKelvin(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x373fdb0
	struct FLinearColor GetAmbientColor(); // Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x373fd70
};

// Class AugmentedReality.ARCandidateImage
// Size: 0x2cff6a60 (Inherited: 0x2cff6a38)
struct UARCandidateImage : UDataAsset {
	struct UTexture2D* CandidateTexture; // 0x38(0x08)
	struct FString FriendlyName; // 0x40(0x10)
	float Width; // 0x50(0x04)
	float Height; // 0x54(0x04)
	enum class EARCandidateImageOrientation Orientation; // 0x58(0x01)
	char pad_2CFF6A59[0x7]; // 0x2cff6a59(0x07)

	float GetPhysicalWidth(); // Function AugmentedReality.ARCandidateImage.GetPhysicalWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37484d0
	float GetPhysicalHeight(); // Function AugmentedReality.ARCandidateImage.GetPhysicalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37484b0
	enum class EARCandidateImageOrientation GetOrientation(); // Function AugmentedReality.ARCandidateImage.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3748490
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateImage.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3748430
	struct UTexture2D* GetCandidateTexture(); // Function AugmentedReality.ARCandidateImage.GetCandidateTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3748410
};

// Class AugmentedReality.ARBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UARBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnpinComponent(struct USceneComponent* ComponentToUnpin); // Function AugmentedReality.ARBlueprintLibrary.UnpinComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3741c40
	void StopARSession(); // Function AugmentedReality.ARBlueprintLibrary.StopARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3741c20
	void StartARSession(struct UARSessionConfig* SessionConfig); // Function AugmentedReality.ARBlueprintLibrary.StartARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3741bb0
	void SetAlignmentTransform(struct FTransform& InAlignmentTransform); // Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3741480
	void RemovePin(struct UARPin* PinToRemove); // Function AugmentedReality.ARBlueprintLibrary.RemovePin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3741410
	struct UARPin* PinComponentToTraceResult(struct USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3741270
	struct UARPin* PinComponent(struct USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, struct UARTrackedGeometry* TrackedGeometry, struct FName DebugName); // Function AugmentedReality.ARBlueprintLibrary.PinComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x37410c0
	void PauseARSession(); // Function AugmentedReality.ARBlueprintLibrary.PauseARSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x37410a0
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3740c00
	struct TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3740e70
	bool IsSessionTypeSupported(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3740b80
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature); // Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3740ac0
	bool IsARSupported(); // Function AugmentedReality.ARBlueprintLibrary.IsARSupported // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12903a0
	enum class EARWorldMappingState GetWorldMappingStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3740a90
	enum class EARTrackingQualityReason GetTrackingQualityReason(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1289b30
	enum class EARTrackingQuality GetTrackingQuality(); // Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37409c0
	struct TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType); // Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x37406d0
	struct UARSessionConfig* GetSessionConfig(); // Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x37406a0
	struct TArray<struct FVector> GetPointCloud(); // Function AugmentedReality.ARBlueprintLibrary.GetPointCloud // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3740620
	struct UARTextureCameraImage* GetPersonSegmentationImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3740590
	struct UARTextureCameraImage* GetPersonSegmentationDepthImage(); // Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3740560
	struct UARLightEstimate* GetCurrentLightEstimate(); // Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x373ff90
	struct UARTextureCameraImage* GetCameraImage(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373fe40
	struct UARTextureCameraDepth* GetCameraDepth(); // Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373fe10
	struct FARSessionStatus GetARSessionStatus(); // Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x373f820
	struct TArray<struct UARTrackedPose*> GetAllTrackedPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373fcf0
	struct TArray<struct UARTrackedPoint*> GetAllTrackedPoints(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373fc70
	struct TArray<struct UARPlaneGeometry*> GetAllTrackedPlanes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373fbf0
	struct TArray<struct UARTrackedImage*> GetAllTrackedImages(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373fb70
	struct TArray<struct UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373faf0
	struct TArray<struct FARPose2D> GetAllTracked2DPoses(); // Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373f9b0
	struct TArray<struct UARPin*> GetAllPins(); // Function AugmentedReality.ARBlueprintLibrary.GetAllPins // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373f930
	struct TArray<struct UARTrackedGeometry*> GetAllGeometries(); // Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373f8b0
	void DebugDrawTrackedGeometry(struct UARTrackedGeometry* TrackedGeometry, struct UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x373f690
	void DebugDrawPin(struct UARPin* ARPin, struct UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x373f500
	struct UARCandidateImage* AddRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth); // Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373f220
	bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x373f140
};

// Class AugmentedReality.ARTraceResultLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UARTraceResultLibrary : UBlueprintFunctionLibrary {

	struct UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37408c0
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3740790
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3740410
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3740290
	float GetDistanceFromCamera(struct FARTraceResult& TraceResult); // Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3740040
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Size: 0x2cff6a58 (Inherited: 0x2cff6a38)
struct UARBaseAsyncTaskBlueprintProxy : UBlueprintAsyncActionBase {
	char pad_2CFF6A38[0x20]; // 0x2cff6a38(0x20)
};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Size: 0x2cff6a88 (Inherited: 0x2cff6a58)
struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x58(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x68(0x10)
	char pad_2CFF6A78[0x10]; // 0x2cff6a78(0x10)

	struct UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(struct UObject* WorldContextObject); // Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x373efc0
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a58)
struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	struct FMulticastInlineDelegate OnSuccess; // 0x58(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x68(0x10)
	char pad_2CFF6A78[0x28]; // 0x2cff6a78(0x28)

	struct UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent); // Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x373eea0
};

// Class AugmentedReality.AROriginActor
// Size: 0x2cff6b08 (Inherited: 0x2cff6b08)
struct AAROriginActor : AActor {
};

// Class AugmentedReality.ARPin
// Size: 0x2cff6af0 (Inherited: 0x2cff6930)
struct UARPin : UObject {
	struct UARTrackedGeometry* TrackedGeometry; // 0x30(0x08)
	struct USceneComponent* PinnedComponent; // 0x38(0x08)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	struct FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnARTransformUpdated; // 0xd8(0x10)
	char pad_2CFF69C1[0x12f]; // 0x2cff69c1(0x12f)

	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARPin.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37409f0
	struct UARTrackedGeometry* GetTrackedGeometry(); // Function AugmentedReality.ARPin.GetTrackedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740890
	struct USceneComponent* GetPinnedComponent(); // Function AugmentedReality.ARPin.GetPinnedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37405c0
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARPin.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x37403b0
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARPin.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740230
	struct FName GetDebugName(); // Function AugmentedReality.ARPin.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x373ffc0
	void DebugDraw(struct UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds); // Function AugmentedReality.ARPin.DebugDraw // (Native|Public|HasOutParms|HasDefaults|Const) // @ game+0x373f3b0
};

// Class AugmentedReality.ARSharedWorldGameMode
// Size: 0x2cff6a60 (Inherited: 0x2cff6af8)
struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x3f8(0x04)

	void SetPreviewImageData(struct TArray<char> ImageData); // Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3745fa0
	void SetARWorldSharingIsReady(); // Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3745f00
	void SetARSharedWorldData(struct TArray<char> ARWorldData); // Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3745e10
	struct AARSharedWorldGameState* GetARSharedWorldGameState(); // Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x37455e0
};

// Class AugmentedReality.ARSharedWorldGameState
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a80)
struct AARSharedWorldGameState : AGameState {
	struct TArray<char> PreviewImageData; // 0x380(0x10)
	struct TArray<char> ARWorldData; // 0x390(0x10)
	int32_t PreviewImageBytesTotal; // 0x3a0(0x04)
	int32_t ARWorldBytesTotal; // 0x3a4(0x04)
	int32_t PreviewImageBytesDelivered; // 0x3a8(0x04)
	int32_t ARWorldBytesDelivered; // 0x3ac(0x04)
	char pad_2CFF6AB0[0x8]; // 0x2cff6ab0(0x08)

	void K2_OnARWorldMapIsReady(); // Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
};

// Class AugmentedReality.ARSharedWorldPlayerController
// Size: 0x2cff6b08 (Inherited: 0x2cff6b00)
struct AARSharedWorldPlayerController : APlayerController {
	char pad_2CFF6B00[0x8]; // 0x2cff6b00(0x08)

	void ServerMarkReadyForReceiving(); // Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3745dc0
	void ClientUpdatePreviewImageData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x37454e0
	void ClientUpdateARWorldData(int32_t Offset, struct TArray<char> Buffer); // Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x37453e0
	void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize); // Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x37452e0
};

// Class AugmentedReality.ARSkyLight
// Size: 0x2cff6a28 (Inherited: 0x2cff6a18)
struct AARSkyLight : ASkyLight {
	struct UAREnvironmentCaptureProbe* CaptureProbe; // 0x318(0x08)
	char pad_2CFF6A20[0x8]; // 0x2cff6a20(0x08)

	void SetEnvironmentCaptureProbe(struct UAREnvironmentCaptureProbe* InCaptureProbe); // Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe // (Final|Native|Public|BlueprintCallable) // @ game+0x3745f20
};

// Class AugmentedReality.ARTexture
// Size: 0x2cff6ae0 (Inherited: 0x2cff6ac0)
struct UARTexture : UTexture {
	enum class EARTextureType TextureType; // 0xc0(0x01)
	float Timestamp; // 0xc4(0x04)
	struct FGuid ExternalTextureGuid; // 0xc8(0x10)
	struct FVector2D Size; // 0xd8(0x08)
	char pad_2CFF6ADD[0x3]; // 0x2cff6add(0x03)
};

// Class AugmentedReality.ARTextureCameraImage
// Size: 0x2cff6ae0 (Inherited: 0x2cff6ae0)
struct UARTextureCameraImage : UARTexture {
};

// Class AugmentedReality.ARTextureCameraDepth
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae0)
struct UARTextureCameraDepth : UARTexture {
	enum class EARDepthQuality DepthQuality; // 0xe0(0x01)
	enum class EARDepthAccuracy DepthAccuracy; // 0xe1(0x01)
	bool bIsTemporallySmoothed; // 0xe2(0x01)
	char pad_2CFF6AE3[0x5]; // 0x2cff6ae3(0x05)
};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// Size: 0x2cff6a38 (Inherited: 0x2cff6b18)
struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	enum class EARTextureType TextureType; // 0x118(0x01)
	float Timestamp; // 0x11c(0x04)
	struct FGuid ExternalTextureGuid; // 0x120(0x10)
	struct FVector2D Size; // 0x130(0x08)
};

// Class AugmentedReality.ARTraceResultDummy
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UARTraceResultDummy : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AugmentedReality.ARTrackedGeometry
// Size: 0x2cff6af0 (Inherited: 0x2cff6930)
struct UARTrackedGeometry : UObject {
	struct FGuid UniqueId; // 0x30(0x10)
	struct FTransform LocalToTrackingTransform; // 0x40(0x30)
	struct FTransform LocalToAlignedTrackingTransform; // 0x70(0x30)
	enum class EARTrackingState TrackingState; // 0xa0(0x01)
	struct UMRMeshComponent* UnderlyingMesh; // 0xb0(0x08)
	enum class EARObjectClassification ObjectClassification; // 0xb8(0x01)
	int32_t LastUpdateFrameNumber; // 0xd0(0x04)
	struct FName DebugName; // 0xe0(0x0c)
	char pad_2CFF69BA[0x136]; // 0x2cff69ba(0x136)

	bool IsTracked(); // Function AugmentedReality.ARTrackedGeometry.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745d90
	struct UMRMeshComponent* GetUnderlyingMesh(); // Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3745cb0
	enum class EARTrackingState GetTrackingState(); // Function AugmentedReality.ARTrackedGeometry.GetTrackingState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37409f0
	enum class EARObjectClassification GetObjectClassification(); // Function AugmentedReality.ARTrackedGeometry.GetObjectClassification // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745c20
	struct FTransform GetLocalToWorldTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745bc0
	struct FTransform GetLocalToTrackingTransform(); // Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3740230
	float GetLastUpdateTimestamp(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745af0
	int32_t GetLastUpdateFrameNumber(); // Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745ac0
	struct FName GetDebugName(); // Function AugmentedReality.ARTrackedGeometry.GetDebugName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745980
};

// Class AugmentedReality.ARPlaneGeometry
// Size: 0x2cff6a30 (Inherited: 0x2cff6af0)
struct UARPlaneGeometry : UARTrackedGeometry {
	enum class EARPlaneOrientation Orientation; // 0xf0(0x01)
	struct FVector Center; // 0xf4(0x0c)
	struct FVector Extent; // 0x100(0x0c)
	struct UARPlaneGeometry* SubsumedBy; // 0x120(0x08)

	struct UARPlaneGeometry* GetSubsumedBy(); // Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745c60
	enum class EARPlaneOrientation GetOrientation(); // Function AugmentedReality.ARPlaneGeometry.GetOrientation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745c40
	struct FVector GetExtent(); // Function AugmentedReality.ARPlaneGeometry.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745a90
	struct FVector GetCenter(); // Function AugmentedReality.ARPlaneGeometry.GetCenter // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745950
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745880
};

// Class AugmentedReality.ARTrackedPoint
// Size: 0x2cff6af0 (Inherited: 0x2cff6af0)
struct UARTrackedPoint : UARTrackedGeometry {
};

// Class AugmentedReality.ARTrackedImage
// Size: 0x2cff6b00 (Inherited: 0x2cff6af0)
struct UARTrackedImage : UARTrackedGeometry {
	struct UARCandidateImage* DetectedImage; // 0xf0(0x08)
	struct FVector2D EstimatedSize; // 0xf8(0x08)

	struct FVector2D GetEstimateSize(); // Function AugmentedReality.ARTrackedImage.GetEstimateSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3745a10
	struct UARCandidateImage* GetDetectedImage(); // Function AugmentedReality.ARTrackedImage.GetDetectedImage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37459c0
};

// Class AugmentedReality.ARTrackedQRCode
// Size: 0x2cff6b20 (Inherited: 0x2cff6b00)
struct UARTrackedQRCode : UARTrackedImage {
	struct FString QRCode; // 0x100(0x10)
	int32_t Version; // 0x110(0x04)
	char pad_2CFF6B14[0xc]; // 0x2cff6b14(0x0c)
};

// Class AugmentedReality.ARFaceGeometry
// Size: 0x2cff6ae0 (Inherited: 0x2cff6af0)
struct UARFaceGeometry : UARTrackedGeometry {
	struct FVector LookAtTarget; // 0xf0(0x0c)
	bool bIsTracked; // 0xfc(0x01)
	struct TMap<enum class EARFaceBlendShape, float> BlendShapes; // 0x100(0x50)

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745ce0
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye); // Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745b20
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape); // Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745610
	struct TMap<enum class EARFaceBlendShape, float> GetBlendShapes(); // Function AugmentedReality.ARFaceGeometry.GetBlendShapes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37456a0
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// Size: 0x2cff6b10 (Inherited: 0x2cff6af0)
struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	struct UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x100(0x08)
	char pad_2CFF6AF8[0x18]; // 0x2cff6af8(0x18)

	struct FVector GetExtent(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745a50
	struct UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture(); // Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x37459e0
};

// Class AugmentedReality.ARTrackedObject
// Size: 0x2cff6b00 (Inherited: 0x2cff6af0)
struct UARTrackedObject : UARTrackedGeometry {
	struct UARCandidateObject* DetectedObject; // 0xf0(0x08)
	char pad_2CFF6AF8[0x8]; // 0x2cff6af8(0x08)

	struct UARCandidateObject* GetDetectedObject(); // Function AugmentedReality.ARTrackedObject.GetDetectedObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37459c0
};

// Class AugmentedReality.ARTrackedPose
// Size: 0x2cff6a40 (Inherited: 0x2cff6af0)
struct UARTrackedPose : UARTrackedGeometry {

	struct FARPose3D GetTrackedPoseData(); // Function AugmentedReality.ARTrackedPose.GetTrackedPoseData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3745c80
};

// Class AugmentedReality.ARTrackableNotifyComponent
// Size: 0x2cff6b08 (Inherited: 0x2cff6cb8)
struct UARTrackableNotifyComponent : UActorComponent {
	struct FMulticastInlineDelegate OnAddTrackedGeometry; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPlane; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x108(0x10)
	struct FMulticastInlineDelegate OnAddTrackedPoint; // 0x118(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x128(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x138(0x10)
	struct FMulticastInlineDelegate OnAddTrackedImage; // 0x148(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedImage; // 0x158(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedImage; // 0x168(0x10)
	struct FMulticastInlineDelegate OnAddTrackedFace; // 0x178(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedFace; // 0x188(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedFace; // 0x198(0x10)
	struct FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnAddTrackedObject; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1e8(0x10)
	struct FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1f8(0x10)
};

// Class AugmentedReality.ARTypesDummyClass
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UARTypesDummyClass : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AugmentedReality.ARCandidateObject
// Size: 0x2cff6a78 (Inherited: 0x2cff6a38)
struct UARCandidateObject : UDataAsset {
	struct TArray<char> CandidateObjectData; // 0x38(0x10)
	struct FString FriendlyName; // 0x48(0x10)
	struct FBox BoundingBox; // 0x58(0x1c)
	char pad_2CFF6A74[0x4]; // 0x2cff6a74(0x04)

	void SetFriendlyName(struct FString NewName); // Function AugmentedReality.ARCandidateObject.SetFriendlyName // (Final|Native|Public|BlueprintCallable) // @ game+0x3748640
	void SetCandidateObjectData(struct TArray<char>& InCandidateObject); // Function AugmentedReality.ARCandidateObject.SetCandidateObjectData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3748590
	void SetBoundingBox(struct FBox& InBoundingBox); // Function AugmentedReality.ARCandidateObject.SetBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x37484f0
	struct FString GetFriendlyName(); // Function AugmentedReality.ARCandidateObject.GetFriendlyName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3748460
	struct TArray<char> GetCandidateObjectData(); // Function AugmentedReality.ARCandidateObject.GetCandidateObjectData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37483e0
	struct FBox GetBoundingBox(); // Function AugmentedReality.ARCandidateObject.GetBoundingBox // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x37483b0
};

