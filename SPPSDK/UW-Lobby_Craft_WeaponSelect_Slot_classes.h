// WidgetBlueprintGeneratedClass UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C
// Size: 0x2cff6a30 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_WeaponSelect_Slot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button_ItemSlotHover; // 0x290(0x08)
	struct UUW-Inventory_ItemSlotHover_C* UW-Inventory_ItemSlotHover; // 0x298(0x08)
	struct FResponse_Weapon_List_Data ItemWeaponInfo; // 0x2a0(0x88)
	struct UUW-Lobby_Craft_WeaponSelect_C* ParentWidget; // 0x328(0x08)

	void SetButtonEnabled(bool InIsEnabled); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SetButtonEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponInfo(struct FResponse_Weapon_List_Data& ItemWeaponInfo, struct UUW-Lobby_Craft_WeaponSelect_C* ParentWidget); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SetWeaponInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.BndEvt__Button_ItemSlotHover_3_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ResetButton(); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.ResetButton // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SelectButton(); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.SelectButton // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Slot(int32_t EntryPoint); // Function UW-Lobby_Craft_WeaponSelect_Slot.UW-Lobby_Craft_WeaponSelect_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect_Slot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

