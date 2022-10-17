// WidgetBlueprintGeneratedClass UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C
// Size: 0x2cff6a8c (Inherited: 0x2cff6aaa)
struct UUW-Inventory_CarriedSlot_C : UUW-Inventory_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* CompletLock; // 0x14b8(0x08)
	struct UWidgetAnimation* Ani_Tutorial_Glow; // 0x14c0(0x08)
	struct UWidgetAnimation* C_Slot_Up_Arrow; // 0x14c8(0x08)
	struct UWidgetAnimation* C_SlotHover_ItemState_Hide; // 0x14d0(0x08)
	struct UWidgetAnimation* C_SlotHover_ItemState_Show; // 0x14d8(0x08)
	struct UWidgetAnimation* C_SlotHover; // 0x14e0(0x08)
	struct UImage* BGImage; // 0x14e8(0x08)
	struct UImage* BGImage; // 0x14f0(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x14f8(0x08)
	struct UCanvasPanel* CanvasPanel_ItemState; // 0x1500(0x08)
	struct UTextBlock* Count120; // 0x1508(0x08)
	struct UImage* Crate_Default; // 0x1510(0x08)
	struct UImage* Crate_Hover; // 0x1518(0x08)
	struct UImage* Effect_Booster; // 0x1520(0x08)
	struct UImage* Effect_Capsule; // 0x1528(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x1530(0x08)
	struct UImage* HoverImage; // 0x1538(0x08)
	struct UImage* HoverImage_Round; // 0x1540(0x08)
	struct UImage* Image; // 0x1548(0x08)
	struct UImage* Image; // 0x1550(0x08)
	struct UImage* Image; // 0x1558(0x08)
	struct UImage* Image; // 0x1560(0x08)
	struct UImage* Image; // 0x1568(0x08)
	struct UImage* Image; // 0x1570(0x08)
	struct UImage* Image; // 0x1578(0x08)
	struct UImage* Image; // 0x1580(0x08)
	struct UImage* Image_Bindable; // 0x1588(0x08)
	struct UImage* Image_Supply; // 0x1590(0x08)
	struct UImage* ItemImage; // 0x1598(0x08)
	struct UTextBlock* ItemState_Text; // 0x15a0(0x08)
	struct UImage* KeepedItem_List; // 0x15a8(0x08)
	struct UImage* KeepedItem_ListHover; // 0x15b0(0x08)
	struct UImage* LvColor; // 0x15b8(0x08)
	struct UImage* Motion; // 0x15c0(0x08)
	struct UProgressBar* ProgressBar; // 0x15c8(0x08)
	struct UImage* RecipeLock; // 0x15d0(0x08)
	struct USizeBox* SizeBox; // 0x15d8(0x08)
	struct UTextBlock* TextBlock; // 0x15e0(0x08)
	struct UTextBlock* Time; // 0x15e8(0x08)
	struct UImage* Tutorial_Glow; // 0x15f0(0x08)
	struct UUW-MouseRightClick_C* UW-MouseRightClick_Big; // 0x15f8(0x08)
	struct UUW-MouseRightClick_C* UW-MouseRightClick_Small; // 0x1600(0x08)
	struct UImage* WeaponColorBg; // 0x1608(0x08)
	struct UImage* WeaponEquipItem_Default; // 0x1610(0x08)
	struct UImage* WeaponEquipItem_Hover; // 0x1618(0x08)
	struct UImage* WeaponItemImage; // 0x1620(0x08)
	int32_t InventoryItemInfoIndex; // 0x1628(0x04)
	struct FLinearColor MedicalBGColor; // 0x162c(0x10)
	int32_t CurCount; // 0x163c(0x04)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x1640(0x10)
	bool CanUseCapsule; // 0x1650(0x01)
	bool CanUseBooster; // 0x1651(0x01)
	struct UImage* SelectedHoverImage; // 0x1658(0x08)
	struct TArray<struct FName> ShowRarityStar; // 0x1660(0x10)
	struct TArray<struct FName> ShowIconBG; // 0x1670(0x10)
	bool CheckUpdateRecipeTime; // 0x1680(0x01)
	float PickedTime; // 0x1684(0x04)
	float LockTime; // 0x1688(0x04)

	void CheckBoosterItem(bool& IsBoost, struct FLinearColor& OutColor, struct UTexture*& OutTexture); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CheckBoosterItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBoosterItem(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetBoosterItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsDraging(bool& bResult); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.IsDraging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsRoundItemType(bool& bRoundItem); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.IsRoundItemType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetRightClickSmall(bool IsVisible); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRightClickSmall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRightClickBig(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRightClickBig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCapsuleItem(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetCapsuleItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool CanUseCapsuleItem(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CanUseCapsuleItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckCapsuleItem(bool& IsCapsule, struct FLinearColor& Color); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CheckCapsuleItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRarity(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetRarity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBindInfo(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetBindInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	float GetPercent(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetPercent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CalTargetHealth(bool Hover); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CalTargetHealth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetChestItem(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetChestItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEquippableAttachment(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetEquippableAttachment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MouseEnterImpl(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.MouseEnterImpl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void WeaponEquipState(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.WeaponEquipState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemCount(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemName(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DropQuantity(int32_t Quantity); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.DropQuantity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush Set_WeaponItemImage_Brush(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Set_WeaponItemImage_Brush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetWeaponInfoByInventoryItemInfo(bool& bResult, struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetWeaponInfoByInventoryItemInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnRButtonClick // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set_BGImage_Brush(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Set_BGImage_Brush // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetCarriedList(bool& bResult); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.ResetCarriedList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush SetItemImage(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetItemImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DropAll(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.DropAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FText GetCount(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FText GetItemName(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.GetItemName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59(struct UObject* Loaded); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnLoaded_2B134E7141F4FDBD4FA7CCAEDA8B0F59 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Slotinfo(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Slotinfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeWeapons(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnChangeWeapons // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void CheckRecipeItem(struct FInventoryItemDetailInfo ItemInfo); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.CheckRecipeItem // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateRecipeTime(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.UpdateRecipeTime // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_CarriedSlot(int32_t EntryPoint); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.ExecuteUbergraph_UW-Inventory_CarriedSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void SetSlotInfo__DelegateSignature(); // Function UW-Inventory_CarriedSlot.UW-Inventory_CarriedSlot_C.SetSlotInfo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

