// WidgetBlueprintGeneratedClass UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_WeaponSelect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* btn_Cancel; // 0x290(0x08)
	struct UButton* btn_Cancel; // 0x298(0x08)
	struct UButton* btn_OK; // 0x2a0(0x08)
	struct UHorizontalBox* HorizontalBox_WeaponList; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UUW-Lobby_Craft_WeaponSelect_Slot_C* UW-Lobby_Craft_WeaponSelect_Slot; // 0x2c0(0x08)
	struct UUW-Lobby_Craft_WeaponSelect_Slot_C* UW-Lobby_Craft_WeaponSelect_Slot; // 0x2c8(0x08)
	struct UUW-Lobby_Craft_WeaponSelect_Slot_C* UW-Lobby_Craft_WeaponSelect_Slot; // 0x2d0(0x08)
	struct FMulticastInlineDelegate EventDispatcher_RequestItemCraft; // 0x2d8(0x10)
	struct UUW-Lobby_Craft_WeaponSelect_Slot_C* SelectedWidget; // 0x2e8(0x08)
	struct FMulticastInlineDelegate EventDispatcher_Cancel; // 0x2f0(0x10)

	void SetWeaponList(struct TArray<struct FResponse_Weapon_List_Data>& WeaponList, int32_t BaseItemID); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.SetWeaponList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Reinforce_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Repair_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ChangeSelectedButton(struct UUW-Lobby_Craft_WeaponSelect_Slot_C* SlotWidget); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.ChangeSelectedButton // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.BndEvt__btn_Ok_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect(int32_t EntryPoint); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.ExecuteUbergraph_UW-Lobby_Craft_WeaponSelect // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_Cancel__DelegateSignature(); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.EventDispatcher_Cancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_RequestItemCraft__DelegateSignature(int32_t BaseIndex, struct FString ItemId); // Function UW-Lobby_Craft_WeaponSelect.UW-Lobby_Craft_WeaponSelect_C.EventDispatcher_RequestItemCraft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

