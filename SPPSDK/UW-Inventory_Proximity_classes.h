// WidgetBlueprintGeneratedClass UW-Inventory_Proximity.UW-Inventory_Proximity_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a88)
struct UUW-Inventory_Proximity_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWrapBox* DropBoxPanel; // 0x290(0x08)
	struct UScrollBox* ScrollBox; // 0x298(0x08)
	struct UWrapBox* WB-BoxList; // 0x2a0(0x08)
	struct UUW-InventoryWidget_C* InventoryWidget; // 0x2a8(0x08)

	void SetProximityBox(struct AActor* TargetActor); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.SetProximityBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetUsableProximityBox(struct UUW-Inventory_ProximityBoxSlot_C*& OutBoxSlot); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.GetUsableProximityBox // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void AllHiddenDropboxWidget(); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.AllHiddenDropboxWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.DropItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CloseHover(); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.CloseHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetScrollSpeed(float Speed); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.SetScrollSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_Proximity(int32_t EntryPoint); // Function UW-Inventory_Proximity.UW-Inventory_Proximity_C.ExecuteUbergraph_UW-Inventory_Proximity // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

