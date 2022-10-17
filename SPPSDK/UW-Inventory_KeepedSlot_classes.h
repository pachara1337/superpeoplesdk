// WidgetBlueprintGeneratedClass UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C
// Size: 0x2cff6a2c (Inherited: 0x2cff6aaa)
struct UUW-Inventory_KeepedSlot_C : UUW-Inventory_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct USizeBox* Abillity; // 0x14b8(0x08)
	struct UImage* AbillityBG; // 0x14c0(0x08)
	struct UTextBlock* AbillityValue; // 0x14c8(0x08)
	struct UImage* Bg; // 0x14d0(0x08)
	struct UImage* BorderBG; // 0x14d8(0x08)
	struct UImage* ChoiceBG; // 0x14e0(0x08)
	struct UImage* DefenseBG; // 0x14e8(0x08)
	struct UProgressBar* DurabilityBar; // 0x14f0(0x08)
	struct UImage* EmptyBG; // 0x14f8(0x08)
	struct UImage* ItemImage; // 0x1500(0x08)
	struct UImage* OverBg; // 0x1508(0x08)
	enum class EWearableItemType WearableItemType; // 0x1510(0x01)
	bool IsDefense; // 0x1511(0x01)
	struct UUW-Inventory_ItemSlotHover_C* HoverWidget; // 0x1518(0x08)
	struct UUserWidget* HoverOwnerWidget; // 0x1520(0x08)
	int32_t Index; // 0x1528(0x04)

	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetHoverWidgetRef(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetHoverWidgetRef // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBG(enum class EWearableItemType WearableItemType); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetBG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnRButtonClick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	enum class ESlateVisibility Get_Abillity_Visibility(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Get_Abillity_Visibility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void RequestGetItem(struct ABravoHotelPickup* Pickup, bool& bResult); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.RequestGetItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitData(enum class ItemWidgetDragType EquipType, enum class EWearableItemType WearableItemType); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(struct UUW-InventoryWidget_C* InventoryWidget, struct FInventoryItemInfo InventoryItemInfoData); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Drop(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Drop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2(struct UObject* Loaded); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnLoaded_98E452BD4DD4A7091D0406BA03F23FD2 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Enable(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Enable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Disable(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Disable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.AysncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_KeepedSlot(int32_t EntryPoint); // Function UW-Inventory_KeepedSlot.UW-Inventory_KeepedSlot_C.ExecuteUbergraph_UW-Inventory_KeepedSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

