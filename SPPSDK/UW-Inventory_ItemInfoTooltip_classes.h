// WidgetBlueprintGeneratedClass UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a88)
struct UUW-Inventory_ItemInfoTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct URichTextBlock* RichTextBlock; // 0x2a0(0x08)
	struct UUW-InventoryWidget_C* InventoryRef; // 0x2a8(0x08)
	struct FText Text; // 0x2b0(0x18)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.OnMouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideInfo(); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.HideInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowInfo(struct UUW-InventoryWidget_C* InvenRef); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ShowInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ForceCloseInfo(); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ForceCloseInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_ItemInfoTooltip(int32_t EntryPoint); // Function UW-Inventory_ItemInfoTooltip.UW-Inventory_ItemInfoTooltip_C.ExecuteUbergraph_UW-Inventory_ItemInfoTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

