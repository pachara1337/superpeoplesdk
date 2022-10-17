// WidgetBlueprintGeneratedClass UW-ScenarioWidget.UW-ScenarioWidget_C
// Size: 0x2cff6a80 (Inherited: 0x2cff6aa0)
struct UUW-ScenarioWidget_C : UBravoHotelScenarioWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UWidgetAnimation* Ani_TutorialComplete_FadeOut; // 0x2a8(0x08)
	struct UWidgetAnimation* Ani_TutorialComplete; // 0x2b0(0x08)
	struct UWidgetAnimation* Idle; // 0x2b8(0x08)
	struct UCanvasPanel* CanvasPanel_Emphasis; // 0x2c0(0x08)
	struct UOverlay* Overlay_When_Popup_Close; // 0x2c8(0x08)
	struct UOverlay* Overlay_When_Popup_Open; // 0x2d0(0x08)
	struct USizeBox* SizeBox_MultiQuest_When_Popup_Close; // 0x2d8(0x08)
	struct USizeBox* SizeBox_MultiQuest_When_Popup_Open; // 0x2e0(0x08)
	struct USizeBox* SizeBox_ScenarioQuest_When_Popup_Close; // 0x2e8(0x08)
	struct USizeBox* SizeBox_ScenarioQuest_When_Popup_Open; // 0x2f0(0x08)
	struct UUW-MultiQuest_C* UW-MultiQuest; // 0x2f8(0x08)
	struct UUW-ScenarioQuest_C* UW-ScenarioQuest; // 0x300(0x08)
	struct TArray<struct UUserWidget*> EmphasisWidgetClasses; // 0x308(0x10)
	struct TArray<int32_t> LocalUIInfoKeyIndex; // 0x318(0x10)
	struct FTimerHandle AddEmphasisTimerHadle; // 0x328(0x08)
	float Opacity_WhenInventoryOpen; // 0x330(0x04)
	float Opacity_WhenInventoryClose; // 0x334(0x04)
	struct FVector2D QuestWidgetScale_WhenInventoryOpen; // 0x338(0x08)
	struct FVector2D QuestWidgetScale_WhenInventoryClose; // 0x340(0x08)
	struct FVector2D QuestWidgetPivot_WhenInventoryOpen; // 0x348(0x08)
	struct FVector2D QuestWidgetPivot_WhenInventoryClose; // 0x350(0x08)
	struct FVector2D BackgroundScale_WhenInventoryOpen; // 0x358(0x08)
	struct FVector2D BackgroundScale_WhenInventoryClose; // 0x360(0x08)
	struct FVector2D BackgroundPivot_WhenInventoryOpen; // 0x368(0x08)
	struct FVector2D BackgroundPivot_WhenInventoryClose; // 0x370(0x08)
	struct FTimerHandle LocalChangedViewportTimerHandle; // 0x378(0x08)

	void ChangePosAndSizeOfAllEmphasisEffect(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.ChangePosAndSizeOfAllEmphasisEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeScaleAndPivotOfBackground(struct FVector2D Scale, struct FVector2D Pivot, struct UUserWidget*& QuestWIdget); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.ChangeScaleAndPivotOfBackground // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeScaleAndPivotOfQuestWidget(struct FVector2D Scale, struct FVector2D Pivot, struct UUserWidget*& QuestWIdget); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.ChangeScaleAndPivotOfQuestWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeOpacity(float Opacity, struct UUserWidget*& QuestWIdget); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.ChangeOpacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveMultiQuestWidget(struct USizeBox*& SrcSizeBox, struct USizeBox*& DestSizeBox, struct UUserWidget*& QuestWIdget); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.MoveMultiQuestWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveScenarioQuestWidget(struct USizeBox*& SrcSizeBox, struct USizeBox*& DestSizeBox, struct UUserWidget*& QuestWIdget); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.MoveScenarioQuestWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddEmphasisUI(struct FScenarioUIInfo& UIInfoRef); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.AddEmphasisUI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_1CB7927F4A56CBA0CBA6E698E86EC64F(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_1CB7927F4A56CBA0CBA6E698E86EC64F // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_619E7E41423DCBE2E8D2AC87D77B76F6(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Finished_619E7E41423DCBE2E8D2AC87D77B76F6 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateScenarioQuest(struct FQuestInfo& QuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnUpdateScenarioQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnStartScenarioQuest(struct FQuestInfo& QuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStartScenarioQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnStopScenarioQuest(struct FQuestInfo& QuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStopScenarioQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnEndScenario(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnEndScenario // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPopupOpenedDelegate_Event(struct UUserWidget* PopupWidget); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnPopupOpenedDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPopupClosedDelegate_Event(struct UUserWidget* PopupWidget); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnPopupClosedDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckCurrentPopup(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.CheckCurrentPopup // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnStartPlayAssistQuest(struct FPlayAssistQuestInfo& PlayAssistQuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStartPlayAssistQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnStopPlayAssistQuest(struct FPlayAssistQuestInfo& PlayAssistQuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStopPlayAssistQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdatePlayAssistQuest(struct FPlayAssistQuestInfo& PlayAssistQuestInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnUpdatePlayAssistQuest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAddEmphasisUI(struct FScenarioUIInfo EmphasisUIInfo); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnAddEmphasisUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRemoveAllEmphasisUI(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnRemoveAllEmphasisUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRemoveEmphasisUI(struct FName& UIInfoKey); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnRemoveEmphasisUI // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Toggle Widget(enum class EToggleWidgetModeType& ToggleType); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Event On Toggle Widget // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedPosAndSizeOfAllEmphasisUI(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnChangedPosAndSizeOfAllEmphasisUI // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Changed Viewport Timer(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.Event On Changed Viewport Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnStopAllPlayAssistQuest(); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.OnStopAllPlayAssistQuest // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ScenarioWidget(int32_t EntryPoint); // Function UW-ScenarioWidget.UW-ScenarioWidget_C.ExecuteUbergraph_UW-ScenarioWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

