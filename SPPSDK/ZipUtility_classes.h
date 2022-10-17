// Class ZipUtility.ZipFileFunctionInternalCallback
// Size: 0x2cff6a78 (Inherited: 0x2cff6930)
struct UZipFileFunctionInternalCallback : UObject {
	enum class EZipUtilityCompressionFormat CompressionFormat; // 0x38(0x01)
	struct FString File; // 0x40(0x10)
	struct FString DestinationFolder; // 0x50(0x10)
	int32_t FileIndex; // 0x60(0x04)
	struct UObject* Callback; // 0x68(0x08)
	bool bSingleFile; // 0x70(0x01)
	bool bFileFound; // 0x71(0x01)
	bool bUnzipto; // 0x72(0x01)
	char pad_2CFF6960[0x118]; // 0x2cff6960(0x118)
};

// Class ZipUtility.ZipFileFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UZipFileFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class ZipUtility.ZipOperation
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UZipOperation : UObject {
	char pad_2CFF6930[0x110]; // 0x2cff6930(0x110)

	void StopOperation(); // Function ZipUtility.ZipOperation.StopOperation // (Final|Native|Public|BlueprintCallable) // @ game+0x19166e0
};

// Class ZipUtility.ZipUtilityInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UZipUtilityInterface : UInterface {

	void OnStartProcess(struct FString archive, int32_t Bytes); // Function ZipUtility.ZipUtilityInterface.OnStartProcess // (Native|Event|Public|BlueprintEvent) // @ game+0x1916600
	void OnProgress(struct FString archive, float Percentage, int32_t Bytes); // Function ZipUtility.ZipUtilityInterface.OnProgress // (Native|Event|Public|BlueprintEvent) // @ game+0x19164d0
	void OnFinished(struct FString archive, bool bCheckBreak); // Function ZipUtility.ZipUtilityInterface.OnFinished // (Native|Event|Public|BlueprintEvent) // @ game+0x19163e0
	void OnFileFound(struct FString archive, struct FString File, int32_t Size); // Function ZipUtility.ZipUtilityInterface.OnFileFound // (Native|Event|Public|BlueprintEvent) // @ game+0x19162a0
	void OnFileDone(struct FString archive, struct FString File); // Function ZipUtility.ZipUtilityInterface.OnFileDone // (Native|Event|Public|BlueprintEvent) // @ game+0x19161a0
	void OnDone(struct FString archive, enum class EZipUtilityCompletionState CompletionState); // Function ZipUtility.ZipUtilityInterface.OnDone // (Native|Event|Public|BlueprintEvent) // @ game+0x19160c0
};

// Class ZipUtility.ZULambdaDelegate
// Size: 0x2cff6b00 (Inherited: 0x2cff6930)
struct UZULambdaDelegate : UObject {
	char pad_2CFF6930[0x1d0]; // 0x2cff6930(0x1d0)
};

