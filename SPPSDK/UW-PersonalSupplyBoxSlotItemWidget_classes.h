// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C
// Size: 0x2cff6a45 (Inherited: 0x2cff6a70)
struct UUW-PersonalSupplyBoxSlotItemWidget_C : UBravoHotelPersonalSupplyBoxSlotItemWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UWidgetAnimation* Over; // 0x478(0x08)
	struct UImage* Bg; // 0x480(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x488(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x490(0x08)
	struct UTextBlock* Cont; // 0x498(0x08)
	struct UImage* DropHoverImage; // 0x4a0(0x08)
	struct UImage* Image; // 0x4a8(0x08)
	struct UImage* Image; // 0x4b0(0x08)
	struct UImage* Image; // 0x4b8(0x08)
	struct UImage* Image; // 0x4c0(0x08)
	struct UImage* Image; // 0x4c8(0x08)
	struct UImage* ItemImage; // 0x4d0(0x08)
	struct UTextBlock* ItemName; // 0x4d8(0x08)
	struct UImage* Lock; // 0x4e0(0x08)
	struct UTextBlock* Price_Value; // 0x4e8(0x08)
	struct UProgressBar* ProgressBar; // 0x4f0(0x08)
	struct UImage* Repair; // 0x4f8(0x08)
	struct UTextBlock* WeaponName; // 0x500(0x08)
	struct UTextBlock* WeaponName; // 0x508(0x08)
	struct UTextBlock* WeaponName; // 0x510(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x518(0x08)
	struct UUW-Inventory_DragItem_C* DraggedWidget; // 0x520(0x08)
	struct FSlateBrush DragItemBrush; // 0x528(0x90)
	bool EnableDrag; // 0x5b8(0x01)
	struct TSoftObjectPtr<UObject> ItemIconImg; // 0x5c0(0x30)
	struct FName AmmorKey; // 0x5f0(0x0c)
	struct FMulticastInlineDelegate OnHoverStateEventDispatcher; // 0x600(0x10)
	struct FMulticastInlineDelegate OnRightClickEventDispatcher; // 0x610(0x10)
	struct FKey SaveKey; // 0x620(0x20)
	int32_t ClickNum; // 0x640(0x04)
	bool RandomPerk; // 0x644(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E(struct UObject* Loaded); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_2F164CF142966D9481C26D9FAFCD6B3E // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_470CC2A647398584A781D89997DE829A(struct UObject* Loaded); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_470CC2A647398584A781D89997DE829A // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_B44424C84F36CE653BE71591D8E4AA63(struct UObject* Loaded); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnLoaded_B44424C84F36CE653BE71591D8E4AA63 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetConsumableItemInfo(struct FSupplyItem& NewConsumableItemData); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetConsumableItemInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoadIconTexture(struct TSoftObjectPtr<UObject> IconTexture); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.AysncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SetLockState(bool IsLock); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetLockState // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEquipState(bool IsUnEquip); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetEquipState // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponInfo(struct FInventoryItemInfo& NewWeaponItemData); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.SetWeaponInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CheckClick(); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.CheckClick // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxSlotItemWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnRightClickEventDispatcher__DelegateSignature(struct UUW-PersonalSupplyBoxSlotItemWidget_C* Slot); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnRightClickEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnHoverStateEventDispatcher__DelegateSignature(bool IsHover); // Function UW-PersonalSupplyBoxSlotItemWidget.UW-PersonalSupplyBoxSlotItemWidget_C.OnHoverStateEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

