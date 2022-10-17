// Class Niagara.NiagaraDataInterface
// Size: 0x2cff6a38 (Inherited: 0x2cff6a30)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	char pad_2CFF6A30[0x8]; // 0x2cff6a30(0x08)
};

// Class Niagara.MovieSceneNiagaraTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a70)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; // 0x70(0x30)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6aa0)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6aa0)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6aa0)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6aa0)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0x2cff6af8 (Inherited: 0x2cff6ae8)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4(0x01)
	char pad_2CFF6AF5[0x3]; // 0x2cff6af5(0x03)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0x2cff6aa8 (Inherited: 0x2cff6aa0)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; // 0xa0(0x04)
	char pad_2CFF6AA4[0x4]; // 0x2cff6aa4(0x04)
};

// Class Niagara.NiagaraActor
// Size: 0x2cff6b18 (Inherited: 0x2cff6b08)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x308(0x08)
	char bDestroyOnSystemFinish : 1; // 0x310(0x01)
	char pad_2CFF6B10_1 : 7; // 0x2cff6b10(0x01)
	char pad_2CFF6B11[0x7]; // 0x2cff6b11(0x07)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x17396c0
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished // (Final|Native|Private) // @ game+0x1739250
};

// Class Niagara.NiagaraComponent
// Size: 0x2cff6a70 (Inherited: 0x2cff6ac0)
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; // 0x4c0(0x08)
	enum class ENiagaraTickBehavior TickBehavior; // 0x4c8(0x01)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x4d0(0x108)
	char bForceSolo : 1; // 0x5d8(0x01)
	char bAutoDestroy : 1; // 0x604(0x01)
	char bRenderingEnabled : 1; // 0x604(0x01)
	char bAutoManageAttachment : 1; // 0x604(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x604(0x01)
	float MaxTimeBeforeForceUpdateTransform; // 0x608(0x04)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x610(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x620(0x08)
	struct FName AutoAttachSocketName; // 0x628(0x0c)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x634(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x635(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x636(0x01)

	void SetVariableVec4(struct FName InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x173ab30
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x173aa40
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x173a960
	void SetVariableQuat(struct FName InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x173a870
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0x173a320
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x173a790
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x173a6a0
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0x173a5c0
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x173a4e0
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0x173a400
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0x173a320
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x173a2a0
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x173a210
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x173a140
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x173a0b0
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1739fb0
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1739ec0
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1739de0
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1739cf0
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0x1739860
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor& InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1739c00
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0x1739b20
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x1739a30
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0x1739940
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1739860
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime // (Final|Native|Public|BlueprintCallable) // @ game+0x17397e0
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo // (Final|Native|Public|BlueprintCallable) // @ game+0x1739750
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0x1739640
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking // (Final|Native|Public|BlueprintCallable) // @ game+0x17395b0
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy // (Final|Native|Public|BlueprintCallable) // @ game+0x1739520
	void SetAsset(struct UNiagaraSystem* InAsset); // Function Niagara.NiagaraComponent.SetAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x17394a0
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability // (Final|Native|Public|BlueprintCallable) // @ game+0x1739410
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode // (Final|Native|Public|BlueprintCallable) // @ game+0x1739390
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0x1739310
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x17392f0
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x17392d0
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1739220
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17391f0
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17391d0
	int32_t GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x17391b0
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x1738f10
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x1739060
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x1738e20
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1738df0
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1738dc0
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1738d90
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface // (Final|Native|Public|BlueprintCallable) // @ game+0x1738ce0
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1738cc0
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1738c90
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime // (Final|Native|Public|BlueprintCallable) // @ game+0x1738bd0
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0x1738b00
};

// Class Niagara.NiagaraComponentPool
// Size: 0x2cff6a88 (Inherited: 0x2cff6930)
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x30(0x50)
	char pad_2CFF6980[0x108]; // 0x2cff6980(0x108)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x2cff6a40 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
	int32_t Resolution; // 0x40(0x04)
	float ScopeInMilliseconds; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x2cff6a50 (Inherited: 0x2cff6a40)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40(0x04)
	float MinimumFrequency; // 0x44(0x04)
	float MaximumFrequency; // 0x48(0x04)
	float NoiseFloorDb; // 0x4c(0x04)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x2cff6a40 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38(0x04)
	char pad_2CFF6A3C[0x4]; // 0x2cff6a3c(0x04)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	char pad_2CFF6A38[0x10]; // 0x2cff6a38(0x10)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x2cff6a60 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; // 0x38(0x10)
	float LUTMinTime; // 0x48(0x04)
	float LUTMaxTime; // 0x4c(0x04)
	float LUTInvTimeRange; // 0x50(0x04)
	float LUTNumSamplesMinusOne; // 0x54(0x04)
	char bUseLUT : 1; // 0x58(0x01)
	char pad_2CFF6A58_1 : 7; // 0x2cff6a58(0x01)
	char pad_2CFF6A59[0x7]; // 0x2cff6a59(0x07)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; // 0x60(0x80)
	struct FRichCurve GreenCurve; // 0xe0(0x80)
	struct FRichCurve BlueCurve; // 0x160(0x80)
	struct FRichCurve AlphaCurve; // 0x1e0(0x80)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38(0x04)
	char pad_2CFF6A3C[0xc]; // 0x2cff6a3c(0x0c)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a60)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; // 0x60(0x80)
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1742250
};

// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x2cff6a68 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38(0x30)
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	struct TSet<int32_t> OutputShaderStages; // 0x38(0x50)
	struct TSet<int32_t> IterationShaderStages; // 0x88(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0x2cff6af8 (Inherited: 0x2cff6ad8)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd8(0x04)
	int32_t NumCellsY; // 0xdc(0x04)
	int32_t NumCellsMaxAxis; // 0xe0(0x04)
	int32_t NumAttributes; // 0xe4(0x04)
	bool SetGridFromMaxAxis; // 0xe8(0x01)
	struct FVector2D WorldBBoxSize; // 0xec(0x08)
	char pad_2CFF6AF1[0x7]; // 0x2cff6af1(0x07)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x2cff6a48 (Inherited: 0x2cff6af8)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1742130
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1742010
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D // (Native|Public|BlueprintCallable) // @ game+0x1741f00
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1741d90
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x2cff6af8 (Inherited: 0x2cff6ad8)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumVoxels; // 0xd8(0x0c)
	float VoxelSize; // 0xe4(0x04)
	bool SetGridFromVoxelSize; // 0xe8(0x01)
	struct FVector WorldBBoxSize; // 0xec(0x0c)
	char pad_2CFF6AF5[0x3]; // 0x2cff6af5(0x03)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x2cff6b00 (Inherited: 0x2cff6af8)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerVoxel; // 0xf8(0x04)
	char pad_2CFF6AFC[0x4]; // 0x2cff6afc(0x04)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterface {
	struct FString EmitterName; // 0x38(0x10)
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	struct AActor* Source; // 0x38(0x08)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x40(0x30)
	struct USkeletalMeshComponent* SourceComponent; // 0x70(0x08)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x78(0x01)
	struct TArray<struct FName> SamplingRegions; // 0x80(0x10)
	int32_t WholeMeshLOD; // 0x90(0x04)
	struct TArray<struct FName> FilteredBones; // 0x98(0x10)
	struct TArray<struct FName> FilteredSockets; // 0xa8(0x10)
	struct FName ExcludeBoneName; // 0xb8(0x0c)
	char bExcludeBone : 1; // 0xc4(0x01)
	char pad_2CFF6AB9_1 : 7; // 0x2cff6ab9(0x01)
	char pad_2CFF6ABA[0x16]; // 0x2cff6aba(0x16)
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x2cff6a40 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x2cff6a68 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	struct UStaticMesh* DefaultMesh; // 0x38(0x08)
	struct AActor* Source; // 0x40(0x08)
	struct UStaticMeshComponent* SourceComponent; // 0x48(0x08)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x50(0x10)
	char pad_2CFF6A60[0x8]; // 0x2cff6a60(0x08)
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x2cff6a40 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x60(0x80)
	struct FRichCurve YCurve; // 0xe0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x60(0x80)
	struct FRichCurve YCurve; // 0xe0(0x80)
	struct FRichCurve ZCurve; // 0x160(0x80)
	struct FRichCurve WCurve; // 0x1e0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a60)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x60(0x80)
	struct FRichCurve YCurve; // 0xe0(0x80)
	struct FRichCurve ZCurve; // 0x160(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; // 0x38(0x08)
	bool bTileX; // 0x40(0x01)
	bool bTileY; // 0x41(0x01)
	bool bTileZ; // 0x42(0x01)
	char pad_2CFF6A43[0x5]; // 0x2cff6a43(0x05)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x2cff6a40 (Inherited: 0x2cff6a38)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UVolumeTexture* Texture; // 0x38(0x08)
};

// Class Niagara.NiagaraEditorDataBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UNiagaraEditorDataBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class Niagara.NiagaraEffectType
// Size: 0x2cff6b08 (Inherited: 0x2cff6930)
struct UNiagaraEffectType : UObject {
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x30(0x04)
	enum class ENiagaraCullReaction CullReaction; // 0x34(0x04)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58(0x10)
	char pad_2CFF6968[0x1a0]; // 0x2cff6968(0x1a0)
};

// Class Niagara.NiagaraEmitter
// Size: 0x2cff6ab8 (Inherited: 0x2cff6930)
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x30(0x01)
	bool bDeterminism; // 0x31(0x01)
	int32_t RandomSeed; // 0x34(0x04)
	enum class EParticleAllocationMode AllocationMode; // 0x38(0x01)
	int32_t PreAllocationCount; // 0x3c(0x04)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x40(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x68(0x28)
	struct FNiagaraEmitterScriptProperties EmitterSpawnScriptProps; // 0x90(0x28)
	struct FNiagaraEmitterScriptProperties EmitterUpdateScriptProps; // 0xb8(0x28)
	enum class ENiagaraSimTarget SimTarget; // 0xe0(0x01)
	struct FBox FixedBounds; // 0xe4(0x1c)
	int32_t MinDetailLevel; // 0x100(0x04)
	int32_t MaxDetailLevel; // 0x104(0x04)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0x108(0x14)
	struct FNiagaraPlatformSet Platforms; // 0x120(0x20)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0x140(0x10)
	char bInterpolatedSpawning : 1; // 0x150(0x01)
	char bFixedBounds : 1; // 0x150(0x01)
	char bUseMinDetailLevel : 1; // 0x150(0x01)
	char bUseMaxDetailLevel : 1; // 0x150(0x01)
	char bOverrideGlobalSpawnCountScale : 1; // 0x150(0x01)
	char bRequiresPersistentIDs : 1; // 0x150(0x01)
	float MaxDeltaTimePerTick; // 0x154(0x04)
	uint32_t DefaultShaderStageIndex; // 0x158(0x04)
	uint32_t MaxUpdateIterations; // 0x15c(0x04)
	struct TSet<uint32_t> SpawnStages; // 0x160(0x50)
	char bSimulationStagesEnabled : 1; // 0x1b0(0x01)
	char bDeprecatedShaderStagesEnabled : 1; // 0x1b0(0x01)
	char pad_2CFF6AA1_0 : 2; // 0x2cff6aa1(0x01)
	char bLimitDeltaTime : 1; // 0x1b0(0x01)
	struct FString UniqueEmitterName; // 0x1b8(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x1c8(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x1d8(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x1e8(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x1f8(0x08)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x200(0x10)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UNiagaraEventReceiverEmitterAction : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x2cff6a38 (Inherited: 0x2cff6a30)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x30(0x04)
	char pad_2CFF6A34[0x4]; // 0x2cff6a34(0x04)
};

// Class Niagara.NiagaraFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1746c80
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x17469d0
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17468c0
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x17464e0
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1745f30
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1745e20
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1745d10
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1745950
};

// Class Niagara.NiagaraRendererProperties
// Size: 0x2cff6a58 (Inherited: 0x2cffdc30)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	int32_t SortOrderHint; // 0x30(0x04)
	bool bIsEnabled; // 0x34(0x01)
	bool bMotionBlurEnabled; // 0x35(0x01)
};

// Class Niagara.NiagaraLightRendererProperties
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a58)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x58(0x01)
	char bAffectsTranslucency : 1; // 0x58(0x01)
	char bOverrideRenderingEnabled : 1; // 0x58(0x01)
	float RadiusScale; // 0x5c(0x04)
	struct FVector ColorAdd; // 0x60(0x0c)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x70(0x90)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0x100(0x90)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x190(0x90)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x220(0x90)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x2b0(0x90)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x340(0x90)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x2cff6a80 (Inherited: 0x2cff6a58)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct UStaticMesh* ParticleMesh; // 0x58(0x08)
	enum class ENiagaraSortMode SortMode; // 0x60(0x01)
	char bOverrideMaterials : 1; // 0x64(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x64(0x01)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x68(0x10)
	struct FVector2D SubImageSize; // 0x78(0x08)
	char bSubImageBlend : 1; // 0x80(0x01)
	enum class ENiagaraMeshFacingMode FacingMode; // 0x84(0x01)
	char bLockedAxisEnable : 1; // 0x88(0x01)
	struct FVector LockedAxis; // 0x8c(0x0c)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0x98(0x01)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xa0(0x90)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x130(0x90)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1c0(0x90)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x250(0x90)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x2e0(0x90)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x370(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x400(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x490(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x520(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5b0(0x90)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x640(0x90)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x6d0(0x90)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x760(0x90)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x7f0(0x90)
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0x2cff6b00 (Inherited: 0x2cff6930)
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; // 0x30(0x08)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x38(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x48(0xb8)
	char pad_2CFF6A00[0x100]; // 0x2cff6a00(0x100)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x17467d0
	void SetVector4Parameter(struct FString InVariableName, struct FVector4& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17466d0
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x17465f0
	void SetQuatParameter(struct FString InVariableName, struct FQuat& InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x17463f0
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1746310
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1746220
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1746130
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1746040
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1745c50
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1745b90
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1745ad0
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1745a10
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x17458a0
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x17457f0
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1745730
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x1745680
};

// Class Niagara.NiagaraParameterCollection
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; // 0x30(0x0c)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x40(0x10)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x50(0x08)
	struct FGuid CompileId; // 0x58(0x10)
	char pad_2CFF6964[0x104]; // 0x2cff6964(0x104)
};

// Class Niagara.NiagaraPrecompileContainer
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; // 0x30(0x10)
	struct UNiagaraSystem* System; // 0x40(0x08)
	char pad_2CFF6948[0x100]; // 0x2cff6948(0x100)
};

// Class Niagara.NiagaraPreviewBase
// Size: 0x2cff6d08 (Inherited: 0x2cff6b08)
struct ANiagaraPreviewBase : AActor {
	char pad_2CFF6B08[0x200]; // 0x2cff6b08(0x200)

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetLabelText(struct FText& InXAxisText, struct FText& InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

// Class Niagara.NiagaraPreviewAxis
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UNiagaraPreviewAxis : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num // (Native|Event|Public|BlueprintEvent) // @ game+0x174cb80
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x174c930
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x2cff6a40 (Inherited: 0x2cff6a30)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; // 0x30(0x0c)
	int32_t Count; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x2cff6a48 (Inherited: 0x2cff6a40)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x40(0x04)
	int32_t MAX; // 0x44(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x2cff6a48 (Inherited: 0x2cff6a40)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x40(0x04)
	float MAX; // 0x44(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x2cff6a50 (Inherited: 0x2cff6a40)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D Min; // 0x40(0x08)
	struct FVector2D MAX; // 0x48(0x08)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x2cff6a58 (Inherited: 0x2cff6a40)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector Min; // 0x40(0x0c)
	struct FVector MAX; // 0x4c(0x0c)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x2cff6a60 (Inherited: 0x2cff6a40)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector4 Min; // 0x40(0x10)
	struct FVector4 MAX; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x2cff6a60 (Inherited: 0x2cff6a40)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor Min; // 0x40(0x10)
	struct FLinearColor MAX; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size: 0x2cff6a58 (Inherited: 0x2cff6b08)
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; // 0x308(0x08)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x310(0x01)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x318(0x08)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x320(0x08)
	struct ANiagaraPreviewBase* PreviewClass; // 0x328(0x08)
	float SpacingX; // 0x330(0x04)
	float SpacingY; // 0x334(0x04)
	int32_t NumX; // 0x338(0x04)
	int32_t NumY; // 0x33c(0x04)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x340(0x10)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x174cbd0
	void GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x174cad0
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0x174cab0
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0x174c8a0
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a58)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x58(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x60(0x30)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0x90(0x01)
	float UV0TilingDistance; // 0x94(0x04)
	struct FVector2D UV0Scale; // 0x98(0x08)
	struct FVector2D UV0Offset; // 0xa0(0x08)
	enum class ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode; // 0xa8(0x01)
	float UV1TilingDistance; // 0xac(0x04)
	struct FVector2D UV1Scale; // 0xb0(0x08)
	struct FVector2D UV1Offset; // 0xb8(0x08)
	enum class ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode; // 0xc0(0x01)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0xc1(0x01)
	float CurveTension; // 0xc4(0x04)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0xc8(0x01)
	int32_t TessellationFactor; // 0xcc(0x04)
	bool bUseConstantFactor; // 0xd0(0x01)
	float TessellationAngle; // 0xd4(0x04)
	bool bScreenSpaceTessellation; // 0xd8(0x01)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xe0(0x90)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x170(0x90)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x200(0x90)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x290(0x90)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x320(0x90)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x3b0(0x90)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x440(0x90)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x4d0(0x90)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x560(0x90)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x5f0(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x680(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x710(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x7a0(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x830(0x90)
};

// Class Niagara.NiagaraScript
// Size: 0x2cff6a28 (Inherited: 0x2cff6930)
struct UNiagaraScript : UObject {
	enum class ENiagaraScriptUsage Usage; // 0x30(0x01)
	int32_t UsageIndex; // 0x34(0x04)
	struct FGuid UsageId; // 0x38(0x10)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x48(0xb8)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0x100(0xd8)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x1d8(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x1e8(0x48)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x3e0(0x128)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x508(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x518(0x10)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete // (Final|Native|Public) // @ game+0x174cbb0
};

// Class Niagara.NiagaraScriptSourceBase
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UNiagaraScriptSourceBase : UObject {
	char pad_2CFF6930[0x120]; // 0x2cff6930(0x120)
};

// Class Niagara.NiagaraSettings
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a48)
struct UNiagaraSettings : UDeveloperSettings {
	struct TArray<struct FSoftObjectPath> AdditionalParameterTypes; // 0x48(0x10)
	struct TArray<struct FSoftObjectPath> AdditionalPayloadTypes; // 0x58(0x10)
	struct TArray<struct FSoftObjectPath> AdditionalParameterEnums; // 0x68(0x10)
	struct FSoftObjectPath DefaultEffectType; // 0x78(0x20)
	struct TArray<struct FText> QualityLevels; // 0x98(0x10)
	struct UNiagaraEffectType* DefaultEffectTypePtr; // 0xa8(0x08)
};

// Class Niagara.NiagaraSimulationStageBase
// Size: 0x2cff6a48 (Inherited: 0x2cffdc30)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; // 0x30(0x08)
	struct FName SimulationStageName; // 0x38(0x0c)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x2cff6a88 (Inherited: 0x2cff6a48)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	enum class ENiagaraIterationSource IterationSource; // 0x48(0x01)
	int32_t Iterations; // 0x4c(0x04)
	char bSpawnOnly : 1; // 0x50(0x01)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x58(0x30)
	char pad_2CFF6A7D_1 : 7; // 0x2cff6a7d(0x01)
	char pad_2CFF6A7E[0xa]; // 0x2cff6a7e(0x0a)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x2cff6a58 (Inherited: 0x2cff6a58)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x58(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x60(0x30)
	enum class ENiagaraSpriteAlignment Alignment; // 0x90(0x01)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0x91(0x01)
	struct FVector2D PivotInUVSpace; // 0x94(0x08)
	enum class ENiagaraSortMode SortMode; // 0x9c(0x01)
	struct FVector2D SubImageSize; // 0xa0(0x08)
	char bSubImageBlend : 1; // 0xa8(0x01)
	char bRemoveHMDRollInVR : 1; // 0xa8(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0xa8(0x01)
	float MinFacingCameraBlendDistance; // 0xac(0x04)
	float MaxFacingCameraBlendDistance; // 0xb0(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xb8(0x90)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x148(0x90)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1d8(0x90)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x268(0x90)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x2f8(0x90)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x388(0x90)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x418(0x90)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x4a8(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x538(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x5c8(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x658(0x90)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x6e8(0x90)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x778(0x90)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x808(0x90)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x898(0x90)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x928(0x90)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x9b8(0x90)
};

// Class Niagara.NiagaraSystem
// Size: 0x2cff6a80 (Inherited: 0x2cff6a38)
struct UNiagaraSystem : UFXSystemAsset {
	bool bDumpDebugSystemInfo; // 0x39(0x01)
	bool bDumpDebugEmitterInfo; // 0x3a(0x01)
	char bFixedBounds : 1; // 0x3c(0x01)
	struct UNiagaraEffectType* EffectType; // 0x40(0x08)
	bool bOverrideScalabilitySettings; // 0x48(0x01)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x50(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x60(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x70(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x80(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x90(0x08)
	struct UNiagaraScript* SystemUpdateScript; // 0x98(0x08)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xb0(0x258)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x308(0x108)
	struct FBox FixedBounds; // 0x410(0x1c)
	bool bAutoDeactivate; // 0x42c(0x01)
	float WarmupTime; // 0x430(0x04)
	int32_t WarmupTickCount; // 0x434(0x04)
	float WarmupTickDelta; // 0x438(0x04)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x43c(0x01)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x440(0x10)
};

