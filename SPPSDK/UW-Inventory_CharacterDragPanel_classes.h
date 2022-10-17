// WidgetBlueprintGeneratedClass UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C
// Size: 0x2cff6a99 (Inherited: 0x2cff6a88)
struct UUW-Inventory_CharacterDragPanel_C : UUserWidget {
	struct UImage* Image; // 0x288(0x08)
	struct ABravoHotelInventoryCharacter* InventoryCharacterRef; // 0x290(0x08)
	bool Visible; // 0x298(0x01)

	enum class ESlateVisibility GetVisibility(); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FEventReply On_DragRect_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.On_DragRect_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsHitTest(struct FVector2D Pos, bool& bHit); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.IsHitTest // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetInventoryCharacter(struct ABravoHotelInventoryCharacter*& InventoryCharacter); // Function UW-Inventory_CharacterDragPanel.UW-Inventory_CharacterDragPanel_C.GetInventoryCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
};

