// WidgetBlueprintGeneratedClass UW-TournamentInvite.UW-TournamentInvite_C
// Size: 0x2cff6adc (Inherited: 0x2cff6a88)
struct UUW-TournamentInvite_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Hide; // 0x290(0x08)
	struct UWidgetAnimation* Show; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UTextBlock* TextBlock; // 0x2b0(0x08)
	struct UTextBlock* TextBlock; // 0x2b8(0x08)
	struct UTextBlock* TextBlock; // 0x2c0(0x08)
	bool UpdateTime; // 0x2c8(0x01)
	struct FDateTime EndTime; // 0x2d0(0x08)
	float HoldingTime; // 0x2d8(0x04)
	char pad_2CFF6AD5[0x7]; // 0x2cff6ad5(0x07)

	void SetInfo(struct FString UserName); // Function UW-TournamentInvite.UW-TournamentInvite_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-TournamentInvite.UW-TournamentInvite_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TournamentInvite(int32_t EntryPoint); // Function UW-TournamentInvite.UW-TournamentInvite_C.ExecuteUbergraph_UW-TournamentInvite // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

