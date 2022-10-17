// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C
// Size: 0x2cff6b1c (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_Recipe_Weapon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity_NotOwn; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_Weapon_6Grade_bg; // 0x2a8(0x08)
	struct UImage* Img_Icon; // 0x2b0(0x08)
	struct URetainerBox* RetainerBox; // 0x2b8(0x08)
	struct UTextBlock* T_CurrentCount; // 0x2c0(0x08)
	struct UTextBlock* T_Level; // 0x2c8(0x08)
	struct UTextBlock* T_MaxCount; // 0x2d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Rarity; // 0x2d8(0x08)
	int32_t ItemWeaponID; // 0x2e0(0x04)
	struct FBravoHotelWeaponInfo WeaponInfo; // 0x2e8(0xb80)
	struct FInventoryItemInfo WeaponItemInfo; // 0xe68(0xb0)
	int32_t CurrentCount; // 0xf18(0x04)

	void SetOwnInfo(); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetOwnInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNotOwnRarityVisibility(int32_t Rarity); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetNotOwnRarityVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOwnCount(); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetOwnCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponInfo(struct FItemWeapon& ItemWeaponInfo, int32_t ItemWeaponID); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.SetWeaponInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_F85F803F469568E218532398152F6C76(struct UObject* Loaded); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.OnLoaded_F85F803F469568E218532398152F6C76 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadImg(struct TSoftObjectPtr<UObject> Object); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.AsyncLoadImg // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Recipe_Weapon(int32_t EntryPoint); // Function UW-Lobby_Craft_Recipe_Weapon.UW-Lobby_Craft_Recipe_Weapon_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe_Weapon // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

