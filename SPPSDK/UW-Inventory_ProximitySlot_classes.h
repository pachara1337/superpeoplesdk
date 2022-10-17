// WidgetBlueprintGeneratedClass UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C
// Size: 0x2cff6ae9 (Inherited: 0x2cff6aaa)
struct UUW-Inventory_ProximitySlot_C : UUW-Inventory_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* P_Upgrade_Arrow; // 0x14b8(0x08)
	struct UWidgetAnimation* C_SlotHover_ItemState_Hide; // 0x14c0(0x08)
	struct UWidgetAnimation* C_SlotHover_ItemState_Show; // 0x14c8(0x08)
	struct UWidgetAnimation* Hover_Gold; // 0x14d0(0x08)
	struct UWidgetAnimation* P_SlotHover; // 0x14d8(0x08)
	struct UImage* BGImage; // 0x14e0(0x08)
	struct UImage* BGImage; // 0x14e8(0x08)
	struct UCanvasPanel* CanvasPanel_ItemState; // 0x14f0(0x08)
	struct UCanvasPanel* CanvasPanel_Unnecessary; // 0x14f8(0x08)
	struct UTextBlock* Count; // 0x1500(0x08)
	struct UImage* Crate_Default; // 0x1508(0x08)
	struct UImage* Crate_Hover; // 0x1510(0x08)
	struct UProgressBar* DurabilityBar; // 0x1518(0x08)
	struct UImage* fill; // 0x1520(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x1528(0x08)
	struct UImage* HoverImage; // 0x1530(0x08)
	struct UImage* HoverImage_Gold; // 0x1538(0x08)
	struct UImage* HoverImage_Round; // 0x1540(0x08)
	struct UImage* Image; // 0x1548(0x08)
	struct UImage* Image; // 0x1550(0x08)
	struct UImage* Image; // 0x1558(0x08)
	struct UImage* Image; // 0x1560(0x08)
	struct UImage* Image; // 0x1568(0x08)
	struct UImage* Image; // 0x1570(0x08)
	struct UImage* Image; // 0x1578(0x08)
	struct UImage* Image; // 0x1580(0x08)
	struct UImage* Image; // 0x1588(0x08)
	struct UImage* Image_Bindable; // 0x1590(0x08)
	struct UImage* Image_Supply; // 0x1598(0x08)
	struct UImage* ItemImage; // 0x15a0(0x08)
	struct UTextBlock* ItemNameName; // 0x15a8(0x08)
	struct UTextBlock* ItemState_Text; // 0x15b0(0x08)
	struct UImage* KeepedItem_List; // 0x15b8(0x08)
	struct UImage* KeepedItem_ListHover; // 0x15c0(0x08)
	struct UImage* LvColor; // 0x15c8(0x08)
	struct UImage* NeedMaterial; // 0x15d0(0x08)
	struct USizeBox* SizeBox; // 0x15d8(0x08)
	struct UTextBlock* TextBlock_Range; // 0x15e0(0x08)
	struct UCanvasPanel* UpgradeItem; // 0x15e8(0x08)
	struct UImage* UpgradeItem_Arrow01; // 0x15f0(0x08)
	struct UImage* UpgradeItem_Arrow02; // 0x15f8(0x08)
	struct UImage* UpgradeItem_default; // 0x1600(0x08)
	struct UImage* UpgradeItem_Hover; // 0x1608(0x08)
	struct UTextBlock* weapon__; // 0x1610(0x08)
	struct UImage* WeaponColorBg; // 0x1618(0x08)
	struct UImage* WeaponEquipItem_Default; // 0x1620(0x08)
	struct UImage* WeaponEquipItem_Hover; // 0x1628(0x08)
	struct UImage* WeaponItemImage; // 0x1630(0x08)
	struct UTextBlock* WeaponType; // 0x1638(0x08)
	struct ABravoHotelPickup* PickupRef; // 0x1640(0x08)
	struct FInventoryItemInfo DroppedItemInfo; // 0x1648(0xb0)
	struct ABravoHotelDropBoxActor* DropBoxRef; // 0x16f8(0x08)
	bool bGold; // 0x1700(0x01)
	struct UImage* SelectedHoverImage; // 0x1708(0x08)
	struct FBravoHotelWeaponInfo WeaponData; // 0x1710(0xb80)
	struct FLinearColor MedicalBGColor; // 0x2290(0x10)
	int32_t CurCount; // 0x22a0(0x04)
	struct FMulticastInlineDelegate SetSlotInfo; // 0x22a8(0x10)
	struct AActor* TargetActor; // 0x22b8(0x08)
	struct ABravoHotelCharacter* StealableCharacter; // 0x22c0(0x08)
	struct TArray<struct FName> ShowRarityStar; // 0x22c8(0x10)
	struct TArray<struct FName> ShowIconBG; // 0x22d8(0x10)
	bool IsSupplyWeapon; // 0x22e8(0x01)

	void CheckHoverMaterial(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.CheckHoverMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsRoundItemType(bool& bRoundItem); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.IsRoundItemType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetNeededInfo(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetNeededInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitTargetActor(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.InitTargetActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemInfoByInventoryComponent(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemInfoByInventoryComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBindInfo(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetBindInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRarity(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetRarity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemRarityColor(enum class EItemRarity CurrentSlot, struct UImage* ImageWidget); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemRarityColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRatingArrowVisibility(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetRatingArrowVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetChestItem(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetChestItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEquippableAttachment(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetEquippableAttachment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetUpgradeItem(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetUpgradeItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MouseEnterImpl(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.MouseEnterImpl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void WeaponEquipState(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.WeaponEquipState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemName(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemCount(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponImage_Internal(struct UPaperSprite* IconTexture); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetWeaponImage_Internal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush SetItemImage_Internal(struct UPaperSprite* IconTexture); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemImage_Internal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsDraging(bool& bResult); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.IsDraging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetWeaponInfoByInventoryItemInfo(bool& bResult, struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetWeaponInfoByInventoryItemInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnRButtonClick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetCharacterRef(bool& Result, struct ABravoHotelCharacter*& CharacterRef); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetCharacterRef // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponItem(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetWeaponItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set_BGImage_Brush(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Set_BGImage_Brush // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RequestPickupItem(bool RButtonClick, bool& bResult); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.RequestPickupItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FSlateBrush SetItemImage(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetItemImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FText GetItemName(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.GetItemName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB(struct UObject* Loaded); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnLoaded_84877B5B4C424648BFE1AEBDF8BB89BB // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Slotinfo(struct AActor* TargetActor, struct FInventoryItemInfo ItemInfo, bool IsSupplyWeapon); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.Slotinfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeWearableItem(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeWearableItem // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeWeapons(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeWeapons // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeItemInfoDelegate_Event(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnChangeItemInfoDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseCaptureLost(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.OnMouseCaptureLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CheckChangedQuantity(); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.CheckChangedQuantity // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_ProximitySlot(int32_t EntryPoint); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.ExecuteUbergraph_UW-Inventory_ProximitySlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void SetSlotInfo__DelegateSignature(struct AActor* TargetActor, struct FInventoryItemInfo ItemInfo, bool IsSupplyWeapon); // Function UW-Inventory_ProximitySlot.UW-Inventory_ProximitySlot_C.SetSlotInfo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

