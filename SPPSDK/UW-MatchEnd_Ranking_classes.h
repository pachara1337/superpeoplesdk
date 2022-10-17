// WidgetBlueprintGeneratedClass UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C
// Size: 0x2cff6a54 (Inherited: 0x2cff6a88)
struct UUW-MatchEnd_Ranking_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* FadeIn3; // 0x290(0x08)
	struct UWidgetAnimation* FadeIn2; // 0x298(0x08)
	struct UWidgetAnimation* RankDown; // 0x2a0(0x08)
	struct UWidgetAnimation* RankUp; // 0x2a8(0x08)
	struct UWidgetAnimation* FadeOut; // 0x2b0(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2b8(0x08)
	struct UButton* Button_DeathCam; // 0x2c0(0x08)
	struct UButton* Button_Exit; // 0x2c8(0x08)
	struct UButton* Button_Report; // 0x2d0(0x08)
	struct UButton* Button_Spectate; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image; // 0x348(0x08)
	struct UImage* Image; // 0x350(0x08)
	struct UImage* Image; // 0x358(0x08)
	struct UImage* Image; // 0x360(0x08)
	struct UImage* Image; // 0x368(0x08)
	struct UImage* Image; // 0x370(0x08)
	struct UImage* Image; // 0x378(0x08)
	struct UImage* Image; // 0x380(0x08)
	struct UImage* Image; // 0x388(0x08)
	struct UImage* Image; // 0x390(0x08)
	struct UImage* Image; // 0x398(0x08)
	struct UImage* Image_NextTireIcon; // 0x3a0(0x08)
	struct UImage* Light_01; // 0x3a8(0x08)
	struct UImage* Light_02; // 0x3b0(0x08)
	struct UImage* Light_03; // 0x3b8(0x08)
	struct UImage* Light_04; // 0x3c0(0x08)
	struct UImage* Light_05; // 0x3c8(0x08)
	struct UImage* Light_06; // 0x3d0(0x08)
	struct UImage* Light_07; // 0x3d8(0x08)
	struct UImage* Light_08; // 0x3e0(0x08)
	struct UOverlay* Overlay_Rank; // 0x3e8(0x08)
	struct UOverlay* Overlay_Report; // 0x3f0(0x08)
	struct UOverlay* Overlay_Spectate; // 0x3f8(0x08)
	struct UProgressBar* ProgressBar_Current; // 0x400(0x08)
	struct UProgressBar* ProgressBar_Down; // 0x408(0x08)
	struct UProgressBar* ProgressBar_Up; // 0x410(0x08)
	struct UScrollBox* ScrollBox_GoldList; // 0x418(0x08)
	struct UScrollBox* ScrollBox_ItemList; // 0x420(0x08)
	struct USizeBox* SizeBox; // 0x428(0x08)
	struct USpacer* Spacer; // 0x430(0x08)
	struct USpacer* Spacer; // 0x438(0x08)
	struct USpacer* Spacer_Center; // 0x440(0x08)
	struct UTextBlock* T_RemainTime; // 0x448(0x08)
	struct UCanvasPanel* team_kill; // 0x450(0x08)
	struct UCanvasPanel* Team_Revives; // 0x458(0x08)
	struct UTextBlock* Text_Report; // 0x460(0x08)
	struct UTextBlock* TextBlock; // 0x468(0x08)
	struct UTextBlock* TextBlock_CurrentRP; // 0x470(0x08)
	struct UTextBlock* TextBlock_ItemCount; // 0x478(0x08)
	struct UTextBlock* TextBlock_Kill; // 0x480(0x08)
	struct UTextBlock* TextBlock_MatchRP; // 0x488(0x08)
	struct UTextBlock* TextBlock_NextRP; // 0x490(0x08)
	struct UTextBlock* TextBlock_Rank; // 0x498(0x08)
	struct UTextBlock* TextBlock_Resuscitates; // 0x4a0(0x08)
	struct UTextBlock* TextBlock_Title; // 0x4a8(0x08)
	struct UTextBlock* TextBlock_TotalGold; // 0x4b0(0x08)
	struct UTextBlock* TextBlock_TotalTeamCount; // 0x4b8(0x08)
	struct UUW-MatchEnd_RewardSlot_C* UW-MatchEnd_RewardSlot; // 0x4c0(0x08)
	struct UUW-MatchEnd_RewardSlot_C* UW-MatchEnd_RewardSlot_C; // 0x4c8(0x08)
	struct UUW-MatchEnd_RewardSlot_C* UW-MatchEnd_RewardSlot_C; // 0x4d0(0x08)
	struct UUW-MatchEnd_RewardSlot_C* UW-MatchEnd_RewardSlot_C; // 0x4d8(0x08)
	struct UUW-RewardGoldSlot_C* UW-RewardGoldSlot; // 0x4e0(0x08)
	struct UVerticalBox* VerticalBox; // 0x4e8(0x08)
	struct FMatchEndFinalResult FinalResultData; // 0x4f0(0x04)
	struct ABravoHotelPlayerState* PlayerState; // 0x4f8(0x08)
	struct FTimerHandle Timehandle_Rank; // 0x500(0x08)
	int32_t PlayerOriRP; // 0x508(0x04)
	int32_t TargetRP; // 0x50c(0x04)
	int32_t CurrentRP; // 0x510(0x04)
	int32_t NextTireRP; // 0x514(0x04)
	bool Increase; // 0x518(0x01)
	int32_t CurrentTierID; // 0x51c(0x04)
	bool bMaxPrograssbar; // 0x520(0x01)
	struct UUW-MatchEndWidget_C* MatchEndWidgetRef; // 0x528(0x08)
	int32_t RandomGold; // 0x530(0x04)
	struct FTimerHandle GoldHandle; // 0x538(0x08)
	bool IsWinningCam; // 0x540(0x01)
	int32_t GainGoldValue; // 0x544(0x04)
	struct FTimerHandle GainGoldHandle; // 0x548(0x08)
	struct FAudioPlayingHandle StartSound; // 0x550(0x04)

	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SequenceEvent__ENTRYPOINTUW-MatchEnd_Ranking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateInputMode(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.UpdateInputMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Check Report Enablefrom User Name(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Check Report Enablefrom User Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Check Exist Report User(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Check Exist Report User // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReportSended(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ReportSended // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideSimpleWidget(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.HideSimpleWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideSimpleWidgetSlowly(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.HideSimpleWidgetSlowly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRankImage(int32_t ID, struct UImage* Widget); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetRankImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNextRank(int32_t TierID); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetNextRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayRankDown(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayRankUp(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankUp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayRankAnimation(int32_t StartRP, int32_t MatchRP, int32_t MaxRP); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.PlayRankAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateRank(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.UpdateRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetColorTextWidget(struct UTextBlock* Widget, int32_t Value, struct FSlateColor Color); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetColorTextWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPlayInfo(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetPlayInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItem(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRank(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGold(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.SetGold // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_5C9A4A6341FF221002168F953DF28124(struct UObject* Loaded); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.OnLoaded_5C9A4A6341FF221002168F953DF28124 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_161_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_DeathCam_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void EventRankAnimation(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.EventRankAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadTexture(struct TSoftObjectPtr<UObject> Imge, struct UImage* Widget); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.AsyncLoadTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Close(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowDeathCam(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ShowDeathCam // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowGold(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ShowGold // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MatchEnd_Ranking(int32_t EntryPoint); // Function UW-MatchEnd_Ranking.UW-MatchEnd_Ranking_C.ExecuteUbergraph_UW-MatchEnd_Ranking // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

