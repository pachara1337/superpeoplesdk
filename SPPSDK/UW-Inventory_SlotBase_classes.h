// WidgetBlueprintGeneratedClass UW-Inventory_SlotBase.UW-Inventory_SlotBase_C
// Size: 0x2cff6aaa (Inherited: 0x2cff6a88)
struct UUW-Inventory_SlotBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct ABravoHotelPlayerController* PlayerController; // 0x290(0x08)
	struct FInventoryItemInfo InventoryItemInfo; // 0x298(0xb0)
	struct FInventoryItemDetailInfo InventoryItemDetailInfo; // 0x348(0x530)
	struct FBravoHotelWeaponInfo WeaponInfo; // 0x878(0xb80)
	struct UUW-Inventory_ItemSlotHover_C* ItemSlotHoverWidget; // 0x13f8(0x08)
	struct UUW-InventoryWidget_C* InventoryWidget; // 0x1400(0x08)
	struct UUW-Inventory_DragItem_C* DraggedWidget; // 0x1408(0x08)
	enum class ItemWidgetDragType InventorySlotWidgetKind; // 0x1410(0x01)
	struct FSlateBrush DragItemBrush; // 0x1418(0x90)
	bool RButtonDown; // 0x14a8(0x01)
	bool bEpuipped; // 0x14a9(0x01)

	void IsEquipped(bool& Return); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.IsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2bad3b0
	void SetInventoryWidget(); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetOverrideItemID(struct FName& ItemId); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetOverrideItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsLockSlot(bool& Lock); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.IsLockSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInventoryItemDetailInfoByItemInfo(struct FInventoryItemInfo InventoryItemInfo, bool& bResult); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemDetailInfoByItemInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DragEnd(); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.DragEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DragStart(bool LockSlot, struct UDragDropOperation*& Operation); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.DragStart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetInventoryComponent(bool& bResult, struct UPlayerInventoryComponent*& InventoryComponent); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInventoryItemInfo(struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetWeaponInfo(struct FBravoHotelWeaponInfo& WeaponInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetWeaponInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetWeaponInfo(struct FBravoHotelWeaponInfo WeaponInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetWeaponInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnRButtonClick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetInventoryItemDetailInfo(struct FInventoryItemDetailInfo& InventoryItemDeailInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryItemDetailInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetInventoryItemInfo(struct FInventoryItemInfo& InventoryItemInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetInventoryItemInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetInventoryItemDetailInfo(struct FInventoryItemDetailInfo InventoryItemDetailInfo); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemDetailInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInventoryItemInfoByPickup(struct ABravoHotelPickup* Pickup, bool& bResult); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetInventoryItemInfoByPickup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPlayerController(); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetPlayerController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemSlotHoverWidget(struct UUW-Inventory_ItemSlotHover_C* ItemSlotHoverWidget, struct UUW-Inventory_ItemSlotHover_C*& Out); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.SetItemSlotHoverWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPlayerController(bool& bResult, struct ABravoHotelPlayerController*& Out); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetItemSlotHoverWidget(bool& bResult, struct UUW-Inventory_ItemSlotHover_C*& Out); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.GetItemSlotHoverWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD(struct UObject* Loaded); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.OnLoaded_29D4AD794F40F3517E11F7A14C55D6DD // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.AysncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_SlotBase(int32_t EntryPoint); // Function UW-Inventory_SlotBase.UW-Inventory_SlotBase_C.ExecuteUbergraph_UW-Inventory_SlotBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

