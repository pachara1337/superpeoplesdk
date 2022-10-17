// Class MovieScene.MovieSceneSignedObject
// Size: 0x2d003d58 (Inherited: 0x2cff6930)
struct UMovieSceneSignedObject : UObject {
	struct FGuid Signature; // 0x30(0x10)
	char pad_2CFF6940[0xd418]; // 0x2cff6940(0xd418)
};

// Class MovieScene.MovieSceneTrack
// Size: 0x2d003d60 (Inherited: 0x2d003d58)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x58(0x04)
	bool bIsEvalDisabled; // 0x5d(0x01)
	char pad_2D003D5D[0x3]; // 0x2d003d5d(0x03)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x2d003d60 (Inherited: 0x2d003d60)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSection
// Size: 0x2cff6ae8 (Inherited: 0x2d003d58)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x58(0x02)
	struct FMovieSceneEasingSettings Easing; // 0x60(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x98(0x10)
	struct FFrameNumber PreRollFrames; // 0xa8(0x04)
	struct FFrameNumber PostRollFrames; // 0xac(0x04)
	int32_t rowIndex; // 0xb0(0x04)
	int32_t OverlapPriority; // 0xb4(0x04)
	char bIsActive : 1; // 0xb8(0x01)
	char bIsLocked : 1; // 0xb8(0x01)
	float StartTime; // 0xbc(0x04)
	float EndTime; // 0xc0(0x04)
	float PrerollTime; // 0xc4(0x04)
	float PostrollTime; // 0xc8(0x04)
	char bIsInfinite : 1; // 0xcc(0x01)
	bool bSupportsInfiniteRange; // 0xd0(0x01)
	struct FOptionalMovieSceneBlendType BlendType; // 0xd1(0x02)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x3a06680
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x3a065f0
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x3a06560
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x3a064e0
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x3a06450
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x3a063c0
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x3a06340
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a062c0
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a06290
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a06260
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a06240
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a06220
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a06200
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a061e0
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a061c0
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a06190
};

// Class MovieScene.MovieSceneSequence
// Size: 0x2cff6a50 (Inherited: 0x2d003d58)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x58(0x2f0)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x348(0x01)
	bool bParentContextsAreSignificant; // 0x349(0x01)
	bool bPlayableDirectly; // 0x34a(0x01)

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b0b0
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0aff0
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x2cff6a98 (Inherited: 0x2cff6930)
struct UMovieSceneSequencePlayer : UObject {
	struct FMulticastInlineDelegate OnPlay; // 0x410(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x420(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x430(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x440(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x450(0x10)
	enum class EMovieScenePlayerStatus status; // 0x460(0x01)
	char bReversePlayback : 1; // 0x464(0x01)
	struct UMovieSceneSequence* Sequence; // 0x468(0x08)
	struct FFrameNumber StartTime; // 0x470(0x04)
	int32_t DurationFrames; // 0x474(0x04)
	int32_t CurrentNumLoops; // 0x478(0x04)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x490(0x14)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a8(0x320)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x830(0x10)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x840(0x10)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c5c0
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c5a0
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c4e0
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c2a0
	void SetPlaybackRange(float NewStartTime, float NewEndTime); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c420
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c320
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c210
	void SetFrameRange(int32_t StartFrame, int32_t Duration); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c150
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c0c0
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0b9a0
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0c010
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0bf80
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0bf60
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x3a0bed0
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x3a0be00
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0bd80
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0bcd0
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0bc40
	void PlayReverseEx(int32_t InStartTime); // Function MovieScene.MovieSceneSequencePlayer.PlayReverseEx // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0bbc0
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0bba0
	void PlayLooping(int32_t NumLoops, bool HasJumped); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0bae0
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0bac0
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0baa0
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0ba20
	void JumpToPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0b9a0
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0b8f0
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0b860
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b830
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b800
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b7d0
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0b7b0
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b760
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b530
	float GetPlaybackStart(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b6e0
	float GetPlaybackPosition(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b5f0
	float GetPlaybackEnd(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b560
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0b450
	float GetLength(); // Function MovieScene.MovieSceneSequencePlayer.GetLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b420
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b400
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b3d0
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b370
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b330
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0b300
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0b2c0
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0b1c0
	void ForceRestoreState(); // Function MovieScene.MovieSceneSequencePlayer.ForceRestoreState // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0b1a0
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0afd0
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x2cff6a60 (Inherited: 0x2cff6ae8)
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; // 0xe8(0x24)
	float StartOffset; // 0x10c(0x04)
	float TimeScale; // 0x110(0x04)
	float PrerollTime; // 0x114(0x04)
	struct UMovieSceneSequence* SubSequence; // 0x118(0x08)
	LazyObjectProperty ActorToRecord; // 0x120(0x1c)
	struct FString TargetSequenceName; // 0x140(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x150(0x10)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x3a0fd10
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a0fce0
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick // (Native|Public) // @ game+0x39fc150
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying // (Native|Public|HasOutParms) // @ game+0x39fc0a0
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying // (Native|Public|HasOutParms) // @ game+0x39fbff0
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime // (Native|Public|HasOutParms) // @ game+0x39fbef0
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieScene
// Size: 0x2cff6a58 (Inherited: 0x2d003d58)
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x58(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x68(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x78(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x88(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xd8(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xe8(0x08)
	struct FMovieSceneFrameRange SelectionRange; // 0xf0(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0x100(0x10)
	struct FFrameRate TickResolution; // 0x110(0x08)
	struct FFrameRate DisplayRate; // 0x118(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x120(0x01)
	enum class EUpdateClockSource ClockSource; // 0x121(0x01)
	struct FSoftObjectPath CustomClockSourcePath; // 0x128(0x20)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x148(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x2cff6a98 (Inherited: 0x2cff6930)
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x30(0x10)
	char pad_2CFF6940[0x158]; // 0x2cff6940(0x158)
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UMovieSceneBuiltInEasingFunction : UObject {
	enum class EMovieSceneBuiltInEasing Type; // 0x38(0x01)
	char pad_2CFF6931[0x10f]; // 0x2cff6931(0x10f)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UMovieSceneEasingExternalCurve : UObject {
	struct UCurveFloat* Curve; // 0x38(0x08)
	char pad_2CFF6938[0x108]; // 0x2cff6938(0x108)
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
};

// Class MovieScene.MovieSceneFolder
// Size: 0x2cff6a80 (Inherited: 0x2cff6930)
struct UMovieSceneFolder : UObject {
	struct FName FolderName; // 0x30(0x0c)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x40(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x50(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x60(0x10)
	char pad_2CFF696C[0x114]; // 0x2cff696c(0x114)
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0x2cff6a78 (Inherited: 0x2d003d60)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x60(0x01)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x68(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae8)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x2cff6a58 (Inherited: 0x2cff6a50)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size: 0x2cff6a80 (Inherited: 0x2cff6a70)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x70(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

