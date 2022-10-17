// WidgetBlueprintGeneratedClass UW-TournamentTeamUnconnected.UW-TournamentTeamUnconnected_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a88)
struct UUW-TournamentTeamUnconnected_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UOverlay* Overlay; // 0x290(0x08)
	struct UUW-TournamentTeamUnconnectedItem_C* UW-TournamentTeamUnconnectedItem; // 0x298(0x08)
	struct UUW-TournamentTeamUnconnectedItem_C* UW-TournamentTeamUnconnectedItem; // 0x2a0(0x08)
	struct UVerticalBox* VerticalBox; // 0x2a8(0x08)
	struct UUW-TournamentTeamUnconnectedToolTip_C* Tooltip; // 0x2b0(0x08)

	void UpdateToolTip(struct FVector2D Position); // Function UW-TournamentTeamUnconnected.UW-TournamentTeamUnconnected_C.UpdateToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(struct TArray<int32_t>& TableNames); // Function UW-TournamentTeamUnconnected.UW-TournamentTeamUnconnected_C.Init // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Position(struct ABravoHotelCharacter* CharacterRef); // Function UW-TournamentTeamUnconnected.UW-TournamentTeamUnconnected_C.Set Position // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-TournamentTeamUnconnected.UW-TournamentTeamUnconnected_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-TournamentTeamUnconnected.UW-TournamentTeamUnconnected_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-TournamentTeamUnconnected(int32_t EntryPoint); // Function UW-TournamentTeamUnconnected.UW-TournamentTeamUnconnected_C.ExecuteUbergraph_UW-TournamentTeamUnconnected // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

