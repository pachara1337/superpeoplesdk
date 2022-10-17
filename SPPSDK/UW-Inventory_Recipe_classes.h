// WidgetBlueprintGeneratedClass UW-Inventory_Recipe.UW-Inventory_Recipe_C
// Size: 0x2cff6abc (Inherited: 0x2cff6a88)
struct UUW-Inventory_Recipe_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Character_BG_Motion; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UScrollBox* ScrollBox_KeepedList; // 0x2a0(0x08)
	struct USizeBox* SizeBox_KeepedList; // 0x2a8(0x08)
	struct ABP-BravoHotel-PlayerController_C* PlayerController; // 0x2b0(0x08)
	float SlotMaxHeight; // 0x2b8(0x04)

	void UpdateSlotMaxSize(int32_t SlotNum); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.UpdateSlotMaxSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DisableCarriedListHover(); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.DisableCarriedListHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.DropItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetInventoryComponent(bool& Result, struct UPlayerInventoryComponent*& InventoryComponentRef); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.GetInventoryComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverEquipSlotList(enum class EWearableItemType WearableItemType); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.HoverEquipSlotList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverResetEquipSlotList(); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.HoverResetEquipSlotList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_Recipe(int32_t EntryPoint); // Function UW-Inventory_Recipe.UW-Inventory_Recipe_C.ExecuteUbergraph_UW-Inventory_Recipe // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

