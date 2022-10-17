// Class LevelSequence.LevelSequenceActor
// Size: 0x2cff6aa0 (Inherited: 0x2cff6b08)
struct ALevelSequenceActor : AActor {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x318(0x14)
	struct ULevelSequencePlayer* SequencePlayer; // 0x330(0x08)
	struct FSoftObjectPath LevelSequence; // 0x338(0x20)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x358(0x10)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x368(0x02)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x370(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x378(0x08)
	char bAutoPlay : 1; // 0x380(0x01)
	char bOverrideInstanceData : 1; // 0x380(0x01)
	char bReplicatePlayback : 1; // 0x380(0x01)
	struct UObject* DefaultInstanceData; // 0x388(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x390(0x08)
	bool bShowBurnin; // 0x398(0x01)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x3d73840
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x3d737c0
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x3d73730
	void SetEventReceivers(struct TArray<struct AActor*> AdditionalReceivers); // Function LevelSequence.LevelSequenceActor.SetEventReceivers // (Final|Native|Public|BlueprintCallable) // @ game+0x3d735e0
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d73390
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d73240
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x3d73220
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x3d73170
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x3d73020
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x3d72f30
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d72ec0
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x3d72ea0
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d72e50
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d72e00
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d72cd0
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d72c10
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x3d72900
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x3d727c0
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a98)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x898(0x10)
	char pad_2CFF6AA8[0x18]; // 0x2cff6aa8(0x18)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d72dc0
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3d72aa0
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct UDefaultLevelSequenceInstanceData : UObject {
	struct AActor* TransformOriginActor; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x30)
	char pad_2CFF6968[0x108]; // 0x2cff6968(0x108)
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequence
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a50)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x358(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0x3a8(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x448(0x50)
	struct UObject* DirectorClass; // 0x498(0x08)

	void RemoveMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x3d73100
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x3d72a20
	struct UObject* FindMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d72a20
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData // (Final|Native|Public|BlueprintCallable) // @ game+0x3d72a20
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct ULevelSequenceBurnInInitSettings : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x30(0x01)
	struct FSoftClassPath BurnInClass; // 0x38(0x20)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x58(0x08)
	char pad_2CFF6959[0x107]; // 0x2cff6959(0x107)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3d734e0
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2cff6a50 (Inherited: 0x2cff6a88)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x288(0xc0)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x348(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x3d72e80
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x30(0x08)
	char pad_2CFF6938[0x100]; // 0x2cff6938(0x100)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0x2cff6aa8 (Inherited: 0x2cff6aa8)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x2cff6a30 (Inherited: 0x2cff6b08)
struct ALevelSequenceMediaController : AActor {
	struct ALevelSequenceActor* Sequence; // 0x310(0x08)
	struct UMediaComponent* MediaComponent; // 0x318(0x08)
	float ServerStartTimeSeconds; // 0x320(0x04)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (Final|Native|Public|BlueprintCallable) // @ game+0x3d73860
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x3d72f10
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds // (Final|Native|Private) // @ game+0x3d72ef0
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d72e30
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c02680
};

