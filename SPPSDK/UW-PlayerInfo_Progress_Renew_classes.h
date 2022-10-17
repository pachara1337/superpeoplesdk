// WidgetBlueprintGeneratedClass UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C
// Size: 0x2cff6a78 (Inherited: 0x2cff6a38)
struct UUW-PlayerInfo_Progress_Renew_C : UBravoHotelPlayerInfoProgressWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Anim_Healing; // 0x340(0x08)
	struct UHorizontalBox* HorizontalBox_Health; // 0x348(0x08)
	struct UImage* Image_eager; // 0x350(0x08)
	struct USizeBox* SizeBox_main; // 0x358(0x08)
	struct UCurveFloat* Curve_ProgressMaxSizeRatio; // 0x360(0x08)
	float DefaultSlotSize; // 0x368(0x04)
	float MaxHealthSize; // 0x36c(0x04)
	float CurrentHealthSize; // 0x370(0x04)
	float CurrentMaxHealth; // 0x374(0x04)

	void GetHealthPosition(float InHealth, float& PositionX); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.GetHealthPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void HiddenAllSlots(); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.HiddenAllSlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSetSlotWidgets(int32_t InNewMaxHealth); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.OnSetSlotWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSlotWidgets(int32_t InNewMaxHealth); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.SetSlotWidgets // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void PlayIncreaseMaxHealthAnim(int32_t InLastHealth, int32_t InNewHealth); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.PlayIncreaseMaxHealthAnim // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ShowDecreaseCurrentHealthAnim(int32_t InNewHealth); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.ShowDecreaseCurrentHealthAnim // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisibilityOverHealing(bool bFlag); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.SetVisibilityOverHealing // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void SetOverHealingGauge(int32_t InNewHealth); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.SetOverHealingGauge // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PlayerInfo_Progress_Renew(int32_t EntryPoint); // Function UW-PlayerInfo_Progress_Renew.UW-PlayerInfo_Progress_Renew_C.ExecuteUbergraph_UW-PlayerInfo_Progress_Renew // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

