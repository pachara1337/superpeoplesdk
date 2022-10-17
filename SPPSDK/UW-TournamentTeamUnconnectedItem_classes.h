// WidgetBlueprintGeneratedClass UW-TournamentTeamUnconnectedItem.UW-TournamentTeamUnconnectedItem_C
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a88)
struct UUW-TournamentTeamUnconnectedItem_C : UUserWidget {
	struct UImage* Image; // 0x288(0x08)
	struct UOverlay* Overlay; // 0x290(0x08)
	struct UTextBlock* TextBlock; // 0x298(0x08)
	struct UUW-TournamentTeamUnconnectedToolTip_C* Tooltip; // 0x2a0(0x08)

	void UpdateToolTip(struct FVector2D Pos); // Function UW-TournamentTeamUnconnectedItem.UW-TournamentTeamUnconnectedItem_C.UpdateToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(int32_t TableName); // Function UW-TournamentTeamUnconnectedItem.UW-TournamentTeamUnconnectedItem_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsHitTest(struct FVector2D Pos, bool& Hit); // Function UW-TournamentTeamUnconnectedItem.UW-TournamentTeamUnconnectedItem_C.IsHitTest // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

