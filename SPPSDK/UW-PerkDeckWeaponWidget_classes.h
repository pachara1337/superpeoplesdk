// WidgetBlueprintGeneratedClass UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C
// Size: 0x2cff6af9 (Inherited: 0x2cff6a88)
struct UUW-PerkDeckWeaponWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UButton* Image_Button; // 0x298(0x08)
	struct UImage* Image_Weapon; // 0x2a0(0x08)
	struct UOverlay* Overlay_CheckBox; // 0x2a8(0x08)
	struct UTextBlock* T_WeaponName; // 0x2b0(0x08)
	struct UTextBlock* T_WeaponType; // 0x2b8(0x08)
	struct FName ExpertWeaponName; // 0x2c0(0x0c)
	struct FMulticastInlineDelegate OnClickExpertWeaponButtonDelegate; // 0x2d0(0x10)
	bool bIsExpertWeaponChanged; // 0x2e0(0x01)
	struct FMulticastInlineDelegate OnClickExpertWeaponChangedDelegate; // 0x2e8(0x10)
	bool bIsCurrentWeapon; // 0x2f8(0x01)
	char pad_2CFF6AEE[0xb]; // 0x2cff6aee(0x0b)

	void SetCheckBoxVisibility(); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.SetCheckBoxVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetExpertWeaponInfo(struct FName WeaponName); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.SetExpertWeaponInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_ABA7D1DA435C5FA7D405C6AFC4C5F3AF(struct UObject* Loaded); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.OnLoaded_ABA7D1DA435C5FA7D405C6AFC4C5F3AF // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadingWeapon(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.AsyncLoadingWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Image_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.BndEvt__Image_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Image_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.BndEvt__Image_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Image_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.BndEvt__Image_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PerkDeckWeaponWidget(int32_t EntryPoint); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.ExecuteUbergraph_UW-PerkDeckWeaponWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnClickExpertWeaponChangedDelegate__DelegateSignature(); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.OnClickExpertWeaponChangedDelegate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnClickExpertWeaponButtonDelegate__DelegateSignature(); // Function UW-PerkDeckWeaponWidget.UW-PerkDeckWeaponWidget_C.OnClickExpertWeaponButtonDelegate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

