// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C
// Size: 0x2cff6a74 (Inherited: 0x2cff6a88)
struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTextBlock* Cont; // 0x290(0x08)
	struct UImage* DropHoverImage; // 0x298(0x08)
	struct UImage* EmptyImage; // 0x2a0(0x08)
	struct UImage* EquipImage; // 0x2a8(0x08)
	struct UImage* HoverImage2; // 0x2b0(0x08)
	struct UImage* ItemImage; // 0x2b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x2c0(0x08)
	int32_t Index; // 0x2c8(0x04)
	struct FMulticastInlineDelegate OnDropEventDispatcher; // 0x2d0(0x10)
	struct FSupplyItem Data; // 0x2e0(0x130)
	struct UUW-Inventory_DragItem_C* DraggedWidget; // 0x410(0x08)
	bool IsEmpty; // 0x418(0x01)
	struct FMulticastInlineDelegate ShowTooltipEventDispatcher; // 0x420(0x10)
	struct FMulticastInlineDelegate OnChangeSlotEventDispatcher; // 0x430(0x10)
	struct FMulticastInlineDelegate OnRightClickEventDispatcher; // 0x440(0x10)
	struct FKey SaveKey; // 0x450(0x20)
	int32_t ClickNum; // 0x470(0x04)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_42EA96274FA324743778DBBB16312B12(struct UObject* Loaded); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnLoaded_42EA96274FA324743778DBBB16312B12 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetData(struct FSupplyItem Data, bool SetEmpty); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEmpty(); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.SetEmpty // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void CheckClick(); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.CheckClick // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxConsumableItemSlotWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnRightClickEventDispatcher__DelegateSignature(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* Slot); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnRightClickEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeSlotEventDispatcher__DelegateSignature(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* Source, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* Target); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnChangeSlotEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowTooltipEventDispatcher__DelegateSignature(bool IsShow, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* Slot); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.ShowTooltipEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDropEventDispatcher__DelegateSignature(struct FSupplyItem ConsumalbeItemDat, int32_t SlotIndex); // Function UW-PersonalSupplyBoxConsumableItemSlotWidget.UW-PersonalSupplyBoxConsumableItemSlotWidget_C.OnDropEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

