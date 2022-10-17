// ScriptStruct AssetRegistry.ARFilter
// Size: 0x2cff69e8 (Inherited: 0x00)
struct FARFilter {
	struct TArray<struct FName> PackageNames; // 0x00(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<struct FName> ObjectPaths; // 0x20(0x10)
	struct TArray<struct FName> ClassNames; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x90(0x50)
	bool bRecursivePaths; // 0xe0(0x01)
	bool bRecursiveClasses; // 0xe1(0x01)
	bool bIncludeOnlyOnDiskAssets; // 0xe2(0x01)
	char pad_E3[0x2cff6905]; // 0xe3(0x2cff6905)
};

// ScriptStruct AssetRegistry.AssetBundleData
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FAssetBundleData {
	struct TArray<struct FAssetBundleEntry> Bundles; // 0x00(0x10)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// Size: 0x2cff6938 (Inherited: 0x00)
struct FAssetBundleEntry {
	struct FPrimaryAssetId BundleScope; // 0x00(0x18)
	struct FName BundleName; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FSoftObjectPath> BundleAssets; // 0x28(0x10)
	char pad_38[0x2cff6900]; // 0x38(0x2cff6900)
};

// ScriptStruct AssetRegistry.AssetData
// Size: 0x2cffe968 (Inherited: 0x00)
struct FAssetData {
	struct FName ObjectPath; // 0x00(0x0c)
	struct FName PackageName; // 0x0c(0x0c)
	struct FName PackagePath; // 0x18(0x0c)
	struct FName AssetName; // 0x24(0x0c)
	struct FName AssetClass; // 0x30(0x0c)
	char pad_3C[0x2cffe92c]; // 0x3c(0x2cffe92c)
};

// ScriptStruct AssetRegistry.TagAndValue
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FTagAndValue {
	struct FName Tag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Value; // 0x10(0x10)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// Size: 0x2cff6d05 (Inherited: 0x00)
struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x00(0x01)
	bool bIncludeHardPackageReferences; // 0x01(0x01)
	bool bIncludeSearchableNames; // 0x02(0x01)
	bool bIncludeSoftManagementReferences; // 0x03(0x01)
	bool bIncludeHardManagementReferences; // 0x04(0x01)
	char pad_5[0x2cff6d00]; // 0x05(0x2cff6d00)
};

