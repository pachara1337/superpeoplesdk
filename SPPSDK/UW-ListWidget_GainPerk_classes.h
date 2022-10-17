// WidgetBlueprintGeneratedClass UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C
// Size: 0x2cff6a70 (Inherited: 0x2cff6aa8)
struct UUW-ListWidget_GainPerk_C : UUW-ListWidget_ItemBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* UpAnim; // 0x2b0(0x08)
	struct UWidgetAnimation* LevelUp; // 0x2b8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2c0(0x08)
	struct UWidgetAnimation* Idle; // 0x2c8(0x08)
	struct UCanvasPanel* CanvasPanel_New; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image_Back; // 0x2e0(0x08)
	struct UOverlay* Overlay_Level; // 0x2e8(0x08)
	struct UTextBlock* PerkLastLevel; // 0x2f0(0x08)
	struct UCanvasPanel* PerkSlotHover; // 0x2f8(0x08)
	struct UTextBlock* T_LV; // 0x300(0x08)
	struct UTextBlock* T_PerkLevel; // 0x308(0x08)
	struct UTextBlock* T_PerkName; // 0x310(0x08)
	struct UTextBlock* TextBlock; // 0x318(0x08)
	struct UUW-ImageText_C* UW-ImageText; // 0x320(0x08)
	struct UUW-Inventory_PerkSlot_C* UW-Inventory_PerkSlot; // 0x328(0x08)
	struct FPerkUIInfo PerkUIInfo; // 0x330(0x40)
	int32_t CurrentLevel; // 0x370(0x04)
	int32_t LastLevel; // 0x374(0x04)
	int32_t PerkLevel; // 0x378(0x04)
	bool IsPlayingUltimateSound; // 0x37c(0x01)
	struct FPerkData PerkData; // 0x380(0xf0)
	struct FPerkInGameData PerInGameData; // 0x470(0x1f8)
	struct FVector2D DefaultPosition; // 0x668(0x08)

	void PlayUpDownAnim(); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.PlayUpDownAnim // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool IsUltimateLevel(); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.IsUltimateLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetPerkNameDesc(); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.SetPerkNameDesc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGainPerkInfo(struct FPerkUIInfo& PerkUIInfo, int32_t CurrentLevel, int32_t LastLevel, bool IsPlayingUltimateSound); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.SetGainPerkInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FLinearColor Get_PerkName_ColorAndOpacity(); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.Get_PerkName_ColorAndOpacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.OnAnimationStarted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void SetGainPerkWidgetCount(bool bAdd); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.SetGainPerkWidgetCount // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ListWidget_GainPerk(int32_t EntryPoint); // Function UW-ListWidget_GainPerk.UW-ListWidget_GainPerk_C.ExecuteUbergraph_UW-ListWidget_GainPerk // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

