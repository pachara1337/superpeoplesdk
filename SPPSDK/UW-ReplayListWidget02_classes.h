// WidgetBlueprintGeneratedClass UW-ReplayListWidget02.UW-ReplayListWidget02_C
// Size: 0x2cff6ab1 (Inherited: 0x2cff6aa8)
struct UUW-ReplayListWidget02_C : UBravoHotelReplayListWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UButton* Button_Keep; // 0x2b0(0x08)
	struct UButton* Button_OldFileDelete; // 0x2b8(0x08)
	struct UButton* Button_Play; // 0x2c0(0x08)
	struct UButton* Button_Refresh; // 0x2c8(0x08)
	struct UCircularThrobber* CircularThrobber; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UOverlay* Overlay; // 0x300(0x08)
	struct UOverlay* Overlay; // 0x308(0x08)
	struct UScrollBox* ReplayListBox; // 0x310(0x08)
	struct UTextBlock* TextBlock; // 0x318(0x08)
	struct UTextBlock* TextBlock; // 0x320(0x08)
	struct UTextBlock* TextBlock_CurrentFileCount; // 0x328(0x08)
	struct UTextBlock* TextBlock_Delete; // 0x330(0x08)
	struct UTextBlock* TextBlock_Keep; // 0x338(0x08)
	struct UTextBlock* TextBlock_OldFileDelete; // 0x340(0x08)
	struct UTextBlock* TextBlock_Play; // 0x348(0x08)
	struct UTextBlock* TextBlock_TotalSize; // 0x350(0x08)
	struct UTextBlock* TextReplayList; // 0x358(0x08)
	struct UUW-ReplayListItemWidget02_C* UW-ReplayListItemWidget02; // 0x360(0x08)
	struct FMKReplayListItemInfo SelectedItemInfo; // 0x368(0x148)
	bool B; // 0x4b0(0x01)

	void Init(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetBattleModeString(int32_t Idx, struct FText& Str); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.GetBattleModeString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SelectedListItem(struct FMKReplayListItemInfo ItemInfo); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.SelectedListItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateTotalSize(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.UpdateTotalSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateKeep(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.UpdateKeep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Keep_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Keep_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void UpdateReplayListItems(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.UpdateReplayListItems // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(struct FMKReplayListItemInfo ItemInfo); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Keep_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Keep_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Keep_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Keep_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Keep_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Keep_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Play_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_OldFileDelete_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ReplayListWidget02(int32_t EntryPoint); // Function UW-ReplayListWidget02.UW-ReplayListWidget02_C.ExecuteUbergraph_UW-ReplayListWidget02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

