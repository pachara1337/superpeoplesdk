// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a40)
struct UMagicLeapImageTrackerComponent : USceneComponent {
	struct UTexture2D* TargetImageTexture; // 0x238(0x08)
	struct FString Name; // 0x240(0x10)
	float LongerDimension; // 0x250(0x04)
	bool bIsStationary; // 0x254(0x01)
	bool bUseUnreliablePose; // 0x255(0x01)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x258(0x10)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; // 0x268(0x10)
	struct FMulticastInlineDelegate OnImageTargetFound; // 0x278(0x10)
	struct FMulticastInlineDelegate OnImageTargetLost; // 0x288(0x10)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x298(0x10)
	char pad_2CFF6AAE[0x2]; // 0x2cff6aae(0x02)

	bool SetTargetAsync(struct UTexture2D* ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x1a981d0
	bool RemoveTargetAsync(); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x1a98130
};

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMagicLeapImageTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a98160
	bool IsImageTrackingEnabled(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a98100
	int32_t GetMaxSimultaneousTargets(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a980d0
	void EnableImageTracking(bool bEnable); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a98050
};

