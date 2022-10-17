// WidgetBlueprintGeneratedClass UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C
// Size: 0x2cff6b14 (Inherited: 0x2cff6a88)
struct UUW-MatchEnd_Animation_02_DamagePlayerInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_Equip; // 0x290(0x08)
	struct UImage* Image_CountryMark; // 0x298(0x08)
	struct UOverlay* Overlay_Health; // 0x2a0(0x08)
	struct UProgressBar* ProgressBar_Health; // 0x2a8(0x08)
	struct UTextBlock* T_Class; // 0x2b0(0x08)
	struct UTextBlock* T_ExpertWeapon; // 0x2b8(0x08)
	struct UTextBlock* T_Health; // 0x2c0(0x08)
	struct UTextBlock* T_KilledBy; // 0x2c8(0x08)
	struct UTextBlock* T_Level; // 0x2d0(0x08)
	struct UTextBlock* T_MaxHealth; // 0x2d8(0x08)
	struct UTextBlock* T_Name; // 0x2e0(0x08)
	struct UTextBlock* TextBlock; // 0x2e8(0x08)
	struct UUW-Inventory_EquippedSlot_C* UW-Inventory_EquippedSlot_Armor; // 0x2f0(0x08)
	struct UUW-Inventory_EquippedSlot_C* UW-Inventory_EquippedSlot_Bag; // 0x2f8(0x08)
	struct UUW-Inventory_EquippedSlot_C* UW-Inventory_EquippedSlot_Helmet; // 0x300(0x08)
	float TargetHealth; // 0x308(0x04)
	float CurrentHealth; // 0x30c(0x04)
	float MaxHealth; // 0x310(0x04)

	void SetHealthVisibility(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.SetHealthVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetAnim(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.ResetAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDamagePlayerInfo(bool bIsKiller, struct FDiedDamagePlayerInfo_Player DiedDamagePlayerInfo); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.SetDamagePlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_0D67093C425369D6D717CCB8680ECFAA(struct UObject* Loaded); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.OnLoaded_0D67093C425369D6D717CCB8680ECFAA // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void PlayHealthAnim(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.PlayHealthAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateHealth(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.UpdateHealth // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopHealthAnim(); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.StopHealthAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadingCountryIcon(struct TSoftObjectPtr<UObject> Texture); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.AsyncLoadingCountryIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MatchEnd_Animation_02_DamagePlayerInfo(int32_t EntryPoint); // Function UW-MatchEnd_Animation_02_DamagePlayerInfo.UW-MatchEnd_Animation_02_DamagePlayerInfo_C.ExecuteUbergraph_UW-MatchEnd_Animation_02_DamagePlayerInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

