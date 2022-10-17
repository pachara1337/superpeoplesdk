// Class CustomizableObject.CustomizableInstanceLODManagementBase
// Size: 0x2cff6930 (Inherited: 0x2cff6930)
struct UCustomizableInstanceLODManagementBase : UObject {
};

// Class CustomizableObject.CustomizableInstanceLODManagement
// Size: 0x2cff6a90 (Inherited: 0x2cff6930)
struct UCustomizableInstanceLODManagement : UCustomizableInstanceLODManagementBase {
	char pad_2CFF6930[0x160]; // 0x2cff6930(0x160)
};

// Class CustomizableObject.CustomizableInstancePrivateData
// Size: 0x2cff6af8 (Inherited: 0x2cff6930)
struct UCustomizableInstancePrivateData : UObject {
	struct TArray<struct FGeneratedMaterial> GeneratedMaterials; // 0x38(0x10)
	struct TArray<struct FGeneratedMesh> GeneratedMeshes; // 0x48(0x10)
	struct TArray<struct FGeneratedTexture> GeneratedTextures; // 0x58(0x10)
	struct TArray<struct FParameterDecorations> ParameterDecorations; // 0xf0(0x10)
	struct TMap<struct FString, struct TWeakObjectPtr<struct UTexture2D>> TextureReuseCache; // 0x110(0x50)
	struct TArray<struct UMaterialInterface*> ReferencedMaterials; // 0x328(0x10)
	struct TArray<struct UPhysicsAsset*> PhysicsAssetsToMerge; // 0x3d8(0x10)
	char pad_2CFF69E0[0x118]; // 0x2cff69e0(0x118)
};

// Class CustomizableObject.MutableMaskOutCache
// Size: 0x2cff6ad0 (Inherited: 0x2cff6930)
struct UMutableMaskOutCache : UObject {
	struct TMap<struct FString, struct FString> Materials; // 0x30(0x50)
	struct TMap<struct FString, struct FMaskOutTexture> Textures; // 0x80(0x50)
	char pad_2CFF69D0[0x100]; // 0x2cff69d0(0x100)
};

// Class CustomizableObject.CustomizableObject
// Size: 0x2cff6af8 (Inherited: 0x2cff6930)
struct UCustomizableObject : UObject {
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x30(0x08)
	struct UStaticMesh* ReferenceStaticMesh; // 0x38(0x08)
	enum class ECustomizableObjectRelevancy Relevancy; // 0x40(0x01)
	bool bDisableTextureLayoutManagement; // 0x41(0x01)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> ReferencedMaterials; // 0x48(0x10)
	struct TArray<struct FMutableModelImageProperties> ImageProperties; // 0x58(0x10)
	struct TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap; // 0x68(0x50)
	struct TArray<struct UMorphTarget*> ContributingMorphTargets; // 0xb8(0x10)
	struct TArray<struct FMorphTargetVertexIndex> MorphTargetReconstructionInfo; // 0xc8(0x10)
	struct TMap<struct FName, struct UClothSharedConfigCommon*> ClothSharedConfigs; // 0xd8(0x50)
	struct TArray<struct UClothingAssetCommon*> ContributingClothingAssets; // 0x128(0x10)
	struct TArray<struct FCustomizableObjectMeshToMeshVertData> ClothMeshToMeshVertData; // 0x138(0x10)
	struct FGuid VersionId; // 0x148(0x10)
	struct TArray<struct FMutableModelParameterProperties> ParameterProperties; // 0x158(0x10)
	struct TMap<struct FString, struct FParameterUIData> ParameterUIDataMap; // 0x1b8(0x50)
	struct TMap<struct FString, struct FParameterUIData> StateUIDataMap; // 0x208(0x50)
	struct TMap<struct FString, struct TSoftObjectPtr<UPhysicsAsset>> PhysicsAssetsMap; // 0x258(0x50)
	struct TSoftObjectPtr<UMutableMaskOutCache> MaskOutCache; // 0x2a8(0x30)
	bool bIsChildObject; // 0x2d8(0x01)
	struct UMutableMaskOutCache* MaskOutCache_HardRef; // 0x2e0(0x08)

	void UnloadMaskOutCache(); // Function CustomizableObject.CustomizableObject.UnloadMaskOutCache // (Final|Native|Public|BlueprintCallable) // @ game+0x125bd80
	void LoadMaskOutCache(); // Function CustomizableObject.CustomizableObject.LoadMaskOutCache // (Final|Native|Public|BlueprintCallable) // @ game+0x125b590
	struct FParameterUIData GetStateUIMetadataFromIndex(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125b300
	struct FParameterUIData GetStateUIMetadata(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateUIMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125b1c0
	struct FString GetStateParameterName(struct FString StateName, int32_t ParameterIndex); // Function CustomizableObject.CustomizableObject.GetStateParameterName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125b090
	int32_t GetStateParameterCount(struct FString StateName); // Function CustomizableObject.CustomizableObject.GetStateParameterCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125afe0
	struct FString GetStateName(int32_t StateIndex); // Function CustomizableObject.CustomizableObject.GetStateName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125af00
	int32_t GetStateCount(); // Function CustomizableObject.CustomizableObject.GetStateCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125aed0
	struct FParameterUIData GetParameterUIMetadataFromIndex(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a630
	struct FParameterUIData GetParameterUIMetadata(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterUIMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a4f0
	enum class EMutableParameterType GetParameterTypeByName(struct FString Name); // Function CustomizableObject.CustomizableObject.GetParameterTypeByName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a440
	enum class EMutableParameterType GetParameterType(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a3b0
	struct FString GetParameterName(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetParameterName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a310
	int32_t GetParameterDescriptionCount(struct FString ParamName); // Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a260
	int32_t GetParameterCount(); // Function CustomizableObject.CustomizableObject.GetParameterCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a140
	int32_t GetIntParameterNumOptions(int32_t ParamIndex); // Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259fb0
	struct FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K); // Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259ee0
	int32_t FindParameter(struct FString Name); // Function CustomizableObject.CustomizableObject.FindParameter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12599f0
	struct UCustomizableObjectInstance* CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x12597b0
};

// Class CustomizableObject.CustomizableObjectInstance
// Size: 0x2cff6ae8 (Inherited: 0x2cff6930)
struct UCustomizableObjectInstance : UObject {
	struct UCustomizableObject* CustomizableObject; // 0x30(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x38(0x08)
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x40(0x10)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x50(0x10)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x60(0x10)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x70(0x10)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x80(0x10)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x90(0x10)
	bool bBuildParameterDecorations; // 0xa0(0x01)
	struct FMulticastInlineDelegate UpdatedDelegate; // 0xa8(0x10)
	struct FString SkeletalMeshStatus; // 0x118(0x10)
	struct TArray<struct FString> MaterialTags; // 0x148(0x10)
	struct UCustomizableInstancePrivateData* PrivateData; // 0x1d8(0x08)
	char pad_2CFF69D9[0x10f]; // 0x2cff69d9(0x10f)

	void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority); // Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x125bda0
	void SetVectorParameterSelectedOption(struct FString VectorParamName, struct FLinearColor VectorValue); // Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x125b700
	void SetRandomValues(); // Function CustomizableObject.CustomizableObjectInstance.SetRandomValues // (Final|Native|Public|BlueprintCallable) // @ game+0x125bd60
	void SetProjectorValue(struct FString ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float Angle, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x125bb00
	void SetIntParameterSelectedOption(struct FString ParamName, struct FString SelectedOptionName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x125b9c0
	void SetFloatParameterSelectedOption(struct FString FloatParamName, float FloatValue, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x125b890
	void SetCurrentState(struct FString StateName); // Function CustomizableObject.CustomizableObjectInstance.SetCurrentState // (Final|Native|Public|BlueprintCallable) // @ game+0x125b7f0
	void SetColorParameterSelectedOption(struct FString ColorParamName, struct FLinearColor ColorValue); // Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x125b700
	void SetBoolParameterSelectedOption(struct FString BoolParamName, bool BoolValue); // Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x125b610
	void SetAllParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllParameterToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x125b5f0
	void SetAllIntParameterToDefault2(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault2 // (Final|Native|Public|BlueprintCallable) // @ game+0x125b5b0
	void SetAllIntParameterToDefault(); // Function CustomizableObject.CustomizableObjectInstance.SetAllIntParameterToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x125b5d0
	bool IsParamMultidimensional(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParamMultidimensional // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125b430
	bool IsParameterRelevant(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125b4e0
	void GetProjectorValue(struct FString ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float& Angle, enum class ECustomizableObjectProjectorType& Type, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x125ac00
	struct FVector GetProjectorUp(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x125ab40
	struct FVector GetProjectorScale(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x125aa80
	struct FVector GetProjectorPosition(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a9c0
	enum class ECustomizableObjectProjectorType GetProjectorParameterType(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a8d0
	struct FVector GetProjectorDirection(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a810
	float GetProjectorAngle(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.GetProjectorAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a760
	struct UTexture2D* GetParameterDescription(struct FString ParamName, int32_t DescIndex); // Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription // (Final|Native|Public|BlueprintCallable) // @ game+0x125a170
	struct FString GetIntParameterSelectedOption(struct FString ParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x125a040
	float GetFloatParameterSelectedOption(struct FString FloatParamName, int32_t RangeIndex); // Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259df0
	struct FString GetCurrentState(); // Function CustomizableObject.CustomizableObjectInstance.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259d70
	struct FLinearColor GetColorParameterSelectedOption(struct FString ColorParamName); // Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259cb0
	bool GetBoolParameterSelectedOption(struct FString BoolParamName); // Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259c00
	int32_t FindVectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259b50
	int32_t FindProjectorParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259aa0
	int32_t FindIntParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259940
	int32_t FindFloatParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1259890
	int32_t FindBoolParameterNameIndex(struct FString ParamName); // Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12597e0
	void Copy(struct UCustomizableObjectInstance* Target); // Function CustomizableObject.CustomizableObjectInstance.Copy // (Final|Native|Public|BlueprintCallable) // @ game+0x1259730
	struct UCustomizableObjectInstance* Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone // (Final|Native|Public|BlueprintCallable) // @ game+0x1259700
};

// Class CustomizableObject.CustomizableSystemImageProvider
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UCustomizableSystemImageProvider : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class CustomizableObject.CustomizableObjectImageProviderArray
// Size: 0x2cff6a60 (Inherited: 0x2cff6a30)
struct UCustomizableObjectImageProviderArray : UCustomizableSystemImageProvider {
	struct TArray<struct UTexture2D*> Textures; // 0x30(0x10)
	char pad_2CFF6A40[0x20]; // 0x2cff6a40(0x20)
};

// Class CustomizableObject.CustomizableObjectSystem
// Size: 0x2cff6a88 (Inherited: 0x2cff6930)
struct UCustomizableObjectSystem : UObject {
	struct TArray<struct FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh; // 0x30(0x10)
	struct UCustomizableObjectImageProviderArray* PreviewExternalImageProvider; // 0x50(0x08)
	struct TArray<struct UTexture2D*> ProtectedCachedTextures; // 0x158(0x10)
	struct UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement; // 0x178(0x08)
	struct UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement; // 0x180(0x08)
	char pad_2CFF6968[0x120]; // 0x2cff6968(0x120)

	void SetReleaseMutableTexturesImmediately(bool bReleaseTextures); // Function CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately // (Final|Native|Public|BlueprintCallable) // @ game+0x12605c0
	int32_t GetTotalInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1260490
	int32_t GetTextureMemoryUsed(); // Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1260460
	struct FString GetPluginVersion(); // Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12603e0
	int32_t GetNumPendingInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12603b0
	int32_t GetNumInstances(); // Function CustomizableObject.CustomizableObjectSystem.GetNumInstances // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1260380
	struct UCustomizableObjectSystem* GetInstance(); // Function CustomizableObject.CustomizableObjectSystem.GetInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1260350
	int32_t GetAverageBuildTime(); // Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1260320
	bool AreEnginePatchesPresent(); // Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1260270
};

// Class CustomizableObject.CustomizableSkeletalComponent
// Size: 0x2cff6a70 (Inherited: 0x2cff6a40)
struct UCustomizableSkeletalComponent : USceneComponent {
	float SkippedLastRenderTime; // 0x23c(0x04)
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x240(0x08)
	bool bDoNotUpdateLODDistance; // 0x248(0x01)
	char pad_2CFF6A4D[0x23]; // 0x2cff6a4d(0x23)

	void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate); // Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x1260650
	void SetMinMaxLODToLoad(int32_t NewMinLOD, int32_t NewMaxLOD, bool bLimitLODUpgrades); // Function CustomizableObject.CustomizableSkeletalComponent.SetMinMaxLODToLoad // (Final|Native|Public|BlueprintCallable) // @ game+0x12604c0
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
// Size: 0x2cff6a98 (Inherited: 0x2cff6a90)
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x390(0x08)
};

// Class CustomizableObject.InstanceUpdatedHelper
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UInstanceUpdatedHelper : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)

	void DelegatedCallback(struct UCustomizableObjectInstance* Instance); // Function CustomizableObject.InstanceUpdatedHelper.DelegatedCallback // (Final|Native|Public) // @ game+0x12602a0
};

