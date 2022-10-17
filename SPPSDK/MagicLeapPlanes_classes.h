// Class MagicLeapPlanes.MagicLeapPlanesComponent
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a40)
struct UMagicLeapPlanesComponent : USceneComponent {
	struct TArray<enum class EMagicLeapPlaneQueryFlags> QueryFlags; // 0x238(0x10)
	struct UBoxComponent* SearchVolume; // 0x248(0x08)
	int32_t MaxResults; // 0x250(0x04)
	float MinHolePerimeter; // 0x254(0x04)
	float MinPlaneArea; // 0x258(0x04)
	enum class EMagicLeapPlaneQueryType QueryType; // 0x25c(0x01)
	float SimilarityThreshold; // 0x260(0x04)
	struct FMulticastInlineDelegate OnPlanesQueryResult; // 0x268(0x10)
	struct FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x278(0x10)
	char pad_2CFF6A89[0x17]; // 0x2cff6a89(0x17)

	bool RequestPlanesAsync(); // Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x1a9bda0
};

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMagicLeapPlanesFunctionLibrary : UBlueprintFunctionLibrary {

	void ReorderPlaneFlags(struct TArray<enum class EMagicLeapPlaneQueryFlags>& InPriority, struct TArray<enum class EMagicLeapPlaneQueryFlags>& InFlagsToReorder, struct TArray<enum class EMagicLeapPlaneQueryFlags>& OutReorderedFlags); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a9bc20
	bool RemovePersistentQuery(struct FGuid Handle); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a9bb90
	void RemoveFlagsNotInQuery(struct TArray<enum class EMagicLeapPlaneQueryFlags>& InQueryFlags, struct TArray<enum class EMagicLeapPlaneQueryFlags>& InResultFlags, struct TArray<enum class EMagicLeapPlaneQueryFlags>& OutFlags); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a9ba10
	bool PlanesQueryBeginAsync(struct FMagicLeapPlanesQuery& Query, struct FDelegate& ResultDelegate); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1a9b8a0
	bool PlanesPersistentQueryBeginAsync(struct FMagicLeapPlanesQuery& Query, struct FGuid& Handle, struct FDelegate& ResultDelegate); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a9b6e0
	bool IsTrackerValid(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1a9b6b0
	struct FTransform GetContentScale(struct AActor* ContentActor, struct FMagicLeapPlaneResult& PlaneResult); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1a9b560
	bool DestroyTracker(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a9b530
	bool CreateTracker(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a9b500
	struct FGuid AddPersistentQuery(enum class EMagicLeapPlaneQueryType PersistentQueryType); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1a9b480
};

