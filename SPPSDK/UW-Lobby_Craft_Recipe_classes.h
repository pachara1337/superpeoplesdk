// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C
// Size: 0x2cff6a38 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_Recipe_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCanvasPanel* Canvas_Recipe4; // 0x290(0x08)
	struct UCanvasPanel* Canvas_Recipe5; // 0x298(0x08)
	struct UCanvasPanel* Canvas_Recipe6; // 0x2a0(0x08)
	struct UCanvasPanel* Canvas_Recipe7; // 0x2a8(0x08)
	struct UCanvasPanel* Canvas_Recipe8; // 0x2b0(0x08)
	struct UImage* Image_Area; // 0x2b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_CurrentRecipe; // 0x2c0(0x08)
	struct TArray<struct UUW-Lobby_Craft_Recipe_Item_C*> Recipe_ItemArray; // 0x2c8(0x10)
	struct TArray<struct UUW-Lobby_Craft_Recipe_Item_C*> Recipe_ItemArray2; // 0x2d8(0x10)
	bool HasWeapon; // 0x2e8(0x01)
	struct UUW-ArmoryInput_C* ArmoryInputRef; // 0x2f0(0x08)
	float CurrentOpacity; // 0x2f8(0x04)
	struct UUW-Lobby_Craft_Recipe_Item_C* LastHoveredTargetWidget; // 0x300(0x08)
	struct TArray<struct UCanvasPanel*> RecipeCanvasList; // 0x308(0x10)
	struct TArray<struct UWidgetSwitcher*> RecipeSwitcherList; // 0x318(0x10)
	struct TArray<struct UUW-Lobby_Craft_Recipe_Weapon_C*> RecipeWeaponList; // 0x328(0x10)

	void NotifyUnEquippedMaterialWidget(struct FItemMaterialData MaterialItemData); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.NotifyUnEquippedMaterialWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyEquippedMaterialWidget(struct UUW-Lobby_Craft_Material_Item_C* MaterialItemWidget); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.NotifyEquippedMaterialWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyResetHoveredMaterialWidget(); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.NotifyResetHoveredMaterialWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyHoveredMaterialWidget(int32_t SlotIndex, bool IsHovered); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.NotifyHoveredMaterialWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetRecipeBySlot(int32_t Slot, struct UUW-Lobby_Craft_Recipe_Item_C*& OutRecipe); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.GetRecipeBySlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetCurrentRecipeWeapon(struct UUW-Lobby_Craft_Recipe_Item_C*& OutRecipe); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.GetCurrentRecipeWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetCurrentRecipeItem(int32_t SlotIndex, struct UUW-Lobby_Craft_Recipe_Item_C*& OutRecipe); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.GetCurrentRecipeItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetCurrentRecipeCanvas(struct UCanvasPanel*& OutCanvas); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.GetCurrentRecipeCanvas // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetOpacity(); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.SetOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRecipeInfo(int32_t BaseItemID, int32_t MaterialGroupItemID); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.SetRecipeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ResetDragEvent(); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.ResetDragEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Recipe(int32_t EntryPoint); // Function UW-Lobby_Craft_Recipe.UW-Lobby_Craft_Recipe_C.ExecuteUbergraph_UW-Lobby_Craft_Recipe // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

