// WidgetBlueprintGeneratedClass UW-TeamPositionWidget.UW-TeamPositionWidget_C
// Size: 0x2cff6a79 (Inherited: 0x2cff6ae0)
struct UUW-TeamPositionWidget_C : UBravoHotelTeamPositionWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Anim_Bouncing; // 0x2e8(0x08)
	struct UCanvasPanel* CanvasRequestResuscitation; // 0x2f0(0x08)
	struct UImage* CriticalGuage; // 0x2f8(0x08)
	struct UImage* DyingGuage; // 0x300(0x08)
	struct UImage* Img_StateDeath; // 0x308(0x08)
	struct UImage* Img_StateDisconnect; // 0x310(0x08)
	struct UImage* Img_StateParachute; // 0x318(0x08)
	struct UImage* Img_StateRevival; // 0x320(0x08)
	struct UImage* Img_StateVehicle; // 0x328(0x08)
	struct UImage* IMG_TeamColor; // 0x330(0x08)
	struct UTextBlock* MoveParameter; // 0x338(0x08)
	struct UImage* RevivingGuage; // 0x340(0x08)
	struct UWidgetSwitcher* Switcher_Guage; // 0x348(0x08)
	struct UWidgetSwitcher* Switcher_Icon; // 0x350(0x08)
	struct UTextBlock* TextBlock_Name; // 0x358(0x08)
	struct UTextBlock* TextBlock_PlayerIndex; // 0x360(0x08)
	struct FTimerHandle RevivingTimerHandle; // 0x368(0x08)
	float TotalRevivingTime; // 0x370(0x04)
	float CurrentRevivingTime; // 0x374(0x04)
	bool IsRequestResuscitation; // 0x378(0x01)

	void Move Parameter(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.Move Parameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckRequestResuscitation(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.CheckRequestResuscitation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetHealthPercent(float& Percent); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.GetHealthPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void UpdateKnockOutHealth(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateKnockOutHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCastingGauge(bool& IsCasting); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateCastingGauge // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNameVisibility(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetNameVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeamNumInfo(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetTeamNumInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateRevivalGauge(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateRevivalGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateKnockOutGauge(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateKnockOutGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateGauge(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIconSwitcher(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetIconSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRotationVisibility(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetRotationVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeamColorVisibility(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetTeamColorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPlayerName(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetPlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetPlayerName(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_SetPlayerName // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetDisconnect(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetDisconnect // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeamPlayerIconIndex(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetTeamPlayerIconIndex // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetPlayerBehavior(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.SetPlayerBehavior // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeIsInViewport(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.OnChangeIsInViewport // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_UpdateGauge(int32_t GaugeType, float Percent); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_UpdateGauge // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_UpdateResuscitationAnim(bool bPlay); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.K2_UpdateResuscitationAnim // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateGaugeVisibility(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.UpdateGaugeVisibility // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct TArray<enum class ESettingType>& List); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C. ????? // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TeamPositionWidget(int32_t EntryPoint); // Function UW-TeamPositionWidget.UW-TeamPositionWidget_C.ExecuteUbergraph_UW-TeamPositionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

