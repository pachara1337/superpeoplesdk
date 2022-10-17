// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C
// Size: 0x2cff6a88 (Inherited: 0x2cff6a88)
struct UUW-PersonalSupplyBoxWeaponInfoWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTextBlock* ??; // 0x290(0x08)
	struct UImage* AmmoImage; // 0x298(0x08)
	struct UTextBlock* AmmoText; // 0x2a0(0x08)
	struct UButton* Button; // 0x2a8(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2b0(0x08)
	struct UHorizontalBox* HorizontalBox_Perk; // 0x2b8(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x2c0(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x2c8(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UTextBlock* Reinforce; // 0x318(0x08)
	struct UTextBlock* TextBlock; // 0x320(0x08)
	struct UUW-Inventory_WeaponPerkSlot_C* UW-Inventory_WeaponPerkSlot; // 0x328(0x08)
	struct UUW-Inventory_WeaponPerkSlot_C* UW-Inventory_WeaponPerkSlot_C; // 0x330(0x08)
	struct UUW-Inventory_WeaponPerkSlot_C* UW-Inventory_WeaponPerkSlot_C; // 0x338(0x08)
	struct UImage* WeaponBg; // 0x340(0x08)
	struct UImage* WeaponImage01; // 0x348(0x08)
	struct UTextBlock* WeaponName; // 0x350(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x358(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x360(0x08)
	struct UUW-Inventory_DragItem_C* DraggedWidget; // 0x368(0x08)
	struct FInventoryItemInfo WeaponData; // 0x370(0xb0)
	struct FMulticastInlineDelegate OnDropEventDispatcher; // 0x420(0x10)
	struct FName AmmorKey; // 0x430(0x0c)
	struct FMulticastInlineDelegate ShowTooltipEventDispatcher; // 0x440(0x10)
	bool IsDefaultWeapon; // 0x450(0x01)
	int32_t ClickNum; // 0x454(0x04)
	struct FMulticastInlineDelegate OnDefaultWeaponEventDispatcher; // 0x458(0x10)
	struct FKey SaveKey; // 0x468(0x20)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_6AFA1CC544727820BD519DB93268114A(struct UObject* Loaded); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnLoaded_6AFA1CC544727820BD519DB93268114A // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_DA28423C4C35AED589A0BB865F95D139(struct UObject* Loaded); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnLoaded_DA28423C4C35AED589A0BB865F95D139 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_86F152F14AEF1FE17A6B9A85D76B376A(struct UObject* Loaded); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnLoaded_86F152F14AEF1FE17A6B9A85D76B376A // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetData(struct FInventoryItemInfo& WeaponItem, bool IsDefaultWeapon, bool IsSetRarityImage); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetData // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SetDurability(int32_t Durability); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetDurability // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDefaultWeapon(bool IsDefaultWeapon); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.SetDefaultWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckClick(); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.CheckClick // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PersonalSupplyBoxWeaponInfoWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxWeaponInfoWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnDefaultWeaponEventDispatcher__DelegateSignature(struct FInventoryItemInfo Weapon); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDefaultWeaponEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowTooltipEventDispatcher__DelegateSignature(bool IsShow, struct UButton* Widget); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.ShowTooltipEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDropEventDispatcher__DelegateSignature(struct FInventoryItemInfo WeaponData); // Function UW-PersonalSupplyBoxWeaponInfoWidget.UW-PersonalSupplyBoxWeaponInfoWidget_C.OnDropEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

