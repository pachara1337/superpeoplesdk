// WidgetBlueprintGeneratedClass LineWidget.LineWidget_C
// Size: 0x2cff6a9c (Inherited: 0x2cff6a88)
struct ULineWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	float InitSize; // 0x298(0x04)

	void Construct(); // Function LineWidget.LineWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Set Color(int32_t IconIndex); // Function LineWidget.LineWidget_C.Set Color // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetScale(float Scale); // Function LineWidget.LineWidget_C.SetScale // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_LineWidget(int32_t EntryPoint); // Function LineWidget.LineWidget_C.ExecuteUbergraph_LineWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

