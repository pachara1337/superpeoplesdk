// Class WindowsFileUtility.WFUFileListInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UWFUFileListInterface : UInterface {

	void OnListFileFound(struct FString Filename, int32_t ByteCount, struct FString FilePath); // Function WindowsFileUtility.WFUFileListInterface.OnListFileFound // (Native|Event|Public|BlueprintEvent) // @ game+0x48df440
	void OnListDone(struct FString DirectoryPath, struct TArray<struct FString>& Files, struct TArray<struct FString>& Folders); // Function WindowsFileUtility.WFUFileListInterface.OnListDone // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x48df280
	void OnListDirectoryFound(struct FString DirectoryName, struct FString FilePath); // Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound // (Native|Event|Public|BlueprintEvent) // @ game+0x48df180
};

// Class WindowsFileUtility.WFUFileListLambdaDelegate
// Size: 0x2cff6a80 (Inherited: 0x2cff6930)
struct UWFUFileListLambdaDelegate : UObject {
	char pad_2CFF6930[0x150]; // 0x2cff6930(0x150)
};

// Class WindowsFileUtility.WFUFolderWatchInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UWFUFolderWatchInterface : UInterface {

	void OnFileChanged(struct FString Filename, struct FString FilePath); // Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x48df180
	void OnDirectoryChanged(struct FString DirectoryName, struct FString DirectoryPath); // Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x48df080
};

// Class WindowsFileUtility.WFUFolderWatchLambdaDelegate
// Size: 0x2cff6a80 (Inherited: 0x2cff6930)
struct UWFUFolderWatchLambdaDelegate : UObject {
	char pad_2CFF6930[0x150]; // 0x2cff6930(0x150)
};

// Class WindowsFileUtility.WindowsFileUtilityFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UWindowsFileUtilityFunctionLibrary : UBlueprintFunctionLibrary {

	void WatchFolder(struct FString fullPath, struct UObject* WatcherDelegate); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48df650
	void StopWatchingFolder(struct FString fullPath, struct UObject* WatcherDelegate); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48df580
	bool MoveFileTo(struct FString From, struct FString To); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48def80
	void ListContentsOfFolder(struct FString fullPath, struct UObject* ListDelegate); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48deeb0
	bool DoesFileExist(struct FString fullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DoesFileExist // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48dee10
	bool DeleteFolderRecursively(struct FString fullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48ded70
	bool DeleteFileAt(struct FString fullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48decd0
	bool DeleteEmptyFolder(struct FString fullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48dec30
	bool CreateDirectoryAt(struct FString fullPath); // Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x48deb90
};

