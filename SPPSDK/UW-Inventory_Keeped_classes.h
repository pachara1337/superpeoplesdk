// WidgetBlueprintGeneratedClass UW-Inventory_Keeped.UW-Inventory_Keeped_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a88)
struct UUW-Inventory_Keeped_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Character_BG_Motion; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UScrollBox* ScrollBox_KeepedList; // 0x2a8(0x08)
	struct UUW-Inventory_KeepedSlot_C* UW-Inventory_KeepedSlot; // 0x2b0(0x08)
	struct UUW-Inventory_KeepedSlot_C* UW-Inventory_KeepedSlot; // 0x2b8(0x08)
	struct ABP-BravoHotel-PlayerController_C* PlayerController; // 0x2c0(0x08)

	void DisableCarriedListHover(); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.DisableCarriedListHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.DropItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetInventoryComponent(bool& Result, struct UPlayerInventoryComponent*& InventoryComponentRef); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.GetInventoryComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverEquipSlotList(enum class EWearableItemType WearableItemType); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.HoverEquipSlotList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverResetEquipSlotList(); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.HoverResetEquipSlotList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_Keeped(int32_t EntryPoint); // Function UW-Inventory_Keeped.UW-Inventory_Keeped_C.ExecuteUbergraph_UW-Inventory_Keeped // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

