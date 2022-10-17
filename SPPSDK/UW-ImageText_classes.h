// WidgetBlueprintGeneratedClass UW-ImageText.UW-ImageText_C
// Size: 0x2cff6a54 (Inherited: 0x2cff6a88)
struct UUW-ImageText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UVerticalBox* VerticalBox_Main; // 0x290(0x08)
	struct FTextBlockStyle DefaultTextStyle; // 0x298(0x288)
	struct FText TextString; // 0x520(0x18)
	struct UBP_GameSettings_C* Game Settings; // 0x538(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x540(0x01)
	float KeyImageScale; // 0x544(0x04)
	struct UWrapBox* TargetWrap; // 0x548(0x08)
	int32_t CurrentIndex; // 0x550(0x04)

	void ParseString(struct FString InputString); // Function UW-ImageText.UW-ImageText_C.ParseString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ParseText(struct FString Inputtext, int32_t ClasIndex); // Function UW-ImageText.UW-ImageText_C.ParseText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ParseSpace(struct FString TargetString, struct FString PreString, struct FString PostString); // Function UW-ImageText.UW-ImageText_C.ParseSpace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-ImageText.UW-ImageText_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ImageText.UW-ImageText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetText(struct FText Inputtext, int32_t ClassIndex); // Function UW-ImageText.UW-ImageText_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAlignment(enum class EHorizontalAlignment Alignment); // Function UW-ImageText.UW-ImageText_C.SetAlignment // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddWrapBox(); // Function UW-ImageText.UW-ImageText_C.AddWrapBox // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClearWrapBox(); // Function UW-ImageText.UW-ImageText_C.ClearWrapBox // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ImageText(int32_t EntryPoint); // Function UW-ImageText.UW-ImageText_C.ExecuteUbergraph_UW-ImageText // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

