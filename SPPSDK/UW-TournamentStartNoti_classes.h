// WidgetBlueprintGeneratedClass UW-TournamentStartNoti.UW-TournamentStartNoti_C
// Size: 0x2cff6ae4 (Inherited: 0x2cff6a88)
struct UUW-TournamentStartNoti_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Hide; // 0x290(0x08)
	struct UWidgetAnimation* Show; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UTextBlock* TextBlock; // 0x2b0(0x08)
	struct UTextBlock* TextBlock; // 0x2b8(0x08)
	struct UTextBlock* TextBlock; // 0x2c0(0x08)
	struct UTextBlock* TextBlock; // 0x2c8(0x08)
	bool UpdateTime; // 0x2d0(0x01)
	struct FDateTime EndTime; // 0x2d8(0x08)
	float HoldingTime; // 0x2e0(0x04)
	char pad_2CFF6ADD[0x7]; // 0x2cff6add(0x07)

	void SetInfo(float RemainTime); // Function UW-TournamentStartNoti.UW-TournamentStartNoti_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-TournamentStartNoti.UW-TournamentStartNoti_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TournamentStartNoti(int32_t EntryPoint); // Function UW-TournamentStartNoti.UW-TournamentStartNoti_C.ExecuteUbergraph_UW-TournamentStartNoti // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

