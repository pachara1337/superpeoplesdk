// Class AssetTags.AssetTagsSubsystem
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UAssetTagsSubsystem : UEngineSubsystem {

	struct TArray<struct FName> GetCollectionsContainingAssetPtr(struct UObject* AssetPtr); // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr // (Final|Native|Public|BlueprintCallable) // @ game+0x1b028b0
	struct TArray<struct FName> GetCollectionsContainingAssetData(struct FAssetData& AssetData); // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b02750
	struct TArray<struct FName> GetCollectionsContainingAsset(struct FName AssetPathName); // Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02660
	struct TArray<struct FName> GetCollections(); // Function AssetTags.AssetTagsSubsystem.GetCollections // (Final|Native|Public|BlueprintCallable) // @ game+0x1b025e0
	struct TArray<struct FAssetData> GetAssetsInCollection(struct FName Name); // Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02440
	bool CollectionExists(struct FName Name); // Function AssetTags.AssetTagsSubsystem.CollectionExists // (Final|Native|Public|BlueprintCallable) // @ game+0x1b02390
};

