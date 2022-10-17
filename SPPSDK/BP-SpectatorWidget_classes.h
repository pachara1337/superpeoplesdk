// WidgetBlueprintGeneratedClass BP-SpectatorWidget.BP-SpectatorWidget_C
// Size: 0x2cff6a39 (Inherited: 0x2cff6ad0)
struct UBP-SpectatorWidget_C : UBravoHotelSpectatorWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* BackgroundBlurFadeIn; // 0x2d8(0x08)
	struct UWidgetAnimation* Idle; // 0x2e0(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x2e8(0x08)
	struct UButton* BTN-Exit; // 0x2f0(0x08)
	struct UButton* Btn-NextTarget; // 0x2f8(0x08)
	struct UButton* Btn-PreTarget; // 0x300(0x08)
	struct UButton* Btn-Replay; // 0x308(0x08)
	struct UCanvasPanel* Canvas_Root; // 0x310(0x08)
	struct UHorizontalBox* KillcamBtns; // 0x318(0x08)
	struct UHorizontalBox* MemberChangeBox; // 0x320(0x08)
	struct UTextBlock* TextDepth_Replay; // 0x328(0x08)
	struct UUW-SpectatingTargetInfo_C* UW-SpectatingTargetInfo; // 0x330(0x08)
	bool bIsKillcam; // 0x338(0x01)

	struct UBravoHotelInteractionWidget* GetInteractiveWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.GetInteractiveWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateSpectatingTargetInfo(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.UpdateSpectatingTargetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetReplayBtn(bool bVisiable); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetReplayBtn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTargetBtn(bool bVisiable); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetTargetBtn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoSmartping(struct ABravoHotelPlayerState* PlayerState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoSmartping // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgByMolotovFlame(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, bool bHeasShot, bool bLocalKiller, bool bByTeam, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByMolotovFlame // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgByVehicle(struct FText& Killer, struct FText& Victim, bool bLocalKiller, bool bByTeam, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByVehicle // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgByWeapon(struct FText& Killer, struct FText& WeaponName, struct FText& Victim, bool bHeasShot, bool bLocalKiller, bool bByTeam, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgByWeapon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgCrash(struct FText& Victim, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgCrash // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgFallToDeath(struct FText& Victim, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgFallToDeath // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgKnockOut(struct FText& Killer, struct FText& Victim, bool bLocalKiller, bool bByTeam, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t KillerTierID, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgKnockOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgMagneticField(struct FText& Victim, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgMagneticField // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgNoOxygen(struct FText& Victim, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgNoOxygen // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgRedZone(struct FText& Victim, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgRedZone // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMsgSuicide(struct FText& Victim, bool bTeamDead, int32_t AliveCount, bool bKnockOut, int32_t DiedTierID); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddKillMsgSuicide // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddPerkMessage(struct FName PerkName, int32_t Level); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddPerkMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddPingMessage(struct FString MessageTag, bool UsingBackGround); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddPingMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddRequestMessage(struct ABravoHotelPlayerState* PlayerState, struct FString Message); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddRequestMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Close(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.Close // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void FinishPerkSpin(enum class EPerkLevelUpType LevelUpType); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.FinishPerkSpin // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideAmplifier(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideAmplifier // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideBlueZoneNotiMessage(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideBlueZoneNotiMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideMinimapWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideMinimapWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideTeamPositionWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideTeamPositionWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideVehicleWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideVehicleWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void LevelUpEvent(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility, int32_t LastLevel); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.LevelUpEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Open(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OpenMainMenu(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.OpenMainMenu // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void PlaySupplyBoxMessage(struct FString Message); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.PlaySupplyBoxMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetMiniMapPlayers(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetMiniMapPlayers // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetWorldMap(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetWorldMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNickName(struct FText& NickName); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetNickName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetToggleMinimap(bool bToggle); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.SetToggleMinimap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowAmplifier(struct FString InText); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowAmplifier // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowBlueZoneNotiMessage(struct FString Title, struct FString Desc); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowBlueZoneNotiMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowCommonMessage(struct FCommonMessageInfo& MessageInfo); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowCommonMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowDeathAndAliveMessage(struct FText& Victim, int32_t AliveCount); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowDeathAndAliveMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowDeathUserWidget(struct FKillBroadcastUIInfo& Info); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowDeathUserWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowEnergyItemUse(int32_t Type); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowEnergyItemUse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowGameProgressMessage(int32_t Type, int32_t Time); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowGameProgressMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowGameWaitMessage(int32_t Time); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowGameWaitMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowInventoryNotEnoughSpaceMessage(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowInventoryNotEnoughSpaceMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMinimapWidget(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMinimapWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMyKillInfo(struct FText& WeaponName, struct FText& Victim, int32_t KillCount, int32_t AliveCount, bool bHeadShot, bool bTeamKill); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMyKillInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMyKnockOutInfo(struct FText& WeaponName, struct FText& Victim, bool bHeadShot, bool bTeamKill); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowMyKnockOutInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowNuclearMessage(int32_t Count); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowNuclearMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowRedZoneBombMessage(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowRedZoneBombMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowRedZoneStartMessage(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowRedZoneStartMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowReverseSideTeamPositionWidget(int32_t TeamIconIndex, float Angle, struct FVector2D ScreenMaxSize); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowReverseSideTeamPositionWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowTeamPositionWidget(int32_t TeamIndex, struct FVector2D ScreenPosition, bool bNetCullDistance); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowTeamPositionWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowVehicleWidget(struct UBravoHotelVehicleSeatComponent* VehicleSeat); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowVehicleWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TeamInfoVisibility(bool bState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.TeamInfoVisibility // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ToggleMiniMap(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ToggleMiniMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-NextTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-PreTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Btn-Replay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void StartBackGroundBlur(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.StartBackGroundBlur // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetBackGroundBlur(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ResetBackGroundBlur // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.BndEvt__Button_Return_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoRouteping(struct ABravoHotelPlayerState* PlayerState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoRouteping // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Show(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedPlayerInfos(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.OnChangedPlayerInfos // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangePlayerState_Event(enum class EPlayerState PlayerState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.OnChangePlayerState_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState* PlayerState); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.AddCoreInfoRequestResuscitation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowTargetInfo(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ShowTargetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideTargetInfo(); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.HideTargetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-SpectatorWidget(int32_t EntryPoint); // Function BP-SpectatorWidget.BP-SpectatorWidget_C.ExecuteUbergraph_BP-SpectatorWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

