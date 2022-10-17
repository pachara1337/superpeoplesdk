// WidgetBlueprintGeneratedClass UW-ScenarioCraftTreeInfoPopup.UW-ScenarioCraftTreeInfoPopup_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a88)
struct UUW-ScenarioCraftTreeInfoPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_Glow; // 0x290(0x08)
	struct UImage* Description_Background_Glow01; // 0x298(0x08)
	struct UImage* Glow01; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)

	void DrawEmphasisEffect(bool bFlag, struct FName UIInfoKey, int32_t WidgetType, struct UWidget*& TargetWidget); // Function UW-ScenarioCraftTreeInfoPopup.UW-ScenarioCraftTreeInfoPopup_C.DrawEmphasisEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ScenarioCraftTreeInfoPopup.UW-ScenarioCraftTreeInfoPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-ScenarioCraftTreeInfoPopup.UW-ScenarioCraftTreeInfoPopup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ScenarioCraftTreeInfoPopup(int32_t EntryPoint); // Function UW-ScenarioCraftTreeInfoPopup.UW-ScenarioCraftTreeInfoPopup_C.ExecuteUbergraph_UW-ScenarioCraftTreeInfoPopup // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

