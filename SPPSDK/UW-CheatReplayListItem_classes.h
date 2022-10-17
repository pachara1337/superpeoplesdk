// WidgetBlueprintGeneratedClass UW-CheatReplayListItem.UW-CheatReplayListItem_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a88)
struct UUW-CheatReplayListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UTextBlock* Time; // 0x298(0x08)
	struct FMKReplayReportInfo SavedEvent; // 0x2a0(0x28)
	struct FString SavedReplayFileName; // 0x2c8(0x10)
	struct UBravoHotelReplayListWidget* ReplayListWidget; // 0x2d8(0x08)

	void Init(struct FMKReplayReportInfo Event, struct FString ReplayFileName, struct UBravoHotelReplayListWidget* ReplayListWidget); // Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.BndEvt__Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-CheatReplayListItem(int32_t EntryPoint); // Function UW-CheatReplayListItem.UW-CheatReplayListItem_C.ExecuteUbergraph_UW-CheatReplayListItem // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

