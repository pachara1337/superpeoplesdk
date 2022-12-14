// WidgetBlueprintGeneratedClass UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C
// Size: 0x2cff6a65 (Inherited: 0x2cff6aaa)
struct UUW-ItemRecipeTreeSlot_C : UUW-Inventory_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* Complete_ani; // 0x14b8(0x08)
	struct UWidgetAnimation* Searching_ani; // 0x14c0(0x08)
	struct UImage* Blank_SkillBG; // 0x14c8(0x08)
	struct UBorder* Border; // 0x14d0(0x08)
	struct UButton* Button; // 0x14d8(0x08)
	struct UImage* Get_SkillBG; // 0x14e0(0x08)
	struct UImage* Get_SkillBG_lv5; // 0x14e8(0x08)
	struct UImage* Get_SkillBG_lv6; // 0x14f0(0x08)
	struct UImage* Get_SkillBG_lv7; // 0x14f8(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x1500(0x08)
	struct UImage* Image; // 0x1508(0x08)
	struct UImage* Image; // 0x1510(0x08)
	struct UImage* Image; // 0x1518(0x08)
	struct UImage* Image; // 0x1520(0x08)
	struct UImage* Image; // 0x1528(0x08)
	struct UImage* Image; // 0x1530(0x08)
	struct UImage* Image; // 0x1538(0x08)
	struct UImage* Image; // 0x1540(0x08)
	struct UImage* Image; // 0x1548(0x08)
	struct UImage* Image; // 0x1550(0x08)
	struct UImage* Image; // 0x1558(0x08)
	struct UImage* Image; // 0x1560(0x08)
	struct UImage* Image; // 0x1568(0x08)
	struct UImage* Image; // 0x1570(0x08)
	struct UImage* Image; // 0x1578(0x08)
	struct UImage* Image_Full; // 0x1580(0x08)
	struct UImage* Image_Have; // 0x1588(0x08)
	struct UImage* Img_Active; // 0x1590(0x08)
	struct UImage* IMG_Complete; // 0x1598(0x08)
	struct UImage* IMG_ItemIcon; // 0x15a0(0x08)
	struct USizeBox* MouseHover; // 0x15a8(0x08)
	struct USizeBox* MouseHover_; // 0x15b0(0x08)
	struct USizeBox* MousePress; // 0x15b8(0x08)
	struct USizeBox* MousePress_; // 0x15c0(0x08)
	struct UImage* MyWeapon; // 0x15c8(0x08)
	struct UOverlay* Searching; // 0x15d0(0x08)
	struct USizeBox* Searching_; // 0x15d8(0x08)
	struct USizeBox* SizeBox; // 0x15e0(0x08)
	struct USizeBox* SizeBox; // 0x15e8(0x08)
	struct UTextBlock* T_PerkName; // 0x15f0(0x08)
	struct UTextBlock* T_PerkName; // 0x15f8(0x08)
	struct UTextBlock* T_PerkName; // 0x1600(0x08)
	struct UTextBlock* T_PerkName; // 0x1608(0x08)
	struct UVerticalBox* VerticalBox; // 0x1610(0x08)
	struct UUW-Inventory_ItemSlotHover_C* HoverWidget; // 0x1618(0x08)
	bool Selected; // 0x1620(0x01)
	struct FSelecteSearchMaterialItemInfo SelectItem; // 0x1624(0x18)
	struct UMaterialInstanceDynamic* NewVar; // 0x1640(0x08)
	bool EnableSearch; // 0x1648(0x01)
	struct FSelecteSearchMaterialItemInfo TempData; // 0x164c(0x18)
	bool IsComplete; // 0x1664(0x01)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOpacity(bool bActive, bool bComplete); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MouseEnterImpl(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.MouseEnterImpl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRarity(enum class EItemRarity Rarity, bool bStar); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetRarity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMaterialInfo(struct FName ItemKey, int32_t Count, bool Complete, bool Having, struct UUW-Inventory_ItemSlotHover_C* HoverWidget, struct FName TopItem); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.SetMaterialInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_B0A3D28F44780582B366508928D8D420(struct UObject* Loaded); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnLoaded_B0A3D28F44780582B366508928D8D420 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.BndEvt__Button_331_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Set Selecte(bool Select); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Set Selecte // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct FSelecteSearchMaterialItemInfo MaterialItemKey, bool IsSelect); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(bool EnableMaterialSearch); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ItemRecipeTreeSlot(int32_t EntryPoint); // Function UW-ItemRecipeTreeSlot.UW-ItemRecipeTreeSlot_C.ExecuteUbergraph_UW-ItemRecipeTreeSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

