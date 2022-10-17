// WidgetBlueprintGeneratedClass UW_UserNameTooltip.UW_UserNameTooltip_C
// Size: 0x2cff6a38 (Inherited: 0x2cff6a88)
struct UUW_UserNameTooltip_C : UUserWidget {
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
	struct UTextBlock* T_Item; // 0x2e8(0x08)
	struct UTextBlock* T_Quantity; // 0x2f0(0x08)
	struct UTextBlock* T_TeamNum; // 0x2f8(0x08)
	struct UTextBlock* T_UserName; // 0x300(0x08)
	struct ABravoHotelPlayerState* PlayerState; // 0x308(0x08)
	struct APlayerController* ReplayController; // 0x310(0x08)
	struct ABravoHotelCharacter* TargetCharacter; // 0x318(0x08)
	struct FVector2D MaxViewportSize; // 0x320(0x08)
	struct FVector2D LocalScreenPosition; // 0x328(0x08)
	bool IsPositionUpdated; // 0x330(0x01)
	float DefaultCharacterZLocation; // 0x334(0x04)

	void SetEnableNameButton(bool Enable); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetEnableNameButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnClickPlayerNameButton(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnClickPlayerNameButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CorrectionScreenPositionByTeamPositionWidget(struct FVector2D& ScreenPosition, bool& RetOutScreenPosition); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.CorrectionScreenPositionByTeamPositionWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdatePosition(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdatePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsReplayTarget(bool& IsTarget); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsReplayTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetPlayerViewPortPosition(struct FVector2D& ScreenPosition); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.GetPlayerViewPortPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetVisibilityWidget(bool IsShow); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.SetVisibilityWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsShowUserNameTooltip(bool& IsShow); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.IsShowUserNameTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateEquippedWeaponInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateEquippedWeaponInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateUsingItemInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateUsingItemInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateItemInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateTeamInfo(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateTeamInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateHp(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateHp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateInfos(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.UpdateInfos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_D53F762441681D4069F6ABB7A27DFBE8(struct UObject* Loaded); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.OnLoaded_D53F762441681D4069F6ABB7A27DFBE8 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture, struct UImage* ImgWidget); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW_UserNameTooltip(int32_t EntryPoint); // Function UW_UserNameTooltip.UW_UserNameTooltip_C.ExecuteUbergraph_UW_UserNameTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

