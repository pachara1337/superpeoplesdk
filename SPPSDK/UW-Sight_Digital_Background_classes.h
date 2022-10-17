// WidgetBlueprintGeneratedClass UW-Sight_Digital_Background.UW-Sight_Digital_Background_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a88)
struct UUW-Sight_Digital_Background_C : UBravoHotelScopeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Idle; // 0x290(0x08)
	struct UWidgetAnimation* Scope_In; // 0x298(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2a0(0x08)
	struct UImage* Distance_Image; // 0x2a8(0x08)
	struct UTextBlock* Distance_Text; // 0x2b0(0x08)
	struct UImage* Magnify_Image; // 0x2b8(0x08)
	struct UTextBlock* Magnify_Text; // 0x2c0(0x08)
	struct UImage* Scope_BG; // 0x2c8(0x08)
	struct UImage* Scope_Info_Line; // 0x2d0(0x08)
	struct UImage* Scope_Wing; // 0x2d8(0x08)

	struct FSlateColor Get_Distance_Text_ColorAndOpacity(); // Function UW-Sight_Digital_Background.UW-Sight_Digital_Background_C.Get_Distance_Text_ColorAndOpacity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FText Get_Magnify_Text(); // Function UW-Sight_Digital_Background.UW-Sight_Digital_Background_C.Get_Magnify_Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FText Get_DistanceText(); // Function UW-Sight_Digital_Background.UW-Sight_Digital_Background_C.Get_DistanceText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetScopeImageAngle(float NewAngle); // Function UW-Sight_Digital_Background.UW-Sight_Digital_Background_C.SetScopeImageAngle // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnEnterADS(); // Function UW-Sight_Digital_Background.UW-Sight_Digital_Background_C.K2_OnEnterADS // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnExitADS(); // Function UW-Sight_Digital_Background.UW-Sight_Digital_Background_C.K2_OnExitADS // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Sight_Digital_Background(int32_t EntryPoint); // Function UW-Sight_Digital_Background.UW-Sight_Digital_Background_C.ExecuteUbergraph_UW-Sight_Digital_Background // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

