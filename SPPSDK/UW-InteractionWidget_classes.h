// WidgetBlueprintGeneratedClass UW-InteractionWidget.UW-InteractionWidget_C
// Size: 0x2cff6a48 (Inherited: 0x2cff6a88)
struct UUW-InteractionWidget_C : UBravoHotelInteractionWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* UPArrow; // 0x290(0x08)
	struct UWidgetAnimation* InteractivePopup_motion; // 0x298(0x08)
	struct UTextBlock* AmmoCnt; // 0x2a0(0x08)
	struct UImage* AmmoDown; // 0x2a8(0x08)
	struct UImage* AmmoUp; // 0x2b0(0x08)
	struct UTextBlock* Attack; // 0x2b8(0x08)
	struct UImage* AttackDown; // 0x2c0(0x08)
	struct UImage* AttackUp; // 0x2c8(0x08)
	struct UWrapBox* BuffListWithText; // 0x2d0(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2d8(0x08)
	struct UCanvasPanel* CP_Key; // 0x2e0(0x08)
	struct UWidgetSwitcher* CustomWidgetSwitcher; // 0x2e8(0x08)
	struct UImage* fill; // 0x2f0(0x08)
	struct UTextBlock* Firingrate; // 0x2f8(0x08)
	struct UImage* FiringrateDown; // 0x300(0x08)
	struct UImage* FiringrateUp; // 0x308(0x08)
	struct UHorizontalBox* HB_BuffList; // 0x310(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x318(0x08)
	struct UHorizontalBox* HorizontalBox_WeaponRarity; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_CountryMark; // 0x348(0x08)
	struct UImage* Image_ItemIcon; // 0x350(0x08)
	struct UImage* Image_WeaponLock; // 0x358(0x08)
	struct UCanvasPanel* Interactive; // 0x360(0x08)
	struct UImage* ItemBg_01; // 0x368(0x08)
	struct UKeyImageWidget_C* Key_Bomb; // 0x370(0x08)
	struct UKeyImageWidget_C* KeyImageWidget_C; // 0x378(0x08)
	struct UImage* NeedItem; // 0x380(0x08)
	struct UImage* PickUpBg; // 0x388(0x08)
	struct USizeBox* PickupItem; // 0x390(0x08)
	struct UTextBlock* Range; // 0x398(0x08)
	struct UImage* RangeDown; // 0x3a0(0x08)
	struct UImage* RangeUp; // 0x3a8(0x08)
	struct URichTextBlock* RichT_Action; // 0x3b0(0x08)
	struct URichTextBlock* RichT_ActionDescription; // 0x3b8(0x08)
	struct USizeBox* SizeBox_CountryMark; // 0x3c0(0x08)
	struct USizeBox* SizeBox_WeaponOwner; // 0x3c8(0x08)
	struct UTextBlock* Stability; // 0x3d0(0x08)
	struct UImage* StabilityDown; // 0x3d8(0x08)
	struct UImage* StabilityUp; // 0x3e0(0x08)
	struct UWidgetSwitcher* Switcher_Item; // 0x3e8(0x08)
	struct UTextBlock* T_BombCancel; // 0x3f0(0x08)
	struct UTextBlock* T_ComparingWeaponName; // 0x3f8(0x08)
	struct UTextBlock* T_PickupItemName; // 0x400(0x08)
	struct UTextBlock* T_WeaponName; // 0x408(0x08)
	struct UTextBlock* Text_CombineTarget; // 0x410(0x08)
	struct UTextBlock* TextBlock; // 0x418(0x08)
	struct UUW-InteractionWidget_WeaponPerkSlot_C* UW-InteractionWidget_WeaponPerkSlot; // 0x420(0x08)
	struct UUW-InteractionWidget_WeaponPerkSlot_C* UW-InteractionWidget_WeaponPerkSlot; // 0x428(0x08)
	struct UUW-InteractionWidget_WeaponPerkSlot_C* UW-InteractionWidget_WeaponPerkSlot; // 0x430(0x08)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C* UW-Inventory_ItemSlotHover_WeaponSlot; // 0x438(0x08)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C* UW-Inventory_ItemSlotHover_WeaponSlot_C; // 0x440(0x08)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C* UW-Inventory_ItemSlotHover_WeaponSlot_C; // 0x448(0x08)
	struct UVerticalBox* VerticalBox_CombineTarget; // 0x450(0x08)
	struct UVerticalBox* VerticalBox_StatUp; // 0x458(0x08)
	struct UTextBlock* WeaponDesc; // 0x460(0x08)
	struct UImage* WeaponItemImage; // 0x468(0x08)
	struct UImage* WeaponItemSlot-BG; // 0x470(0x08)
	struct UImage* WeaponItemSlot-BG; // 0x478(0x08)
	struct UCanvasPanel* WeaponItemSlotHover; // 0x480(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x488(0x08)
	struct FSlateColor DisableTextColor; // 0x490(0x28)
	struct FSlateColor EnableTextColor; // 0x4b8(0x28)
	bool IsDisable; // 0x4e0(0x01)
	struct FInventoryItemInfo PickupItemInfo; // 0x4e8(0xb0)
	struct FLinearColor UpLinearColor; // 0x598(0x10)
	struct FLinearColor DownLinearColor; // 0x5a8(0x10)
	struct FSlateColor NormalSlateColor; // 0x5b8(0x28)
	struct FSlateColor UpSlateColor; // 0x5e0(0x28)
	struct FSlateColor DownSlateColor; // 0x608(0x28)
	bool bAction; // 0x630(0x01)
	bool bCompare; // 0x631(0x01)
	struct FBravoHotelWeaponInfo CompareWeaponInfo; // 0x638(0xb80)
	bool IsNoHide; // 0x11b8(0x01)
	bool bWeapon; // 0x11b9(0x01)
	bool bPlayAnimation_WeaponCompare; // 0x11ba(0x01)
	struct FSlateColor VisibleTextColor; // 0x11c0(0x28)
	struct FSlateBrush BrushActionKeyWhite; // 0x11e8(0x90)
	struct FSlateBrush BrushActionKeyRed; // 0x1278(0x90)
	struct FName TempName; // 0x1308(0x0c)
	struct FText AvailableAmmoQuantity; // 0x1318(0x18)
	struct FString CountryCode; // 0x1330(0x10)
	struct UPaperSprite* SpriteIcon; // 0x1340(0x08)

	void SetCompareFloatArrow(struct UImage* UpImgae, struct UImage* DownImgae, struct UTextBlock* Text, struct FItemComparefloatInfo CompareInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareFloatArrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponBuff(struct FInventoryItemInfo InventoryItemInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeaponBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCustomizedWidget(); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomizedWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRarityPickUp(enum class EItemRarity Rarity); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetRarityPickUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCompareArrow(struct UImage* UpImgae, struct UImage* DownImgae, struct UTextBlock* Text, struct FItemCompareInfo CompareInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareArrow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set RarityWeapon(enum class EItemRarity Rarity); // Function UW-InteractionWidget.UW-InteractionWidget_C.Set RarityWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-InteractionWidget.UW-InteractionWidget_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide(); // Function UW-InteractionWidget.UW-InteractionWidget_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_2D7AC27D4A9340E37F63BDA517074AED(struct UObject* Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2D7AC27D4A9340E37F63BDA517074AED // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA(struct UObject* Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_F76113C9404D07E2AAB61F936BF0F1DA // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138(struct UObject* Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_2385A39542FE4E4DC3D8DA9A1DC61138 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61(struct UObject* Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_5F4D13BB46FAD58EF9E7D9B1EC284B61 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36(struct UObject* Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_AD9F8D574EE55C633D4CEBA11FC6FB36 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_733052C04D52ADA03EAA61AACA84B423(struct UObject* Loaded); // Function UW-InteractionWidget.UW-InteractionWidget_C.OnLoaded_733052C04D52ADA03EAA61AACA84B423 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-InteractionWidget.UW-InteractionWidget_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set PaperSprite AsycLoad(struct TSoftObjectPtr<UPaperSprite> IconTexture, struct UImage* TargetImage); // Function UW-InteractionWidget.UW-InteractionWidget_C.Set PaperSprite AsycLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAction(struct FInteraction& InteractionInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPickItem(struct FInteraction& InteractionInfo, struct FPickupItem& NewPickItem); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetPickItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeapon(struct FInteraction& InteractionInfo, struct FWeaponItem& NewWeaponItem, struct FInventoryItemInfo& ItemInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetWeapon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCompareWeapon(struct FInteraction& InteractionInfo, struct FWeaponCompare& NewWeaponItem, struct FInventoryItemInfo& ItemInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCompareWeapon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-InteractionWidget.UW-InteractionWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetHide(); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetHide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCustomMode(int32_t ModeNum); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetCustomMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNoHide(bool NoHide); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetNoHide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInteractionInfo(struct FInteraction InteractionInfo); // Function UW-InteractionWidget.UW-InteractionWidget_C.SetInteractionInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-InteractionWidget(int32_t EntryPoint); // Function UW-InteractionWidget.UW-InteractionWidget_C.ExecuteUbergraph_UW-InteractionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

