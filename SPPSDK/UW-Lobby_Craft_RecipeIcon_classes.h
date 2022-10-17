// WidgetBlueprintGeneratedClass UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C
// Size: 0x2cff6a80 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_RecipeIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x290(0x08)
	struct UImage* Image_Perk; // 0x298(0x08)
	struct UImage* Img_Bg; // 0x2a0(0x08)
	struct UImage* Img_Icon_Default; // 0x2a8(0x08)
	struct UImage* Img_Icon_Wide; // 0x2b0(0x08)
	struct UOverlay* Overlay_Slot; // 0x2b8(0x08)
	struct UOverlay* Overlay_WeaponLevel; // 0x2c0(0x08)
	struct UTextBlock* T_Level; // 0x2c8(0x08)
	struct UTextBlock* T_RecipeNum; // 0x2d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Recipe; // 0x2d8(0x08)
	bool bIsWeaponSlot; // 0x2e0(0x01)
	bool bIsWideMode; // 0x2e1(0x01)
	int32_t MaterialID; // 0x2e4(0x04)
	struct FItemMaterialData ItemMaterialData; // 0x2e8(0x100)
	int32_t WeaponId; // 0x3e8(0x04)
	struct TArray<int32_t> OptionList; // 0x3f0(0x10)
	struct FItemWeapon ItemWeaponData; // 0x400(0x150)
	struct FBravoHotelWeaponInfo WeaponInfo; // 0x550(0xb80)
	struct FInventoryItemInfo WeaponInventoryItemInfo; // 0x10d0(0xb0)

	void GetSlotNum(int32_t& CurrentSlotNum); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.GetSlotNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetRecipeID(int32_t& RecipeID); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.GetRecipeID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetMainPerkID(int32_t& MainPerkID); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.GetMainPerkID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetWideMode(bool IsWide); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.SetWideMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsWeaponSlot(bool& IsWeaponSlot); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.IsWeaponSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetInfoByWeaponData(int32_t WeaponId, struct TArray<int32_t>& WeaponOptions, bool IsWideMode, bool IsShowRarity); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.SetInfoByWeaponData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfoByMaterialData(int32_t MaterialID, struct TArray<int32_t>& options, bool IsWideMode, bool IsShowRarity); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.SetInfoByMaterialData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRecipeInfo(int32_t Rarity, int32_t Level, int32_t Slot, int32_t PerkID, struct TSoftObjectPtr<UObject> IconTexture); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.SetRecipeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_95B31B834B18AA0E61A2DFA8A52A6DAA(struct UObject* Loaded); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.OnLoaded_95B31B834B18AA0E61A2DFA8A52A6DAA // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_896E055742DE6277C16BD9A37259EC7D(struct UObject* Loaded); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.OnLoaded_896E055742DE6277C16BD9A37259EC7D // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadImg(struct TSoftObjectPtr<UObject> Object); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.AsyncLoadImg // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadPerkImg(struct TSoftObjectPtr<UObject> Object); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.AsyncLoadPerkImg // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnHovered(struct UWidget* HoveredWidget); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.OnHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_RecipeIcon(int32_t EntryPoint); // Function UW-Lobby_Craft_RecipeIcon.UW-Lobby_Craft_RecipeIcon_C.ExecuteUbergraph_UW-Lobby_Craft_RecipeIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

