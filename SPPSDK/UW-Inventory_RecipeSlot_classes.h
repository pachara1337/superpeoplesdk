// WidgetBlueprintGeneratedClass UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C
// Size: 0x2cff6b12 (Inherited: 0x2cff6aaa)
struct UUW-Inventory_RecipeSlot_C : UUW-Inventory_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* Ani_Tutorial_Glow; // 0x14b8(0x08)
	struct UWidgetAnimation* P_Upgrade_Arrow; // 0x14c0(0x08)
	struct UWidgetAnimation* C_SlotHover_ItemState_Hide; // 0x14c8(0x08)
	struct UWidgetAnimation* C_SlotHover_ItemState_Show; // 0x14d0(0x08)
	struct UWidgetAnimation* Hover_Gold; // 0x14d8(0x08)
	struct UWidgetAnimation* P_SlotHover; // 0x14e0(0x08)
	struct UImage* BGImage; // 0x14e8(0x08)
	struct UCanvasPanel* CanvasPanel_ItemState; // 0x14f0(0x08)
	struct UTextBlock* Count; // 0x14f8(0x08)
	struct UImage* Effect_Craft; // 0x1500(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x1508(0x08)
	struct UImage* HoverImage; // 0x1510(0x08)
	struct UImage* HoverImage_Gold; // 0x1518(0x08)
	struct UImage* IconRepair; // 0x1520(0x08)
	struct UImage* Image; // 0x1528(0x08)
	struct UImage* ItemImage; // 0x1530(0x08)
	struct UTextBlock* ItemNameName; // 0x1538(0x08)
	struct UTextBlock* ItemState_Text; // 0x1540(0x08)
	struct UImage* NeedMaterial; // 0x1548(0x08)
	struct UOverlay* Overlay_Key; // 0x1550(0x08)
	struct UProgressBar* ProgressBar; // 0x1558(0x08)
	struct USizeBox* SizeBox; // 0x1560(0x08)
	struct UTextBlock* TextBlock_ShortCut; // 0x1568(0x08)
	struct UImage* Tutorial_Glow; // 0x1570(0x08)
	struct UUW-MouseRightClick_C* UW-MouseRightClick_Big; // 0x1578(0x08)
	struct UUW-MouseRightClick_C* UW-MouseRightClick_Small; // 0x1580(0x08)
	struct UImage* WeaponItemImage; // 0x1588(0x08)
	bool bGold; // 0x1590(0x01)
	struct UImage* SelectedHoverImage; // 0x1598(0x08)
	struct FLinearColor MedicalBGColor; // 0x15a0(0x10)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x15b0(0x10)
	int32_t SlotIndex; // 0x15c0(0x04)
	struct FName RecipeKey; // 0x15c4(0x0c)
	struct FItemRecipeData RecipeData; // 0x15d0(0x40)
	bool bLeftClicked; // 0x1610(0x01)
	bool CanCraft; // 0x1611(0x01)

	void GetCurrentRecipeKeyType(enum class EKeySettingType& RecipeKeyType); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.GetCurrentRecipeKeyType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnGameUserSettingsApply_Key_Event(struct TArray<enum class EKeySettingType>& KeyTypeList); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnGameUserSettingsApply_Key_Event // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Weapon Infoby Inventory Item Info(bool& bResult, struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Get Weapon Infoby Inventory Item Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetKeyNameFromKey(struct FKey& Key, struct FString& Name, bool& bRet); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.GetKeyNameFromKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetKeyText(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetKeyText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRightClickBig(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetRightClickBig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRightClickSmall(bool IsVisible); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetRightClickSmall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(struct FName RecipeKey, int32_t SlotIndex); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemRarityColor(enum class EItemRarity CurrentSlot, struct UImage* ImageWidget); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetItemRarityColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MouseEnterImpl(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.MouseEnterImpl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponImage_Internal(struct UPaperSprite* IconTexture); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetWeaponImage_Internal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush Set Item Image Internal(struct UPaperSprite* IconTexture); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Set Item Image Internal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsDraging(bool& bResult); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.IsDraging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnRButtonClick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush Set_BGImage_Brush(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Set_BGImage_Brush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush SetItemImage(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetItemImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_DABF06DE406801A7910E4CB19855F653(struct UObject* Loaded); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnLoaded_DABF06DE406801A7910E4CB19855F653 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateCastingDelegateEvent(struct FCastingInfo& CastingInfo, float CastingPercent); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.OnUpdateCastingDelegateEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_RecipeSlot(int32_t EntryPoint); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.ExecuteUbergraph_UW-Inventory_RecipeSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void SetSlotInfo__DelegateSignature(struct AActor* TargetActor, struct FInventoryItemInfo ItemInfo); // Function UW-Inventory_RecipeSlot.UW-Inventory_RecipeSlot_C.SetSlotInfo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

