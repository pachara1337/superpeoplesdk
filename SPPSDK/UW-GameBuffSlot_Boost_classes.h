// WidgetBlueprintGeneratedClass UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C
// Size: 0x2cff6a88 (Inherited: 0x2cff6a48)
struct UUW-GameBuffSlot_Boost_C : UBravoHotelGameBuffSlot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Anim_Boost_Off; // 0x350(0x08)
	struct UWidgetAnimation* Anim_Boost_On; // 0x358(0x08)
	struct UCanvasPanel* CanvasPanel_BoostInfo; // 0x360(0x08)
	struct UImage* Image_Active; // 0x368(0x08)
	struct UImage* IMG_CoolTime; // 0x370(0x08)
	struct UTextBlock* T_CoolTime; // 0x378(0x08)
	struct UMaterialInstanceDynamic* MI_CoolTimeDynamicInstance; // 0x380(0x08)
	struct UMaterialInstanceDynamic* MI_BuffActive; // 0x388(0x08)
	float BoostOffAnimTime; // 0x390(0x04)
	bool IsActive; // 0x394(0x01)
	struct FBuffData BoostBuffInfo; // 0x398(0x1f0)

	void SetIsActive(bool bActive); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitBuffInfo(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.InitBuffInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCoolTime(float Timer, float MaxTime); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.UpdateCoolTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_541BBAAD4C8A218716460DAC5837CB3E(struct UObject* Loaded); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.OnLoaded_541BBAAD4C8A218716460DAC5837CB3E // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_UpdateBuff(float Timer, float MaxTime); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_UpdateBuff // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnNewBuff(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_OnNewBuff // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnRenewBuff(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.K2_OnRenewBuff // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void PlayAnimBoostOn(); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.PlayAnimBoostOn // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncloadImage(struct TSoftObjectPtr<UObject> Image); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.AsyncloadImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-GameBuffSlot_Boost(int32_t EntryPoint); // Function UW-GameBuffSlot_Boost.UW-GameBuffSlot_Boost_C.ExecuteUbergraph_UW-GameBuffSlot_Boost // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

