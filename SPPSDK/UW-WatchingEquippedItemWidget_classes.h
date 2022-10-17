// WidgetBlueprintGeneratedClass UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6a88)
struct UUW-WatchingEquippedItemWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UUW-Inventory_EquippedSlot_C* ArmorSlot; // 0x290(0x08)
	struct UUW-Inventory_EquippedSlot_C* BagSlot; // 0x298(0x08)
	struct UUW-Inventory_EquippedSlot_C* BottomSlot; // 0x2a0(0x08)
	struct UUW-Inventory_EquippedSlot_C* EyeWearSlot; // 0x2a8(0x08)
	struct UUW-Inventory_EquippedSlot_C* GhillieSlot; // 0x2b0(0x08)
	struct UUW-Inventory_EquippedSlot_C* GlovesSlot; // 0x2b8(0x08)
	struct UUW-Inventory_EquippedSlot_C* HatSlot; // 0x2c0(0x08)
	struct UUW-Inventory_EquippedSlot_C* HelmetSlot; // 0x2c8(0x08)
	struct UUW-Inventory_EquippedSlot_C* MaskSlot; // 0x2d0(0x08)
	struct UUW-Inventory_EquippedSlot_C* OuterSlot; // 0x2d8(0x08)
	struct UUW-Inventory_EquippedSlot_C* ShoesSlot; // 0x2e0(0x08)
	struct UUW-Inventory_EquippedSlot_C* TopSlot; // 0x2e8(0x08)
	struct UUW-Inventory_Weapon_C* UW-Inventory_Weapon; // 0x2f0(0x08)
	struct ABravoHotelCharacter* TargetCharacter; // 0x2f8(0x08)

	void GetSlotByType(enum class EWearableItemType WearableType, struct UUW-Inventory_EquippedSlot_C*& EquippedSlot); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.GetSlotByType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetEquippedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.SetEquippedSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetEquippedList(); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.ResetEquippedList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEquippedItems(); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.SetEquippedItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponItems(); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.SetWeaponItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateItemList(); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.UpdateItemList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideItemList(); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.HideItemList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowItemList(); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.ShowItemList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedPlayerInfosDelegate_Event(); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.OnChangedPlayerInfosDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-WatchingEquippedItemWidget(int32_t EntryPoint); // Function UW-WatchingEquippedItemWidget.UW-WatchingEquippedItemWidget_C.ExecuteUbergraph_UW-WatchingEquippedItemWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

