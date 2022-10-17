// WidgetBlueprintGeneratedClass UW-MainWidget.UW-MainWidget_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6ab0)
struct UUW-MainWidget_C : UBravoHotelMainWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UWidgetAnimation* Anim_HideWidget; // 0x4b8(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x4c0(0x08)
	struct UCanvasPanel* Canvas; // 0x4c8(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x4d0(0x08)
	struct UHorizontalBox* HB_PerkSpin; // 0x4d8(0x08)
	struct UKeyWidget_C* KeyWidget; // 0x4e0(0x08)
	struct UTextBlock* TextBlock_Start; // 0x4e8(0x08)
	struct UUW-CompassWidget_C* UW-CompassWidget; // 0x4f0(0x08)
	struct UUW-HUDMessageWidget_C* UW-HUDMessageWidget; // 0x4f8(0x08)
	struct UUW-InteractionWidget_C* UW-InteractionWidget; // 0x500(0x08)
	struct UUW-JetpackWidget_C* UW-JetpackWidget; // 0x508(0x08)
	struct UUW-MS_C* UW-MS; // 0x510(0x08)
	struct UUW-PerkLevelUp_02_C* UW-PerkLevelUp_02; // 0x518(0x08)
	struct UUW-RC_CARTimer_C* UW-RC_CARTimer; // 0x520(0x08)
	struct UUW-ShieldTimer_C* UW-ShieldTimer; // 0x528(0x08)
	struct UUW-VehicleWidget_C* UW-VehicleWidget; // 0x530(0x08)
	struct ABravoHotelCharacter* TargetPawn; // 0x538(0x08)
	struct FDisplayAbility LastDisplayAbility; // 0x540(0x0c)
	struct UUW-Radar_Cursor_C* UW-RaderCursorWidget; // 0x550(0x08)
	struct UUserWidget* UW-DefaultCursorWidget; // 0x558(0x08)
	struct FTimerHandle Timer_IsMouseWidgetInMap; // 0x560(0x08)
	struct UUW-NitroBoomTargetWidget_C* UW-NitroBoomTargetWidget; // 0x568(0x08)
	bool bIsShow; // 0x570(0x01)
	float TmpViewportUpAngle; // 0x574(0x04)
	float TmpViewportSideAngle; // 0x578(0x04)
	struct FVector2D CenterPosition; // 0x57c(0x08)
	struct UUW-MapImageWidget_C* UW-MapImageRef; // 0x588(0x08)
	struct FTimerHandle Timer_AutoPerkDeck; // 0x590(0x08)
	int32_t LastPlayZoneID; // 0x598(0x04)
	bool bShowLevelUp; // 0x59c(0x01)
	bool IsPlayingUltimateSound; // 0x59d(0x01)
	bool bIsUnlockUltimateSkill; // 0x59e(0x01)
	struct AActor* NitroBoomActor; // 0x5a0(0x08)
	struct UUserWidget* LocalKeyWidget; // 0x5a8(0x08)

	struct UUserWidget* GetKeyWidget(); // Function UW-MainWidget.UW-MainWidget_C.GetKeyWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateLineOfFireWidgetSize(); // Function UW-MainWidget.UW-MainWidget_C.UpdateLineOfFireWidgetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsTeleportModeInTrainingMode(bool& bIsTeleportMode); // Function UW-MainWidget.UW-MainWidget_C.IsTeleportModeInTrainingMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Nitro Boom TargetActor(struct FVector Location); // Function UW-MainWidget.UW-MainWidget_C.Update Nitro Boom TargetActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckUltimateSound(int32_t CurrentLevel); // Function UW-MainWidget.UW-MainWidget_C.CheckUltimateSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSightInfoPosition(enum class EFireType FireType); // Function UW-MainWidget.UW-MainWidget_C.SetSightInfoPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowProgressMessage(int32_t Type, int32_t Time); // Function UW-MainWidget.UW-MainWidget_C.ShowProgressMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Nitro Target Widget(struct FVector2D TargetPosition); // Function UW-MainWidget.UW-MainWidget_C.Update Nitro Target Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UUserWidget* GetMiniMapWidget(); // Function UW-MainWidget.UW-MainWidget_C.GetMiniMapWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckChangedPlayZone(); // Function UW-MainWidget.UW-MainWidget_C.CheckChangedPlayZone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideMapImageWidget(bool SetTimer); // Function UW-MainWidget.UW-MainWidget_C.HideMapImageWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMapImageWidget(); // Function UW-MainWidget.UW-MainWidget_C.ShowMapImageWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckMapImageWidget(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType); // Function UW-MainWidget.UW-MainWidget_C.CheckMapImageWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckWorldMapGuideWidget(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType); // Function UW-MainWidget.UW-MainWidget_C.CheckWorldMapGuideWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ADSGuideWidget(enum class EFireType PreFireType, enum class EFireType FireType); // Function UW-MainWidget.UW-MainWidget_C.ADSGuideWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideSmartpingSelectionMenu(); // Function UW-MainWidget.UW-MainWidget_C.HideSmartpingSelectionMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddDeathUserWidget(struct FKillBroadcastUIInfo BroadCastInfo); // Function UW-MainWidget.UW-MainWidget_C.AddDeathUserWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalcMinMaxViewportPositionForTeamPositionWidget(); // Function UW-MainWidget.UW-MainWidget_C.CalcMinMaxViewportPositionForTeamPositionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowZeroingDistance(); // Function UW-MainWidget.UW-MainWidget_C.ShowZeroingDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UBravoHotelInteractionWidget* GetInteractiveWidget(); // Function UW-MainWidget.UW-MainWidget_C.GetInteractiveWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void WorldMapReInit(); // Function UW-MainWidget.UW-MainWidget_C.WorldMapReInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeWidgetVisibleByToggleType(enum class EToggleWidgetModeType CurrentType); // Function UW-MainWidget.UW-MainWidget_C.ChangeWidgetVisibleByToggleType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool IsOpenSystemPopup(); // Function UW-MainWidget.UW-MainWidget_C.IsOpenSystemPopup // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckAutoOpenPerkDeck(); // Function UW-MainWidget.UW-MainWidget_C.CheckAutoOpenPerkDeck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetSightViewRatio(enum class EWeaponAttachmentItem SightType, struct FVector2D& Translation); // Function UW-MainWidget.UW-MainWidget_C.GetSightViewRatio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Play Stat Animation(enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility); // Function UW-MainWidget.UW-MainWidget_C.Play Stat Animation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnReadyToSnipe(enum class EFireType FireType); // Function UW-MainWidget.UW-MainWidget_C.OnReadyToSnipe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void On Battle Royale State Changed(enum class EBattleRoyaleState PreviousState, enum class EBattleRoyaleState CurrentState); // Function UW-MainWidget.UW-MainWidget_C.On Battle Royale State Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UW-MainWidget.UW-MainWidget_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-MainWidget.UW-MainWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReadyGivePerk(); // Function UW-MainWidget.UW-MainWidget_C.ReadyGivePerk // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OpenPerkDeck(); // Function UW-MainWidget.UW-MainWidget_C.OpenPerkDeck // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowDeathUserWidget(struct FKillBroadcastUIInfo& Info); // Function UW-MainWidget.UW-MainWidget_C.ShowDeathUserWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void LevelUpEvent(struct FPerkUIInfo PerkInfo, int32_t CurrentLevel, enum class EPerkLevelUpType LevelUpType, struct FDisplayAbility DisplayAbility, int32_t LastLevel); // Function UW-MainWidget.UW-MainWidget_C.LevelUpEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideHUDMessage(enum class EHUDMessageType MessageType); // Function UW-MainWidget.UW-MainWidget_C.HideHUDMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoSmartping(struct ABravoHotelPlayerState* PlayerState); // Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoSmartping // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoRouteping(struct ABravoHotelPlayerState* PlayerState); // Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoRouteping // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddRequestMessage(struct ABravoHotelPlayerState* PlayerState, struct FString Message); // Function UW-MainWidget.UW-MainWidget_C.AddRequestMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState* PlayerState); // Function UW-MainWidget.UW-MainWidget_C.AddCoreInfoRequestResuscitation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow); // Function UW-MainWidget.UW-MainWidget_C.ShowHUDMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAllLevelLoadedFirstTime(); // Function UW-MainWidget.UW-MainWidget_C.OnAllLevelLoadedFirstTime // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BPOnViewportSized(); // Function UW-MainWidget.UW-MainWidget_C.BPOnViewportSized // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CheckVisiblilityPerkDeck_BP(); // Function UW-MainWidget.UW-MainWidget_C.CheckVisiblilityPerkDeck_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateNitroBoomWidget(struct FVector2D TargetPosition); // Function UW-MainWidget.UW-MainWidget_C.UpdateNitroBoomWidget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeamSize(int32_t Size); // Function UW-MainWidget.UW-MainWidget_C.SetTeamSize // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideNitroBoomWidget(); // Function UW-MainWidget.UW-MainWidget_C.HideNitroBoomWidget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Timer_ShowProgressMessage(); // Function UW-MainWidget.UW-MainWidget_C.Timer_ShowProgressMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPhaseChanged1(int32_t PrevPhase, int32_t CurrentPhase); // Function UW-MainWidget.UW-MainWidget_C.OnPhaseChanged1 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnBlueZoneStateChanged_Event(enum class EBluseZoneState PrevState, enum class EBluseZoneState CurrentState); // Function UW-MainWidget.UW-MainWidget_C.OnBlueZoneStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateChargeGauge(float MaxChargeValue, float CurrentChargeValue); // Function UW-MainWidget.UW-MainWidget_C.UpdateChargeGauge // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void RemoveChargeGauge(); // Function UW-MainWidget.UW-MainWidget_C.RemoveChargeGauge // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void StopChargeGauge(); // Function UW-MainWidget.UW-MainWidget_C.StopChargeGauge // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnRemoveChargeGauge(); // Function UW-MainWidget.UW-MainWidget_C.OnRemoveChargeGauge // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowStatupAnim(struct FStatupAnimParameters& StatupParameters); // Function UW-MainWidget.UW-MainWidget_C.ShowStatupAnim // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Show(); // Function UW-MainWidget.UW-MainWidget_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide(); // Function UW-MainWidget.UW-MainWidget_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedToggleType(enum class EToggleWidgetModeType PreType, enum class EToggleWidgetModeType CurrentType); // Function UW-MainWidget.UW-MainWidget_C.OnChangedToggleType // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeBattleRoyaleState(enum class EBattleRoyaleState PreState, enum class EBattleRoyaleState NewState); // Function UW-MainWidget.UW-MainWidget_C.OnChangeBattleRoyaleState // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnBlueZoneDelegeate(); // Function UW-MainWidget.UW-MainWidget_C.K2_OnBlueZoneDelegeate // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnChangeFireType(enum class EFireType PreFireType, enum class EFireType NewFireType); // Function UW-MainWidget.UW-MainWidget_C.K2_OnChangeFireType // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ResetAllWidgets(); // Function UW-MainWidget.UW-MainWidget_C.ResetAllWidgets // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateNitroBoomActor(struct FVector& TargetPosition); // Function UW-MainWidget.UW-MainWidget_C.UpdateNitroBoomActor // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-MainWidget.UW-MainWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReturnKeyWidget(struct UUserWidget* KeyWidget); // Function UW-MainWidget.UW-MainWidget_C.ReturnKeyWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MainWidget(int32_t EntryPoint); // Function UW-MainWidget.UW-MainWidget_C.ExecuteUbergraph_UW-MainWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

