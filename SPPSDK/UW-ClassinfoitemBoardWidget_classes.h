// WidgetBlueprintGeneratedClass UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C
// Size: 0x2cff6a89 (Inherited: 0x2cff6a88)
struct UUW-ClassinfoitemBoardWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_Show_classinfo; // 0x290(0x08)
	struct UButton* Button_SpreadList; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2a8(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2b0(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2b8(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2c0(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2c8(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2d0(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2d8(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2e0(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2e8(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2f0(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x2f8(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x300(0x08)
	struct UUW-ClassinfoitemWidget_C* UW-ClassinfoitemWidget; // 0x308(0x08)
	struct UVerticalBox* VerticalBox_ClassBox; // 0x310(0x08)
	struct UVerticalBox* VerticalBox_ClassList; // 0x318(0x08)
	struct UVerticalBox* VerticalBox_Description; // 0x320(0x08)
	struct UVerticalBox* VerticalBox_Main; // 0x328(0x08)
	int32_t LastTableRow; // 0x330(0x04)
	struct TMap<struct FName, struct UUW-ClassinfoitemWidget_C*> ClassInfoItemMap; // 0x338(0x50)
	bool ListVisibility; // 0x388(0x01)

	void UpdateClassCount(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.UpdateClassCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HiddenAllClassLists(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.HiddenAllClassLists // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetClassList(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.SetClassList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.BndEvt__Button_SpreadList_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OpenList(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OpenList // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CloseList(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.CloseList // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateList(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.UpdateList // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnBattleRoyalStateChanged_Event(enum class EBattleRoyaleState PrevState, enum class EBattleRoyaleState CurrentState); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OnBattleRoyalStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateClassCount_Event(); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.OnUpdateClassCount_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ClassinfoitemBoardWidget(int32_t EntryPoint); // Function UW-ClassinfoitemBoardWidget.UW-ClassinfoitemBoardWidget_C.ExecuteUbergraph_UW-ClassinfoitemBoardWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

