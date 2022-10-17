// WidgetBlueprintGeneratedClass UW-Radar_Cursor.UW-Radar_Cursor_C
// Size: 0x2cff6af0 (Inherited: 0x2cff6a90)
struct UUW-Radar_Cursor_C : UBravoHotelSkillRadarCursorWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* Escape_Cursor_Reset; // 0x298(0x08)
	struct UWidgetAnimation* MiniNuke_Cursor_Reset; // 0x2a0(0x08)
	struct UWidgetAnimation* Escape_Cursor; // 0x2a8(0x08)
	struct UWidgetAnimation* MiniNuke_Cursor; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Img_CursorNuclear; // 0x2c8(0x08)
	struct USizeBox* SizeBox_Nuclear; // 0x2d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x2d8(0x08)
	struct UWidgetAnimation* Anim_MouseClicked; // 0x2e0(0x08)
	struct UUW-Radar_Cursor_Dummy_C* DummyWidgetRef; // 0x2e8(0x08)

	void PlayClickSound(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayClickSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCursorSize(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCursorByBuffEventType(enum class EBuffEventType BuffEventType); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.SetCursorByBuffEventType // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnClicked_Event(struct AActor* TouchedActor, struct FKey ButtonPressed); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.OnClicked_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void PlayMouseCursorAnimation(); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.PlayMouseCursorAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Radar_Cursor(int32_t EntryPoint); // Function UW-Radar_Cursor.UW-Radar_Cursor_C.ExecuteUbergraph_UW-Radar_Cursor // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

