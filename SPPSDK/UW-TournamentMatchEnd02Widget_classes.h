// WidgetBlueprintGeneratedClass UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C
// Size: 0x2cff6b10 (Inherited: 0x2cff6a40)
struct UUW-TournamentMatchEnd02Widget_C : UBravoHotelTournamentResultPopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* InitAni; // 0x348(0x08)
	struct UWidgetAnimation* Anim_Fail; // 0x350(0x08)
	struct UWidgetAnimation* Anim_Pass; // 0x358(0x08)
	struct UWidgetAnimation* Anim_Victory; // 0x360(0x08)
	struct UImage* Bg; // 0x368(0x08)
	struct UBorder* Border; // 0x370(0x08)
	struct UButton* Button; // 0x378(0x08)
	struct UButton* Button; // 0x380(0x08)
	struct UButton* Button; // 0x388(0x08)
	struct UImage* character01; // 0x390(0x08)
	struct UImage* character02; // 0x398(0x08)
	struct UImage* character03; // 0x3a0(0x08)
	struct UImage* Cloud01; // 0x3a8(0x08)
	struct UImage* Cloud02; // 0x3b0(0x08)
	struct UImage* Cloud03; // 0x3b8(0x08)
	struct URichTextBlock* Desc1; // 0x3c0(0x08)
	struct URichTextBlock* Desc2; // 0x3c8(0x08)
	struct UTextBlock* Error; // 0x3d0(0x08)
	struct UCanvasPanel* Fail; // 0x3d8(0x08)
	struct UCanvasPanel* FinalVictory; // 0x3e0(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x3e8(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x3f0(0x08)
	struct UImage* Image; // 0x3f8(0x08)
	struct UImage* Image; // 0x400(0x08)
	struct UImage* Image; // 0x408(0x08)
	struct UImage* Image; // 0x410(0x08)
	struct UImage* Image; // 0x418(0x08)
	struct UImage* Image; // 0x420(0x08)
	struct UImage* Image; // 0x428(0x08)
	struct UImage* Image; // 0x430(0x08)
	struct UImage* Image; // 0x438(0x08)
	struct UImage* Image; // 0x440(0x08)
	struct UImage* Image; // 0x448(0x08)
	struct UImage* Image; // 0x450(0x08)
	struct UImage* Image; // 0x458(0x08)
	struct UImage* Image; // 0x460(0x08)
	struct UImage* Image; // 0x468(0x08)
	struct UImage* Image; // 0x470(0x08)
	struct UImage* Image; // 0x478(0x08)
	struct UImage* Image; // 0x480(0x08)
	struct UImage* Image; // 0x488(0x08)
	struct UKeyImageWidget_C* KeyImageWidget_C; // 0x490(0x08)
	struct UImage* LingtDot01; // 0x498(0x08)
	struct UImage* LingtDot02; // 0x4a0(0x08)
	struct UImage* LingtDot03; // 0x4a8(0x08)
	struct UImage* LingtDot04; // 0x4b0(0x08)
	struct UImage* Lingteyes01; // 0x4b8(0x08)
	struct UImage* Lingteyes02; // 0x4c0(0x08)
	struct UImage* MoveLight; // 0x4c8(0x08)
	struct UCanvasPanel* Pass; // 0x4d0(0x08)
	struct UImage* PointLight; // 0x4d8(0x08)
	struct URichTextBlock* RichTextBlock; // 0x4e0(0x08)
	struct URichTextBlock* RichTextBlock; // 0x4e8(0x08)
	struct URichTextBlock* RichTextBlock; // 0x4f0(0x08)
	struct URichTextBlock* RichTextBlock; // 0x4f8(0x08)
	struct USizeBox* SizeBox; // 0x500(0x08)
	struct USizeBox* SizeBox; // 0x508(0x08)
	struct USizeBox* SizeBox; // 0x510(0x08)
	struct USpacer* Spacer; // 0x518(0x08)
	struct UImage* TextBgBox; // 0x520(0x08)
	struct UTextBlock* TextBlock; // 0x528(0x08)
	struct UTextBlock* TextBlock; // 0x530(0x08)
	struct UTextBlock* TextBlock; // 0x538(0x08)
	struct UTextBlock* TextBlock; // 0x540(0x08)
	struct UTextBlock* TextBlock; // 0x548(0x08)
	struct UTextBlock* TextBlock; // 0x550(0x08)
	struct UTextBlock* TextBlock; // 0x558(0x08)
	struct UTextBlock* TextBlock; // 0x560(0x08)
	struct UTextBlock* TextBlock; // 0x568(0x08)
	struct UTextBlock* TextBlock; // 0x570(0x08)
	struct UTextBlock* TextBlock; // 0x578(0x08)
	struct UTextBlock* TextBlock; // 0x580(0x08)
	struct UTextBlock* TextBlock; // 0x588(0x08)
	struct UTextBlock* TextBlock; // 0x590(0x08)
	struct UTextBlock* TextBlock; // 0x598(0x08)
	struct UTextBlock* TextBlock; // 0x5a0(0x08)
	struct UTextBlock* TextBlock; // 0x5a8(0x08)
	struct UTextBlock* TextBlock; // 0x5b0(0x08)
	struct UTextBlock* TextBlock; // 0x5b8(0x08)
	struct UTextBlock* TextBlock; // 0x5c0(0x08)
	struct UTextBlock* TextBlock; // 0x5c8(0x08)
	struct UTextBlock* TextBlock; // 0x5d0(0x08)
	struct UTextBlock* TextBlock; // 0x5d8(0x08)
	struct UTextBlock* TextBlock; // 0x5e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x5e8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x5f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x5f8(0x08)
	bool UsingGauge; // 0x600(0x01)
	float UpdateTime; // 0x604(0x04)
	float PreTime; // 0x608(0x04)
	float Rate; // 0x60c(0x04)
	struct UImage* TargetImage; // 0x610(0x08)
	struct UWidgetAnimation* TargetAnimation; // 0x618(0x08)
	struct UMaterialInstanceDynamic* Material; // 0x620(0x08)
	struct UTextBlock* UpdatePointText; // 0x628(0x08)
	int32_t PassPoint; // 0x630(0x04)
	int32_t CurPoint; // 0x634(0x04)
	float StartSoundTime; // 0x638(0x04)
	struct FAudioPlayingHandle Guage; // 0x63c(0x04)
	struct UAkAudioEvent* TargetAudio; // 0x640(0x08)
	float StartAnimationTime; // 0x648(0x04)
	struct FCoh_TournamentResult TournamentData; // 0x650(0x98)
	struct FDateTime StartTime; // 0x6e8(0x08)
	bool NeedUpdateTime; // 0x6f0(0x01)
	bool IsLast; // 0x6f1(0x01)
	int32_t TargetRound; // 0x6f4(0x04)
	bool EnableClosePopupButton; // 0x6f8(0x01)
	struct FString Price; // 0x700(0x10)

	void GetABPLobbyPawn(int32_t Index, struct UABP-LobbyPawn_C*& ABP-Pawn); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.GetABPLobbyPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTournamentResultAnim(bool IsWin, int32_t Index); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.SetTournamentResultAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.OnMouseButtonUp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowPassFinals(int32_t CurRank, int32_t PassRank, struct FString League, struct FString RemainTimeForNextGame, int32_t Count, int32_t Reward, int32_t Round, bool IsFinalsPass); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.ShowPassFinals // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowFail(int32_t CurPoint, int32_t PassPoint, int32_t Count, struct FString League, int32_t Reward, int32_t Round, bool IsJoined); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.ShowFail // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_213_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.BndEvt__Button_213_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Init(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.Init // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowVictory(struct FString LeagueType, int32_t Count, int32_t Reward); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.ShowVictory // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowPassQualifier(int32_t CurPoint, int32_t PassPoint, struct FString League, struct FString RemainTimeForNextGame, int32_t Count, int32_t Reward); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.ShowPassQualifier // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowFailFinals(int32_t CurRank, int32_t PassRank, int32_t Count, struct FString League, int32_t Reward, int32_t Round, bool bIsFinalPass, bool IsJoined, bool LastRound); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.ShowFailFinals // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_348_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.BndEvt__Button_348_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetData(int32_t Target\Round); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_60_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.BndEvt__Button_60_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindTournamentAnimEnded(bool bWin); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.BindTournamentAnimEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event_TournamentDefeatAnimEnded_Event(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.Event_TournamentDefeatAnimEnded_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindTournamentAnimEnded(bool bWin); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.BindTournamentAnimEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindTournamentAnimEnded(bool bWin); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.BindTournamentAnimEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindTournamentAnimEnded(bool bWin); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.BindTournamentAnimEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TournamentMatchEnd02Widget(int32_t EntryPoint); // Function UW-TournamentMatchEnd02Widget.UW-TournamentMatchEnd02Widget_C.ExecuteUbergraph_UW-TournamentMatchEnd02Widget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

