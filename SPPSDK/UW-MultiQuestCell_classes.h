// WidgetBlueprintGeneratedClass UW-MultiQuestCell.UW-MultiQuestCell_C
// Size: 0x2cff6a90 (Inherited: 0x2cff6a88)
struct UUW-MultiQuestCell_C : UUserWidget {
	struct UWidgetAnimation* FadeOut; // 0x288(0x08)
	struct UWidgetAnimation* FadeIn; // 0x290(0x08)
	struct UWidgetAnimation* Ani_Complete; // 0x298(0x08)
	struct UImage* Ani_BG; // 0x2a0(0x08)
	struct UImage* Bg; // 0x2a8(0x08)
	struct UHorizontalBox* HorizontalBox_Task; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_QuestDesc; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_QuestTitle; // 0x2c0(0x08)
	struct UUW-ImageText_C* UW-ImageText; // 0x2c8(0x08)
	struct UUW-MultiQuestCell_Sub_C* UW-MultiQuestCell_Sub; // 0x2d0(0x08)
	struct UUW-MultiQuestCell_Sub_C* UW-MultiQuestCell_Sub; // 0x2d8(0x08)
	struct UUW-MultiQuestCell_Sub_C* UW-MultiQuestCell_Sub; // 0x2e0(0x08)
	struct UUW-MultiQuestCell_Sub_C* UW-MultiQuestCell_Sub; // 0x2e8(0x08)
	struct UUW-MultiQuestCell_Sub_C* UW-MultiQuestCell_Sub; // 0x2f0(0x08)
	struct UUW-MultiQuestCell_Sub_C* UW-MultiQuestCell_Sub; // 0x2f8(0x08)
	struct UVerticalBox* VerticalBox_Task; // 0x300(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Task; // 0x308(0x08)
	struct FPlayAssistQuestInfo QuestInfo; // 0x310(0x70)
	struct UUW-MultiQuest_C* UW-MultiQuest; // 0x380(0x08)
	struct UPanelWidget* TargetPanel; // 0x388(0x08)

	void UpdateQuestInfo(struct FPlayAssistQuestInfo QuestInfo); // Function UW-MultiQuestCell.UW-MultiQuestCell_C.UpdateQuestInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetQuestInfo(struct FPlayAssistQuestInfo QuestInfo); // Function UW-MultiQuestCell.UW-MultiQuestCell_C.SetQuestInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

