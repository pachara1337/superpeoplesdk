// WidgetBlueprintGeneratedClass UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C
// Size: 0x2cff6ae8 (Inherited: 0x2cff6a88)
struct UUW-Tournament_NoticePopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_NoticePopup; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct URichTextBlock* RichTextBlock; // 0x2a8(0x08)
	struct URichTextBlock* RichTextBlock; // 0x2b0(0x08)
	struct UTextBlock* TextBlock; // 0x2b8(0x08)
	struct UTextBlock* TextBlock; // 0x2c0(0x08)
	bool UpdateTime; // 0x2c8(0x01)
	struct FDateTime EndTime; // 0x2d0(0x08)
	enum class ETournamentStep Step; // 0x2d8(0x01)
	bool NewVar; // 0x2d9(0x01)
	float ShowTime; // 0x2dc(0x04)
	struct FTimerHandle Timer; // 0x2e0(0x08)
	char pad_2CFF6ADF[0x9]; // 0x2cff6adf(0x09)

	void Construct(); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CheckTournament(); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C.CheckTournament // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckTournamentNoti(bool Result, struct FTournamentNotiInfo TournamentNotiInfo); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C.CheckTournamentNoti // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(bool Result, struct FTournamentNotiInfo NotiInfo); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Tournament_NoticePopup(int32_t EntryPoint); // Function UW-Tournament_NoticePopup.UW-Tournament_NoticePopup_C.ExecuteUbergraph_UW-Tournament_NoticePopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

