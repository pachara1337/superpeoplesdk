// WidgetBlueprintGeneratedClass UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C
// Size: 0x2cff6aa1 (Inherited: 0x2cff6aa8)
struct UUW-ListWidget_DamageLog_C : UUW-ListWidget_ItemBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UImage* Img_Back_Default; // 0x2b0(0x08)
	struct UImage* Img_Back_Kill; // 0x2b8(0x08)
	struct UImage* Img_Back_Knockout; // 0x2c0(0x08)
	struct URichTextBlock* NewRichText; // 0x2c8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_BG; // 0x2d0(0x08)
	struct FHitDamageLogInfo DamageLogInfo; // 0x2d8(0xbb0)
	float LogTime; // 0xe88(0x04)
	float LogStackValidTime; // 0xe8c(0x04)
	struct ABravoHotelPlayerState* TargetPlayerState; // 0xe90(0x08)
	struct ABravoHotelVehicle* TargetVehicle; // 0xe98(0x08)
	bool IsTire; // 0xea0(0x01)

	void IsVehicle(bool& OutIsVehicle); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.IsVehicle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsSameTarget(struct FHitDamageLogInfo DamageLogInfo, bool& bIsSame); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.IsSameTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetBgOpacity(); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.SetBgOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DamageResultText(struct FText& Result); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.DamageResultText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void DamageText(struct FText& Result); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.DamageText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void WeaponText(struct FText& Result); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.WeaponText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void TargetText(bool IsKill, struct FText& Result); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.TargetText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void StackDamageLog(struct FHitDamageLogInfo& DamageLogInfo); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.StackDamageLog // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckCanStackDamage Log(struct FHitDamageLogInfo& DamageLogInfo, bool& CanStack); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.CheckCanStackDamage Log // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetHitDamageLogInfo(struct FHitDamageLogInfo& DamageLogInfo); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.SetHitDamageLogInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnGameUserSettingsApply_GamePlay_Event(struct TArray<enum class ESettingType>& List); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.OnGameUserSettingsApply_GamePlay_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ListWidget_DamageLog(int32_t EntryPoint); // Function UW-ListWidget_DamageLog.UW-ListWidget_DamageLog_C.ExecuteUbergraph_UW-ListWidget_DamageLog // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

