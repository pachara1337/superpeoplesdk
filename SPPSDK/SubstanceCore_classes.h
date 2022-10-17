// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x2cff6a80 (Inherited: 0x2cff6930)
struct USubstanceGraphInstance : UObject {
	struct FString PackageURL; // 0x40(0x10)
	struct USubstanceInstanceFactory* ParentFactory; // 0x50(0x08)
	struct TMap<uint32_t, struct UTexture2D*> ImageSources; // 0x58(0x50)
	struct UMaterial* CreatedMaterial; // 0xa8(0x08)
	struct UMaterialInstanceConstant* ConstantCreatedMaterial; // 0xb0(0x08)
	struct UMaterialInstanceDynamic* DynamicCreatedMaterial; // 0xb8(0x08)
	struct TMap<int32_t, struct FGuid> OutputTextureLinkData; // 0xc0(0x50)
	struct TMap<uint32_t, struct USubstanceOutputData*> OutputInstances; // 0x110(0x50)
	bool bIsFrozen; // 0x160(0x01)
	char pad_2CFF6A51[0x2f]; // 0x2cff6a51(0x2f)

	void SetInputString(struct FString Identifier, struct FString Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputString // (Final|Native|Public|BlueprintCallable) // @ game+0x12e6e50
	void SetInputInt(struct FString Identifier, struct TArray<int32_t>& InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12e6cf0
	bool SetInputImg(struct FString InputName, struct UObject* Value); // Function SubstanceCore.SubstanceGraphInstance.SetInputImg // (Final|Native|Public|BlueprintCallable) // @ game+0x12e6c00
	void SetInputFloat(struct FString Identifier, struct TArray<float>& InputValues); // Function SubstanceCore.SubstanceGraphInstance.SetInputFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12e6aa0
	void SetInputColor(struct FString Identifier, struct FLinearColor& Color); // Function SubstanceCore.SubstanceGraphInstance.SetInputColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x12e6950
	void SetInputBool(struct FString Identifier, bool Bool); // Function SubstanceCore.SubstanceGraphInstance.SetInputBool // (Final|Native|Public|BlueprintCallable) // @ game+0x12e6810
	struct FSubstanceIntInputDesc GetIntInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc // (Final|Native|Public|BlueprintCallable) // @ game+0x12e61c0
	struct FSubstanceInstanceDesc GetInstanceDesc(); // Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc // (Final|Native|Public|BlueprintCallable) // @ game+0x12e6090
	enum class ESubstanceInputType GetInputType(struct FString InputName); // Function SubstanceCore.SubstanceGraphInstance.GetInputType // (Final|Native|Public|BlueprintCallable) // @ game+0x12e5f90
	struct FString GetInputString(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputString // (Final|Native|Public|BlueprintCallable) // @ game+0x12e5e50
	struct TArray<struct FString> GetInputNames(); // Function SubstanceCore.SubstanceGraphInstance.GetInputNames // (Final|Native|Public|BlueprintCallable) // @ game+0x12e5d70
	struct TArray<int32_t> GetInputInt(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputInt // (Final|Native|Public|BlueprintCallable) // @ game+0x12e5c30
	struct TArray<float> GetInputFloat(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x12e5af0
	struct FLinearColor GetInputColor(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x12e59e0
	bool GetInputBool(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetInputBool // (Final|Native|Public|BlueprintCallable) // @ game+0x12e58e0
	struct FSubstanceFloatInputDesc GetFloatInputDesc(struct FString Identifier); // Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc // (Final|Native|Public|BlueprintCallable) // @ game+0x12e55e0
	struct UMaterialInstanceDynamic* GetDynamicMaterialInstance(struct FName Name, struct UMaterial* InParentMaterial); // Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x12e5420
};

// Class SubstanceCore.SubstanceInstanceFactory
// Size: 0x2cff6a90 (Inherited: 0x2cff6930)
struct USubstanceInstanceFactory : UObject {
	struct TArray<struct USubstanceGraphInstance*> mGraphInstances; // 0x30(0x10)
	struct FString RelativeSourceFilePath; // 0x58(0x10)
	struct FString AbsoluteSourceFilePath; // 0x68(0x10)
	struct FString SourceFileTimestamp; // 0x78(0x10)
	enum class ESubstanceGenerationMode GenerationMode; // 0x88(0x01)
	char pad_2CFF6971[0x11f]; // 0x2cff6971(0x11f)
};

// Class SubstanceCore.SubstanceOutputData
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct USubstanceOutputData : UObject {
	struct UObject* ConnectedObject; // 0x30(0x08)
	struct FMaterialParameterInfo ParamInfo; // 0x38(0x14)
	struct USubstanceGraphInstance* ParentInstance; // 0x50(0x08)
	struct FGuid CacheGuid; // 0x58(0x10)
	char pad_2CFF6964[0x104]; // 0x2cff6964(0x104)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x2cff6a78 (Inherited: 0x2cff6930)
struct USubstanceSettings : UObject {
	int32_t MemoryBudgetMb; // 0x30(0x04)
	int32_t CPUCores; // 0x34(0x04)
	int32_t AsyncLoadMipClip; // 0x38(0x04)
	int32_t MaxAsyncSubstancesRenderedPerFrame; // 0x3c(0x04)
	enum class ESubstanceEngineType SubstanceEngine; // 0x40(0x01)
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeX; // 0x41(0x01)
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeY; // 0x42(0x01)
	struct TSoftObjectPtr<UMaterialInterface> DefaultTemplateMaterial; // 0x48(0x30)
	char pad_2CFF6973[0x105]; // 0x2cff6973(0x105)
};

// Class SubstanceCore.SubstanceTexture2D
// Size: 0x2cff6a30 (Inherited: 0x2cff6ad8)
struct USubstanceTexture2D : UTexture2DDynamic {
	struct USubstanceGraphInstance* ParentInstance; // 0x108(0x08)
	enum class TextureAddress AddressX; // 0x110(0x01)
	enum class TextureAddress AddressY; // 0x111(0x01)
	bool bCooked; // 0x112(0x01)
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void SyncRendering(struct USubstanceGraphInstance* InstancesToRender); // Function SubstanceCore.SubstanceUtility.SyncRendering // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e6f90
	void SetGraphInstanceOutputSizeInt(struct USubstanceGraphInstance* GraphInstance, int32_t Width, int32_t Height); // Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e6720
	void SetGraphInstanceOutputSize(struct USubstanceGraphInstance* GraphInstance, enum class ESubstanceTextureSize Width, enum class ESubstanceTextureSize Height); // Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e6630
	void ResetInputParameters(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.ResetInputParameters // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e65c0
	struct TArray<struct UTexture2D*> GetSubstanceTextures(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.GetSubstanceTextures // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e6420
	struct TArray<struct USubstanceGraphInstance*> GetSubstances(struct UMaterialInterface* Material); // Function SubstanceCore.SubstanceUtility.GetSubstances // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e64f0
	float GetSubstanceLoadingProgress(); // Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e63f0
	struct FString GetGraphName(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.GetGraphName // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e5810
	struct FString GetFactoryName(struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.GetFactoryName // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e5510
	void EnableInstanceOutputs(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance, struct TArray<int32_t> OutputIndices); // Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e52d0
	struct USubstanceGraphInstance* DuplicateGraphInstance(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance); // Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e5210
	void DisableInstanceOutputs(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance, struct TArray<int32_t> OutputIndices); // Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e50c0
	struct USubstanceGraphInstance* CreateGraphInstance(struct UObject* WorldContextObject, struct USubstanceInstanceFactory* Factory, int32_t GraphDescIndex, struct UMaterial* ParentMaterial, struct FString InstanceName); // Function SubstanceCore.SubstanceUtility.CreateGraphInstance // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e4ef0
	struct USubstanceInstanceFactory* CreateAggregateSubstanceFactory(struct USubstanceInstanceFactory* OutputFactory, int32_t OutputFactoryGraphIndex, struct USubstanceInstanceFactory* InputFactory, int32_t InputFactoryGraphIndex, struct TArray<struct FSubstanceConnection>& Connections); // Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x12e4d20
	void CopyInputParameters(struct USubstanceGraphInstance* SourceGraphInstance, struct USubstanceGraphInstance* DestGraphInstance); // Function SubstanceCore.SubstanceUtility.CopyInputParameters // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e4c70
	void ClearCache(); // Function SubstanceCore.SubstanceUtility.ClearCache // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e4c50
	void AsyncRendering(struct USubstanceGraphInstance* InstancesToRender); // Function SubstanceCore.SubstanceUtility.AsyncRendering // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x12e4be0
};

