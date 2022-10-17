// WidgetBlueprintGeneratedClass UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C
// Size: 0x2cff6a79 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_List_Category_Slot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button_Weapon; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image_Item_Weapon; // 0x2e0(0x08)
	struct UImage* Image_New; // 0x2e8(0x08)
	struct UTextBlock* T_Name; // 0x2f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Own; // 0x2f8(0x08)
	struct UUW-Lobby_Craft_List_Category_C* ParentWidgetRef; // 0x300(0x08)
	struct FItemCrafting CraftingInfo; // 0x308(0x148)
	struct TArray<int32_t> CraftMaterialItemIDList; // 0x450(0x10)
	int32_t CraftMaterialWeaponItemID; // 0x460(0x04)
	bool IsOwn; // 0x464(0x01)
	bool IsOwnAny; // 0x465(0x01)
	struct UPaperSprite* DefaultImage; // 0x468(0x08)
	struct UPaperSprite* PressedDefaultImage; // 0x470(0x08)
	bool IsNew; // 0x478(0x01)

	void SetNew(bool IsNew); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetButtonEnabled(bool Enabled); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetButtonEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MakeCraftMaterialItemIDList(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.MakeCraftMaterialItemIDList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckOwn(bool& OutIsOwn, bool& OutIsOwnAny); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.CheckOwn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponInfo(struct FItemCrafting& CraftingInfo); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.SetWeaponInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_01779F6241D23AEE08F8DCBEA1B49997(struct UObject* Loaded); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.OnLoaded_01779F6241D23AEE08F8DCBEA1B49997 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadImg(struct TSoftObjectPtr<UObject> Object); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.AsyncLoadImg // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnClickedWeapon(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.OnClickedWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetButtonEnabled(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.ResetButtonEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_List_Category_Slot(int32_t EntryPoint); // Function UW-Lobby_Craft_List_Category_Slot.UW-Lobby_Craft_List_Category_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_List_Category_Slot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

