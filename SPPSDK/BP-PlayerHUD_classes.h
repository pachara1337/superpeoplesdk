// BlueprintGeneratedClass BP-PlayerHUD.BP-PlayerHUD_C
// Size: 0x2cff6b21 (Inherited: 0x2cff6aa0)
struct ABP-PlayerHUD_C : ABravoHotelPlayerHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8a8(0x08)
	struct TMap<enum class EHUDMessageTableType, struct UDataTable*> TableInfo; // 0x8b0(0x50)
	struct TArray<struct UBravoHotelDamageType*> NewVar; // 0x900(0x10)
	struct TArray<enum class EGuideWidgetType> GuideWidgetStack; // 0x910(0x10)
	enum class EHUDMessageType NewVar; // 0x920(0x01)

	void IsSpectate(bool& Return); // Function BP-PlayerHUD.BP-PlayerHUD_C.IsSpectate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnShowMyKillInfoMessage(struct FKillBroadcastUIInfo BroadCastInfo); // Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKillInfoMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnShowMyKnockOutInfo(struct FText WeaponName, struct FText Victim, bool IsHeadShot, bool TeamKill, bool SelfKill); // Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKnockOutInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnShowMyKillInfo(struct FText WeaponName, struct FText Victim, int32_t KillCount, bool IsHeadShot, bool TeamKill, bool SelfKill, bool FinallyKill); // Function BP-PlayerHUD.BP-PlayerHUD_C.OnShowMyKillInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SelectTopOrBottomWidget(enum class EHUDMessageType MessageType, struct UUserWidget*& UserWidget); // Function BP-PlayerHUD.BP-PlayerHUD_C.SelectTopOrBottomWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SelectTable(enum class EHUDMessageTableType TableType, struct UDataTable*& DataTable); // Function BP-PlayerHUD.BP-PlayerHUD_C.SelectTable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideHUDMessage(enum class EHUDMessageType MessageType); // Function BP-PlayerHUD.BP-PlayerHUD_C.HideHUDMessage // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHudMessageAll(); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHudMessageAll // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHudMessageAt(int32_t MessageTypeNum); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHudMessageAt // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnAddKillMessageAll(); // Function BP-PlayerHUD.BP-PlayerHUD_C.OnAddKillMessageAll // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHUDMessageAtNum(bool ShowNext, int32_t TypeNum); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHUDMessageAtNum // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowKillMessage(struct TArray<struct UBravoHotelDamageType*>& DamageTypeArray); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowKillMessage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowGuideWidget(enum class EGuideWidgetType GuideType); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowGuideWidget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void HideGuideWidget(enum class EGuideWidgetType GuideType); // Function BP-PlayerHUD.BP-PlayerHUD_C.HideGuideWidget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowHUDMessage(struct FBravoHotelHUDMessageRow MessageRow); // Function BP-PlayerHUD.BP-PlayerHUD_C.ShowHUDMessage // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayerHUD(int32_t EntryPoint); // Function BP-PlayerHUD.BP-PlayerHUD_C.ExecuteUbergraph_BP-PlayerHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

