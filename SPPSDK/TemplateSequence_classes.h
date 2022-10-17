// Class TemplateSequence.TemplateSequence
// Size: 0x2cff6b08 (Inherited: 0x2cff6a50)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x358(0x30)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0x388(0x30)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0x3b8(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x2cff6b08 (Inherited: 0x2cff6b08)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x2cff6a60 (Inherited: 0x2cff6b08)
struct ATemplateSequenceActor : AActor {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x310(0x14)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x328(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x330(0x20)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x350(0x0c)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae8a40
	void SetBinding(struct AActor* Actor); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x1ae89c0
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ae8990
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ae8960
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ae8930
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a98)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_2CFF6A98[0x8]; // 0x2cff6a98(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1ae87c0
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UTemplateSequenceSection : UMovieSceneSubSection {
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

