// WidgetBlueprintGeneratedClass UW-PerkLevelUp_02.UW-PerkLevelUp_02_C
// Size: 0x2cff6a28 (Inherited: 0x2cff6a88)
struct UUW-PerkLevelUp_02_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Level_Up_New; // 0x290(0x08)
	struct UWidgetAnimation* VSkill_Motion; // 0x298(0x08)
	struct UWidgetAnimation* FinalitySkill_Motion; // 0x2a0(0x08)
	struct UWidgetAnimation* LEVEL_UP; // 0x2a8(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2b0(0x08)
	struct UTextBlock* FSkill_Info; // 0x2b8(0x08)
	struct UTextBlock* FSkill_Title; // 0x2c0(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image_UltimateGetMat; // 0x330(0x08)
	struct UImage* IMG_FinalitySkill; // 0x338(0x08)
	struct UImage* Img_UltimateMaterial; // 0x340(0x08)
	struct UImage* Light; // 0x348(0x08)
	struct UTextBlock* T_Desc; // 0x350(0x08)
	struct UTextBlock* T_Level; // 0x358(0x08)
	struct UTextBlock* T_PerkName; // 0x360(0x08)
	struct UTextBlock* TextBlock_LevelUpNewText; // 0x368(0x08)
	struct UUW-Inventory_PerkSlot_C* UW-Inventory_PerkSlot_LevelUp; // 0x370(0x08)
	struct UUW-Inventory_PerkSlot_C* UW-Inventory_PerkSlot_VSkill; // 0x378(0x08)
	struct UTextBlock* VSkill_Info; // 0x380(0x08)
	struct UTextBlock* VSkill_Titile; // 0x388(0x08)
	struct UImage* VSkillThumbStroke_02; // 0x390(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_LevelUpInfo; // 0x398(0x08)
	struct FTimerHandle Handle_LevelUpEffect; // 0x3a0(0x08)
	float EffectDelay; // 0x3a8(0x04)
	struct TArray<struct FPerkUIInfo> PerkInfoQue; // 0x3b0(0x10)
	struct FPerkUIInfo CurrentPerkInfo; // 0x3c0(0x40)
	struct TArray<enum class BP-PerkLevelUpInfoEnum> PerkLevelUpInfo; // 0x400(0x10)
	struct FPerkLevelUpData PerkLevelUpData; // 0x410(0x1f0)
	struct FPerkData CurrentPerkData; // 0x600(0xf0)
	int32_t CurrentLevel; // 0x6f0(0x04)
	bool IsAlreadyUnlockedUltimate; // 0x6f4(0x01)
	enum class BP-PerkLevelUpInfoEnum CurrentLevelUpInfo; // 0x6f5(0x01)
	struct TArray<int32_t> CurrentLevelQue; // 0x6f8(0x10)
	float CurrentUltimateMaterialValue; // 0x708(0x04)
	bool UltimateUpdate; // 0x70c(0x01)
	struct UMaterialInstanceDynamic* UltimateMaterialInstance; // 0x710(0x08)
	float UltimateAnimTime; // 0x718(0x04)
	struct UMaterialInstanceDynamic* UltimateGetMaterialInstance; // 0x720(0x08)

	void SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02(struct UImage* Image); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.SequenceEvent__ENTRYPOINTUW-PerkLevelUp_02 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetInfos(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ResetInfos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayLevelAndUtimate(int32_t Level, bool bUltimate); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelAndUtimate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RemoveAllEffects(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.RemoveAllEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayLevelUpSound(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayCharacterLevelUpEffect(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayCharacterLevelUpEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckUltimateSkill(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.CheckUltimateSkill // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FText GetText(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.GetText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void PlayUltimateSkillAnimation(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayUltimateSkillAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlaySkillUnlockAnimation(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlaySkillUnlockAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayLevelUpAnimation(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsOverUltimateLevel(bool& IsUltimate); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.IsOverUltimateLevel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void LevelUpEffect(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.LevelUpEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartLevelUpEffect(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.StartLevelUpEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddToQue(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.AddToQue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayLevelUpPopup(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.PlayLevelUpPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartUltimateUpdate(struct UImage* Image); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.StartUltimateUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ResetUltimateUpdate(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ResetUltimateUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateUltimateMaterial(); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.UpdateUltimateMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PerkLevelUp_02(int32_t EntryPoint); // Function UW-PerkLevelUp_02.UW-PerkLevelUp_02_C.ExecuteUbergraph_UW-PerkLevelUp_02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

