// Class MagicLeap.InAppPurchaseComponent
// Size: 0x2cff6a30 (Inherited: 0x2cff6cb8)
struct UInAppPurchaseComponent : UActorComponent {
	struct FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xb8(0x10)
	struct FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xc8(0x10)
	struct FMulticastInlineDelegate GetItemsDetailsFailure; // 0xd8(0x10)
	struct FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xe8(0x10)
	struct FMulticastInlineDelegate PurchaseConfirmationFailure; // 0xf8(0x10)
	struct FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x108(0x10)
	struct FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x118(0x10)

	bool TryPurchaseItemAsync(struct FPurchaseItemDetails& ItemDetails); // Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a76040
	bool TryGetPurchaseHistoryAsync(int32_t InNumPages); // Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x1a75fb0
	bool TryGetItemsDetailsAsync(struct TArray<struct FString>& ItemIDs); // Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a75ed0
	void PurchaseConfirmationSuccess__DelegateSignature(struct FPurchaseConfirmation& PurchaseConfirmations); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void PurchaseConfirmationFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void InAppPurchaseLogMessage__DelegateSignature(struct FString LogMessage); // DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void GetPurchaseHistorySuccess__DelegateSignature(struct TArray<struct FPurchaseConfirmation>& PurchaseHistory); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void GetPurchaseHistoryFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void GetItemsDetailsSuccess__DelegateSignature(struct TArray<struct FPurchaseItemDetails>& ItemsDetails); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void GetItemsDetailsFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
};

// Class MagicLeap.LuminApplicationLifecycleComponent
// Size: 0x2cff6a98 (Inherited: 0x2cff6a48)
struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	struct FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x148(0x10)
	struct FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x158(0x10)
	struct FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x168(0x10)
	struct FMulticastInlineDelegate FocusLostDelegate; // 0x178(0x10)
	struct FMulticastInlineDelegate FocusGainedDelegate; // 0x188(0x10)
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a48)
struct UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent {
	struct FMulticastInlineDelegate OnHeadTrackingLost; // 0x148(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x158(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x168(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x178(0x10)
	char pad_2CFF6A88[0x50]; // 0x2cff6a88(0x50)
};

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMagicLeapHMDFunctionLibrary : UBlueprintFunctionLibrary {

	void SetStabilizationDepthActor(struct AActor* InStabilizationDepthActor, bool bSetFocusActor); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a75e10
	void SetFocusActor(struct AActor* InFocusActor, bool bSetStabilizationActor); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a75d50
	void SetBaseRotation(struct FRotator& InBaseRotation); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a75cd0
	void SetBasePosition(struct FVector& InBasePosition); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a75cd0
	void SetBaseOrientation(struct FQuat& InBaseOrientation); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a75cd0
	bool SetAppReady(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12903a0
	bool IsRunningOnMagicLeapHMD(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a75690
	int32_t GetPlatformAPILevel(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a75600
	int32_t GetMLSDKVersionRevision(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a75600
	int32_t GetMLSDKVersionMinor(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a75600
	int32_t GetMLSDKVersionMajor(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a75600
	struct FString GetMLSDKVersion(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a75580
	int32_t GetMinimumAPILevel(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a75630
	bool GetHeadTrackingState(struct FMagicLeapHeadTrackingState& State); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a754f0
	bool GetHeadTrackingMapEvents(struct TSet<enum class EMagicLeapHeadTrackingMapEvent>& MapEvents); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a75360
	bool GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo& PerformanceInfo); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a752b0
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a40)
struct UMagicLeapMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x240(0x10)
	bool ScanWorld; // 0x250(0x01)
	enum class EMagicLeapMeshType MeshType; // 0x251(0x01)
	struct UBoxComponent* BoundingVolume; // 0x258(0x08)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x260(0x01)
	float PerimeterOfGapsToFill; // 0x264(0x04)
	bool Planarize; // 0x268(0x01)
	float DisconnectedSectionArea; // 0x26c(0x04)
	bool RequestNormals; // 0x270(0x01)
	bool RequestVertexConfidence; // 0x271(0x01)
	enum class EMagicLeapMeshVertexColorMode VertexColorMode; // 0x272(0x01)
	struct TArray<struct FColor> BlockVertexColors; // 0x278(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x288(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x298(0x10)
	bool RemoveOverlappingTriangles; // 0x2a8(0x01)
	struct UMRMeshComponent* MRMesh; // 0x2b0(0x08)
	int32_t BricksPerFrame; // 0x2b8(0x04)
	char pad_2CFF6AA4[0x2c]; // 0x2cff6aa4(0x2c)

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo& NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest>& RequestedMesh); // Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a75bb0
	void OnMeshTrackerUpdated__DelegateSignature(struct FGuid ID, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // @ game+0x2bad3b0
	int32_t GetNumQueuedBlockUpdates(); // Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates // (Final|Native|Public|BlueprintCallable) // @ game+0x1a75660
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1a75230
	void DisconnectBlockSelector(); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector // (Final|Native|Public|BlueprintCallable) // @ game+0x1a75210
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1a75190
	void ConnectBlockSelector(struct TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector // (Final|Native|Public|BlueprintCallable) // @ game+0x1a750f0
};

// Class MagicLeap.MagicLeapSettings
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UMagicLeapSettings : UObject {
	bool bEnableZI; // 0x30(0x01)
	bool bUseVulkanForZI; // 0x31(0x01)
	bool bUseMLAudioForZI; // 0x32(0x01)
	char pad_2CFF6933[0x105]; // 0x2cff6933(0x105)
};

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMagicLeapMeshBlockSelectorInterface : UInterface {

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo& NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest>& RequestedMesh); // Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a75a90
};

// Class MagicLeap.MagicLeapRaycastComponent
// Size: 0x2cff6b20 (Inherited: 0x2cff6cb8)
struct UMagicLeapRaycastComponent : UActorComponent {

	bool RequestRaycast(struct FMagicLeapRaycastQueryParams& RequestParams, struct FDelegate& ResultDelegate); // Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a75940
	void RaycastResultDelegate__DelegateSignature(struct FMagicLeapRaycastHitResult HitResult); // DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
};

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMagicLeapRaycastFunctionLibrary : UBlueprintFunctionLibrary {

	struct FMagicLeapRaycastQueryParams MakeRaycastQueryParams(struct FVector Position, struct FVector Direction, struct FVector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData); // Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1a756c0
};

