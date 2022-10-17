// Class StreamlineBlueprint.StreamlineLibraryDLSSG
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UStreamlineLibraryDLSSG : UBlueprintFunctionLibrary {

	void SetDLSSGMode(enum class UStreamlineDLSSGMode DLSSGMode); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x18d3bb0
	void SetDLSSGFrames(int32_t Frames); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGFrames // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x18d3b40
	enum class UStreamlineDLSSGSupport QueryDLSSGSupport(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18d3ae0
	bool IsDLSSGSupported(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18d3a80
	bool IsDLSSGModeSupported(enum class UStreamlineDLSSGMode DLSSGMode); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18d3a00
	struct TArray<enum class UStreamlineDLSSGMode> GetSupportedDLSSGModes(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18d3980
	void GetDLSSGSupportedFramesRange(int32_t& MinFrames, int32_t& MaxFrames); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGSupportedFramesRange // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x18d3870
	enum class UStreamlineDLSSGMode GetDLSSGMode(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18d3840
	void GetDLSSGMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMinimumDriverVersion // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x18d3760
	int32_t GetDLSSGFrames(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrames // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18d3730
	enum class UStreamlineDLSSGMode GetDefaultDLSSGMode(); // Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18d3950
};

// Class StreamlineBlueprint.StreamlineLibraryReflex
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UStreamlineLibraryReflex : UBlueprintFunctionLibrary {

	void SetReflexMode(enum class UStreamlineReflexMode Mode); // Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x185e610
	enum class UStreamlineReflexSupport QueryReflexSupport(); // Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18d3b10
	bool IsReflexSupported(); // Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x18d3ab0
	float GetRenderLatencyInMs(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x185e5e0
	enum class UStreamlineReflexMode GetReflexMode(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x185e5b0
	float GetGameToRenderLatencyInMs(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x185e550
	float GetGameLatencyInMs(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x185e520
	enum class UStreamlineReflexMode GetDefaultReflexMode(); // Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x12903a0
};

