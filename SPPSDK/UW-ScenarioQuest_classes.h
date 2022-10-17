// WidgetBlueprintGeneratedClass UW-ScenarioQuest.UW-ScenarioQuest_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a88)
struct UUW-ScenarioQuest_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* EndQuest; // 0x290(0x08)
	struct UWidgetAnimation* StartQuest; // 0x298(0x08)
	struct UWidgetAnimation* Idle; // 0x2a0(0x08)
	struct UImage* Bg; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UOverlay* ScenarioQuest_Overlay; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_QuestDesc; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_QuestTitle; // 0x2d8(0x08)
	struct UUW-ScenarioQuestCell_C* UW-ScenarioQuestCell; // 0x2e0(0x08)
	struct UUW-ScenarioQuestCell_C* UW-ScenarioQuestCell; // 0x2e8(0x08)
	struct UUW-ScenarioQuestCell_C* UW-ScenarioQuestCell; // 0x2f0(0x08)
	struct UVerticalBox* VerticalBox_Tasks; // 0x2f8(0x08)
	struct FQuestInfo QuestInfo; // 0x300(0x38)
	struct FQuestData QuestData; // 0x338(0x60)
	bool ActiveQuest; // 0x398(0x01)
	bool bHasBeenStarted; // 0x399(0x01)
	struct TArray<struct FQuestInfo> PendingQuestInfo; // 0x3a0(0x10)

	void ConsumeQuestInfo(); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.ConsumeQuestInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CompleteQuest(); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.CompleteQuest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateQuestInfo(struct FQuestInfo QuestInfo); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.UpdateQuestInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetQuestInfo(struct FQuestInfo QuestInfo); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.SetQuestInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_98C3A1304432C887E8D12CAE4AA78DFF(); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.Finished_98C3A1304432C887E8D12CAE4AA78DFF // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CompleteQuestEvent(); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.CompleteQuestEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ScenarioQuest(int32_t EntryPoint); // Function UW-ScenarioQuest.UW-ScenarioQuest_C.ExecuteUbergraph_UW-ScenarioQuest // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

