// Class XeSSBlueprint.XeSSBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UXeSSBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetXeSSQualityMode(enum class EXeSSQualityMode QualityMode); // Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x1895080
	bool IsXeSSSupported(); // Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1895050
	enum class EXeSSQualityMode GetXeSSQualityMode(); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1895020
	int32_t GetXeSSInitResult(); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSInitResult // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1894ff0
	struct TArray<enum class EXeSSQualityMode> GetSupportedXeSSQualityMode(); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityMode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x1894f70
	enum class EXeSSQualityMode GetDefaultXeSSQualityMode(struct FIntPoint ScreenResolution); // Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x1894f00
};

