// WidgetBlueprintGeneratedClass UW-AttackUserWidget.UW-AttackUserWidget_C
// Size: 0x2cff6a98 (Inherited: 0x2cff6a68)
struct UUW-AttackUserWidget_C : UBravoHotelAttackUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x370(0x08)
	struct UImage* Image; // 0x378(0x08)
	struct UOverlay* Overlay; // 0x380(0x08)
	struct UWrapBox* WrapBox_BuffList; // 0x388(0x08)
	struct AActor* Pawn; // 0x390(0x08)

	void UpdateDefenceBuffVisibility(); // Function UW-AttackUserWidget.UW-AttackUserWidget_C.UpdateDefenceBuffVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNameColor(int32_t NewColorIndex); // Function UW-AttackUserWidget.UW-AttackUserWidget_C.SetNameColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckBuffCount(int32_t BuffCount); // Function UW-AttackUserWidget.UW-AttackUserWidget_C.CheckBuffCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HiddenAllBuffSlot(); // Function UW-AttackUserWidget.UW-AttackUserWidget_C.HiddenAllBuffSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetNameColor(int32_t NewColorIndex); // Function UW-AttackUserWidget.UW-AttackUserWidget_C.K2_SetNameColor // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetDefenceEffectInfos(struct TArray<struct FDefenceEffectInfo>& DefenceEffectInfos); // Function UW-AttackUserWidget.UW-AttackUserWidget_C.K2_SetDefenceEffectInfos // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-AttackUserWidget.UW-AttackUserWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnGameUserSettingsApply_GamePlay_Event(struct TArray<enum class ESettingType>& List); // Function UW-AttackUserWidget.UW-AttackUserWidget_C.OnGameUserSettingsApply_GamePlay_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-AttackUserWidget(int32_t EntryPoint); // Function UW-AttackUserWidget.UW-AttackUserWidget_C.ExecuteUbergraph_UW-AttackUserWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

