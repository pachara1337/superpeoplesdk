// WidgetBlueprintGeneratedClass BP-LoadingScreenWidget.BP-LoadingScreenWidget_C
// Size: 0x2cff6a79 (Inherited: 0x2cff6b08)
struct UBP-LoadingScreenWidget_C : UBravoHotelLoadingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x310(0x08)
	struct UImage* Image_Bg; // 0x318(0x08)
	struct URichTextBlock* RichTextBlock; // 0x320(0x08)
	struct URichTextBlock* RichTextBlock_Title; // 0x328(0x08)
	struct UThrobber* Throbber; // 0x330(0x08)
	struct UVerticalBox* VerticalBox; // 0x338(0x08)
	struct TArray<struct UTexture2D*> Textures; // 0x340(0x10)
	struct UBP_GameSettings_C* Game Settings; // 0x350(0x08)
	struct FString TempString; // 0x358(0x10)
	bool Key; // 0x368(0x01)
	int32_t RandomTemp; // 0x36c(0x04)
	int32_t ImageIndex; // 0x370(0x04)
	int32_t TitleIndex; // 0x374(0x04)
	bool LoadingInfoSettingCompleted; // 0x378(0x01)

	void Get ImageIndex(int32_t RandomIdx, int32_t& Index); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Get ImageIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(enum class ELoadingScreenType Type, struct FSelectLoadingScreenData& OutData); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_26F99F1744F423909EA588B7F2CD8F0A(struct UObject* Loaded); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.OnLoaded_26F99F1744F423909EA588B7F2CD8F0A // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoad(struct TSoftObjectPtr<UTexture2D> Texture); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.AsyncLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveEndAfterLoading(); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ReceiveEndAfterLoading // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Update(struct FSelectLoadingScreenData& Data); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Update // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SetDesc(struct FString Desc); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetDesc // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTitle(struct FText Title); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetTitle // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetImage(struct UTexture2D* Imgae); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.SetImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Load(struct TSoftObjectPtr<UTexture2D> Texture); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Load // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowDesc(float DelayTime); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ShowDesc // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void InternalUpdate(struct FSelectLoadingScreenData Data); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.InternalUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-LoadingScreenWidget(int32_t EntryPoint); // Function BP-LoadingScreenWidget.BP-LoadingScreenWidget_C.ExecuteUbergraph_BP-LoadingScreenWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

