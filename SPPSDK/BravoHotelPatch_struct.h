// Enum BravoHotelPatch.EPatchServiceError
enum class EPatchServiceError : uint8 {
	NoError = 0,
	FailedToDownloadManifestNoResponse = 1,
	FailedToDownloadManifest = 2,
	FailedToReadManifest = 3,
	FailedToInstall = 4,
	EPatchServiceError_MAX = 5
};

