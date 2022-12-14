// WidgetBlueprintGeneratedClass UW-RewardGoldSlot.UW-RewardGoldSlot_C
// Size: 0x2cff6af0 (Inherited: 0x2cff6a88)
struct UUW-RewardGoldSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Ani_Gold; // 0x290(0x08)
	struct UTextBlock* 1; // 0x298(0x08)
	struct UTextBlock* 10; // 0x2a0(0x08)
	struct UTextBlock* 100; // 0x2a8(0x08)
	struct UTextBlock* 1000; // 0x2b0(0x08)
	struct UImage* BonusBG; // 0x2b8(0x08)
	struct UImage* BrightSpot_01; // 0x2c0(0x08)
	struct UImage* BrightSpot_02; // 0x2c8(0x08)
	struct UImage* BrightSpot_03; // 0x2d0(0x08)
	struct UImage* BrightSpot_04; // 0x2d8(0x08)
	struct UImage* BrightSpot_05; // 0x2e0(0x08)
	struct UTextBlock* Empty; // 0x2e8(0x08)
	struct UImage* Glow_01; // 0x2f0(0x08)
	struct UImage* Gold; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image; // 0x348(0x08)
	struct UImage* Image; // 0x350(0x08)
	struct UImage* Image; // 0x358(0x08)
	struct UImage* Image; // 0x360(0x08)
	struct UImage* Light; // 0x368(0x08)
	struct UImage* Light_01; // 0x370(0x08)
	struct UImage* Light_02; // 0x378(0x08)
	struct UImage* Light_03; // 0x380(0x08)
	struct UImage* Light_04; // 0x388(0x08)
	struct UImage* Light_05; // 0x390(0x08)
	struct UImage* Light_06; // 0x398(0x08)
	struct UTextBlock* PickUpGold; // 0x3a0(0x08)
	struct UImage* RIng_Glow_01; // 0x3a8(0x08)
	struct UTextBlock* TextBlock; // 0x3b0(0x08)
	struct UImage* TextLight; // 0x3b8(0x08)
	struct UImage* TextLight; // 0x3c0(0x08)
	int32_t Save; // 0x3c8(0x04)
	bool NewVar; // 0x3cc(0x01)
	bool IsStopSound; // 0x3cd(0x01)
	float LoopSountStartTime; // 0x3d0(0x04)
	struct FAudioPlayingHandle LoopSound; // 0x3d4(0x04)
	float LoopSountEndTime; // 0x3d8(0x04)
	float 1StartTime; // 0x3dc(0x04)
	float 10StartTime; // 0x3e0(0x04)
	float 100StartTime; // 0x3e4(0x04)
	float 1000StartTime; // 0x3e8(0x04)
	float FinStartTime; // 0x3ec(0x04)

	void Divide(int32_t Value1, int32_t& RetS1, int32_t& RetS2); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.Divide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopSound(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.StopSound // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGold(int32_t AddGold, int32_t GetGold); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.SetGold // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-RewardGoldSlot(int32_t EntryPoint); // Function UW-RewardGoldSlot.UW-RewardGoldSlot_C.ExecuteUbergraph_UW-RewardGoldSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

