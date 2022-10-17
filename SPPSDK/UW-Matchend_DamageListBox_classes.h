// WidgetBlueprintGeneratedClass UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C
// Size: 0x2cff6ad4 (Inherited: 0x2cff6a88)
struct UUW-Matchend_DamageListBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UScrollBox* ScrollBox_DamageList; // 0x290(0x08)
	struct UUW-Matchend_BuffList_Popup_C* UW-Matchend_BuffList_Popup; // 0x298(0x08)
	struct FTimerHandle Timer_PlayDamageListAnim; // 0x2a0(0x08)
	float DamageListAnimDelayTime; // 0x2a8(0x04)
	float ShowBuffListPopupDelayTime; // 0x2ac(0x04)
	int32_t CurrentAnimIndex; // 0x2b0(0x04)
	struct UUW-Matchend_BuffList_Popup_C* BuffListPopupWidgetRef; // 0x2b8(0x08)
	struct FTimerHandle Handle_ShowBuffListPopup; // 0x2c0(0x08)
	int32_t HoverdWidgetIndex; // 0x2c8(0x04)
	float Time_PlayDamageListAnim; // 0x2cc(0x04)
	float Time_ShowBuffListPopup; // 0x2d0(0x04)
	char pad_2CFF6AD0[0x4]; // 0x2cff6ad0(0x04)

	void ShowBuffListPopup(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.ShowBuffListPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HoverDamageList(int32_t WidgetIndex, bool IsHoverd); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.HoverDamageList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayDamageListAnim(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.PlayDamageListAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetDamageListCount(int32_t& Count); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.GetDamageListCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Reset Damage List Anim(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.Reset Damage List Anim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MakeDamageList(struct TArray<struct FDiedDamageInfo>& DiedDamageInfos); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.MakeDamageList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void StartBuffListPopup(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.StartBuffListPopup // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopBuffListPopup(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.StopBuffListPopup // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartDamageListAnim(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.StartDamageListAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopDamageListAnim(); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.StopDamageListAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Matchend_DamageListBox(int32_t EntryPoint); // Function UW-Matchend_DamageListBox.UW-Matchend_DamageListBox_C.ExecuteUbergraph_UW-Matchend_DamageListBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

