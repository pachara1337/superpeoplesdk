// Class PrefabAsset.DeferredPrefabLoadComponent
// Size: 0x2cff6ae8 (Inherited: 0x2cff6cb8)
struct UDeferredPrefabLoadComponent : UActorComponent {
};

// Class PrefabAsset.PrefabToolActor
// Size: 0x2cff6d10 (Inherited: 0x2cff6b08)
struct APrefabToolActor : AActor {
	struct UPrefabToolComponent* PrefabComponent; // 0x308(0x08)
	char pad_2CFF6B10[0x200]; // 0x2cff6b10(0x200)

	void SetPrefab(struct UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected); // Function PrefabAsset.PrefabToolActor.SetPrefab // (Final|Native|Public|BlueprintCallable) // @ game+0x1485c50
	void SetMobility(enum class EComponentMobility InMobility); // Function PrefabAsset.PrefabToolActor.SetMobility // (Final|Native|Public|BlueprintCallable) // @ game+0x1485bd0
	bool IsConnected(); // Function PrefabAsset.PrefabToolActor.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1485ba0
	struct FString GetPrefabAssetName(); // Function PrefabAsset.PrefabToolActor.GetPrefabAssetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x14858f0
	struct UPrefabAsset* GetPrefab(); // Function PrefabAsset.PrefabToolActor.GetPrefab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x14858c0
	void DestroyPrefabActor(bool bDestroyAttachedChildren); // Function PrefabAsset.PrefabToolActor.DestroyPrefabActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1485830
};

// Class PrefabAsset.PrefabAsset
// Size: 0x2cff6b00 (Inherited: 0x2cff6930)
struct UPrefabAsset : UObject {
	struct TMap<struct FString, struct FSoftObjectPath> AssetReferences; // 0x30(0x50)
	struct FSoftObjectPath GeneratedBlueprintAssetReference; // 0x80(0x20)
	struct FSoftObjectPath SimplifiedMeshAssetReference; // 0xa0(0x20)
	struct FGuid PrefabId; // 0xc0(0x10)
	struct FString PrefabContent; // 0xd0(0x10)
	struct FString PrefabHash; // 0xe0(0x10)
	int32_t NumActors; // 0xf0(0x04)
	struct FVector PrefabPivot; // 0xf4(0x0c)
	char pad_2CFF6A00[0x100]; // 0x2cff6a00(0x100)

	void SetSimplifiedMeshAssetReference(struct FSoftObjectPath& InAssetReference); // Function PrefabAsset.PrefabAsset.SetSimplifiedMeshAssetReference // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1485d20
	struct FString GetPrefabHash(); // Function PrefabAsset.PrefabAsset.GetPrefabHash // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1485970
};

// Class PrefabAsset.PrefabVariantAsset
// Size: 0x2cff6b08 (Inherited: 0x2cff6b00)
struct UPrefabVariantAsset : UPrefabAsset {
	struct UPrefabAsset* Parent; // 0x100(0x08)
};

// Class PrefabAsset.PrefabToolComponent
// Size: 0x2cff6a50 (Inherited: 0x2cffdfc0)
struct UPrefabToolComponent : UPrimitiveComponent {
	char bConnected : 1; // 0x4c0(0x01)
	char bLockSelection : 1; // 0x4c0(0x01)
	struct UPrefabAsset* Prefab; // 0x4c8(0x08)
	struct UBlueprint* GeneratedBlueprint; // 0x4d0(0x08)
	struct UStaticMesh* SimplifiedMesh; // 0x4d8(0x08)
	struct TMap<struct FName, struct AActor*> PrefabInstancesMap; // 0x4e0(0x50)
	struct TArray<struct FPrefabVariantRule> VariantRulesOverwrite; // 0x530(0x10)
	char bTransient : 1; // 0x540(0x01)
	struct AActor* ParentClass; // 0x548(0x08)
};

// Class PrefabAsset.PrefabFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UPrefabFunctionLibrary : UBlueprintFunctionLibrary {

	struct APrefabToolActor* SpawnPrefab(struct UObject* WorldContextObject, struct UPrefabAsset* PrefabAsset, struct FTransform& SpawnTransform, struct TArray<struct AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner); // Function PrefabAsset.PrefabFunctionLibrary.SpawnPrefab // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1485dd0
};

// Class PrefabAsset.BravoHotelWorldTagFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UBravoHotelWorldTagFunctionLibrary : UBlueprintFunctionLibrary {

	void UnitTest(); // Function PrefabAsset.BravoHotelWorldTagFunctionLibrary.UnitTest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1486060
	struct TArray<struct FName> GetTagsByTagID(struct FString TagID, bool bSorted); // Function PrefabAsset.BravoHotelWorldTagFunctionLibrary.GetTagsByTagID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1485a70
	struct FName GetPriorityByTags(struct TArray<struct FName>& Tags); // Function PrefabAsset.BravoHotelWorldTagFunctionLibrary.GetPriorityByTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x14859b0
};

// Class PrefabAsset.PrefabExporter
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UPrefabExporter : UExporter {
};

// Class PrefabAsset.PrefabLevelExporter
// Size: 0x2cff6a90 (Inherited: 0x2cff6a80)
struct UPrefabLevelExporter : UPrefabExporter {
	char pad_2CFF6A80[0x10]; // 0x2cff6a80(0x10)
};

// Class PrefabAsset.PrefabObjectExporterT3D
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UPrefabObjectExporterT3D : UPrefabExporter {
};

// Class PrefabAsset.PrefabToolSettings
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UPrefabToolSettings : UObject {
	bool bInitialPivotToWorldOrigin; // 0x30(0x01)
	bool bReplaceActorsWithCreatedPrefab; // 0x31(0x01)
	bool bAutoIncludeAttachedActorsWhenCreateNewPrefab; // 0x32(0x01)
	bool bNestedPrefabSupport; // 0x33(0x01)
	bool bRestorePrefabActorCollapseStatusAfterPIE; // 0x34(0x01)
	bool bCollapseAllPrefabActorsAfterMapOpened; // 0x35(0x01)
	bool bMoveActorsInWorldAfterSetPrefabPivot; // 0x36(0x01)
	bool bDuplicateNoRevertWithOffset; // 0x37(0x01)
	struct FString NewPrefabNamePattern; // 0x38(0x10)
	enum class EPTUITheme UITheme; // 0x48(0x04)
	bool bUpdateAllPrefabActorsWhenOpenMap; // 0x4c(0x01)
	bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap; // 0x4d(0x01)
	bool bUpdateAllPrefabActorsWhenApply; // 0x4e(0x01)
	bool bApplyToNestedPrefab; // 0x4f(0x01)
	bool bEnableApplyFromDisconnectedPrefabActor; // 0x50(0x01)
	bool bAutoAddRemoveVariantActorPrefix; // 0x51(0x01)
	struct FString VariantActorPrefix; // 0x58(0x10)
	bool bEnablePrefabComponentVisualizer; // 0x68(0x01)
	enum class EPrefabVisualizerType PrefabComponentVisualizerType; // 0x69(0x01)
	bool bDisplayPrefabComponentVisualizerEvenNotSelected; // 0x6a(0x01)
	struct FColor PrefabViewVisualizerColor; // 0x6c(0x04)
	struct FColor TargetActorColor; // 0x70(0x04)
	struct FColor UnLockedConnectedColor; // 0x74(0x04)
	struct FColor LockedConnectedColor; // 0x78(0x04)
	struct FColor UnLockedDisConnectedColor; // 0x7c(0x04)
	struct FColor LockedDisConnectedColor; // 0x80(0x04)
	struct FColor UnLockedNoPrefabAssignedColor; // 0x84(0x04)
	struct FColor LockedNoPrefabAssignedColor; // 0x88(0x04)
	struct FSoftObjectPath PrefabMaterialPath; // 0x90(0x20)
	bool bShadedPrefabViewVisualizer; // 0xe0(0x01)
	bool bLockPrefabSelectionByDefault; // 0xe1(0x01)
	bool bDisableLockPrefabSelectionFeature; // 0xe2(0x01)
	bool bSupportGroupWhenPasting; // 0xe3(0x01)
	bool bForceApplyPerInstanceVertexColor; // 0xe4(0x01)
	bool bHideChildActorsInPIEIfHiddenInEditor; // 0xe5(0x01)
	bool bCanToggleChildActorVisibilityInPIE; // 0xe6(0x01)
	bool bIgnoreLayersInPrefab; // 0xe8(0x01)
	struct TArray<struct AActor*> ChangeComponentActor; // 0xf0(0x10)
	struct AActor* DefaultActorClass; // 0x100(0x08)
	bool bEnabledAutoThumbnail; // 0x108(0x01)
	bool bAutoOpenBlueprintEditor; // 0x109(0x01)
	struct AActor* InteriorActorClass; // 0x110(0x08)
	struct AActor* ExteriorActorClass; // 0x118(0x08)
	struct AActor* InteriorShowActorClass; // 0x120(0x08)
	struct AActor* HouseActorClass; // 0x128(0x08)
	bool bSupportGenerateBlueprint; // 0x130(0x01)
	bool bHarvestComponentsWhenGeneratingBlueprint; // 0x131(0x01)
	bool bUseActorNameAsVariableNameWhenGeneratingBlueprint; // 0x132(0x01)
	bool bForceMobilityToMovableWhenGeneratingBlueprint; // 0x133(0x01)
	struct TArray<struct AActor*> IgnoreActorClassesWhenGeneratingBlueprint; // 0x138(0x10)
	struct TArray<struct FName> IgnoreActorTagsWhenGeneratingBlueprint; // 0x148(0x10)
	bool bFlashPrefabWindowForTargetPrefabActor; // 0x158(0x01)
	bool bEnablePrefabTextEditor; // 0x159(0x01)
	bool bDebugMode; // 0x15a(0x01)
	bool bDisableThumbnailRender; // 0x15b(0x01)
	bool bShowPrefabInstanceTagInPrefabToolWindow; // 0x15c(0x01)
	char pad_2CFF6A10[0x50]; // 0x2cff6a10(0x50)
};

