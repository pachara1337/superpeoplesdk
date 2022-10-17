// Class ActorSequence.ActorSequence
// Size: 0x2cff6a78 (Inherited: 0x2cff6a50)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x358(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x2cff6ae0 (Inherited: 0x2cff6cb8)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb8(0x14)
	struct UActorSequence* Sequence; // 0xd0(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0xd8(0x08)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x2cff6a98 (Inherited: 0x2cff6a98)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

