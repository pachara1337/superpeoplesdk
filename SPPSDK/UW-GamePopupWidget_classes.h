// WidgetBlueprintGeneratedClass UW-GamePopupWidget.UW-GamePopupWidget_C
// Size: 0x2cff6a45 (Inherited: 0x2cff6a90)
struct UUW-GamePopupWidget_C : UBravoHotelGamePopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UButton* BTN-Exit; // 0x298(0x08)
	struct UButton* BTN-LobbyRestart; // 0x2a0(0x08)
	struct UButton* BTN-Resume; // 0x2a8(0x08)
	struct UButton* BTN-ReturnToTitle; // 0x2b0(0x08)
	struct UButton* BTN-Settings; // 0x2b8(0x08)
	struct UButton* BTN-Settings; // 0x2c0(0x08)
	struct UButton* Button; // 0x2c8(0x08)
	struct UButton* Button; // 0x2d0(0x08)
	struct UButton* Button; // 0x2d8(0x08)
	struct UButton* Button; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image_Gradient; // 0x2f0(0x08)
	struct UImage* IMG-BG; // 0x2f8(0x08)
	struct UOverlay* Overlay; // 0x300(0x08)
	struct UOverlay* Overlay_Exit; // 0x308(0x08)
	struct UTextBlock* TextBlock; // 0x310(0x08)
	struct UTextBlock* TextBlock; // 0x318(0x08)
	struct UUW-VoiceTalk_C* UW-VoiceTalk; // 0x320(0x08)
	struct UVerticalBox* VerticalBox_InGame; // 0x328(0x08)
	struct UVerticalBox* VerticalBox_Lobby; // 0x330(0x08)
	struct FName MapNameToExit; // 0x338(0x0c)
	bool IsLobby; // 0x344(0x01)

	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_119_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_137_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Resume_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Settings_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-ReturnToTitle_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Exit_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Show(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-LobbyRestart_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Settings_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature(); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.BndEvt__BTN-Settings_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-GamePopupWidget(int32_t EntryPoint); // Function UW-GamePopupWidget.UW-GamePopupWidget_C.ExecuteUbergraph_UW-GamePopupWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

