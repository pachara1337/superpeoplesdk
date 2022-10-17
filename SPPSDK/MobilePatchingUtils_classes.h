// Class MobilePatchingUtils.MobileInstalledContent
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UMobileInstalledContent : UObject {
	char pad_2CFF6930[0x120]; // 0x2cff6930(0x120)

	bool Mount(int32_t PakOrder, struct FString MountPoint); // Function MobilePatchingUtils.MobileInstalledContent.Mount // (Final|Native|Public|BlueprintCallable) // @ game+0x1b10980
	float GetInstalledContentSize(); // Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10810
	float GetDiskFreeSpace(); // Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10610
};

// Class MobilePatchingUtils.MobilePendingContent
// Size: 0x2cff6a90 (Inherited: 0x2cff6a50)
struct UMobilePendingContent : UMobileInstalledContent {
	char pad_2CFF6A50[0x40]; // 0x2cff6a50(0x40)

	void StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePendingContent.StartInstall // (Final|Native|Public|BlueprintCallable) // @ game+0x1b10c70
	float GetTotalDownloadedSize(); // Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10950
	float GetRequiredDiskSpace(); // Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10840
	float GetInstallProgress(); // Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10740
	struct FText GetDownloadStatusText(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b106a0
	float GetDownloadSpeed(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10670
	float GetDownloadSize(); // Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10640
};

// Class MobilePatchingUtils.MobilePatchingLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMobilePatchingLibrary : UBlueprintFunctionLibrary {

	void RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed); // Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b10a70
	bool HasActiveWiFiConnection(); // Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x12903a0
	struct TArray<struct FString> GetSupportedPlatformNames(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10870
	struct UMobileInstalledContent* GetInstalledContent(struct FString InstallDirectory); // Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10770
	struct FString GetActiveDeviceProfileName(); // Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1b10590
};

