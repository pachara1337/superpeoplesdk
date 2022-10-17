// WidgetBlueprintGeneratedClass UW-Inventory_Carried.UW-Inventory_Carried_C
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a88)
struct UUW-Inventory_Carried_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* HoverBG; // 0x290(0x08)
	struct UScrollBox* ScrollBox; // 0x298(0x08)
	struct UWrapBox* WB-CarriedList; // 0x2a0(0x08)

	void DragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.DragLeave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.DragEnter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.DropItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Disable(); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.Disable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Enable(); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.Enable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetScrollSpeed(float Speed); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.SetScrollSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_Carried(int32_t EntryPoint); // Function UW-Inventory_Carried.UW-Inventory_Carried_C.ExecuteUbergraph_UW-Inventory_Carried // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

