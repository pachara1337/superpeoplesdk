// WidgetBlueprintGeneratedClass UW-WatchingPlayersGroupWidget.UW-WatchingPlayersGroupWidget_C
// Size: 0x2cff6ac0 (Inherited: 0x2cff6aa0)
struct UUW-WatchingPlayersGroupWidget_C : UBravoHotelWatchingPlayersGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UImage* IMG_TeamColor; // 0x2a8(0x08)
	struct UTextBlock* T_TeamNum; // 0x2b0(0x08)
	struct UVerticalBox* VB_PlayerList; // 0x2b8(0x08)

	void CheckEmptyGroup(); // Function UW-WatchingPlayersGroupWidget.UW-WatchingPlayersGroupWidget_C.CheckEmptyGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeamColor(); // Function UW-WatchingPlayersGroupWidget.UW-WatchingPlayersGroupWidget_C.SetTeamColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeamNumText(); // Function UW-WatchingPlayersGroupWidget.UW-WatchingPlayersGroupWidget_C.SetTeamNumText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(struct ABravoHotelPlayerState* PlayerState); // Function UW-WatchingPlayersGroupWidget.UW-WatchingPlayersGroupWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdatePlayerInfo(enum class EPlayerListSortType PlayerListSortType); // Function UW-WatchingPlayersGroupWidget.UW-WatchingPlayersGroupWidget_C.UpdatePlayerInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-WatchingPlayersGroupWidget(int32_t EntryPoint); // Function UW-WatchingPlayersGroupWidget.UW-WatchingPlayersGroupWidget_C.ExecuteUbergraph_UW-WatchingPlayersGroupWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

