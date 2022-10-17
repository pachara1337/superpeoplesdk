// WidgetBlueprintGeneratedClass UW-Inventory_Equipped.UW-Inventory_Equipped_C
// Size: 0x2cff6b02 (Inherited: 0x2cff6a88)
struct UUW-Inventory_Equipped_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Character_BG_Motion; // 0x290(0x08)
	struct UImage* ArmorButton_Border; // 0x298(0x08)
	struct UImage* ArmorButton_Off; // 0x2a0(0x08)
	struct UImage* ArmorButton_On; // 0x2a8(0x08)
	struct UUW-Inventory_EquippedSlot_C* ArmorSlot; // 0x2b0(0x08)
	struct UUW-Inventory_EquippedSlot_C* BagSlot; // 0x2b8(0x08)
	struct UUW-Inventory_EquippedSlot_C* BottomSlot; // 0x2c0(0x08)
	struct UButton* Btn_Armor; // 0x2c8(0x08)
	struct UButton* Btn_Helmet; // 0x2d0(0x08)
	struct UImage* Character_BG; // 0x2d8(0x08)
	struct UUW-Inventory_EquippedSlot_C* EyeWearSlot; // 0x2e0(0x08)
	struct UUW-Inventory_EquippedSlot_C* GhillieSlot; // 0x2e8(0x08)
	struct UUW-Inventory_EquippedSlot_C* GlovesSlot; // 0x2f0(0x08)
	struct UUW-Inventory_EquippedSlot_C* HatSlot; // 0x2f8(0x08)
	struct UImage* HelmetButton_Border; // 0x300(0x08)
	struct UImage* HelmetButton_Off; // 0x308(0x08)
	struct UImage* HelmetButton_On; // 0x310(0x08)
	struct UUW-Inventory_EquippedSlot_C* HelmetSlot; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UUW-Inventory_EquippedSlot_C* MaskSlot; // 0x340(0x08)
	struct UUW-Inventory_EquippedSlot_C* OuterSlot; // 0x348(0x08)
	struct UUW-Inventory_EquippedSlot_C* ShoesSlot; // 0x350(0x08)
	struct UTextBlock* ToolTip_Armor; // 0x358(0x08)
	struct UTextBlock* ToolTip_Helmet; // 0x360(0x08)
	struct UOverlay* ToolTip_HideArmorOverlay; // 0x368(0x08)
	struct UOverlay* ToolTip_HideHelmetOverlay; // 0x370(0x08)
	struct UUW-Inventory_EquippedSlot_C* TopSlot; // 0x378(0x08)
	struct UUW-Inventory_CharacterPreView_C* UW-Inventory_CharacterPreView; // 0x380(0x08)
	struct ABP-BravoHotel-PlayerController_C* PlayerController; // 0x388(0x08)
	struct TMap<enum class EWearableItemType, struct UUW-Inventory_EquippedSlot_C*> EquipedSlots; // 0x390(0x50)
	struct FLinearColor PreviousColor_Helmet; // 0x3e0(0x10)
	struct FLinearColor PreviousColor_Armor; // 0x3f0(0x10)
	bool bHideMutableHemet; // 0x400(0x01)
	bool bHideMutableArmor; // 0x401(0x01)

	void ToggleButtonVisibility(struct UImage* SwitchOnImage, struct UImage* SwitchOffImage, struct UImage* Border, bool Switch); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ToggleButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetHideMutableArmorButton(bool bInit); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.SetHideMutableArmorButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetHideMutableHeletButton(bool bInit); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.SetHideMutableHeletButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowConnetedSlot(struct UUW-Inventory_EquippedSlot_C* Widget, struct FInventoryItemInfo ConnectedSlot, bool bIsShow, bool bIsHighLightEvent); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ShowConnetedSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowStatupAnim(struct FStatupAnimParameters& StatParams, enum class EStatupAnimType StatType); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ShowStatupAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverRecipeTree(struct FName ItemKey); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverRecipeTree // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CompleteItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.CompleteItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverItems(struct TArray<struct FName>& ItemKeys); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetWearItemKey(enum class EWearableItemType ItemSlot, struct FName& ItemKey); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetWearItemKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	enum class ESlateVisibility Get_btn_ArmorTree_Visibility(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Get_btn_ArmorTree_Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void DisableCarriedListHover(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DisableCarriedListHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool DropItem(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.DropItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetInventoryComponent(bool& Result, struct UPlayerInventoryComponent*& InventoryComponentRef); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.GetInventoryComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverEquipSlotList(enum class EWearableItemType WearableItemType); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverEquipSlotList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverResetEquipSlotList(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.HoverResetEquipSlotList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Equipped Slot(struct UUW-InventoryWidget_C* InventoryWidget, struct FInventoryItemInfo InventoryItemInfo); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Set Equipped Slot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_HelmetTree_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_ArmorTree_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__btn_BagTree_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn_Helmet_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__Btn_Helmet_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn_Armor_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__Btn_Armor_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedDediSettings_Event(enum class ESettingType SettingType, float Value); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.OnChangedDediSettings_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn_Armor_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__Btn_Armor_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn_Armor_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__Btn_Armor_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn_Helmet_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__Btn_Helmet_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn_Helmet_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.BndEvt__Btn_Helmet_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_Equipped(int32_t EntryPoint); // Function UW-Inventory_Equipped.UW-Inventory_Equipped_C.ExecuteUbergraph_UW-Inventory_Equipped // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

