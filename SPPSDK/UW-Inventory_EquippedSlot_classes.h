// WidgetBlueprintGeneratedClass UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C
// Size: 0x2cff6b12 (Inherited: 0x2cff6aaa)
struct UUW-Inventory_EquippedSlot_C : UUW-Inventory_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* Anim_Material_Get; // 0x14b8(0x08)
	struct UWidgetAnimation* Anim_Material_Hover; // 0x14c0(0x08)
	struct UWidgetAnimation* Anim_Upgrade; // 0x14c8(0x08)
	struct UWidgetAnimation* Anim_Progress; // 0x14d0(0x08)
	struct USizeBox* Abillity; // 0x14d8(0x08)
	struct UTextBlock* AbillityValue; // 0x14e0(0x08)
	struct UImage* Bg; // 0x14e8(0x08)
	struct UImage* Bg; // 0x14f0(0x08)
	struct UImage* BorderBG; // 0x14f8(0x08)
	struct UImage* BorderBG; // 0x1500(0x08)
	struct UButton* btn_HelmetTree; // 0x1508(0x08)
	struct UCanvasPanel* CanvasPanel_AnimProgress; // 0x1510(0x08)
	struct UImage* ChoiceBG; // 0x1518(0x08)
	struct UImage* ChoiceBG; // 0x1520(0x08)
	struct UImage* ConnectedSlotImg; // 0x1528(0x08)
	struct UImage* DefenseBG; // 0x1530(0x08)
	struct UImage* DefenseBG; // 0x1538(0x08)
	struct UProgressBar* DurabilityBar; // 0x1540(0x08)
	struct UProgressBar* DurabilityBar; // 0x1548(0x08)
	struct UImage* EmptyBG; // 0x1550(0x08)
	struct UImage* EmptyBG; // 0x1558(0x08)
	struct UImage* Image; // 0x1560(0x08)
	struct UImage* Image; // 0x1568(0x08)
	struct UImage* Image; // 0x1570(0x08)
	struct UImage* Image; // 0x1578(0x08)
	struct UImage* Image; // 0x1580(0x08)
	struct UImage* Image; // 0x1588(0x08)
	struct UImage* ItemImage; // 0x1590(0x08)
	struct UImage* ItemImage; // 0x1598(0x08)
	struct UImage* LV; // 0x15a0(0x08)
	struct UHorizontalBox* Lv_Star; // 0x15a8(0x08)
	struct UImage* OverBg; // 0x15b0(0x08)
	struct UImage* OverBg; // 0x15b8(0x08)
	struct UOverlay* Overlay; // 0x15c0(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x15c8(0x08)
	struct UUW-StatupWidget_C* UW-StatupWidget; // 0x15d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x15d8(0x08)
	enum class EWearableItemType WearableItemType; // 0x15e0(0x01)
	bool IsDefense; // 0x15e1(0x01)
	struct UUW-Inventory_ItemSlotHover_C* HoverWidget; // 0x15e8(0x08)
	struct UUserWidget* HoverOwnerWidget; // 0x15f0(0x08)
	int32_t SwitcherIndex; // 0x15f8(0x04)
	bool SettingByEquippedInfo; // 0x15fc(0x01)
	struct FMulticastInlineDelegate HoverEquippedSlotCallBack; // 0x1600(0x10)
	bool bIsConnectedSlot; // 0x1610(0x01)
	enum class EWearableItemType ParentWearableItemType; // 0x1611(0x01)

	void IsDraging(bool& bResult); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.IsDraging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ShowStatupAnim(struct FStatupAnimParameters& StatParams); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.ShowStatupAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMaterialIcon(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetMaterialIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetHoverWidgetRef(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetHoverWidgetRef // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBG(enum class EWearableItemType WearableItemType); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetBG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnRButtonClick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RequestGetItem(struct ABravoHotelPickup* Pickup, bool& bResult); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.RequestGetItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Reset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitData(enum class ItemWidgetDragType EquipType, enum class EWearableItemType WearableItemType); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDurability(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetDurability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfoByEquippedInfo(struct FEquippedItemInfo EquippedItemInfo); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetInfoByEquippedInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfoByDetailInfo(struct FInventoryItemDetailInfo DetailInfo); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetInfoByDetailInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfoByInventoryItemInfo(struct UUW-InventoryWidget_C* InventoryWidget, struct FInventoryItemInfo InventoryItemInfoData); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.SetInfoByInventoryItemInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Drop(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Drop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_52197A594D73AE4B77D41DAA3A988F34(struct UObject* Loaded); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnLoaded_52197A594D73AE4B77D41DAA3A988F34 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Enable(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Enable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Disable(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Disable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.AysncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CompleteCombine(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.CompleteCombine // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CompleteCombineOnRecipeTree(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.CompleteCombineOnRecipeTree // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverRecipeTree(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.HoverRecipeTree // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateAbillity(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.UpdateAbillity // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowConnectedSlotEvent(bool bIsHover, bool bhighlightEvent); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.ShowConnectedSlotEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideProgressAnimPanel(); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.HideProgressAnimPanel // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateCastingDelegateEvent(struct FCastingInfo& CastingInfo, float CastingPercent); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.OnUpdateCastingDelegateEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_EquippedSlot(int32_t EntryPoint); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.ExecuteUbergraph_UW-Inventory_EquippedSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void HoverEquippedSlotCallBack__DelegateSignature(struct UUW-Inventory_EquippedSlot_C* Widget, struct FInventoryItemInfo ItemInfo, bool bIsShow, bool bhighlightEvent); // Function UW-Inventory_EquippedSlot.UW-Inventory_EquippedSlot_C.HoverEquippedSlotCallBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

