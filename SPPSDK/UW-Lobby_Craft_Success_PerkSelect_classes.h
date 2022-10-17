// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C
// Size: 0x2cff6b08 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_Success_PerkSelect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_Show; // 0x290(0x08)
	struct UBorder* Border; // 0x298(0x08)
	struct UBorder* Border; // 0x2a0(0x08)
	struct UButton* btn_All_OK; // 0x2a8(0x08)
	struct UButton* btn_Close; // 0x2b0(0x08)
	struct UHorizontalBox* HorizontalBox_CloseButton; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UUW-Lobby_Craft_Success_Perk_Close_C* UW-Lobby_Craft_Success_Perk_Close; // 0x2c8(0x08)
	struct UUW-Lobby_Craft_Success_Perk_Close_C* UW-Lobby_Craft_Success_Perk_Close; // 0x2d0(0x08)
	struct UUW-Lobby_Craft_Success_Perk_Close_C* UW-Lobby_Craft_Success_Perk_Close; // 0x2d8(0x08)
	struct UUW-Lobby_WeaponInfo_C* UW-Lobby_WeaponInfo; // 0x2e0(0x08)
	struct UUW-Lobby_WeaponInfo_OptionList_C* UW-Lobby_WeaponInfo_OptionList; // 0x2e8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x2f0(0x08)
	struct TArray<struct FItemOption> OpenedOptionList; // 0x2f8(0x10)

	void OnClosePerkPopup(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.OnClosePerkPopup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBlockInput(bool bBlock); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetBlockInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartOpen(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.StartOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckAllOpened(bool& AllOpened); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.CheckAllOpened // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OpenAllPerk(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.OpenAllPerk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateOpenedPerkPopup(struct TArray<struct FItemOption>& OptionList); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.CreateOpenedPerkPopup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EndOpen(struct FItemOption ItemOption); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.EndOpen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddPerkList(struct FItemOption& ItemOption); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.AddPerkList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetButtonList(struct TArray<int32_t>& OptionIDList); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetButtonList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponInfo(struct FResponse_CraftWeapon_Weapon CraftWeapon); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetWeaponInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetEventCreateOpenedPerkPopup(struct TArray<struct FItemOption>& OptionList); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.SetEventCreateOpenedPerkPopup // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.BndEvt__btn_All_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Success_PerkSelect(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_PerkSelect.UW-Lobby_Craft_Success_PerkSelect_C.ExecuteUbergraph_UW-Lobby_Craft_Success_PerkSelect // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

