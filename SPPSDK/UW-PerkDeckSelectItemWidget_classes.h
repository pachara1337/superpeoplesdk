// WidgetBlueprintGeneratedClass UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C
// Size: 0x2cff6add (Inherited: 0x2cff6a88)
struct UUW-PerkDeckSelectItemWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button_Main; // 0x290(0x08)
	struct UImage* Image_ClassIcon; // 0x298(0x08)
	struct UImage* Image_Disabled; // 0x2a0(0x08)
	struct UImage* Image_OutLine; // 0x2a8(0x08)
	struct UImage* Image_Push; // 0x2b0(0x08)
	struct UOverlay* Overlay_ClassUnlock; // 0x2b8(0x08)
	struct UOverlay* Overlay_ComingSoon; // 0x2c0(0x08)
	struct UOverlay* Overlay_Main; // 0x2c8(0x08)
	struct UTextBlock* T_UnlockLevel; // 0x2d0(0x08)
	struct UUW-PerkDeckSelectItemNumWidget_C* UW-PerkDeckSelectItemNumWidget; // 0x2d8(0x08)
	struct UUW-PerkDeckSelectItemNumWidget_C* UW-PerkDeckSelectItemNumWidget; // 0x2e0(0x08)
	struct UUW-PerkDeckSelectItemNumWidget_C* UW-PerkDeckSelectItemNumWidget; // 0x2e8(0x08)
	struct UUW-PerkDeckSelectItemNumWidget_C* UW-PerkDeckSelectItemNumWidget_Local; // 0x2f0(0x08)
	struct UVerticalBox* VerticalBox_Selected; // 0x2f8(0x08)
	struct FPerkDeckClassInfo PerkDeckClassInfo; // 0x300(0x30)
	int32_t SelectedNum; // 0x330(0x04)
	int32_t SelectedMinIndex; // 0x334(0x04)
	struct FMulticastInlineDelegate ChooseClass; // 0x338(0x10)
	int32_t ClassIndex; // 0x348(0x04)
	struct FMulticastInlineDelegate HoverClass; // 0x350(0x10)
	bool bIsLocalSelected; // 0x360(0x01)
	bool bIsSelected; // 0x361(0x01)
	struct FPerkDeckData CurrentPerkDeckData; // 0x368(0x570)
	bool bIsDuplicateSelectPossible; // 0x8d8(0x01)
	bool bButtonDisabled; // 0x8d9(0x01)
	bool bNoUpdatedDisabled; // 0x8da(0x01)
	bool bIsBlocked; // 0x8db(0x01)
	bool bUnlocked; // 0x8dc(0x01)

	void UpdateUnlockInfo(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.UpdateUnlockInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBlocked(bool IsBlocked, bool ComingSoon); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetBlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DisableWithoutSelected(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.DisableWithoutSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateButtonDisabled(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.UpdateButtonDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateOutLine(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.UpdateOutLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSelectedInfo(struct ABravoHotelPlayerState*& PlayerState); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetSelectedInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetSelected(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ResetSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPerkDeckClassInfoByRowName(struct FName RowName); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetPerkDeckClassInfoByRowName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPerkDeckClassInfo(struct FPerkDeckClassInfo& PerkDeckClassInfo, int32_t ClassIndex); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.SetPerkDeckClassInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C(struct UObject* Loaded); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.OnLoaded_4ECB692A48B41C9343CA15BDA4F3DA1C // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadingClassSelectIcon(struct TSoftObjectPtr<UObject> Texture); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.AsyncLoadingClassSelectIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PerkDeckSelectItemWidget(int32_t EntryPoint); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ExecuteUbergraph_UW-PerkDeckSelectItemWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void HoverClass__DelegateSignature(int32_t ClassIndex, bool IsHoverd); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.HoverClass__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChooseClass__DelegateSignature(int32_t ClassIndex); // Function UW-PerkDeckSelectItemWidget.UW-PerkDeckSelectItemWidget_C.ChooseClass__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

