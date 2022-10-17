// WidgetBlueprintGeneratedClass UW-Sight_Digital.UW-Sight_Digital_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a88)
struct UUW-Sight_Digital_C : UBravoHotelScopeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Idle; // 0x290(0x08)
	struct UWidgetAnimation* Scope_In; // 0x298(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2a0(0x08)
	struct UImage* Scope_Center; // 0x2a8(0x08)
	struct UImage* Scope_Center_Dot; // 0x2b0(0x08)

	void SetScopeImageAngle(float NewAngle); // Function UW-Sight_Digital.UW-Sight_Digital_C.SetScopeImageAngle // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnEnterADS(); // Function UW-Sight_Digital.UW-Sight_Digital_C.K2_OnEnterADS // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnExitADS(); // Function UW-Sight_Digital.UW-Sight_Digital_C.K2_OnExitADS // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Sight_Digital(int32_t EntryPoint); // Function UW-Sight_Digital.UW-Sight_Digital_C.ExecuteUbergraph_UW-Sight_Digital // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

