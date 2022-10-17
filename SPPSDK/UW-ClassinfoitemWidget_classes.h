// WidgetBlueprintGeneratedClass UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a88)
struct UUW-ClassinfoitemWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image_ClassIcon; // 0x290(0x08)
	struct UTextBlock* TextBlock_ClassName; // 0x298(0x08)
	struct UTextBlock* TextBlock_Count; // 0x2a0(0x08)

	void SetClassCount(int32_t Count); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.SetClassCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetClassInfo(struct FPerkDeckData& PerkDeckData); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.SetClassInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511(struct UObject* Loaded); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.OnLoaded_5B4CA9324370B6EF1C483DB3B88E6511 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadingClassIcon(struct TSoftObjectPtr<UObject> Texture); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.AsyncLoadingClassIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ClassinfoitemWidget(int32_t EntryPoint); // Function UW-ClassinfoitemWidget.UW-ClassinfoitemWidget_C.ExecuteUbergraph_UW-ClassinfoitemWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

