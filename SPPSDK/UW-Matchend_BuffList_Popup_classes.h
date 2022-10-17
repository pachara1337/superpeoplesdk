// WidgetBlueprintGeneratedClass UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C
// Size: 0x2cff6b20 (Inherited: 0x2cff6a88)
struct UUW-Matchend_BuffList_Popup_C : UUserWidget {
	struct UWidgetAnimation* Anim_Show; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x290(0x08)
	struct UTextBlock* T_DamageDecrease; // 0x298(0x08)
	struct UTextBlock* T_DamageDecrease2; // 0x2a0(0x08)
	struct UTextBlock* T_DamageIncrease; // 0x2a8(0x08)
	struct UTextBlock* T_DamageIncrease2; // 0x2b0(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x2b8(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x2c0(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x2c8(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x2d0(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x2d8(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x2e0(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x2e8(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x2f0(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x2f8(0x08)
	struct UUW-Matchend_BuffList_C* UW-Matchend_BuffList; // 0x300(0x08)
	struct UVerticalBox* VerticalBox_Left; // 0x308(0x08)
	struct UVerticalBox* VerticalBox_Right; // 0x310(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Attacker; // 0x318(0x08)

	void HideAllBuff(); // Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.HideAllBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MakeBuffList(struct UVerticalBox* TargetBox, struct TArray<struct FDamageBuffInfo>& DamageBuffInfo, bool IsAttackInfo); // Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.MakeBuffList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBuffPopupInfo(struct FDiedDamageInfo& DefenderBuffs); // Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.SetBuffPopupInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowPopup(bool IsTop, struct FDiedDamageInfo& DiedDamageInfo); // Function UW-Matchend_BuffList_Popup.UW-Matchend_BuffList_Popup_C.ShowPopup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

