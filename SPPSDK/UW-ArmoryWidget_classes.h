// WidgetBlueprintGeneratedClass UW-ArmoryWidget.UW-ArmoryWidget_C
// Size: 0x2cff6b08 (Inherited: 0x2cff6a88)
struct UUW-ArmoryWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Ellipsis_M; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x298(0x08)
	struct UCanvasPanel* Enhancing; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UCanvasPanel* InputEventBox; // 0x2b8(0x08)
	struct UButton* Skip; // 0x2c0(0x08)
	struct UTextBlock* TextBlock; // 0x2c8(0x08)
	struct UTextBlock* TextBlock; // 0x2d0(0x08)
	struct UTextBlock* TextBlock; // 0x2d8(0x08)
	struct UTextBlock* TextBlock; // 0x2e0(0x08)
	struct UTextBlock* TextEnhanceing; // 0x2e8(0x08)
	struct UUW-ArmoryInput_C* UW-ArmoryInput; // 0x2f0(0x08)
	struct UUW-ArmoryResultListWidget_C* UW-ArmoryResultListWidget; // 0x2f8(0x08)
	struct FTimerHandle EnhanceResultTimerHandle; // 0x300(0x08)

	void Craft(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.Craft // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Result(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.Result // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInputEventBox(bool Visible); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.SetInputEventBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopProceedingSound(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.StopProceedingSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayProceedingSound(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.PlayProceedingSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetLobbyWidget(struct UBP-LobbyWidget_Web_C*& Widget); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.GetLobbyWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Proceeding(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.Proceeding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowArmoryUI(struct FString ArmoryResultName); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.ShowArmoryUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.BndEvt__Skip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.BndEvt__Skip_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void EnhanceResult(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.EnhanceResult // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTimerCraftResult(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.SetTimerCraftResult // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnCraftResult(); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.OnCraftResult // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ArmoryWidget(int32_t EntryPoint); // Function UW-ArmoryWidget.UW-ArmoryWidget_C.ExecuteUbergraph_UW-ArmoryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

