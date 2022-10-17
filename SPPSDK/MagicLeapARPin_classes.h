// Class MagicLeapARPin.MagicLeapARPinComponent
// Size: 0x2cff6a70 (Inherited: 0x2cff6a40)
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; // 0x238(0x10)
	int32_t UserIndex; // 0x248(0x04)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x24c(0x01)
	bool bShouldPinActor; // 0x24d(0x01)
	struct UMagicLeapARPinSaveGame* PinDataClass; // 0x250(0x08)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x258(0x10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x268(0x10)
	struct FGuid PinnedCFUID; // 0x278(0x10)
	struct USceneComponent* PinnedSceneComponent; // 0x288(0x08)
	struct UMagicLeapARPinSaveGame* PinData; // 0x290(0x08)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin // (Final|Native|Public|BlueprintCallable) // @ game+0x1a67540
	bool PinSceneComponent(struct USceneComponent* ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x1a67400
	bool PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a673d0
	bool PinActor(struct AActor* ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1a67340
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	bool IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a672e0
	bool GetPinState(struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x1a67180
	bool GetPinnedPinID(struct FGuid& PinID); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a67230
	struct UMagicLeapARPinSaveGame* GetPinData(struct UMagicLeapARPinSaveGame* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData // (Final|Native|Public|BlueprintCallable) // @ game+0x1a670f0
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	void UnBindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a67490
	bool IsTrackerValid(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a67310
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t& Count); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a67060
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector& SearchPoint, struct FGuid& PinID); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a66f70
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, struct TArray<struct FGuid>& Pins); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a66e80
	struct FString GetARPinStateToString(struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1a66da0
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid& PinID, struct FMagicLeapARPinState& State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a66ca0
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid& PinID, struct FVector& Position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a66b10
	bool GetARPinPositionAndOrientation(struct FGuid& PinID, struct FVector& Position, struct FRotator& Orientation, bool& PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a66980
	enum class EMagicLeapPassableWorldError DestroyTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a66950
	enum class EMagicLeapPassableWorldError CreateTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a66920
	void BindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate& Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a66870
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x30(0x04)
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x34(0x10)
	char pad_2CFF6944[0x104]; // 0x2cff6944(0x104)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a30)
struct UMagicLeapARPinSaveGame : USaveGame {
	struct FGuid PinnedID; // 0x30(0x10)
	struct FTransform ComponentWorldTransform; // 0x40(0x30)
	struct FTransform PinTransform; // 0x70(0x30)
};

