// WidgetBlueprintGeneratedClass UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C
// Size: 0x2cff6ab9 (Inherited: 0x2cff6a88)
struct UUW-Inventory_ProximityBoxSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTextBlock* BoxName; // 0x290(0x08)
	struct UWrapBox* WB-ItemList; // 0x298(0x08)
	bool TitleVisible; // 0x2a0(0x01)
	struct AActor* TargetActor; // 0x2a8(0x08)
	struct UUW-InventoryWidget_C* InventoryWidget; // 0x2b0(0x08)
	bool bUsed; // 0x2b8(0x01)
	char pad_2CFF6AB2[0x7]; // 0x2cff6ab2(0x07)

	void SetUsed(bool Used); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.SetUsed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBoxName(struct FText BoxName); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.SetBoxName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Box Info(struct AActor* TargetActor); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Set Box Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AllHiddenChildSlots(); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.AllHiddenChildSlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event_TitleVisible(bool Visible); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.Event_TitleVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_ProximityBoxSlot(int32_t EntryPoint); // Function UW-Inventory_ProximityBoxSlot.UW-Inventory_ProximityBoxSlot_C.ExecuteUbergraph_UW-Inventory_ProximityBoxSlot // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

