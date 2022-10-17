// WidgetBlueprintGeneratedClass UW-Matchend_BuffList.UW-Matchend_BuffList_C
// Size: 0x2cff6af0 (Inherited: 0x2cff6a88)
struct UUW-Matchend_BuffList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image_Bg_Default; // 0x290(0x08)
	struct UImage* Image_Bg_None; // 0x298(0x08)
	struct UImage* Image_Bg_Perk; // 0x2a0(0x08)
	struct UImage* Image_Grade_Color_Line; // 0x2a8(0x08)
	struct UImage* Image_Icon_Buff; // 0x2b0(0x08)
	struct UImage* Image_Rarity; // 0x2b8(0x08)
	struct UOverlay* Overlay_Bg_Item; // 0x2c0(0x08)
	struct UOverlay* Overlay_BuffType_Default; // 0x2c8(0x08)
	struct UTextBlock* T_Desc; // 0x2d0(0x08)
	struct UTextBlock* T_Value; // 0x2d8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_BgType; // 0x2e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Text; // 0x2e8(0x08)

	void SetBuffInfo(struct FDamageBuffInfo& DamageBuffInfo, bool IsAttackInfo, float& PercentValue); // Function UW-Matchend_BuffList.UW-Matchend_BuffList_C.SetBuffInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_FA6A4C9B445C6ACB95A380AA4C7E1A29(struct UObject* Loaded); // Function UW-Matchend_BuffList.UW-Matchend_BuffList_C.OnLoaded_FA6A4C9B445C6ACB95A380AA4C7E1A29 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadingBuff(struct TSoftObjectPtr<UObject> Texture); // Function UW-Matchend_BuffList.UW-Matchend_BuffList_C.AsyncLoadingBuff // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Matchend_BuffList(int32_t EntryPoint); // Function UW-Matchend_BuffList.UW-Matchend_BuffList_C.ExecuteUbergraph_UW-Matchend_BuffList // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

