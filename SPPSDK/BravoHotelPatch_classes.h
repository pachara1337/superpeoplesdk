// Class BravoHotelPatch.BravoHotelPatchService
// Size: 0x2cff6ab8 (Inherited: 0x2cff6930)
struct UBravoHotelPatchService : UObject {
	char pad_2CFF6930[0x188]; // 0x2cff6930(0x188)

	void StartInstall(); // Function BravoHotelPatch.BravoHotelPatchService.StartInstall // (Final|Native|Public|BlueprintCallable) // @ game+0x249e730
	void RequestRemoteContent(); // Function BravoHotelPatch.BravoHotelPatchService.RequestRemoteContent // (Final|Native|Public|BlueprintCallable) // @ game+0x249e710
	float GetTotalDownloadedSize(); // Function BravoHotelPatch.BravoHotelPatchService.GetTotalDownloadedSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b10950
	float GetRequiredDiskSpace(); // Function BravoHotelPatch.BravoHotelPatchService.GetRequiredDiskSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b10840
	float GetInstallProgress(); // Function BravoHotelPatch.BravoHotelPatchService.GetInstallProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b10740
	struct FText GetDownloadStatusText(); // Function BravoHotelPatch.BravoHotelPatchService.GetDownloadStatusText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x249e670
	struct FText GetDownloadSpeedText(); // Function BravoHotelPatch.BravoHotelPatchService.GetDownloadSpeedText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x249e5d0
	float GetDownloadSpeed(); // Function BravoHotelPatch.BravoHotelPatchService.GetDownloadSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b10670
	float GetDownloadSize(); // Function BravoHotelPatch.BravoHotelPatchService.GetDownloadSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x249e5a0
	float GetAvailableDiskSpace(); // Function BravoHotelPatch.BravoHotelPatchService.GetAvailableDiskSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x249e570
};

// Class BravoHotelPatch.BravoHotelPatchWidget
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a88)
struct UBravoHotelPatchWidget : UUserWidget {
	struct UBravoHotelPatchService* PatchService; // 0x2a8(0x08)
	char pad_2CFF6A90[0x50]; // 0x2cff6a90(0x50)

	void StartPatchService(); // Function BravoHotelPatch.BravoHotelPatchWidget.StartPatchService // (Final|Native|Public|BlueprintCallable) // @ game+0x249ed40
	void ReceiveStartPatchService(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveStartPatchService // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveReadyToStartGame(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToStartGame // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveReadyToInstallPatch(); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveReadyToInstallPatch // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveErrorPatchService(enum class EPatchServiceError ErrorCode, struct FText& ErrorText); // Function BravoHotelPatch.BravoHotelPatchWidget.ReceiveErrorPatchService // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FText GetVersionText(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetVersionText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x249eca0
	struct FString GetGameDefaultMap(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetGameDefaultMap // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x249ec20
	struct FText GetDownloadText(); // Function BravoHotelPatch.BravoHotelPatchWidget.GetDownloadText // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x249eb80
};

