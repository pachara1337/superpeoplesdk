// WidgetBlueprintGeneratedClass UW-TournamentPreliminaryEndWidget.UW-TournamentPreliminaryEndWidget_C
// Size: 0x2cff6af0 (Inherited: 0x2cff6a88)
struct UUW-TournamentPreliminaryEndWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_Show_Popup; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UTextBlock* TextBlock; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnEndAnimationEventDispatcher; // 0x2d0(0x10)
	float EndTournamentQualifyingTime; // 0x2e0(0x04)
	struct FTimerHandle Timer; // 0x2e8(0x08)
	char pad_2CFF6AEC[0x4]; // 0x2cff6aec(0x04)

	void Construct(); // Function UW-TournamentPreliminaryEndWidget.UW-TournamentPreliminaryEndWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Show(); // Function UW-TournamentPreliminaryEndWidget.UW-TournamentPreliminaryEndWidget_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-TournamentPreliminaryEndWidget.UW-TournamentPreliminaryEndWidget_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-TournamentPreliminaryEndWidget.UW-TournamentPreliminaryEndWidget_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TournamentPreliminaryEndWidget(int32_t EntryPoint); // Function UW-TournamentPreliminaryEndWidget.UW-TournamentPreliminaryEndWidget_C.ExecuteUbergraph_UW-TournamentPreliminaryEndWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnEndAnimationEventDispatcher__DelegateSignature(); // Function UW-TournamentPreliminaryEndWidget.UW-TournamentPreliminaryEndWidget_C.OnEndAnimationEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

