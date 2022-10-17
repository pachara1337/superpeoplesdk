// WidgetBlueprintGeneratedClass UW-Lobby_Craft_ConfirmPopup.UW-Lobby_Craft_ConfirmPopup_C
// Size: 0x2cff6b20 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_ConfirmPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Bg; // 0x290(0x08)
	struct UButton* Button_Crapting_Btn; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Img_Gold; // 0x2a8(0x08)
	struct UImage* Img_Gold_Inert; // 0x2b0(0x08)
	struct UImage* Img_Icon_Wide; // 0x2b8(0x08)
	struct UTextBlock* T_GoldCost; // 0x2c0(0x08)
	struct UUW-ButtonCancle_C* UW-ButtonCancle; // 0x2c8(0x08)
	struct UUW-Lobby_Craft_AdditionalOptions_C* UW-Lobby_Craft_AdditionalOptions; // 0x2d0(0x08)
	struct UUW-Lobby_ItemName_C* UW-Lobby_ItemName; // 0x2d8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Gold; // 0x2e0(0x08)
	struct UWrapBox* WrapBox_MaterialList; // 0x2e8(0x08)
	struct UWrapBox* WrapBox_WeaponList; // 0x2f0(0x08)
	struct FMulticastInlineDelegate EventDispatcher_RequestItemCraft; // 0x2f8(0x10)
	struct UUW-Lobby_Craft_WeaponSelect_Slot_C* SelectedWidget; // 0x308(0x08)
	struct FMulticastInlineDelegate EventDispatcher_Cancel; // 0x310(0x10)

	void SetCraftInfo(struct FItemCrafting CraftingInfo, struct TArray<struct UUW-Lobby_Craft_Material_Item_C*>& EquippedList); // Function UW-Lobby_Craft_ConfirmPopup.UW-Lobby_Craft_ConfirmPopup_C.SetCraftInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_351A26DF403155B6300069BB6F12C012(struct UObject* Loaded); // Function UW-Lobby_Craft_ConfirmPopup.UW-Lobby_Craft_ConfirmPopup_C.OnLoaded_351A26DF403155B6300069BB6F12C012 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadImg(struct TSoftObjectPtr<UObject> Object); // Function UW-Lobby_Craft_ConfirmPopup.UW-Lobby_Craft_ConfirmPopup_C.AsyncLoadImg // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_ConfirmPopup.UW-Lobby_Craft_ConfirmPopup_C.BndEvt__Button_Crapting_Btn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UW-Lobby_Craft_ConfirmPopup.UW-Lobby_Craft_ConfirmPopup_C.BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_ConfirmPopup(int32_t EntryPoint); // Function UW-Lobby_Craft_ConfirmPopup.UW-Lobby_Craft_ConfirmPopup_C.ExecuteUbergraph_UW-Lobby_Craft_ConfirmPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_Cancel__DelegateSignature(); // Function UW-Lobby_Craft_ConfirmPopup.UW-Lobby_Craft_ConfirmPopup_C.EventDispatcher_Cancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_RequestItemCraft__DelegateSignature(); // Function UW-Lobby_Craft_ConfirmPopup.UW-Lobby_Craft_ConfirmPopup_C.EventDispatcher_RequestItemCraft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

