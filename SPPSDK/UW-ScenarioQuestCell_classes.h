// WidgetBlueprintGeneratedClass UW-ScenarioQuestCell.UW-ScenarioQuestCell_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a88)
struct UUW-ScenarioQuestCell_C : UUserWidget {
	struct UWidgetAnimation* Ani_Complete; // 0x288(0x08)
	struct UImage* Ani_BG; // 0x290(0x08)
	struct UImage* Bg; // 0x298(0x08)
	struct UImage* Complete; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_QuestDesc; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_QuestTitle; // 0x2b0(0x08)
	struct UUW-ImageText_C* UW-ImageText; // 0x2b8(0x08)
	struct UUW-ScenarioQuestCell_Sub_C* UW-ScenarioQuestCell_Sub; // 0x2c0(0x08)
	struct UUW-ScenarioQuestCell_Sub_C* UW-ScenarioQuestCell_Sub; // 0x2c8(0x08)
	struct UUW-ScenarioQuestCell_Sub_C* UW-ScenarioQuestCell_Sub; // 0x2d0(0x08)
	struct FQuestTaskInfo TaskInfo; // 0x2d8(0x20)
	struct FQuestTaskElement TaskData; // 0x2f8(0xc0)

	void SetTaskInfo(struct FQuestTaskInfo TaskInfo); // Function UW-ScenarioQuestCell.UW-ScenarioQuestCell_C.SetTaskInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

