// WidgetBlueprintGeneratedClass UW-AliveInfoWidget.UW-AliveInfoWidget_C
// Size: 0x2cff6a6c (Inherited: 0x2cff6ac8)
struct UUW-AliveInfoWidget_C : UBravoHotelAliveInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* GoldDesc_Hide; // 0x2d0(0x08)
	struct UWidgetAnimation* GoldDesc_Show; // 0x2d8(0x08)
	struct UWidgetAnimation* Revival_Add; // 0x2e0(0x08)
	struct UTextBlock* AliveCount_Text; // 0x2e8(0x08)
	struct UTextBlock* AliveCount_Text; // 0x2f0(0x08)
	struct UTextBlock* CurrentCount; // 0x2f8(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x300(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x308(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x310(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x318(0x08)
	struct UHorizontalBox* HorizontalBox_Alive; // 0x320(0x08)
	struct UHorizontalBox* HorizontalBox_Assist; // 0x328(0x08)
	struct UHorizontalBox* HorizontalBox_CurrentGold; // 0x330(0x08)
	struct UHorizontalBox* HorizontalBox_Kill; // 0x338(0x08)
	struct UHorizontalBox* HorizontalBox_Team; // 0x340(0x08)
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
	struct UImage* KillAliveBG; // 0x398(0x08)
	struct UImage* KillAliveBG; // 0x3a0(0x08)
	struct UImage* KillAliveBG; // 0x3a8(0x08)
	struct UImage* KillAliveBG; // 0x3b0(0x08)
	struct UTextBlock* KillCount_Text; // 0x3b8(0x08)
	struct UTextBlock* KillCount_Text; // 0x3c0(0x08)
	struct UTextBlock* LimitCount; // 0x3c8(0x08)
	struct UOverlay* Overlay_GoldDesc; // 0x3d0(0x08)
	struct URichTextBlock* RichTextBlock; // 0x3d8(0x08)
	struct URichTextBlock* RichTextBlock; // 0x3e0(0x08)
	struct USizeBox* SizeBox; // 0x3e8(0x08)
	struct USizeBox* SizeBox; // 0x3f0(0x08)
	struct USpacer* Spacer; // 0x3f8(0x08)
	struct UTextBlock* T_AliveCount; // 0x400(0x08)
	struct UTextBlock* T_AssistCount; // 0x408(0x08)
	struct UTextBlock* T_KillCount; // 0x410(0x08)
	struct UTextBlock* T_TeamCount; // 0x418(0x08)
	struct UTextBlock* TextBlock; // 0x420(0x08)
	struct UTextBlock* TextBlock_CurrentGold; // 0x428(0x08)
	struct UUW-FreeTicketInfo_C* UW-FreeTicketInfo; // 0x430(0x08)
	bool ShowKillCountUI; // 0x438(0x01)
	int32_t CurrentKillCount; // 0x43c(0x04)
	int32_t NewVar; // 0x440(0x04)
	struct FTimerHandle ShowGoldDescHandle; // 0x448(0x08)
	struct UTextBlock* AliveCount_Text_1; // 0x450(0x08)
	struct UTextBlock* KillCount_Text_1; // 0x458(0x08)
	bool IsTournamentTicket; // 0x460(0x01)
	int32_t CurCnt; // 0x464(0x04)
	int32_t LimitCnt; // 0x468(0x04)

	void SetBGImageMarginValue(int32_t AliveCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetBGImageMarginValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAliveCount(int32_t AliveCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetKillCount(int32_t KillCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetKillCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideKillCount(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.HideKillCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowKillCount(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ShowKillCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetKillCount_BP(int32_t NewKillCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetKillCount_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAliveCount_BP(int32_t NewAliveCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveCount_BP // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetAliveTeamCount_BP(int32_t NewAliveTeamCount, int32_t TeamSize); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAliveTeamCount_BP // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ShowResuscitation(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ShowResuscitation // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Show_GoldDesc(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Show_GoldDesc // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide_GoldDesc(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Hide_GoldDesc // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAssistCount_BP(int32_t NewKillCount); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetAssistCount_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCurrentGold_BP(struct FText& NewCurrentGold, bool bIsVisible); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.SetCurrentGold_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(bool IsShow, struct UUW-FreeTicket_C* TicketWidget, enum class ETicketType TicketType); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckTournament(); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.CheckTournament // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-AliveInfoWidget(int32_t EntryPoint); // Function UW-AliveInfoWidget.UW-AliveInfoWidget_C.ExecuteUbergraph_UW-AliveInfoWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

