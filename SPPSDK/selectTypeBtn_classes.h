// WidgetBlueprintGeneratedClass selectTypeBtn.selectTypeBtn_C
// Size: 0x2cff6ab4 (Inherited: 0x2cff6a88)
struct UselectTypeBtn_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct FMulticastInlineDelegate SelectEventDispatcher; // 0x2a0(0x10)
	int32_t Index; // 0x2b0(0x04)

	void BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function selectTypeBtn.selectTypeBtn_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SelectIndex(int32_t Index); // Function selectTypeBtn.selectTypeBtn_C.SelectIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_selectTypeBtn(int32_t EntryPoint); // Function selectTypeBtn.selectTypeBtn_C.ExecuteUbergraph_selectTypeBtn // (Final|UbergraphFunction) // @ game+0x2bad3b0
	void SelectEventDispatcher__DelegateSignature(int32_t Index); // Function selectTypeBtn.selectTypeBtn_C.SelectEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

