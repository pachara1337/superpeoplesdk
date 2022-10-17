// WidgetBlueprintGeneratedClass UW-Lobby_ItemName.UW-Lobby_ItemName_C
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a88)
struct UUW-Lobby_ItemName_C : UUserWidget {
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x288(0x08)
	struct UTextBlock* T_PerkName; // 0x290(0x08)
	struct UTextBlock* T_WeaponName; // 0x298(0x08)

	void SetPerkNameVisibility(bool Show); // Function UW-Lobby_ItemName.UW-Lobby_ItemName_C.SetPerkNameVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNameByID(int32_t ItemId); // Function UW-Lobby_ItemName.UW-Lobby_ItemName_C.SetNameByID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetName(struct FText PerkName, struct FText Name, int32_t Rarity); // Function UW-Lobby_ItemName.UW-Lobby_ItemName_C.SetName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

