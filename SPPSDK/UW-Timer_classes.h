// WidgetBlueprintGeneratedClass UW-Timer.UW-Timer_C
// Size: 0x2cff6aac (Inherited: 0x2cff6a88)
struct UUW-Timer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Ani_Countdown; // 0x290(0x08)
	struct UTextBlock* TextBlock_RemailTime; // 0x298(0x08)
	int32_t PreTime; // 0x2a0(0x04)
	bool ActiveTimer; // 0x2a4(0x01)
	int32_t RemainTime; // 0x2a8(0x04)
	char pad_2CFF6AA9[0x3]; // 0x2cff6aa9(0x03)

	struct FText Get_TextBlock_RemailTime_Text(); // Function UW-Timer.UW-Timer_C.Get_TextBlock_RemailTime_Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Construct(); // Function UW-Timer.UW-Timer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisibileState(enum class EBattleRoyaleState CurrentState); // Function UW-Timer.UW-Timer_C.SetVisibileState // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState); // Function UW-Timer.UW-Timer_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTimer(int32_t RemainTime); // Function UW-Timer.UW-Timer_C.SetTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(int32_t RemainTime); // Function UW-Timer.UW-Timer_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Timer(int32_t EntryPoint); // Function UW-Timer.UW-Timer_C.ExecuteUbergraph_UW-Timer // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

