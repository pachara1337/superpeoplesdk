// WidgetBlueprintGeneratedClass UW-TournamentInfo.UW-TournamentInfo_C
// Size: 0x2cff6b09 (Inherited: 0x2cff6a88)
struct UUW-TournamentInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UTextBlock* TextBlock; // 0x2b0(0x08)
	struct UTextBlock* TextBlock; // 0x2b8(0x08)
	struct UTextBlock* TextBlock; // 0x2c0(0x08)
	bool UpdateTime; // 0x2c8(0x01)
	struct FDateTime EndTime; // 0x2d0(0x08)
	struct FMulticastInlineDelegate SetRemainTimeNotiEventDispatcher; // 0x2d8(0x10)
	int32_t NotiTime; // 0x2e8(0x04)
	int32_t PreTime; // 0x2ec(0x04)
	enum class ETournamentStep Step; // 0x2f0(0x01)
	struct FMulticastInlineDelegate OnVisibleEventDispatcher; // 0x2f8(0x10)
	bool EnableShow; // 0x308(0x01)
	char pad_2CFF6AFB[0xe]; // 0x2cff6afb(0x0e)

	void Destruct(); // Function UW-TournamentInfo.UW-TournamentInfo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-TournamentInfo.UW-TournamentInfo_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-TournamentInfo.UW-TournamentInfo_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-TournamentInfo.UW-TournamentInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CheckTournament(bool Result, struct FTournamentNotiInfo TournamentNotiInfo); // Function UW-TournamentInfo.UW-TournamentInfo_C.CheckTournament // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-TournamentInfo.UW-TournamentInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-TournamentInfo.UW-TournamentInfo_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(bool Result, struct FTournamentNotiInfo NotiInfo); // Function UW-TournamentInfo.UW-TournamentInfo_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TournamentInfo(int32_t EntryPoint); // Function UW-TournamentInfo.UW-TournamentInfo_C.ExecuteUbergraph_UW-TournamentInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnVisibleEventDispatcher__DelegateSignature(bool IsVisible); // Function UW-TournamentInfo.UW-TournamentInfo_C.OnVisibleEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRemainTimeNotiEventDispatcher__DelegateSignature(int32_t Time); // Function UW-TournamentInfo.UW-TournamentInfo_C.SetRemainTimeNotiEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

