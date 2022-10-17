// WidgetBlueprintGeneratedClass UW-Inventory_DragItem.UW-Inventory_DragItem_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a88)
struct UUW-Inventory_DragItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* BGImage; // 0x290(0x08)
	struct UImage* BorderImage; // 0x298(0x08)
	struct UImage* DisableImage; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UTextBlock* ItemCount; // 0x2b0(0x08)
	struct UImage* ItemImage; // 0x2b8(0x08)
	struct UUserWidget* WidgetReference; // 0x2c0(0x08)
	bool Lock; // 0x2c8(0x01)
	enum class ItemWidgetDragType InventoryDragType; // 0x2c9(0x01)
	struct UUserWidget* ChangeTarget; // 0x2d0(0x08)
	struct ABravoHotelPlayerHUD* PlayerHUDRef; // 0x2d8(0x08)
	char pad_2CFF6ADA[0x6]; // 0x2cff6ada(0x06)

	void GetBravoHotelPlayerHUD(struct ABravoHotelPlayerHUD*& NewParam); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.GetBravoHotelPlayerHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Init(struct FSlateBrush Image, int32_t Count, bool LockSlot, enum class ItemWidgetDragType DragType); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Disable(); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Disable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Enable(); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Enable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_CC3EA76649966C8AA6712791A8D413B0(struct UObject* Loaded); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.OnLoaded_CC3EA76649966C8AA6712791A8D413B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void InitFromObjectRef(struct TSoftObjectPtr<UObject> Icon SoftObject Ref, struct FVector2D Icon Size, int32_t Count, bool LockSlot, enum class ItemWidgetDragType DragType); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.InitFromObjectRef // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_DragItem(int32_t EntryPoint); // Function UW-Inventory_DragItem.UW-Inventory_DragItem_C.ExecuteUbergraph_UW-Inventory_DragItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

