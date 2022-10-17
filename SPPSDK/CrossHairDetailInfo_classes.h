// WidgetBlueprintGeneratedClass CrossHairDetailInfo.CrossHairDetailInfo_C
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a88)
struct UCrossHairDetailInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* 1-1; // 0x290(0x08)
	struct UTextBlock* CurDesc; // 0x298(0x08)

	void SetData(struct FText Title, struct TSoftObjectPtr<UTexture2D> Image); // Function CrossHairDetailInfo.CrossHairDetailInfo_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_CrossHairDetailInfo(int32_t EntryPoint); // Function CrossHairDetailInfo.CrossHairDetailInfo_C.ExecuteUbergraph_CrossHairDetailInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

