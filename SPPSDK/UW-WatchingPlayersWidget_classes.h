// WidgetBlueprintGeneratedClass UW-WatchingPlayersWidget.UW-WatchingPlayersWidget_C
// Size: 0x2cff6a60 (Inherited: 0x2cff6a30)
struct UUW-WatchingPlayersWidget_C : UBravoHotelWatchingPlayersWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UButton* Bt_ListNext; // 0x338(0x08)
	struct UButton* BT_ListPrev; // 0x340(0x08)
	struct UScrollBox* ScrollBox_PlayerItem; // 0x348(0x08)
	struct UTextBlock* T_SortType; // 0x350(0x08)
	struct UVerticalBox* VB_ListMain; // 0x358(0x08)

	struct UUserWidget* CreatePlayerListGroup(struct ABravoHotelPlayerState* PlayerState); // Function UW-WatchingPlayersWidget.UW-WatchingPlayersWidget_C.CreatePlayerListGroup // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UUserWidget* CreatePlayerButton(struct ABravoHotelPlayerState* PlayerState); // Function UW-WatchingPlayersWidget.UW-WatchingPlayersWidget_C.CreatePlayerButton // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSortTypeText(); // Function UW-WatchingPlayersWidget.UW-WatchingPlayersWidget_C.SetSortTypeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_ListPrev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-WatchingPlayersWidget.UW-WatchingPlayersWidget_C.BndEvt__BT_ListPrev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-WatchingPlayersWidget.UW-WatchingPlayersWidget_C.BndEvt__Bt_ListNext_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-WatchingPlayersWidget.UW-WatchingPlayersWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-WatchingPlayersWidget(int32_t EntryPoint); // Function UW-WatchingPlayersWidget.UW-WatchingPlayersWidget_C.ExecuteUbergraph_UW-WatchingPlayersWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

