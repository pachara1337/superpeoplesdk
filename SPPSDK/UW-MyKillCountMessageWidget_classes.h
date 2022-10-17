// WidgetBlueprintGeneratedClass UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C
// Size: 0x2cff6ad4 (Inherited: 0x2cff6a88)
struct UUW-MyKillCountMessageWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_HideKillAssist; // 0x290(0x08)
	struct UWidgetAnimation* Anim_ShowAssist; // 0x298(0x08)
	struct UWidgetAnimation* Anim_ShowKill; // 0x2a0(0x08)
	struct UTextBlock* T_AssistCount; // 0x2a8(0x08)
	struct UTextBlock* T_KillCount; // 0x2b0(0x08)
	int32_t DefaultFontSize; // 0x2b8(0x04)
	int32_t MiniFontSize; // 0x2bc(0x04)
	bool IsShowingKillCount; // 0x2c0(0x01)
	struct FTimerHandle Timer_HideKillCountText; // 0x2c8(0x08)
	float RemainTime; // 0x2d0(0x04)
	char pad_2CFF6ACD[0x7]; // 0x2cff6acd(0x07)

	void SetHideTimer(); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.SetHideTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateAssistTextSize(); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.UpdateAssistTextSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowKillCount(bool bIsKill, struct FText Text); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.ShowKillCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideKillCountText(); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.HideKillCountText // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MyKillCountMessageWidget(int32_t EntryPoint); // Function UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.ExecuteUbergraph_UW-MyKillCountMessageWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

