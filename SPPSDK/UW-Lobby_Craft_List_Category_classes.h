// WidgetBlueprintGeneratedClass UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C
// Size: 0x2cff6b20 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_List_Category_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button_Category; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel_SlotList; // 0x298(0x08)
	struct UImage* Image_New; // 0x2a0(0x08)
	struct UTextBlock* T_CategoryName; // 0x2a8(0x08)
	struct UUW-Lobby_Craft_List_Category_Slot_C* UW-Lobby_RecipeList_Category_Item; // 0x2b0(0x08)
	struct UUW-Lobby_Craft_List_Category_Slot_C* UW-Lobby_RecipeList_Category_Item; // 0x2b8(0x08)
	struct UUW-Lobby_Craft_List_Category_Slot_C* UW-Lobby_RecipeList_Category_Item; // 0x2c0(0x08)
	struct UVerticalBox* VerticalBox_ItemList; // 0x2c8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Own; // 0x2d0(0x08)
	struct FString WeaponType; // 0x2d8(0x10)
	bool IsPressed; // 0x2e8(0x01)
	bool IsOwn; // 0x2e9(0x01)
	bool IsOwnAny; // 0x2ea(0x01)
	struct UUW-Lobby_Craft_List_C* ParentWidgetRef; // 0x2f0(0x08)
	float SlotSize; // 0x2f8(0x04)
	float CurrentListSize; // 0x2fc(0x04)
	struct UPaperSprite* DefaultImage; // 0x300(0x08)
	struct UPaperSprite* HoverImage; // 0x308(0x08)
	struct UPaperSprite* PressedDefaultImage; // 0x310(0x08)
	struct UPaperSprite* PressedHoverImage; // 0x318(0x08)
	char pad_2CFF6B1B[0x5]; // 0x2cff6b1b(0x05)

	void SetNew(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.SetNew // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetButtonImage(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.SetButtonImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckSlotAnim(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CheckSlotAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckOwn(bool& OutIsOwn, bool& IsOwnAny); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CheckOwn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCraftingWeapon(struct FItemCrafting& CraftingID); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.AddCraftingWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitCategoryInfo(struct FItemCrafting& CraftingInfo, struct UUW-Lobby_Craft_List_C* ParentWidgetRef); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.InitCategoryInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CloseList(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.CloseList // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OpenList(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.OpenList // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_List_Category(int32_t EntryPoint); // Function UW-Lobby_Craft_List_Category.UW-Lobby_Craft_List_Category_C.ExecuteUbergraph_UW-Lobby_Craft_List_Category // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

