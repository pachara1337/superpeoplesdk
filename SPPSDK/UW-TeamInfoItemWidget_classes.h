// WidgetBlueprintGeneratedClass UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C
// Size: 0x2cff6b08 (Inherited: 0x2cff6aa0)
struct UUW-TeamInfoItemWidget_C : UBravoHotelTeamInfoSlotWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* Anim_IconBouncing; // 0x3a8(0x08)
	struct UWidgetAnimation* Progress_Stroke; // 0x3b0(0x08)
	struct UWidgetAnimation* Shoot_ani; // 0x3b8(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x3c0(0x08)
	struct UImage* death; // 0x3c8(0x08)
	struct UImage* Image; // 0x3d0(0x08)
	struct UImage* Image; // 0x3d8(0x08)
	struct UImage* Image; // 0x3e0(0x08)
	struct UImage* Image; // 0x3e8(0x08)
	struct UImage* Image; // 0x3f0(0x08)
	struct UImage* Image; // 0x3f8(0x08)
	struct UImage* Image_CountryMark; // 0x400(0x08)
	struct UImage* Image_Firing; // 0x408(0x08)
	struct UImage* Image_Heart; // 0x410(0x08)
	struct UImage* Image_OutLine; // 0x418(0x08)
	struct UImage* Image_TeamInfoClassIcon; // 0x420(0x08)
	struct UImage* Img_LogOut; // 0x428(0x08)
	struct UImage* Img_Voice; // 0x430(0x08)
	struct UImage* Img_VoiceMute; // 0x438(0x08)
	struct UOverlay* Overlay; // 0x440(0x08)
	struct UOverlay* Overlay_Death; // 0x448(0x08)
	struct UOverlay* Overlay_RemainGoldenTimeSelf; // 0x450(0x08)
	struct UOverlay* Overlay_RequestResus; // 0x458(0x08)
	struct UProgressBar* ProgressBar; // 0x460(0x08)
	struct UProgressBar* ProgressBar; // 0x468(0x08)
	struct USizeBox* SizeBox; // 0x470(0x08)
	struct USizeBox* SizeBox; // 0x478(0x08)
	struct UProgressBar* StateGoldenTime; // 0x480(0x08)
	struct UProgressBar* StateKnockdown; // 0x488(0x08)
	struct UTextBlock* T_ClassName; // 0x490(0x08)
	struct UTextBlock* T_ClassWeapon; // 0x498(0x08)
	struct UTextBlock* T_PlayerIndex; // 0x4a0(0x08)
	struct UTextBlock* T_PlayerName; // 0x4a8(0x08)
	struct UImage* TeamColor; // 0x4b0(0x08)
	struct UTextBlock* TextBlock; // 0x4b8(0x08)
	struct UTextBlock* TextBlock; // 0x4c0(0x08)
	struct UTextBlock* TextBlock; // 0x4c8(0x08)
	struct UTextBlock* TextBlock; // 0x4d0(0x08)
	struct UTextBlock* TextBlock; // 0x4d8(0x08)
	struct UTextBlock* TextBlock_RemainGoldenTimeSelf; // 0x4e0(0x08)
	struct UTextBlock* TextBlock_RequestResus; // 0x4e8(0x08)
	struct UTextBlock* TextBlock_Resuscitating; // 0x4f0(0x08)
	struct UUW-RequestResuscitation_C* UW-RequestResuscitation; // 0x4f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_LogOut; // 0x500(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Resuscitate; // 0x508(0x08)
	int32_t Index; // 0x510(0x04)
	enum class EPlayerBehavior Behavior; // 0x514(0x01)
	float hp; // 0x518(0x04)
	struct FText Name; // 0x520(0x18)
	struct TArray<struct FLinearColor> ColorList; // 0x538(0x10)
	bool bPin; // 0x548(0x01)
	float PrevHP; // 0x54c(0x04)
	bool bReduceHP; // 0x550(0x01)
	struct FTimerHandle TimerHandleReduceHP; // 0x558(0x08)
	bool bIncreaseHP; // 0x560(0x01)
	struct UCurveFloat* HealthChangeCurve; // 0x568(0x08)
	struct UCurveLinearColor* HealthDangerCurve; // 0x570(0x08)
	struct FTimerHandle HealTimer; // 0x578(0x08)
	struct FTimerHandle FaintTimer; // 0x580(0x08)
	float BaseHealth; // 0x588(0x04)
	float TargetHealth; // 0x58c(0x04)
	float HealthWeight; // 0x590(0x04)
	float TargetFaint; // 0x594(0x04)
	float BaseFaint; // 0x598(0x04)
	float FaintWeight; // 0x59c(0x04)
	float CurrentHPPercent; // 0x5a0(0x04)
	float HealHPPercent; // 0x5a4(0x04)
	float FaintPercent; // 0x5a8(0x04)
	float CurrentAlpha; // 0x5ac(0x04)
	float AlphaTimer; // 0x5b0(0x04)
	struct UCurveFloat* AlphaCurve; // 0x5b8(0x08)
	bool KnockDown; // 0x5c0(0x01)
	float HeartBeat; // 0x5c4(0x04)
	struct UPaperSprite* DisConnectSprite; // 0x5c8(0x08)
	struct UPaperSprite* KnockDownSprite; // 0x5d0(0x08)
	struct UPaperSprite* DeathSprite; // 0x5d8(0x08)
	struct UPaperSprite* VehicleSprite; // 0x5e0(0x08)
	struct FTimerHandle HpTimer; // 0x5e8(0x08)
	float EndTime; // 0x5f0(0x04)
	float StartTime; // 0x5f4(0x04)
	float TotalTime; // 0x5f8(0x04)
	float ResultValue; // 0x5fc(0x04)
	float AddTme; // 0x600(0x04)
	float PreStart; // 0x604(0x04)

	void OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F(struct UObject* Loaded); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.OnLoaded_27D2D12149E3EA31998D6D88C1D08B2F // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_50F9CF684A069D14E7814EBC2EC6F775(struct UObject* Loaded); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.OnLoaded_50F9CF684A069D14E7814EBC2EC6F775 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetNickName(struct FString NewNickName); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetNickName // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIndex(int32_t NewIndex); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetIndex // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPerkLevel(int32_t NewPerkLevel); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPerkLevel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPerkName(struct FName& NewPerkName); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPerkName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetKillCount(int32_t NewKillCount); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetKillCount // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetHp(int32_t NewCur, int32_t NewMax); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetHp // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ????? (); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C. ?????  // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPing(struct FBravoHotelPingInfo& NewPingInfo); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetPing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTalking(bool NewTalking, bool bIsMute); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetTalking // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetFiring(bool NewIsFiring); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetFiring // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AnimationHP(float Start, float End, float Time); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.AnimationHP // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hp_Ani(); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.Hp_Ani // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGoldenTime(struct FTimespan NewRemainTime, float NewPercent); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetGoldenTime // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetExpertWeaponName(struct FText& NewWeaponName); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetExpertWeaponName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCharacterState(enum class ECharacterState NewState, bool IsDisconnect); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetCharacterState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRequestResuscitation(bool bNewFlag); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetRequestResuscitation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetResuscitating(bool bNewFlag); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetResuscitating // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetCountryIcon(struct TSoftObjectPtr<UPaperSprite>& Icon); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetCountryIcon // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisibleCountryIcon(bool bVisible); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.SetVisibleCountryIcon // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TeamInfoItemWidget(int32_t EntryPoint); // Function UW-TeamInfoItemWidget.UW-TeamInfoItemWidget_C.ExecuteUbergraph_UW-TeamInfoItemWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

