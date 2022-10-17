// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0x2cff6c98 (Inherited: 0x2d003d60)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct UMovieSceneSection* SectionToKey; // 0x60(0x08)
	struct FName PropertyName; // 0x68(0x0c)
	struct FString PropertyPath; // 0x78(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMovieSceneTransformOrigin : UInterface {

	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x2cff6b10 (Inherited: 0x2cff6ae8)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; // 0xe8(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8(0x18)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3ae31f0
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae3170
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x2cff6a30 (Inherited: 0x2cff6b10)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	struct FName AttachSocketName; // 0x110(0x0c)
	struct FName AttachComponentName; // 0x11c(0x0c)
	enum class EAttachmentRule AttachmentLocationRule; // 0x128(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x129(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x12a(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x12b(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x12c(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x12d(0x01)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x2cff6ab8 (Inherited: 0x2cff6b10)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FMovieSceneFloatChannel TimingCurve; // 0x110(0xa0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1(0x01)
	char bFollow : 1; // 0x1b4(0x01)
	char bReverse : 1; // 0x1b4(0x01)
	char bForceUpright : 1; // 0x1b4(0x01)
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x2cff6a38 (Inherited: 0x2cff6ae8)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	struct FMovieSceneTransformMask TransformMask; // 0xe8(0x04)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0xf0(0x1e0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x2d0(0x1e0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x4b0(0x1e0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x690(0xa0)
	bool bUseQuaternionInterpolation; // 0x734(0x01)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x2cff6a30 (Inherited: 0x2cff6ae8)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xe8(0xb8)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x1a0(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x220(0x10)
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x2cff6a48 (Inherited: 0x2cff6ae8)
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; // 0xe8(0x08)
	struct FFrameNumber StartFrameOffset; // 0xf0(0x04)
	float StartOffset; // 0xf4(0x04)
	float AudioStartTime; // 0xf8(0x04)
	float AudioDilationFactor; // 0xfc(0x04)
	float AudioVolume; // 0x100(0x04)
	struct FMovieSceneFloatChannel SoundVolume; // 0x108(0xa0)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1a8(0xa0)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x248(0xb8)
	bool bSuppressSubtitles; // 0x300(0x01)
	bool bOverrideAttenuation; // 0x301(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x308(0x08)
	struct FDelegate OnQueueSubtitles; // 0x310(0x14)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x328(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x338(0x10)

	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ae3330
	void SetSound(struct USoundBase* InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound // (Final|Native|Public|BlueprintCallable) // @ game+0x3ae32b0
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae31d0
	struct USoundBase* GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae31b0
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x2cff6a80 (Inherited: 0x2cff6ae8)
struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe8(0x01)
	struct FMovieSceneBoolChannel BoolCurve; // 0xf0(0x90)
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x2cff6a80 (Inherited: 0x2cff6ae8)
struct UMovieSceneByteSection : UMovieSceneSection {
	struct FMovieSceneByteChannel ByteCurve; // 0xe8(0x98)
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6c98)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0x98(0x08)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x2cff6a28 (Inherited: 0x2cff6ae8)
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	struct FMovieSceneCameraAnimSectionData AnimData; // 0xe8(0x20)
	struct UCameraAnim* CameraAnim; // 0x108(0x08)
	float PlayRate; // 0x110(0x04)
	float PlayScale; // 0x114(0x04)
	float BlendInTime; // 0x118(0x04)
	float BlendOutTime; // 0x11c(0x04)
	bool bLooping; // 0x120(0x01)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x2cff6b10 (Inherited: 0x2cff6ae8)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct FGuid CameraGuid; // 0xe8(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0xf8(0x18)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3aeacd0
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ae3170
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x2cff6a78 (Inherited: 0x2d003d60)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x60(0x01)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x68(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x2cff6a28 (Inherited: 0x2cff6ae8)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xe8(0x20)
	struct UCameraShake* ShakeClass; // 0x108(0x08)
	float PlayScale; // 0x110(0x04)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x114(0x01)
	struct FRotator UserDefinedPlaySpace; // 0x118(0x0c)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x2cff6a88 (Inherited: 0x2cff6a60)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; // 0x160(0x10)
	struct FText DisplayName; // 0x170(0x18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x3aeae40
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aeabd0
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x2cff6a68 (Inherited: 0x2cff6ae8)
struct UMovieSceneColorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel RedCurve; // 0xe8(0xa0)
	struct FMovieSceneFloatChannel GreenCurve; // 0x188(0xa0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x228(0xa0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2c8(0xa0)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6c98)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0x98(0x01)
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x2cff6a80 (Inherited: 0x2cff6ae8)
struct UMovieSceneEnumSection : UMovieSceneSection {
	struct FMovieSceneByteChannel EnumCurve; // 0xe8(0x98)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6c98)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0x98(0x08)
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae8)
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x2cff6b10 (Inherited: 0x2cff6ae8)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	struct FMovieSceneEvent Event; // 0xe8(0x28)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae8)
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; // 0xe8(0x78)
	struct FMovieSceneEventSectionData eventData; // 0x160(0x88)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0x2cff6a88 (Inherited: 0x2d003d60)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0x60(0x01)
	char bFireEventsWhenBackwards : 1; // 0x60(0x01)
	enum class EFireEventsAtPosition EventPosition; // 0x64(0x01)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x68(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x2cff6a70 (Inherited: 0x2cff6ae8)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	struct FMovieSceneEventChannel EventChannel; // 0xe8(0x88)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x2cff6a88 (Inherited: 0x2cff6ae8)
struct UMovieSceneFloatSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xe8(0xa0)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a88)
struct UMovieSceneFadeSection : UMovieSceneFloatSection {
	struct FLinearColor FadeColor; // 0x188(0x10)
	char bFadeAudio : 1; // 0x198(0x01)
	char pad_2CFF6A98_1 : 7; // 0x2cff6a98(0x01)
	char pad_2CFF6A99[0x7]; // 0x2cff6a99(0x07)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6a98)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x2cff6a78 (Inherited: 0x2cff6ae8)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel IntegerCurve; // 0xe8(0x90)
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x2cff6b00 (Inherited: 0x2cff6ae8)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	enum class ELevelVisibility Visibility; // 0xe8(0x01)
	struct TArray<struct FName> LevelNames; // 0xf0(0x10)
	char pad_2CFF6AF9[0x7]; // 0x2cff6af9(0x07)

	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x3aeaf40
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3aead90
	enum class ELevelVisibility GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aeaca0
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aeaba0
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0x2cff6a78 (Inherited: 0x2cff6a70)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	struct UMaterialParameterCollection* MPC; // 0x70(0x08)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0x2cff6a78 (Inherited: 0x2cff6a70)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x70(0x04)
	char pad_2CFF6A74[0x4]; // 0x2cff6a74(0x04)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x2cff6ab0 (Inherited: 0x2cff6ae8)
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xe8(0xc8)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6c98)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	struct UObject* PropertyClass; // 0x98(0x08)
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x2cff6a48 (Inherited: 0x2cff6ae8)
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x2cff6a80 (Inherited: 0x2cff6ae8)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FMovieSceneParticleChannel ParticleKeys; // 0xe8(0x98)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x60(0x10)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x2cff6ab0 (Inherited: 0x2cff6ae8)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xe8(0xc8)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0x2cff6ca0 (Inherited: 0x2cff6c98)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0x98(0x04)
	char pad_2CFF6C9C[0x4]; // 0x2cff6c9c(0x04)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x2cff6af0 (Inherited: 0x2cff6ae8)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct FMovieSceneSkeletalAnimationParams Params; // 0xe8(0xd8)
	struct UAnimSequence* AnimSequence; // 0x1c0(0x08)
	struct UAnimSequenceBase* Animation; // 0x1c8(0x08)
	float StartOffset; // 0x1d0(0x04)
	float EndOffset; // 0x1d4(0x04)
	float PlayRate; // 0x1d8(0x04)
	char bReverse : 1; // 0x1dc(0x01)
	struct FName SlotName; // 0x1e0(0x0c)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0x2cff6a78 (Inherited: 0x2d003d60)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x60(0x10)
	bool bUseLegacySectionIndexBlend; // 0x70(0x01)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x2cff6a88 (Inherited: 0x2cff6a88)
struct UMovieSceneSlomoSection : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6a98)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneSpawnSection
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0x2cff6a80 (Inherited: 0x2d003d60)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
	struct FGuid ObjectGuid; // 0x70(0x10)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x2cff6a88 (Inherited: 0x2cff6ae8)
struct UMovieSceneStringSection : UMovieSceneSection {
	struct FMovieSceneStringChannel StringCurve; // 0xe8(0xa0)
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x2cff6a70 (Inherited: 0x2cff6ae8)
struct UMovieSceneVectorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel Curves[0x4]; // 0xe8(0x280)
	int32_t ChannelsUsed; // 0x368(0x04)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0x2cff6aa0 (Inherited: 0x2cff6c98)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0x98(0x04)
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6a98)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

