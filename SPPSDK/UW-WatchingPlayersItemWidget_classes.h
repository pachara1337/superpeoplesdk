// WidgetBlueprintGeneratedClass UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C
// Size: 0x2cff6ae2 (Inherited: 0x2cff6ab0)
struct UUW-WatchingPlayersItemWidget_C : UBravoHotelWatchingPlayersItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UButton* BT_PlayerName; // 0x2b8(0x08)
	struct UProgressBar* PB_HP; // 0x2c0(0x08)
	struct UTextBlock* T_PlayerName; // 0x2c8(0x08)
	struct UTextBlock* T_PlayerNameHighlight; // 0x2d0(0x08)
	struct UTextBlock* T_SortInfo; // 0x2d8(0x08)
	bool bIsTargetPawn; // 0x2e0(0x01)
	bool bIsAlive; // 0x2e1(0x01)

	void UpdateHighlightNameColor(); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.UpdateHighlightNameColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateSortInfo(enum class EPlayerListSortType PlayerListSortType); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.UpdateSortInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckAlive(enum class EPlayerListSortType PlayerListSortType); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.CheckAlive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateButton(); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.UpdateButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateHp(); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.UpdateHp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateDisable(); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.UpdateDisable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateInfos(); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.UpdateInfos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(struct ABravoHotelPlayerState* PlayerState); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.BndEvt__BT_PlayerName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void UpdatePlayerInfo(enum class EPlayerListSortType PlayerListSortType); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.UpdatePlayerInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-WatchingPlayersItemWidget(int32_t EntryPoint); // Function UW-WatchingPlayersItemWidget.UW-WatchingPlayersItemWidget_C.ExecuteUbergraph_UW-WatchingPlayersItemWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

