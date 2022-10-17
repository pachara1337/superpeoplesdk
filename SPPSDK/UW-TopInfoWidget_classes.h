// WidgetBlueprintGeneratedClass UW-TopInfoWidget.UW-TopInfoWidget_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6aa8)
struct UUW-TopInfoWidget_C : UBravoHotelTopInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* Anim_HideWidget; // 0x2b0(0x08)
	struct UCanvasPanel* Canvas; // 0x2b8(0x08)
	struct UCanvasPanel* Canvas_Minimap; // 0x2c0(0x08)
	struct UCanvasPanel* CanvasPanel_MinimapForCacheUpdate; // 0x2c8(0x08)
	struct UCanvasPanel* CanvasPanel_StatupFirst; // 0x2d0(0x08)
	struct UCanvasPanel* CanvasPanel_StatupThird; // 0x2d8(0x08)
	struct UTextBlock* T_GameVersion; // 0x2e0(0x08)
	struct UUW-CastingWidget_C* UW-CastingWidget; // 0x2e8(0x08)
	struct UUW-HUDMessageWidget_C* UW-HUDMessageWidget; // 0x2f0(0x08)
	struct UUW-Inventory_Perk_C* UW-Inventory_Perk; // 0x2f8(0x08)
	struct UUW-ListWidget_C* UW-ListWidget_DamageLog; // 0x300(0x08)
	struct UUW-ListWidget_C* UW-ListWidget_GainPerk; // 0x308(0x08)
	struct UUW-ListWidget_C* UW-ListWidget_KillMessage; // 0x310(0x08)
	struct UUW-MinimapWidget_C* UW-MinimapWidget; // 0x318(0x08)
	struct UUW-PlayerInfoWidget_Renew_C* UW-PlayerInfoWidget_02; // 0x320(0x08)
	struct UUW-SecretGrade_C* UW-SecretGrade; // 0x328(0x08)
	struct UUW-StatupWidget_C* UW-StatupWidget; // 0x330(0x08)
	struct UUW-TeamInfoWidget_C* UW-TeamInfoWidget; // 0x338(0x08)
	struct UUW-Tournament_NoticePopup_C* UW-Tournament_NoticePopup; // 0x340(0x08)
	struct UUW-TournamentInvite_C* UW-TournamentInvite; // 0x348(0x08)
	struct UUW-TournamentStartNoti_C* UW-TournamentStartNoti; // 0x350(0x08)
	struct UUW-TournamentTimer_C* UW-TournamentTimer; // 0x358(0x08)
	struct UUW-Volume_C* UW-Volume; // 0x360(0x08)
	struct UVerticalBox* Vertical_MinimapAndTeamInfo; // 0x368(0x08)
	struct ABravoHotelPlayerController* PlayerController; // 0x370(0x08)
	struct UUW-Inventory_ItemSlotHover_C* UW-Inventory_ItemSlotHover; // 0x378(0x08)
	struct UBravoHotelMainWidget* MainWidget; // 0x380(0x08)
	enum class EPlayerState CurrentState; // 0x388(0x01)
	struct FDisplayAbility LastDisplayAbility; // 0x38c(0x0c)
	enum class EToggleWidgetModeType ToggleType; // 0x398(0x01)
	struct TArray<struct UUserWidget*> PlayingGainPerkWidgetList; // 0x3a0(0x10)
	struct FTimerHandle Timer_ResetGainPerkWidgetList; // 0x3b0(0x08)

	void ResetGainPerkWidgetList(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetGainPerkWidgetList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsShowingGainPerkWidget(bool& IsShowing); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.IsShowingGainPerkWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetGainPerkWidgetList(bool bAdd, struct UUserWidget* GainPerkWidget); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetGainPerkWidgetList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetPerkInfos(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetPerkInfos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowStatupAnim(struct FStatupAnimParameters& StatupParams); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowStatupAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckStatupAnim(struct FDisplayAbility& DisplayAbility); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckStatupAnim // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnShowNotRecorverHPMessage(bool Type, int32_t ItemId); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnShowNotRecorverHPMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void On Battle Royale State Changed(enum class EBattleRoyaleState PreviousState, enum class EBattleRoyaleState CurrentState); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.On Battle Royale State Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowAmmoReloadedMessage(int32_t ReloadedAmmoCount); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowAmmoReloadedMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowProgressMessage(int32_t Type, int32_t Time); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowProgressMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowKillMessage(struct FText WeaponName, struct FText Victim, bool HeadShot, bool TeamKill); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowKillMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGameVersion(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetGameVersion // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeWidgetVisibleByToggleType(enum class EToggleWidgetModeType CurrentType); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ChangeWidgetVisibleByToggleType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UUserWidget* GetSlotHoverWidget(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetSlotHoverWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowFireModeLog(enum class EWeaponFireMode Mode); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowFireModeLog // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMainWidget(struct UBravoHotelMainWidget*& MainWidget); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetMainWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetWearableLevels(int32_t& HelmetLevel, int32_t& ArmorLevel, int32_t& BagLevel); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetWearableLevels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateHoverWidget(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CreateHoverWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPerkInfo(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetPerkInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	int32_t GetFinalAliveCount(int32_t AliveCount); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.GetFinalAliveCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Destruct(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ResetPerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetPerkDeck // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEnergy(float energy); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetEnergy // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHealthRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHealthRecovery // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideHealthRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHealthRecovery // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowEnergyRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowEnergyRecovery // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideEnergyRecovery(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideEnergyRecovery // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetArmorInfo(bool bHasHelmet, float HelmetGauge, bool bHasChest, float ChestGauge, bool bHasBackpack, float BackpackGauge); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetArmorInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetMyInfo(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetMyInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckVisibilityPerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CheckVisibilityPerkDeck // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowNotRecorverHPMessage(bool Type, int32_t ItemId); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowNotRecorverHPMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCurrentWeaponFireMode(enum class EWeaponFireMode FireMode); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetCurrentWeaponFireMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowPerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowPerkDeck // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HidePerkDeck(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HidePerkDeck // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayReadyGivePerk(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayReadyGivePerk // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayKillGivePerk(int32_t KillCount); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayKillGivePerk // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedToggleType(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnChangedToggleType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void HideHUDMessage(enum class EHUDMessageType MessageType); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideHUDMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMessage(struct FKillBroadcastUIInfo& Info); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.AddKillMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void LevelUpEvent(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility, int32_t LastLevel); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.LevelUpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowCastingUI(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowCastingUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideCastingUI(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideCastingUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayShowAnim(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayShowAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayHideAnim(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PlayHideAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHUDMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMyKillCountMessage(bool bIsKill, struct FText& Message); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowMyKillCountMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHitDamageLog(struct FHitDamageLogInfo& HitDamageLogInfo); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowHitDamageLog // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetPerkInfo(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.K2_SetPerkInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetAllWidgets(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ResetAllWidgets // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OpenInventory(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OpenInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CloseInventory(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.CloseInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowInviteTournament(struct FString UserNickName); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowInviteTournament // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowTournamentStartNoti(float NotiTime); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowTournamentStartNoti // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ForceUpdateCache(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ForceUpdateCache // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeCastingUIMessage(struct FCastingInfo& NewCastingInfo); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ChangeCastingUIMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(bool IsVisible); // Function UW-TopInfoWidget.UW-TopInfoWidget_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(bool Result, struct FTournamentNotiInfo NotiInfo); // Function UW-TopInfoWidget.UW-TopInfoWidget_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAllLevelLoadedFirstTime(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.OnAllLevelLoadedFirstTime // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowAutoAimLevel(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ShowAutoAimLevel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideAutoAimLevel(); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.HideAutoAimLevel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAutoAimLevel(int32_t NewLevel); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.SetAutoAimLevel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TopInfoWidget(int32_t EntryPoint); // Function UW-TopInfoWidget.UW-TopInfoWidget_C.ExecuteUbergraph_UW-TopInfoWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

