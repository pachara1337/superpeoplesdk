// Class MoviePlayer.MoviePlayerSettings
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x30(0x01)
	bool bMoviesAreSkippable; // 0x31(0x01)
	struct TArray<struct FString> StartupMovies; // 0x38(0x10)
	char pad_2CFF6942[0x106]; // 0x2cff6942(0x106)
};

