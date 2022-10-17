// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C
// Size: 0x2cff6abc (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_Material_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_Logo; // 0x290(0x08)
	struct UComboBoxString* ComboBoxString_Filter_perk; // 0x298(0x08)
	struct UComboBoxString* ComboBoxString_Fliter_Slot; // 0x2a0(0x08)
	struct UImage* Down_Perk; // 0x2a8(0x08)
	struct UImage* Down_Slot; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image_Area; // 0x2d8(0x08)
	struct UOverlay* Overlay; // 0x2e0(0x08)
	struct UOverlay* Overlay; // 0x2e8(0x08)
	struct UOverlay* Overlay_Filter_Perk; // 0x2f0(0x08)
	struct UOverlay* Overlay_Filter_Slot; // 0x2f8(0x08)
	struct UTextBlock* SortText_Perk; // 0x300(0x08)
	struct UTextBlock* SortText_Slot; // 0x308(0x08)
	struct UImage* Up_Perk; // 0x310(0x08)
	struct UImage* Up_Slot; // 0x318(0x08)
	struct UUW-Lobby_Craft_Material_Item_C* UW-Lobby_Craft_Material_Item; // 0x320(0x08)
	struct UUW-Lobby_Craft_Material_Item_C* UW-Lobby_Craft_Material_Item; // 0x328(0x08)
	struct UUW-Lobby_Craft_Material_Item_C* UW-Lobby_Craft_Material_Item; // 0x330(0x08)
	struct UUW-Lobby_Craft_Material_Item_C* UW-Lobby_Craft_Material_Item; // 0x338(0x08)
	struct UUW-Lobby_Craft_Material_Item_C* UW-Lobby_Craft_Material_Item; // 0x340(0x08)
	struct UUW-Lobby_Craft_Material_Item_C* UW-Lobby_Craft_Material_Item; // 0x348(0x08)
	struct UWrapBox* WrapBox_Main; // 0x350(0x08)
	struct TArray<int32_t> RecipeCheckList; // 0x358(0x10)
	struct TArray<struct UUW-Lobby_Craft_Material_Item_C*> CurrentWeaponMaterialWidgetList; // 0x368(0x10)
	int32_t ColumnCount; // 0x378(0x04)
	struct FText TextAll; // 0x380(0x18)
	struct FText TextWeapon; // 0x398(0x18)
	struct UUW-Lobby_Armory_Recipe_C* ArmoryRecipeWidgetRef; // 0x3b0(0x08)
	int32_t BaseItemID; // 0x3b8(0x04)

	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPerkSearchID(int32_t PerkID, int32_t& SearchID); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.GetPerkSearchID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ResetAllMaterialHovered(); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.ResetAllMaterialHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetArmoryRecipeWidget(struct UUW-Lobby_Armory_Recipe_C*& ArmoryRecipeWidgetRef); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.GetArmoryRecipeWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetComboBoxButtonMode_Perk(bool IsUp); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.SetComboBoxButtonMode_Perk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetComboBoxButtonMode_Slot(bool IsUp); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.SetComboBoxButtonMode_Slot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeFilter(); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.OnChangeFilter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetFilter(); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.ResetFilter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMaterialWidgetByIndex(int32_t SlotIndex, struct UUW-Lobby_Craft_Material_Item_C*& OutItemWidget); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.GetMaterialWidgetByIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void HiddenAllMaterials(bool Reset); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.HiddenAllMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RecreateCurrentWeaponMaterialWidgets(); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.RecreateCurrentWeaponMaterialWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOwnMaterialInfo(int32_t BaseItemID, int32_t MaterialGroupItemID); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.SetOwnMaterialInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_Fliter_Slot_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature(); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.BndEvt__ComboBoxString_Fliter_Slot_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_Filter_perk_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature(); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.BndEvt__ComboBoxString_Filter_perk_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_Filter_perk_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.BndEvt__ComboBoxString_Filter_perk_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_Fliter_Slot_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.BndEvt__ComboBoxString_Fliter_Slot_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ResetDragEvent(); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.ResetDragEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Material(int32_t EntryPoint); // Function UW-Lobby_Craft_Material.UW-Lobby_Craft_Material_C.ExecuteUbergraph_UW-Lobby_Craft_Material // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

