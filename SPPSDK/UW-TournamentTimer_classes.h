// WidgetBlueprintGeneratedClass UW-TournamentTimer.UW-TournamentTimer_C
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a88)
struct UUW-TournamentTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Ani_Countdown; // 0x290(0x08)
	struct UTextBlock* TextBlock_RemailTime; // 0x298(0x08)
	int32_t PreTime; // 0x2a0(0x04)
	int32_t CheckTime; // 0x2a4(0x04)
	int32_t CheckTime1st; // 0x2a8(0x04)
	int32_t CheckTime2nd; // 0x2ac(0x04)
	int32_t CheckTime3rd; // 0x2b0(0x04)
	struct FAudioPlayingHandle Check3ndBaseSound; // 0x2b4(0x04)
	struct UAkComponent* NewVar; // 0x2b8(0x08)

	void  ??스(int32_t RemainTime); // Function UW-TournamentTimer.UW-TournamentTimer_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-TournamentTimer.UW-TournamentTimer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-TournamentTimer.UW-TournamentTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TournamentTimer(int32_t EntryPoint); // Function UW-TournamentTimer.UW-TournamentTimer_C.ExecuteUbergraph_UW-TournamentTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

