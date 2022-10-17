// WidgetBlueprintGeneratedClass UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct UUW-PlayerInfoWidget_Renew_C : UBravoHotelPlayerInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* Anim_Filled_Backpack; // 0x448(0x08)
	struct UWidgetAnimation* Anim_Broken_Chest; // 0x450(0x08)
	struct UWidgetAnimation* Anim_Broken_Helmet; // 0x458(0x08)
	struct UWidgetAnimation* Lung_Red; // 0x460(0x08)
	struct UWidgetAnimation* Weaving_Stand; // 0x468(0x08)
	struct UWidgetAnimation* Weaving_Sit; // 0x470(0x08)
	struct UHorizontalBox* HorizontalBox_Backpack_Star; // 0x478(0x08)
	struct UHorizontalBox* HorizontalBox_Chest_Star; // 0x480(0x08)
	struct UHorizontalBox* HorizontalBox_Damage; // 0x488(0x08)
	struct UHorizontalBox* HorizontalBox_Helmet_Star; // 0x490(0x08)
	struct UHorizontalBox* HorizontalBox_Levels; // 0x498(0x08)
	struct UImage* Image_BackPack_Star; // 0x4a0(0x08)
	struct UImage* Image_Chest_Star; // 0x4a8(0x08)
	struct UImage* Image_Helmet_Star; // 0x4b0(0x08)
	struct UImage* Image_Time; // 0x4b8(0x08)
	struct UImage* Image_Timer; // 0x4c0(0x08)
	struct UImage* Image_Weapon; // 0x4c8(0x08)
	struct UImage* Img_Chest; // 0x4d0(0x08)
	struct UImage* Img_FireMode_Single; // 0x4d8(0x08)
	struct UImage* Img_Helmet; // 0x4e0(0x08)
	struct UProgressBar* ProgressBar_Backpack; // 0x4e8(0x08)
	struct USizeBox* SizeBox_Backpack; // 0x4f0(0x08)
	struct USizeBox* SizeBox_Chest; // 0x4f8(0x08)
	struct USizeBox* SizeBox_Helmet; // 0x500(0x08)
	struct UUW-GameBuffSlot_BoostCover_C* UW-GameBuffSlot_BoostCover; // 0x508(0x08)
	struct UUW-PlayerInfo_Progress_Renew_C* UW-PlayerInfo_Progress_Renew; // 0x510(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Chest; // 0x518(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Helmet; // 0x520(0x08)
	struct UWidgetAnimation* Anim_LastHeadbanging; // 0x528(0x08)
	struct FTimerHandle Timer_UpdateInfos; // 0x530(0x08)
	bool bIsCoolTimeWeapon; // 0x538(0x01)
	struct ABravoHotelWeaponBase* CurrentWeapon; // 0x540(0x08)
	struct ABravoHotelCharacter* TargetPawnRef; // 0x548(0x08)
	struct UMaterialInstanceDynamic* CoolTimeMaterial; // 0x550(0x08)
	int32_t SlotIndex; // 0x558(0x04)
	struct UCurveVector* Curve_ArmorPercentColor; // 0x560(0x08)

	void UpdateBackpackPercent(float Percent); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateBackpackPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsNoDamageWeapon(bool& Weapon); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsNoDamageWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetFistMode(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFistMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsMeleeWeapon(bool& bTrue); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsMeleeWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnAddBuffs(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnAddBuffs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HiddenAllBuffs(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.HiddenAllBuffs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetStar(int32_t Level, struct UImage* Image); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetStar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetArmorInfo(struct FPlayerArmorInfo& ArmorInfo); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetArmorInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsPerkWeapon(bool& Weapon); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.IsPerkWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ChangePawn(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ChangePawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBulletCount(struct FString BulletCount, struct FString BulletMaxCount); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetBulletCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponFireMode(enum class EWeaponFireMode FireMode); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponFireMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateDamage(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateTimer(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateInfos(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.UpdateInfos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetUpdateTimer(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetUpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetLungRed(bool Flag); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetLungRed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetHeadBangingAnim(bool IsHeadbanging, int32_t Stance); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetHeadBangingAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetWeaponInfo(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetWeaponInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponInfo(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_97B8B47B466730860C4DE6A59E985E90(struct UObject* Loaded); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.OnLoaded_97B8B47B466730860C4DE6A59E985E90 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetRedLungAnim(bool bIsRed); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetRedLungAnim // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ResetCurrentWeaponInfo(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetCurrentWeaponInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCurrentWeaponInfo(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetCurrentWeaponInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetFireMode(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetFireMode // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponBulletCount(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.SetWeaponBulletCount // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetBackpackPercent(float Percent); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.K2_SetBackpackPercent // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetWeaponRarity(int32_t Rarity); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.K2_SetWeaponRarity // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetCoolTimePercent(float Percent); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.K2_SetCoolTimePercent // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetDamageVisibility(bool bIsVisible); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.K2_SetDamageVisibility // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetArmorInfo(struct FPlayerArmorInfo& NewArmorInfo); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.K2_SetArmorInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetHeadBanging(bool bIsHeadBanging, int32_t NewStanceIndex); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.K2_SetHeadBanging // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetWeaponTextureAsyncLoad(struct TSoftObjectPtr<UPaperSprite>& Texture); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.K2_SetWeaponTextureAsyncLoad // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetCoolTimePercentUnHandWeapon(float Percent); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.K2_SetCoolTimePercentUnHandWeapon // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ResetBuff(); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ResetBuff // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PlayerInfoWidget_Renew(int32_t EntryPoint); // Function UW-PlayerInfoWidget_Renew.UW-PlayerInfoWidget_Renew_C.ExecuteUbergraph_UW-PlayerInfoWidget_Renew // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

