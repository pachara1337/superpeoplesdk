// WidgetBlueprintGeneratedClass UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a88)
struct UUW-Inventory_CharacterPreView_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* FadeIn; // 0x290(0x08)
	struct UImage* CharacterPreviewImage; // 0x298(0x08)
	struct UImage* Image_CharacterSilBody; // 0x2a0(0x08)
	struct ABravoHotelPlayerController* ControllerRef; // 0x2a8(0x08)

	void GetCharacterPreviewRef(bool& Result, struct ABP-CharacterRecording_C*& CharacterPreviewRef); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.GetCharacterPreviewRef // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetPreviewVisible(bool bVisible); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.SetPreviewVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPlayAnimation(); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.SetPlayAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResizePreviewRenderTarget(); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.ResizePreviewRenderTarget // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_CharacterPreView(int32_t EntryPoint); // Function UW-Inventory_CharacterPreView.UW-Inventory_CharacterPreView_C.ExecuteUbergraph_UW-Inventory_CharacterPreView // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

