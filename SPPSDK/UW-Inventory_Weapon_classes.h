// WidgetBlueprintGeneratedClass UW-Inventory_Weapon.UW-Inventory_Weapon_C
// Size: 0x2cff6a50 (Inherited: 0x2cff6a88)
struct UUW-Inventory_Weapon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UUW-Inventory_WeaponSlot_C* WeaponSlot01; // 0x2d8(0x08)
	struct UUW-Inventory_WeaponSlot_C* WeaponSlot02; // 0x2e0(0x08)
	struct UUW-Inventory_WeaponSlot_C* WeaponSlot03; // 0x2e8(0x08)
	struct UUW-Inventory_WeaponSlot_C* WeaponSlot04; // 0x2f0(0x08)
	struct UUW-Inventory_WeaponSlot_C* WeaponSlot05; // 0x2f8(0x08)
	struct TMap<int32_t, struct UUW-Inventory_WeaponSlot_C*> WeaponSlots; // 0x300(0x50)

	void ShowStatupAnim(struct FStatupAnimParameters& StatParams, enum class EStatupAnimType StatType); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.ShowStatupAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverRecipeTree(struct FName ItemKey); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverRecipeTree // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CompleteItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.CompleteItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyNewWeapon(struct TArray<int32_t>& SlotArray); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.NotifyNewWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckCanEquipRangedWeapon(enum class EWeaponType WeaponType); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.CheckCanEquipRangedWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDragFromCarriedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromCarriedSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDragFromEquippedSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromEquippedSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDragFromWeaponSlot(struct FBravoHotelWeaponInfo WeaponInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromWeaponSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDragFromProximitySlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetDragFromProximitySlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DragFindCanEquipAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.DragFindCanEquipAttachItemSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverResetEquipAttachItemSlot(); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverResetEquipAttachItemSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DragEquipWeaponSlot(enum class ItemDragWidgetType ItemDragSlotType, struct FInventoryItemInfo InventoryItemInfo, struct FBravoHotelWeaponInfo WeaponInfo, bool& bResult); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.DragEquipWeaponSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverResetEquipWeaponSlot(); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverResetEquipWeaponSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverSelectAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, bool& bResult); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectAttachItemSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverSelectEquipAttachItemSlot(struct FInventoryItemInfo InventoryItemInfo, bool& bResult); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectEquipAttachItemSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverSelectEquipWeaponSlot(enum class EWeaponType WeaponType); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverSelectEquipWeaponSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetInventoryItemDetailInfo(struct FInventoryItemInfo InventoryItemInfo, bool& bResult, struct FInventoryItemDetailInfo& InventoryItemDetailInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.GetInventoryItemDetailInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverWeaponSlotList(struct FInventoryItemInfo InventoryItemInfo, bool& bResult); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.HoverWeaponSlotList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetInventoryComponent(bool& Result, struct UPlayerInventoryComponent*& InventoryComponentRef); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.GetInventoryComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponSlot(struct UUW-InventoryWidget_C* InventoryWidget, int32_t SlotIndex, struct ABravoHotelWeaponBase* WeaponBaseObject, struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.SetWeaponSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event_WeaponInfo(int32_t Idx, int32_t Ammo, int32_t MaxAmmo); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.Event_WeaponInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_Weapon(int32_t EntryPoint); // Function UW-Inventory_Weapon.UW-Inventory_Weapon_C.ExecuteUbergraph_UW-Inventory_Weapon // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

