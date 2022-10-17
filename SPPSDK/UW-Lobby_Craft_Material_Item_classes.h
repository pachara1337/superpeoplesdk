// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a8a)
struct UUW-Lobby_Craft_Material_Item_C : UUW-Lobby_Craft_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x298(0x08)
	struct UImage* Image_Equipped; // 0x2a0(0x08)
	struct UImage* Image_Hovered; // 0x2a8(0x08)
	struct UTextBlock* T_CurrentCount; // 0x2b0(0x08)
	struct UUW-Lobby_Craft_RecipeIcon_C* UW-Lobby_Craft_RecipeIcon; // 0x2b8(0x08)
	struct FResponse_MaterialList_Data ResponseMaterialData; // 0x2c0(0x80)
	struct FResponse_Weapon_List_Data ResponseWeaponData; // 0x340(0x88)
	int32_t CurrentCount; // 0x3c8(0x04)
	struct UUW-Lobby_Armory_Recipe_C* ArmoryRecipeWidgetRef; // 0x3d0(0x08)

	void GetOptions(struct TArray<int32_t>& OutOptions); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.GetOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetCountInfo(int32_t NewCount); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.SetCountInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMainPerkID(int32_t& MainPerkID); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.GetMainPerkID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetSlotNum(int32_t& CurrentSlotNum); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.GetSlotNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsWeaponSlot(bool& IsWeaponSlot); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.IsWeaponSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetRecipeID(int32_t& RecipeID); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.GetRecipeID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUnEquipped(); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.OnUnEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnEquipped(); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.OnEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TryUnEquip(bool& SUCCESS); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.TryUnEquip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TryEquip(bool& SUCCESS); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.TryEquip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetHovered(bool IsHovered); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetArmoryRecipeWidget(struct UUW-Lobby_Armory_Recipe_C*& ArmoryRecipeWidgetRef); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.GetArmoryRecipeWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.OnRButtonClick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOwnCount(); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.SetOwnCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetMaterial(); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.ResetMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponInfo(struct FResponse_Weapon_List_Data ResponseWeaponData); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.SetWeaponInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMaterialInfo(struct FResponse_MaterialList_Data ResponseMaterialData); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.SetMaterialInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Material_Item(int32_t EntryPoint); // Function UW-Lobby_Craft_Material_Item.UW-Lobby_Craft_Material_Item_C.ExecuteUbergraph_UW-Lobby_Craft_Material_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

