// WidgetBlueprintGeneratedClass UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C
// Size: 0x2cff6a39 (Inherited: 0x2cff6a88)
struct UUW-RewardGoldSlot_02_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_Bouns; // 0x290(0x08)
	struct UTextBlock* 1; // 0x298(0x08)
	struct UTextBlock* 10; // 0x2a0(0x08)
	struct UTextBlock* 100; // 0x2a8(0x08)
	struct UTextBlock* 1000; // 0x2b0(0x08)
	struct UTextBlock* Empty; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UTextBlock* TextBlock; // 0x320(0x08)
	struct UImage* TextLight; // 0x328(0x08)
	int32_t Save; // 0x330(0x04)
	struct FAudioPlayingHandle LoopSound; // 0x334(0x04)
	bool IsStopSound; // 0x338(0x01)

	void Divide(int32_t Value, int32_t& RetS1, int32_t& RetS2); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.Divide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGold(int32_t RandomGold); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.SetGold // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopSound(); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.StopSound // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-RewardGoldSlot_02(int32_t EntryPoint); // Function UW-RewardGoldSlot_02.UW-RewardGoldSlot_02_C.ExecuteUbergraph_UW-RewardGoldSlot_02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

