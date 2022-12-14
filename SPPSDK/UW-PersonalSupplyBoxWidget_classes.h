// WidgetBlueprintGeneratedClass UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C
// Size: 0x2cff6a30 (Inherited: 0x2cff6a68)
struct UUW-PersonalSupplyBoxWidget_C : UBravoHotelPersonalSupplyBoxWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UWidgetAnimation* Ani_PadOn; // 0x470(0x08)
	struct UImage* BG_Pad; // 0x478(0x08)
	struct UButton* btn_PerkDeckEnabled; // 0x480(0x08)
	struct UCanvasPanel* Canvas_ChangeEnable; // 0x488(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x490(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x498(0x08)
	struct UComboBoxString* ComboBoxString; // 0x4a0(0x08)
	struct UTextBlock* CurHaveGoldValue; // 0x4a8(0x08)
	struct UTextBlock* CurPriceText; // 0x4b0(0x08)
	struct UImage* Down; // 0x4b8(0x08)
	struct UImage* EquipBg; // 0x4c0(0x08)
	struct UOverlay* Free; // 0x4c8(0x08)
	struct UImage* GoldImage; // 0x4d0(0x08)
	struct UImage* GoldImage; // 0x4d8(0x08)
	struct UOverlay* GoldLack; // 0x4e0(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x4e8(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x4f0(0x08)
	struct UImage* Image; // 0x4f8(0x08)
	struct UImage* Image; // 0x500(0x08)
	struct UImage* Image; // 0x508(0x08)
	struct UImage* Image; // 0x510(0x08)
	struct UImage* Image; // 0x518(0x08)
	struct UImage* Image; // 0x520(0x08)
	struct UImage* Image; // 0x528(0x08)
	struct UImage* Image; // 0x530(0x08)
	struct UImage* Image; // 0x538(0x08)
	struct UImage* Image; // 0x540(0x08)
	struct UImage* Image; // 0x548(0x08)
	struct UImage* Image; // 0x550(0x08)
	struct UImage* Image; // 0x558(0x08)
	struct UImage* Image; // 0x560(0x08)
	struct UImage* Image; // 0x568(0x08)
	struct UImage* Image; // 0x570(0x08)
	struct UImage* Image; // 0x578(0x08)
	struct UImage* ItemIcon; // 0x580(0x08)
	struct UTextBlock* Items_1Text; // 0x588(0x08)
	struct UScrollBox* ItemScroll; // 0x590(0x08)
	struct UTextBlock* ItemsText; // 0x598(0x08)
	struct UTextBlock* OkText; // 0x5a0(0x08)
	struct UOverlay* Overlay; // 0x5a8(0x08)
	struct UOverlay* Overlay; // 0x5b0(0x08)
	struct UImage* PriceBg; // 0x5b8(0x08)
	struct UImage* PriceBg; // 0x5c0(0x08)
	struct UTextBlock* PriceText; // 0x5c8(0x08)
	struct UTextBlock* PriceValue; // 0x5d0(0x08)
	struct URichTextBlock* RichTextBlock; // 0x5d8(0x08)
	struct URichTextBlock* RichTextBlock; // 0x5e0(0x08)
	struct URichTextBlock* RichTextBlock; // 0x5e8(0x08)
	struct USizeBox* SizeBox; // 0x5f0(0x08)
	struct UImage* SlotBg; // 0x5f8(0x08)
	struct UTextBlock* SortText; // 0x600(0x08)
	struct UTextBlock* SpecialWeaponText; // 0x608(0x08)
	struct UTextBlock* TextBlock; // 0x610(0x08)
	struct UTextBlock* TextBlock; // 0x618(0x08)
	struct UTextBlock* TextBlock; // 0x620(0x08)
	struct UImage* Up; // 0x628(0x08)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* UW-PersonalSupplyBoxConsumableItemSlotWidget; // 0x630(0x08)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* UW-PersonalSupplyBoxConsumableItemSlotWidget; // 0x638(0x08)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* UW-PersonalSupplyBoxConsumableItemSlotWidget; // 0x640(0x08)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* UW-PersonalSupplyBoxConsumableItemSlotWidget; // 0x648(0x08)
	struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* UW-PersonalSupplyBoxConsumableItemSlotWidget; // 0x650(0x08)
	struct UUW-PersonalSupplyBoxWeaponInfoWidget_C* UW-PersonalSupplyBoxWeaponInfoWidget; // 0x658(0x08)
	struct UUW-SupplyToolTip_C* UW-SupplyToolTip; // 0x660(0x08)
	struct UUW-Timer_C* UW-Timer; // 0x668(0x08)
	struct TArray<struct FText> SortType; // 0x670(0x10)
	struct TArray<struct UImage*> RarityList; // 0x680(0x10)
	struct TMap<struct FString, struct UUW-ComboBoxText_C*> ComboxList; // 0x690(0x50)
	struct FString SelectComboBox; // 0x6e0(0x10)
	bool IsShowAni; // 0x6f0(0x01)
	bool IsFree; // 0x6f1(0x01)
	struct FSupplyItem SaveSupplyItem; // 0x6f8(0x130)
	int32_t CurOwnGold; // 0x828(0x04)
	int32_t TotalPrice; // 0x82c(0x04)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetEmptySlot(bool& bRet, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C*& Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetEmptySlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetConsumableItemSlot(int32_t Index, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C*& Widget); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.GetConsumableItemSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UWidget* OnGenerateWidget(struct FString Item); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UWidget* OnGenerateWidget(struct FString Item); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.OnGenerateWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UBravoHotelPersonalSupplyBoxSlotItemWidget* CraeteWeaponItemSlots(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteWeaponItemSlots // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UBravoHotelPersonalSupplyBoxSlotItemWidget* CraeteConsumableItemSlots(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.CraeteConsumableItemSlots // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__ComboBoxString_236_K2Node_ComponentBoundEvent_3_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct FSupplyItem ConsumalbeItemDat, int32_t SlotIndex); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetConsumableItemData(int32_t SlotIndex, struct FSupplyItem& ConsumableItem, bool SetEmpty); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetConsumableItemData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponData(struct FInventoryItemInfo& WeaponItem, bool IsDefaultWeapon); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetWeaponData // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct FInventoryItemInfo WeaponData); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetTotalPrice(int32_t Price); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetTotalPrice // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetFree(bool IsFree, int32_t FreeCount, bool bFreeMode); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetFree // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetOwnGold(int32_t OwnGold); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetOwnGold // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(bool IsShow, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.BndEvt__btn_PerkDeckEnabled_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(bool IsShow, struct UButton* Widget); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Close(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowConsumableSlotHoverEffect(bool IsHover); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ShowConsumableSlotHoverEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EquipSlot(struct UUW-PersonalSupplyBoxSlotItemWidget_C* Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* Source, struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* Target); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct UUW-PersonalSupplyBoxConsumableItemSlotWidget_C* Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EquipWeaponSlot(struct UUW-PersonalSupplyBoxSlotItemWidget_C* Slot); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.EquipWeaponSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct FInventoryItemInfo Weapon); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEnoughtGold(bool IsEnought); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.SetEnoughtGold // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PersonalSupplyBoxWidget(int32_t EntryPoint); // Function UW-PersonalSupplyBoxWidget.UW-PersonalSupplyBoxWidget_C.ExecuteUbergraph_UW-PersonalSupplyBoxWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

