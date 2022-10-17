// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8 {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// Size: 0x2cffe958 (Inherited: 0x2cffea20)
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID AttachBindingID; // 0x20(0x18)
	struct FName AttachSocketName; // 0x38(0x0c)
	struct FName AttachComponentName; // 0x44(0x0c)
	enum class EAttachmentRule AttachmentLocationRule; // 0x50(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x51(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x52(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x53(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x54(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x55(0x01)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0x2cff69e0 (Inherited: 0x2cffea20)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID PathBindingID; // 0x20(0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x38(0xa0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9(0x01)
	char bFollow : 1; // 0xdc(0x01)
	char bReverse : 1; // 0xdc(0x01)
	char bForceUpright : 1; // 0xdc(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x2cff6a04 (Inherited: 0x00)
struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x00(0x04)
	char pad_4[0x2cff6a00]; // 0x04(0x2cff6a00)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x2cff6948 (Inherited: 0x2cff8608)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	struct FFrameNumber Time; // 0x2c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x2cffe930 (Inherited: 0x2cff8608)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	struct FVector Scale; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char pad_2CFF8618[0x6318]; // 0x2cff8618(0x6318)
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x2cff6930 (Inherited: 0x2cff8608)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	struct FRotator Rotation; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x2cff6930 (Inherited: 0x2cff8608)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// Size: 0x2cff6c70 (Inherited: 0x2cffea20)
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x20(0x650)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// Size: 0x2d003050 (Inherited: 0x00)
struct FMovieScene3DTransformTemplateData {
	struct FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x00(0x1e0)
	struct FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1e0(0x1e0)
	struct FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3c0(0x1e0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x5a0(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0x640(0x01)
	char pad_641[0x3]; // 0x641(0x03)
	struct FMovieSceneTransformMask Mask; // 0x644(0x04)
	bool bUseQuaternionInterpolation; // 0x648(0x01)
	char pad_649[0x2d002a07]; // 0x649(0x2d002a07)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0x2cff69b8 (Inherited: 0x2cff6d08)
struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x08(0x10)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x48(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x2cffe930 (Inherited: 0x00)
struct FMovieSceneActorReferenceKey {
	struct FMovieSceneObjectBindingID Object; // 0x00(0x18)
	struct FName ComponentName; // 0x18(0x0c)
	struct FName SocketName; // 0x24(0x0c)
	char pad_30[0x2cffe900]; // 0x30(0x2cffe900)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0x2cff6d10 (Inherited: 0x2cffea20)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x38)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x58(0xb8)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x2cff6928 (Inherited: 0x2cffea20)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAudioSection* AudioSection; // 0x20(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FMovieSceneCameraAnimSectionData {
	struct UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float PlayScale; // 0x0c(0x04)
	float BlendInTime; // 0x10(0x04)
	float BlendOutTime; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char pad_19[0x2cff6a07]; // 0x19(0x2cff6a07)
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size: 0x2cffd020 (Inherited: 0x2cffea20)
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x2cff6948 (Inherited: 0x2cffd020)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x2cffea20 (Inherited: 0x00)
struct FMovieSceneCameraShakeSectionData {
	struct UCameraShake* ShakeClass; // 0x00(0x08)
	float PlayScale; // 0x08(0x04)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x10(0x0c)
	char pad_1C[0x2cffea04]; // 0x1c(0x2cffea04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x2cff6948 (Inherited: 0x2cffd020)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	struct FMovieSceneCameraAnimSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// Size: 0x2cff6980 (Inherited: 0x2cffea20)
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x20(0x18)
	struct FTransform CutTransform; // 0x40(0x30)
	bool bHasCutTransform; // 0x70(0x01)
	bool bIsFinalSection; // 0x71(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x2cff6938 (Inherited: 0x2cff8608)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	struct FLinearColor Color; // 0x08(0x10)
	struct FFrameNumber Time; // 0x18(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x2cff69e0 (Inherited: 0x2cffd358)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Curves[0x4]; // 0x58(0x280)
	enum class EMovieSceneBlendType BlendType; // 0x2d8(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x2cff6928 (Inherited: 0x00)
struct FMovieSceneEvent {
	struct FMovieSceneEventPtrs Ptrs; // 0x00(0x28)
	char pad_28[0x2cff6900]; // 0x28(0x2cff6900)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x2cff6928 (Inherited: 0x00)
struct FMovieSceneEventPtrs {
	struct UFunction* Function; // 0x00(0x08)
	struct TFieldPath<FProperty> BoundObjectProperty; // 0x08(0x20)
	char pad_28[0x2cff6900]; // 0x28(0x2cff6900)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x2cff6d10 (Inherited: 0x00)
struct FMovieSceneEventPayloadVariable {
	struct FString Value; // 0x00(0x10)
	char pad_10[0x2cff6d00]; // 0x10(0x2cff6d00)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0x2cffe988 (Inherited: 0x2cff6d08)
struct FMovieSceneEventChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x08(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x18(0x10)
	char pad_2CFF6D28[0x7c60]; // 0x2cff6d28(0x7c60)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x2cff6988 (Inherited: 0x2cff6d08)
struct FMovieSceneEventSectionData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x18(0x10)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x2cff6c40 (Inherited: 0x00)
struct FEventPayload {
	struct FName EventName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneEventParameters Parameters; // 0x10(0x30)
	char pad_40[0x2cff6c00]; // 0x40(0x2cff6c00)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x2cff6a30 (Inherited: 0x00)
struct FMovieSceneEventParameters {
	char pad_0[0x2cff6a30]; // 0x00(0x2cff6a30)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// Size: 0x2d003d38 (Inherited: 0x2cffea20)
struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x20(0x10)
	char bFireEventsWhenForwards : 1; // 0x30(0x01)
	char bFireEventsWhenBackwards : 1; // 0x30(0x01)
	char pad_2CFFEA30_2 : 6; // 0x2cffea30(0x01)
	char pad_2CFFEA31[0x5307]; // 0x2cffea31(0x5307)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// Size: 0x2cff6c60 (Inherited: 0x2d003d38)
struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	struct FMovieSceneEventPtrs EventToTrigger; // 0x38(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// Size: 0x2cffe958 (Inherited: 0x2d003d38)
struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	struct TArray<struct FFrameNumber> EventTimes; // 0x38(0x10)
	struct TArray<struct FMovieSceneEventPtrs> Events; // 0x48(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0x2cff69c0 (Inherited: 0x2d003d38)
struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	struct FMovieSceneEventSectionData eventData; // 0x38(0x88)
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0x2cff69d8 (Inherited: 0x2cffea20)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel FadeCurve; // 0x20(0xa0)
	struct FLinearColor FadeColor; // 0xc0(0x10)
	char bFadeAudio : 1; // 0xd0(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// Size: 0x2cff6c38 (Inherited: 0x2cffea20)
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	enum class ELevelVisibility Visibility; // 0x20(0x01)
	struct TArray<struct FName> LevelNames; // 0x28(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x2cffd680 (Inherited: 0x2cffea20)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x20(0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x30(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x40(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x50(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x60(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x70(0x10)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x2cff6ab0 (Inherited: 0x00)
struct FTransformParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0x10(0x1e0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x1f0(0x1e0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x3d0(0x1e0)
	char pad_5B0[0x2cff6500]; // 0x5b0(0x2cff6500)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x2cff6990 (Inherited: 0x00)
struct FColorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel RedCurve; // 0x10(0xa0)
	struct FMovieSceneFloatChannel GreenCurve; // 0xb0(0xa0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x150(0xa0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x1f0(0xa0)
	char pad_290[0x2cff6700]; // 0x290(0x2cff6700)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x2cff69f0 (Inherited: 0x00)
struct FVectorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel XCurve; // 0x10(0xa0)
	struct FMovieSceneFloatChannel YCurve; // 0xb0(0xa0)
	struct FMovieSceneFloatChannel ZCurve; // 0x150(0xa0)
	char pad_1F0[0x2cff6800]; // 0x1f0(0x2cff6800)
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size: 0x2cff6950 (Inherited: 0x00)
struct FVector2DParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel XCurve; // 0x10(0xa0)
	struct FMovieSceneFloatChannel YCurve; // 0xb0(0xa0)
	char pad_150[0x2cff6800]; // 0x150(0x2cff6800)
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size: 0x2cff69a0 (Inherited: 0x00)
struct FBoolParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneBoolChannel ParameterCurve; // 0x10(0x90)
	char pad_A0[0x2cff6900]; // 0xa0(0x2cff6900)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0x2cff69b0 (Inherited: 0x00)
struct FScalarParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x10(0xa0)
	char pad_B0[0x2cff6900]; // 0xb0(0x2cff6900)
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x2cff6988 (Inherited: 0x2cffd680)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	struct UMaterialParameterCollection* MPC; // 0x80(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0x2cffea20 (Inherited: 0x2cffd358)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x58(0xc8)
	char pad_2CFFD420[0x1600]; // 0x2cffd420(0x1600)
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x2cff6988 (Inherited: 0x2cffd680)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x2cff6980 (Inherited: 0x2cffd680)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0x2cff6998 (Inherited: 0x2cffe998)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0x2cff6cb8 (Inherited: 0x2cffea20)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneParticleChannel ParticleKeys; // 0x20(0x98)
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0x2cff69f0 (Inherited: 0x2cffea20)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20(0x04)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x28(0xc8)
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// Size: 0x2cff6ca8 (Inherited: 0x2cffd358)
struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x58(0x650)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// Size: 0x2cffe9a8 (Inherited: 0x2cffd358)
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieScene3DTransformTemplateData TemplateData; // 0x58(0x650)
	char pad_2CFFD9A8[0x1000]; // 0x2cffd9a8(0x1000)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x2cff69e0 (Inherited: 0x2cffd358)
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x58(0x280)
	int32_t NumChannelsUsed; // 0x2d8(0x04)
	enum class EMovieSceneBlendType BlendType; // 0x2dc(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0x2cff69f8 (Inherited: 0x2cffd358)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneStringChannel StringCurve; // 0x58(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0x2cff6ca0 (Inherited: 0x2cff6d08)
struct FMovieSceneStringChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	struct TArray<struct FString> Values; // 0x18(0x10)
	struct FString DefaultValue; // 0x28(0x10)
	bool bHasDefaultValue; // 0x38(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0x2cff69f0 (Inherited: 0x2cffd358)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneIntegerChannel IntegerCurve; // 0x58(0x90)
	enum class EMovieSceneBlendType BlendType; // 0xe8(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0x2cffe9f0 (Inherited: 0x2cffd358)
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneByteChannel EnumCurve; // 0x58(0x98)
	char pad_2CFFD3F0[0x1600]; // 0x2cffd3f0(0x1600)
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0x2cff69f0 (Inherited: 0x2cffd358)
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneByteChannel ByteCurve; // 0x58(0x98)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// Size: 0x2cff6a00 (Inherited: 0x2cffd358)
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel FloatFunction; // 0x58(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0xf8(0x01)
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0x2cff69e8 (Inherited: 0x2cffd358)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneBoolChannel BoolCurve; // 0x58(0x90)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0x2cff69d8 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimationParams {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName SlotName; // 0x1c(0x0c)
	struct FMovieSceneFloatChannel Weight; // 0x28(0xa0)
	bool bSkipAnimNotifiers; // 0xc8(0x01)
	bool bForceCustomMode; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	float StartOffset; // 0xcc(0x04)
	float EndOffset; // 0xd0(0x04)
	char pad_D4[0x2cff6904]; // 0xd4(0x2cff6904)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0x2cff6a00 (Inherited: 0x2cffea20)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20(0xe0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0x2cff69e0 (Inherited: 0x2cff69d8)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	struct FFrameNumber SectionStartTime; // 0xd8(0x04)
	struct FFrameNumber SectionEndTime; // 0xdc(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0x2cff69c0 (Inherited: 0x2cffea20)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel SlomoCurve; // 0x20(0xa0)
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// Size: 0x2cff69b0 (Inherited: 0x2cffea20)
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneBoolChannel Curve; // 0x20(0x90)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x2cff8528 (Inherited: 0x2cff8608)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x08(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x2cffe940 (Inherited: 0x2cff8528)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector4 Vector; // 0x30(0x10)
	char pad_2CFF8538[0x6408]; // 0x2cff8538(0x6408)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x2cff6938 (Inherited: 0x2cff8528)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector Vector; // 0x28(0x0c)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x2cff6930 (Inherited: 0x2cff8528)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	struct FVector2D Vector; // 0x28(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0x2cff69e8 (Inherited: 0x2cff69e8)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
};

