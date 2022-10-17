// WidgetBlueprintGeneratedClass UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C
// Size: 0x2cff6acc (Inherited: 0x2cff6aaa)
struct UUW-Inventory_MaterialSlot_C : UUW-Inventory_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* Anim_LoopHintMaterial; // 0x14b8(0x08)
	struct UWidgetAnimation* Anim_Upgrade; // 0x14c0(0x08)
	struct UWidgetAnimation* P_Upgrade_Arrow; // 0x14c8(0x08)
	struct UWidgetAnimation* C_SlotHover_ItemState_Hide; // 0x14d0(0x08)
	struct UWidgetAnimation* C_SlotHover_ItemState_Show; // 0x14d8(0x08)
	struct UWidgetAnimation* Hover_Gold; // 0x14e0(0x08)
	struct UWidgetAnimation* P_SlotHover; // 0x14e8(0x08)
	struct UImage* BGImage; // 0x14f0(0x08)
	struct UCanvasPanel* CanvasPanel_ItemState; // 0x14f8(0x08)
	struct UCanvasPanel* CanvasPanel_Unnecessary; // 0x1500(0x08)
	struct UTextBlock* Count; // 0x1508(0x08)
	struct UTextBlock* Count_Icon; // 0x1510(0x08)
	struct UImage* fill; // 0x1518(0x08)
	struct UImage* Hint; // 0x1520(0x08)
	struct UImage* HoverImage; // 0x1528(0x08)
	struct UImage* HoverImage_Gold; // 0x1530(0x08)
	struct UImage* Image; // 0x1538(0x08)
	struct UImage* Image; // 0x1540(0x08)
	struct UImage* Image; // 0x1548(0x08)
	struct UImage* ItemImage; // 0x1550(0x08)
	struct UTextBlock* ItemNameName; // 0x1558(0x08)
	struct UTextBlock* ItemState_Text; // 0x1560(0x08)
	struct UImage* LvColor; // 0x1568(0x08)
	struct UImage* NeedMaterial; // 0x1570(0x08)
	struct UImage* OverBg; // 0x1578(0x08)
	struct UProgressBar* ProgressBar; // 0x1580(0x08)
	struct USizeBox* SizeBox; // 0x1588(0x08)
	struct UImage* WeaponItemImage; // 0x1590(0x08)
	bool bGold; // 0x1598(0x01)
	struct UImage* SelectedHoverImage; // 0x15a0(0x08)
	struct FLinearColor MedicalBGColor; // 0x15a8(0x10)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x15b8(0x10)
	int32_t SlotIndex; // 0x15c8(0x04)

	void Get Weapon Infoby Inventory Item Info(bool& bResult, struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Get Weapon Infoby Inventory Item Info // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CanChange(bool& Result); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.CanChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void DropQuantity(int32_t Quantity); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.DropQuantity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(struct FInventoryItemInfo ItemInfo); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemRarityColor(enum class EItemRarity CurrentSlot, struct UImage* ImageWidget); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetItemRarityColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MouseEnterImpl(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.MouseEnterImpl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponImage_Internal(struct UPaperSprite* IconTexture); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetWeaponImage_Internal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush Set Item Image Internal(struct UPaperSprite* IconTexture); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Set Item Image Internal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsDraging(bool& bResult); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.IsDraging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnRButtonClick // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush Set_BGImage_Brush(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Set_BGImage_Brush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush SetItemImage(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetItemImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C(struct UObject* Loaded); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnLoaded_844D1FE84342B1FFB080F8A6CC651A2C // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateCastingDelegateEvent(struct FCastingInfo& CastingInfo, float CastingPercent); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnUpdateCastingDelegateEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Enable(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Enable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Disable(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.Disable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CompleteCombine(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.CompleteCombine // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverRecipeTree(); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.HoverRecipeTree // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_MaterialSlot(int32_t EntryPoint); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.ExecuteUbergraph_UW-Inventory_MaterialSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void SetSlotInfo__DelegateSignature(struct AActor* TargetActor, struct FInventoryItemInfo ItemInfo); // Function UW-Inventory_MaterialSlot.UW-Inventory_MaterialSlot_C.SetSlotInfo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

