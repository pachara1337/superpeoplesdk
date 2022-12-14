// WidgetBlueprintGeneratedClass BP-LobbyWidget_Web.BP-LobbyWidget_Web_C
// Size: 0x2cff6a48 (Inherited: 0x2cff6a50)
struct UBP-LobbyWidget_Web_C : UBravoHotelLobbyWidget_Web {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* FadeOutNotice; // 0x558(0x08)
	struct UImage* Bg; // 0x560(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x568(0x08)
	struct UCanvasPanel* CanvasPanel_CharacterInfo; // 0x570(0x08)
	struct UCanvasPanel* CanvasPanel_PrefetchingProgress; // 0x578(0x08)
	struct UKeyWidget_C* KeyWidget; // 0x580(0x08)
	struct UTextBlock* ProgressText; // 0x588(0x08)
	struct UUW-Lobby_CharacterInfo_C* UW-Lobby_CharacterInfo; // 0x590(0x08)
	struct UUW-Lobby_CharacterInfo_C* UW-Lobby_CharacterInfo; // 0x598(0x08)
	struct UUW-Lobby_CharacterInfo_C* UW-Lobby_CharacterInfo; // 0x5a0(0x08)
	struct UUW-Lobby_CharacterInfo_C* UW-Lobby_CharacterInfo; // 0x5a8(0x08)
	struct UUW-Lobby_Main_Web_C* UW-Lobby_Main_Web; // 0x5b0(0x08)
	struct TArray<struct FFLobbyWeaponInfo> WeaponList; // 0x5b8(0x10)
	struct TArray<struct UUserWidget*> CharacterInfoWidgetList; // 0x5c8(0x10)
	int32_t PartySize; // 0x5d8(0x04)
	struct UParticleSystem* EquipmentTransition; // 0x5e0(0x08)
	bool BindParticle; // 0x5e8(0x01)
	struct TArray<struct FVector4> EffectPool; // 0x5f0(0x10)
	struct FMulticastInlineDelegate EventDispatcher_MoveToCrafting; // 0x600(0x10)
	struct FString MainTab; // 0x610(0x10)
	struct TArray<struct UUW-TournamentTeamUnconnected_C*> UnableReasonWidgetList; // 0x620(0x10)
	struct FString SubTab; // 0x630(0x10)
	struct UUserWidget* LocalKeyWidget; // 0x640(0x08)

	struct UUserWidget* GetKeyWidget(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.GetKeyWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateShopLevelSequence(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CreateShopLevelSequence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateLiveView(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CreateLiveView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InternalUpdateUnableToMatch_Reasons(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.InternalUpdateUnableToMatch_Reasons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitArmoryMeshActor(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.InitArmoryMeshActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddEffect(struct FVector Location, float Delay); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.AddEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SendPlayTimeMsg(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SendPlayTimeMsg // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCharacterInfo(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.UpdateCharacterInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateCharacterInfo(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CreateCharacterInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddWeaponInfo(struct FString Name, struct FVector Offset); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.AddWeaponInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitWeapon(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.InitWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideExitPopup(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.HideExitPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMouseCursor(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.ShowMouseCursor // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMatchingSucceeded(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnMatchingSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMatchingFailed(int32_t ErrorCode, struct FString ExtraDescription); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnMatchingFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisibleSelectGameMode(bool bState); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SetVisibleSelectGameMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SendPlayTimeMessage(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SendPlayTimeMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(bool Visible, struct FVector& Location); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C. ????? // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EquipmentSounedDelegate_Event(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.EquipmentSounedDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SlotHoverSounedDelegate_Event(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SlotHoverSounedDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnChangedArmoryTab(struct FString TabName); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedArmoryTab // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnReceiveCraftWeapon(struct FResponse_CraftWeapon_Data& CraftWeapon); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnReceiveCraftWeapon // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnChangedWeaponList(struct TArray<struct FResponse_Weapon_List_Data>& ReceiveWeaponList); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedWeaponList // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnChangedMaterialList(struct TArray<struct FResponse_MaterialList_Data>& ReceiveMaterialList); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedMaterialList // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnChangedGold(int32_t ReceiveGold); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnChangedGold // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_MoveToCraftWeapon(int32_t CraftingID); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_MoveToCraftWeapon // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_Init(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_Init // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeProgress(struct FString PrefetchingProgressString); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnChangeProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPrefetchingProgressVisible(enum class ESlateVisibility InVisibility); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnPrefetchingProgressVisible // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateTabPageBlurEffect(int32_t MainPageHeight, int32_t ChildPageHeight); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnUpdateTabPageBlurEffect // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnReceiveCouponUse(int32_t ErrorCode, bool bWasSuccessful); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_OnReceiveCouponUse // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedTabDelegate_Event(struct FString MainTabName, struct FString SubTabName); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.OnChangedTabDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetTournamentResult(bool bShow); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_SetTournamentResult // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ToggleShowTournamentData(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_ToggleShowTournamentData // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CohMouseMoveEvent(int32_t X, int32_t Y); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.CohMouseMoveEvent // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ShowTournamentResult(int32_t TargetRound); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.K2_ShowTournamentResult // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateUnableToMatch_Reasons(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.UpdateUnableToMatch_Reasons // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisibilityTabPageBlurEffect(bool bVisibility); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.SetVisibilityTabPageBlurEffect // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReturnKeyWidget(struct UUserWidget* KeyWidget); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.ReturnKeyWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindUIDelegate_Event(); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.BindUIDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-LobbyWidget_Web(int32_t EntryPoint); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.ExecuteUbergraph_BP-LobbyWidget_Web // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_MoveToCrafting__DelegateSignature(int32_t CraftingID); // Function BP-LobbyWidget_Web.BP-LobbyWidget_Web_C.EventDispatcher_MoveToCrafting__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

