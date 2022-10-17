// WidgetBlueprintGeneratedClass UW-Lobby_Craft_AdditionalOptions.UW-Lobby_Craft_AdditionalOptions_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_AdditionalOptions_C : UUserWidget {
	struct UTextBlock* T_Desc; // 0x288(0x08)
	struct UUW-Lobby_Craft_AdditionalOptions_Slot_C* UW-Lobby_Craft_AdditionalOptions_Slot; // 0x290(0x08)
	struct UUW-Lobby_Craft_AdditionalOptions_Slot_C* UW-Lobby_Craft_AdditionalOptions_Slot; // 0x298(0x08)
	struct UUW-Lobby_Craft_AdditionalOptions_Slot_C* UW-Lobby_Craft_AdditionalOptions_Slot; // 0x2a0(0x08)
	struct UUW-Lobby_Craft_AdditionalOptions_Slot_C* UW-Lobby_Craft_AdditionalOptions_Slot; // 0x2a8(0x08)
	struct UWrapBox* WrapBox_Options; // 0x2b0(0x08)

	void HiddenAllOptions(); // Function UW-Lobby_Craft_AdditionalOptions.UW-Lobby_Craft_AdditionalOptions_C.HiddenAllOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRandomOptionDesc(struct FText Desc); // Function UW-Lobby_Craft_AdditionalOptions.UW-Lobby_Craft_AdditionalOptions_C.SetRandomOptionDesc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOptions(struct TArray<int32_t>& options); // Function UW-Lobby_Craft_AdditionalOptions.UW-Lobby_Craft_AdditionalOptions_C.SetOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

