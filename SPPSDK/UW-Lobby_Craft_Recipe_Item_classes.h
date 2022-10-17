// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C
// Size: 0x2cff6a50 (Inherited: 0x2cff6a8a)
struct UUW-Lobby_Craft_Recipe_Item_C : UUW-Lobby_Craft_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x298(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity_NotOwn; // 0x2a0(0x08)
	struct UImage* Image_Border; // 0x2a8(0x08)
	struct UImage* Image_Hovered; // 0x2b0(0x08)
	struct URetainerBox* RetainerBox; // 0x2b8(0x08)
	struct UTextBlock* T_CurrentCount; // 0x2c0(0x08)
	struct UTextBlock* T_MaxCount; // 0x2c8(0x08)
	struct UUW-Lobby_Craft_RecipeIcon_C* UW-Lobby_Craft_RecipeIcon; // 0x2d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Rarity; // 0x2d8(0x08)
	struct FItemMaterialData BaseMaterialInfo; // 0x2e0(0x100)
	struct FItemWeapon BaseWeaponInfo; // 0x3e0(0x150)
	int32_t BaseWeaponID; // 0x530(0x04)
	int32_t Rarity; // 0x534(0x04)
	int32_t BorderCount; // 0x538(0x04)
	struct UUW-Lobby_Craft_Material_Item_C* EquippedMaterialItemWidget; // 0x540(0x08)
	struct UUW-Lobby_Armory_Recipe_C* ArmoryRecipeWidgetRef; // 0x548(0x08)

	void SetHovered(bool IsHovered); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfoByBaseInfo(bool WeaponSlot); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetInfoByBaseInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsWeaponSlot(bool& IsWeaponSlot); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.IsWeaponSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetRecipeRarity(int32_t Rarity); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetRecipeRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEquipped(bool NewEquipped); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnRButtonClick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetArmoryRecipeWidget(struct UUW-Lobby_Armory_Recipe_C*& ArmoryRecipeWidgetRef); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.GetArmoryRecipeWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void UpdateBorderInfo(); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.UpdateBorderInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUnEquipped(); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnUnEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnEquipped(struct UUW-Lobby_Craft_Material_Item_C* MaterialItemWidget); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnEquipped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TryUnEquip(); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.TryUnEquip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetBorder(); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.ResetBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBorder(bool Show); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNotOwnRarityVisibility(int32_t Rarity); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetNotOwnRarityVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponInfo(int32_t WeaponId, struct TArray<int32_t>& WeaponOptions, int32_t Rarity, bool IsWideMode); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetWeaponInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBaseWeaponInfo(struct FItemWeapon ItemWeaponInfo, int32_t BaseWeaponID); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetBaseWeaponInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMaterialInfo(int32_t MaterialID, struct TArray<int32_t>& options, int32_t Rarity); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetMaterialInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBaseMaterialInfo(struct FItemMaterialData ItemMaterialData, int32_t MaxCount); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.SetBaseMaterialInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Recipe_Item(int32_t EntryPoint); // Function UW-Lobby_Craft_Recipe_Item.UW-Lobby_Craft_Recipe_Item_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

