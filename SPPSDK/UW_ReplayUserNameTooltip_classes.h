// WidgetBlueprintGeneratedClass UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C
// Size: 0x2cff6a80 (Inherited: 0x2cff6a88)
struct UUW_ReplayUserNameTooltip_C : UBravoHotelItemUseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* BT_UserName; // 0x290(0x08)
	struct UCanvasPanel* CP_Main; // 0x298(0x08)
	struct UHorizontalBox* HB_ItemInfo; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* IMG_Frontbar; // 0x2c0(0x08)
	struct UImage* IMG_Item; // 0x2c8(0x08)
	struct UImage* IMG_TeamColor; // 0x2d0(0x08)
	struct UProgressBar* PB_HP; // 0x2d8(0x08)
	struct UProgressBar* PB_ItemCasting; // 0x2e0(0x08)
	struct UProgressBar* PB_Message; // 0x2e8(0x08)
	struct URichTextBlock* RichT_Message; // 0x2f0(0x08)
	struct USizeBox* SizeBox_Message; // 0x2f8(0x08)
	struct UWidgetSwitcher* Switcher_Casting; // 0x300(0x08)
	struct UTextBlock* T_Class; // 0x308(0x08)
	struct UTextBlock* T_ExpertWeapon; // 0x310(0x08)
	struct UTextBlock* T_Item; // 0x318(0x08)
	struct UTextBlock* T_Level; // 0x320(0x08)
	struct UTextBlock* T_Quantity; // 0x328(0x08)
	struct UTextBlock* T_TeamNum; // 0x330(0x08)
	struct UTextBlock* T_UserName; // 0x338(0x08)
	struct UTextBlock* T_UserName; // 0x340(0x08)
	struct ABravoHotelPlayerState* PlayerState; // 0x348(0x08)
	struct APlayerController* ReplayController; // 0x350(0x08)
	struct ABravoHotelCharacter* TargetCharacter; // 0x358(0x08)
	struct FVector2D MaxViewportSize; // 0x360(0x08)
	struct FVector2D LocalScreenPosition; // 0x368(0x08)
	bool IsPositionUpdated; // 0x370(0x01)
	float DefaultCharacterZLocation; // 0x374(0x04)
	struct APawn* TargetPawn; // 0x378(0x08)

	void InitNameButton(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.InitNameButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsKillCamTarget(bool& IsTarget); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsKillCamTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetEquippedWeapon(bool& SUCCESS); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEquippedWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetUsingItem(bool& IsVisible); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetUsingItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCastingMessage(bool& SUCCESS); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCastingGauge(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateCastingGauge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCastingInfo(bool& IsVisible); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetCastingInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEnableNameButton(bool Enable); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetEnableNameButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnClickPlayerNameButton(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnClickPlayerNameButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CorrectionScreenPositionByTeamPositionWidget(struct FVector2D& ScreenPosition, bool& RetOutScreenPosition); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdatePosition(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdatePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsReplayTarget(bool& IsTarget); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsReplayTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetPlayerViewPortPosition(struct FVector2D& ScreenPosition); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.GetPlayerViewPortPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetVisibilityWidget(bool IsShow); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.SetVisibilityWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsShowUserNameTooltip(bool& IsShow); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.IsShowUserNameTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateItemInfo(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitPlayerInfo(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.InitPlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdatePlayerInfo(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdatePlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateInfos(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.UpdateInfos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_E231BB6440132C19B46345A570B8E8BF(struct UObject* Loaded); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.OnLoaded_E231BB6440132C19B46345A570B8E8BF // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture, struct UImage* ImgWidget); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW_ReplayUserNameTooltip(int32_t EntryPoint); // Function UW_ReplayUserNameTooltip.UW_ReplayUserNameTooltip_C.ExecuteUbergraph_UW_ReplayUserNameTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

