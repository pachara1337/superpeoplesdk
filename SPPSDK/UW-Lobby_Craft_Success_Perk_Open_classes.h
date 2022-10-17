// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C
// Size: 0x2cff6ad4 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_Success_Perk_Open_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Fade_in_Black_Bg; // 0x290(0x08)
	struct UWidgetAnimation* Anim_ShowPerk; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Img_Opened; // 0x2a8(0x08)
	struct UTextBlock* T_Desc; // 0x2b0(0x08)
	struct UTextBlock* T_Name; // 0x2b8(0x08)
	struct UUW-Lobby_Craft_Success_Perk_Slot_C* UW-Lobby_Craft_Success_Perk_Slot; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* RarityBGMaterialInstance; // 0x2c8(0x08)
	float CurrentAnim; // 0x2d0(0x04)

	void SetItemOption(struct FItemOption& ItemOption); // Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.SetItemOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_Open.UW-Lobby_Craft_Success_Perk_Open_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Open // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

