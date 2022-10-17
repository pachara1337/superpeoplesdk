// WidgetBlueprintGeneratedClass UW-Matchend_DamageList.UW-Matchend_DamageList_C
// Size: 0x2cff6a94 (Inherited: 0x2cff6a88)
struct UUW-Matchend_DamageList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim; // 0x290(0x08)
	struct UButton* Button_CheckHover; // 0x298(0x08)
	struct UButton* Button_CheckHover; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel_BuffBottom; // 0x2a8(0x08)
	struct UCanvasPanel* CanvasPanel_BuffTop; // 0x2b0(0x08)
	struct UCanvasPanel* CanvasPanel_Killer; // 0x2b8(0x08)
	struct UCanvasPanel* CanvasPanel_Last; // 0x2c0(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x2c8(0x08)
	struct UCanvasPanel* CanvasPanel_Me; // 0x2d0(0x08)
	struct UCanvasPanel* CanvasPanel_None; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image_OutLine_Killer; // 0x300(0x08)
	struct UImage* Image_OutLine_Me; // 0x308(0x08)
	struct UUW-MatchEnd_DamageList_Item_C* UW-MatchEnd_DamageList_Item_Killer; // 0x310(0x08)
	struct UUW-MatchEnd_DamageList_Item_C* UW-MatchEnd_DamageList_Item_Me; // 0x318(0x08)
	struct UUW-MatchEnd_DamageList_Item_C* UW-MatchEnd_DamageList_Item_None; // 0x320(0x08)
	struct UUW-MatchEnd_DamageList_TotalDamage_C* UW-MatchEnd_DamageList_TotalDamage_Killer; // 0x328(0x08)
	struct UUW-MatchEnd_DamageList_TotalDamage_C* UW-MatchEnd_DamageList_TotalDamage_Me; // 0x330(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_DamageCauser; // 0x338(0x08)
	struct FDiedDamageInfo DiedDamageInfo; // 0x340(0xc38)
	bool bIsLast; // 0xf78(0x01)
	struct FMulticastInlineDelegate EventDispatcher_HoverDamageList; // 0xf80(0x10)
	int32_t WidgetIndex; // 0xf90(0x04)

	void SetOutLineVisibility(bool IsVisible); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.SetOutLineVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetDamageListAnim(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ResetDamageListAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowBuffListPopup(struct UUW-Matchend_BuffList_Popup_C* BuffListPopup); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ShowBuffListPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayDamageInfoAnim(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.PlayDamageInfoAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDiedDamageInfo(struct FDiedDamageInfo& DiedDamageInfo, bool IsLast, int32_t WidgetIndex); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.SetDiedDamageInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.BndEvt__Button_CheckHover_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Matchend_DamageList(int32_t EntryPoint); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.ExecuteUbergraph_UW-Matchend_DamageList // (Final|UbergraphFunction) // @ game+0x2bad3b0
	void EventDispatcher_HoverDamageList__DelegateSignature(int32_t WidgetIndex, bool IsHoverd); // Function UW-Matchend_DamageList.UW-Matchend_DamageList_C.EventDispatcher_HoverDamageList__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

