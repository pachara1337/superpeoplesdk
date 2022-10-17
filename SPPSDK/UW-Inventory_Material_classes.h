// WidgetBlueprintGeneratedClass UW-Inventory_Material.UW-Inventory_Material_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a88)
struct UUW-Inventory_Material_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Character_BG_Motion; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UScrollBox* ScrollBox_KeepedList; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_Count; // 0x2a8(0x08)
	struct ABP-BravoHotel-PlayerController_C* PlayerController; // 0x2b0(0x08)

	void HoverRecipeItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Material.UW-Inventory_Material_C.HoverRecipeItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverRecipeTree(struct FName ItemKey); // Function UW-Inventory_Material.UW-Inventory_Material_C.HoverRecipeTree // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CompleteItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Material.UW-Inventory_Material_C.CompleteItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DisableCarriedListHover(); // Function UW-Inventory_Material.UW-Inventory_Material_C.DisableCarriedListHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Material.UW-Inventory_Material_C.DropItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetInventoryComponent(bool& Result, struct UPlayerInventoryComponent*& InventoryComponentRef); // Function UW-Inventory_Material.UW-Inventory_Material_C.GetInventoryComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-Inventory_Material.UW-Inventory_Material_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Material.UW-Inventory_Material_C.HoverItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverReset(); // Function UW-Inventory_Material.UW-Inventory_Material_C.HoverReset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Material.UW-Inventory_Material_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Material.UW-Inventory_Material_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Material.UW-Inventory_Material_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_Material.UW-Inventory_Material_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_Material(int32_t EntryPoint); // Function UW-Inventory_Material.UW-Inventory_Material_C.ExecuteUbergraph_UW-Inventory_Material // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

