// WidgetBlueprintGeneratedClass UW-Exit_Popup.UW-Exit_Popup_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a88)
struct UUW-Exit_Popup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Bg; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UUW-ButtonCancle_C* UW-Button1; // 0x2a0(0x08)
	struct UUW-ButtonOk_C* UW-Button2; // 0x2a8(0x08)

	void Hide(); // Function UW-Exit_Popup.UW-Exit_Popup_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Show(); // Function UW-Exit_Popup.UW-Exit_Popup_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Exit_Popup.UW-Exit_Popup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Exit_Popup.UW-Exit_Popup_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UW-Exit_Popup.UW-Exit_Popup_C.BndEvt__UW-Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-Button2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function UW-Exit_Popup.UW-Exit_Popup_C.BndEvt__UW-Button2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Exit_Popup(int32_t EntryPoint); // Function UW-Exit_Popup.UW-Exit_Popup_C.ExecuteUbergraph_UW-Exit_Popup // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

