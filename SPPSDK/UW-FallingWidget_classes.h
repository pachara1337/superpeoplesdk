// WidgetBlueprintGeneratedClass UW-FallingWidget.UW-FallingWidget_C
// Size: 0x2cff6a50 (Inherited: 0x2cff6ad0)
struct UUW-FallingWidget_C : UBravoHotelFallingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Parachute_Loop; // 0x2d8(0x08)
	struct UWidgetAnimation* Parachute_Open; // 0x2e0(0x08)
	struct UCanvasPanel* Canvas; // 0x2e8(0x08)
	struct UHorizontalBox* HorizontalBox_Ground; // 0x2f0(0x08)
	struct UHorizontalBox* HorizontalBox_Parachute; // 0x2f8(0x08)
	struct UHorizontalBox* HorizontalBox_Sea; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UOverlay* Overlay_Speed; // 0x318(0x08)
	struct UImage* Parachute; // 0x320(0x08)
	struct UImage* Player; // 0x328(0x08)
	struct UCanvasPanel* PlayerGroup; // 0x330(0x08)
	struct UProgressBar* SeaHeight; // 0x338(0x08)
	struct UTextBlock* Speed; // 0x340(0x08)
	struct UProgressBar* TerrainHeight; // 0x348(0x08)

	void K2_ChangeFallingMode(bool bParachute); // Function UW-FallingWidget.UW-FallingWidget_C.K2_ChangeFallingMode // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_SetParachuteInfo(struct FParachuteInfo& SetParachuteInfo); // Function UW-FallingWidget.UW-FallingWidget_C.K2_SetParachuteInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-FallingWidget(int32_t EntryPoint); // Function UW-FallingWidget.UW-FallingWidget_C.ExecuteUbergraph_UW-FallingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

