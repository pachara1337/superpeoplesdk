// WidgetBlueprintGeneratedClass UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C
// Size: 0x2cff6a28 (Inherited: 0x2cff6b00)
struct UUW-Inventory_PerkSlot_C : UBravoHotelInventoryPerkSlotWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* LevelUp; // 0x308(0x08)
	struct UImage* Blank_SkillBG; // 0x310(0x08)
	struct UOverlay* ChoiceSkill; // 0x318(0x08)
	struct UImage* Get_SkillBG; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* IMG_CoolTime; // 0x338(0x08)
	struct UImage* IMG_PerkIcon; // 0x340(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x348(0x08)
	struct UImage* Lv1; // 0x350(0x08)
	struct UImage* Lv2; // 0x358(0x08)
	struct UImage* Lv3; // 0x360(0x08)
	struct UImage* LvUpSkill_Image; // 0x368(0x08)
	struct UImage* OtherSkillMarker; // 0x370(0x08)
	struct UOverlay* Over_CoolTime; // 0x378(0x08)
	struct UButton* PerkSlot_Button; // 0x380(0x08)
	struct USizeBox* SizeBox_slot; // 0x388(0x08)
	struct UImage* SkillPressed; // 0x390(0x08)
	struct UTextBlock* T_CoolTime; // 0x398(0x08)
	struct UTextBlock* T_PerkName; // 0x3a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Icon; // 0x3a8(0x08)
	bool bHover; // 0x3b0(0x01)
	float CurrentExpPercent; // 0x3b4(0x04)
	struct FName PerkName; // 0x3b8(0x0c)
	int32_t CurrentLevel; // 0x3c4(0x04)
	int32_t LastLevel; // 0x3c8(0x04)
	float TargetExpPercent; // 0x3cc(0x04)
	float ExpSpeed; // 0x3d0(0x04)
	struct FPerkData PerkData; // 0x3d8(0xf0)
	float CurrentLevelPercent; // 0x4c8(0x04)
	int32_t MaxLevel; // 0x4cc(0x04)
	struct UUW-Inventory_ItemSlotHover_C* HoverWidget; // 0x4d0(0x08)
	struct TArray<struct UImage*> LvArray; // 0x4d8(0x10)
	bool bIsActivated; // 0x4e8(0x01)
	struct FMulticastInlineDelegate CreateChangablePerkList; // 0x4f0(0x10)
	struct FMulticastInlineDelegate ClearChangablePerkList; // 0x500(0x10)
	bool bIsPerkChanngable; // 0x510(0x01)
	float RandomList; // 0x514(0x04)
	bool bIsInPerkDeck; // 0x518(0x01)
	int32_t LevelUPAmount; // 0x51c(0x04)
	bool bIsAlreadySelected; // 0x520(0x01)
	int32_t ClassIndex; // 0x524(0x04)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetToUnlock(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.ResetToUnlock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void On Img Active Mouse Button Down 0(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.On Img Active Mouse Button Down 0 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetForVisual(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetForVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitLevelWidget(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitLevelWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateLevelWidget(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateLevelWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateLevelInfo(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateLevelInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateVSkill(struct TArray<enum class EKeySettingType>& List); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateVSkill // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateActiveColor(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdateActiveColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPerkName(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetPerkName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdatePerkInfo(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.UpdatePerkInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitSkillBGImg(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.InitSkillBGImg // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FLinearColor Get Slot Color(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.Get Slot Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetLevelUp(int32_t TargetLevel, int32_t TargetExp); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetLevelUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	float GetExpPercent(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.GetExpPercent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetPerk(struct UUW-Inventory_ItemSlotHover_C* HoverWidget, struct FPerkUIInfo PerkInfo, bool JustVisual, int32_t ClassIndex); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.SetPerk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_40E2F69B49645C79FC493E8F13CDBE28(struct UObject* Loaded); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_40E2F69B49645C79FC493E8F13CDBE28 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914(struct UObject* Loaded); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_D7551D6C4C375F77D2FAE6B8B3229914 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011(struct UObject* Loaded); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnLoaded_66A872FA4BD6D4BAE1E1DBAA7A175011 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIcon(struct TSoftObjectPtr<UObject> Image); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadBG(struct TSoftObjectPtr<UObject> Image); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadBG // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadBlank(struct TSoftObjectPtr<UObject> Image); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.AsyncLoadBlank // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__PerkSlot_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.BndEvt__PerkSlot_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Mouse_RightClick(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.Mouse_RightClick // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__PerkSlot_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.BndEvt__PerkSlot_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__PerkSlot_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.BndEvt__PerkSlot_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_PerkSlot(int32_t EntryPoint); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.ExecuteUbergraph_UW-Inventory_PerkSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void ClearChangablePerkList__DelegateSignature(struct UUW-Inventory_PerkSlot_C* PerkSlot); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.ClearChangablePerkList__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateChangablePerkList__DelegateSignature(struct FName CurrentPerkName); // Function UW-Inventory_PerkSlot.UW-Inventory_PerkSlot_C.CreateChangablePerkList__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

