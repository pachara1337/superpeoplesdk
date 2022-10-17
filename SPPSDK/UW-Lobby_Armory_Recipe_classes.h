// WidgetBlueprintGeneratedClass UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C
// Size: 0x2cff6a90 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Armory_Recipe_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button_Crapting_Btn; // 0x290(0x08)
	struct UButton* Button_Crapting_Btn_dis; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Img_Gold; // 0x2a8(0x08)
	struct UImage* Img_Gold_Inert; // 0x2b0(0x08)
	struct UImage* Img_Gold_Inert; // 0x2b8(0x08)
	struct URichTextBlock* RichTextBlock; // 0x2c0(0x08)
	struct UTextBlock* T_GoldCost; // 0x2c8(0x08)
	struct UTextBlock* T_GoldCost; // 0x2d0(0x08)
	struct UUW-Lobby_Craft_AdditionalOptions_C* UW-Lobby_Craft_AdditionalOptions; // 0x2d8(0x08)
	struct UUW-Lobby_Craft_GuideWidget_C* UW-Lobby_Craft_GuideWidget; // 0x2e0(0x08)
	struct UUW-Lobby_Craft_List_C* UW-Lobby_Craft_List; // 0x2e8(0x08)
	struct UUW-Lobby_Craft_Material_C* UW-Lobby_Craft_Material; // 0x2f0(0x08)
	struct UUW-Lobby_Craft_Recipe_C* UW-Lobby_Weapon_Recipe; // 0x2f8(0x08)
	struct UUW-Lobby_WeaponInfo_C* UW-Lobby_WeaponInfo; // 0x300(0x08)
	struct UUW-Lobby_WeaponInfo_RandomOption_C* UW-Lobby_WeaponInfo_RandomOption; // 0x308(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x310(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Gold; // 0x318(0x08)
	struct FItemCrafting CraftingInfo; // 0x320(0x148)
	struct TArray<int32_t> CraftRecipeList; // 0x468(0x10)
	struct TArray<struct UUW-Lobby_Craft_Material_Item_C*> EquippedRecipeList; // 0x478(0x10)
	struct UUW-Lobby_Craft_List_Category_Slot_C* SelectedButton; // 0x488(0x08)

	void RequestCraftWeapon(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.RequestCraftWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateBuffInfos(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.UpdateBuffInfos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeEquipList(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.OnChangeEquipList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckAllEquipped(bool& SUCCESS); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.CheckAllEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ResetEquipList(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.ResetEquipList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TryUnEquipByRecipe(struct UUW-Lobby_Craft_Material_Item_C* MaterialItemWidget, bool& SUCCESS); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.TryUnEquipByRecipe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TryEquipByMaterial(struct UUW-Lobby_Craft_Material_Item_C* MaterialItemWidget, bool& SUCCESS); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.TryEquipByMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyResetHoveredMaterialWidget(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.NotifyResetHoveredMaterialWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyHoveredMaterialWidget(int32_t SlotIndex, bool IsHovered); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.NotifyHoveredMaterialWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetCraftingWeaponRarity(int32_t& OutRarity); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.GetCraftingWeaponRarity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnChangedArmoryTab(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.OnChangedArmoryTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetButtonEnabled(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SetButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetRecipeInfos(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.ResetRecipeInfos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCraftInfo(struct FItemCrafting InCraftingInfo); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.UpdateCraftInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCraftingInfo(struct UUW-Lobby_Craft_List_Category_Slot_C* ButtonRef); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SetCraftingInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void RequestCraftWeapon_Old(int32_t WeaponIndex, struct FString ItemId); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.RequestCraftWeapon_Old // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SelectCancel(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.SelectCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Armory_Recipe(int32_t EntryPoint); // Function UW-Lobby_Armory_Recipe.UW-Lobby_Armory_Recipe_C.ExecuteUbergraph_UW-Lobby_Armory_Recipe // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

