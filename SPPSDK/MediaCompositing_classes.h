// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0x2cff6af8 (Inherited: 0x2cff6ae8)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xe8(0x08)
	bool bLoop; // 0xf0(0x01)
	char pad_2CFF6AF1[0x7]; // 0x2cff6af1(0x07)
};

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack {
};

// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x2cff6b18 (Inherited: 0x2cff6ae8)
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xe8(0x08)
	bool bLooping; // 0xf0(0x01)
	struct FFrameNumber StartFrameOffset; // 0xf4(0x04)
	struct UMediaTexture* MediaTexture; // 0xf8(0x08)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x100(0x08)
	bool bUseExternalMediaPlayer; // 0x108(0x01)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x110(0x08)
	char pad_2CFF6B0E[0xa]; // 0x2cff6b0e(0x0a)
};

// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x2cff6a70 (Inherited: 0x2d003d60)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> MediaSections; // 0x60(0x10)
};

