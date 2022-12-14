// WidgetBlueprintGeneratedClass UW-MatchEndWidget.UW-MatchEndWidget_C
// Size: 0x2cff6a77 (Inherited: 0x2cff6b10)
struct UUW-MatchEndWidget_C : UBravoHotelGameMatchEndWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct UUW-MatchEnd_Animation_02_C* UW-MatchEnd_Animation_02; // 0x518(0x08)
	struct UUW-MatchEnd_Ranking2_C* UW-MatchEnd_Ranking2; // 0x520(0x08)
	struct UUW-TournamentPreliminaryEndWidget_C* UW-TournamentPreliminaryEndWidget; // 0x528(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Type; // 0x530(0x08)
	struct UUW-MatchEnd_Animation_C* UW_SimpleResult; // 0x538(0x08)
	struct UUW-MainWidget_C* MainWidgetRef; // 0x540(0x08)
	struct ABravoHotelPlayerHUD* PlayerHUDRef; // 0x548(0x08)
	struct UUW-MatchEnd_Ranking_C* UW_FinalResult; // 0x550(0x08)
	struct UUW-MatchEnd_Animation_C* UW_Animation; // 0x558(0x08)
	struct ABravoHotelPlayerController* PlayerControllerRef; // 0x560(0x08)
	bool NewResult; // 0x568(0x01)
	struct FMatchEndFinalResult ResultData; // 0x569(0x04)
	bool IsGiveUp; // 0x56d(0x01)
	float WinMatchEndResultShowTime; // 0x570(0x04)
	struct FMatchEndAnimation ResultMatchEndAnimation; // 0x574(0x03)

	bool IsVisibleMatchEndWidget(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.IsVisibleMatchEndWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPlayerState(struct ABravoHotelPlayerState*& PlayerState); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.GetPlayerState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ShowSimpleResult(struct FMatchEndSimpleResult& SimpleResult); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowSimpleResult // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void K2_HideSimpleResult(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideSimpleResult // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ShowFinalResult(struct FMatchEndFinalResult& FinalResult); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowFinalResult // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void K2_HideFinalResult(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideFinalResult // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ShowMatchEndAnimation(struct FMatchEndAnimation& MatchEndAnimation, struct FMatchEndSimpleResult& SimpleResult, bool bIsRetired); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_ShowMatchEndAnimation // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void K2_HideMatchEndAnimation(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.K2_HideMatchEndAnimation // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void Init(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.Init // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_MoveToMatchEnd_Event(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.EventDispatcher_MoveToMatchEnd_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_MoveToDamageInfo_Event(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.EventDispatcher_MoveToDamageInfo_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SkipSimpleResult(); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.SkipSimpleResult // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MatchEndWidget(int32_t EntryPoint); // Function UW-MatchEndWidget.UW-MatchEndWidget_C.ExecuteUbergraph_UW-MatchEndWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

