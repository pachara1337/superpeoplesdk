// WidgetBlueprintGeneratedClass UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C
// Size: 0x2cff6af8 (Inherited: 0x2cff6a88)
struct UUW-MatchEnd_DamageList_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_HitPoint_Reversible; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox_Main_Reversible; // 0x298(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x2a0(0x08)
	struct UImage* Image_DamegeType; // 0x2a8(0x08)
	struct UImage* Image_Sidebar; // 0x2b0(0x08)
	struct UImage* Image_Sidebar; // 0x2b8(0x08)
	struct UImage* Image_Sidebar2; // 0x2c0(0x08)
	struct UImage* Image_Weapon; // 0x2c8(0x08)
	struct UOverlay* Overlay_HitPoint; // 0x2d0(0x08)
	struct UTextBlock* T_Damage_Reversible; // 0x2d8(0x08)
	struct UTextBlock* T_HitCount; // 0x2e0(0x08)
	struct UTextBlock* T_WeaponName_Reversible; // 0x2e8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_DamageIcon; // 0x2f0(0x08)

	void SetDamageInfoType(enum class EDiedDamageInfoType DamageInfoType); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetDamageInfoType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAllHitPointColor(struct FLinearColor Color); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetAllHitPointColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetReversible(bool IsReverse); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetReversible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDiedDamageInfo(struct FDiedDamageInfo& DamageInfo, bool IsLast); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.SetDiedDamageInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_9B3493564CFAE2FB48524ABF838F2D50(struct UObject* Loaded); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.OnLoaded_9B3493564CFAE2FB48524ABF838F2D50 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_D91401814D23ECA445723FB2F97B833D(struct UObject* Loaded); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.OnLoaded_D91401814D23ECA445723FB2F97B833D // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadingWeapon(struct TSoftObjectPtr<UObject> Texture); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.AsyncLoadingWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadingDamageType(struct TSoftObjectPtr<UObject> Texture); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.AsyncLoadingDamageType // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MatchEnd_DamageList_Item(int32_t EntryPoint); // Function UW-MatchEnd_DamageList_Item.UW-MatchEnd_DamageList_Item_C.ExecuteUbergraph_UW-MatchEnd_DamageList_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

