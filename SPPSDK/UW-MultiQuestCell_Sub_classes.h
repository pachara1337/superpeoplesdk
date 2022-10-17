// WidgetBlueprintGeneratedClass UW-MultiQuestCell_Sub.UW-MultiQuestCell_Sub_C
// Size: 0x2cff6acc (Inherited: 0x2cff6a88)
struct UUW-MultiQuestCell_Sub_C : UUserWidget {
	struct UWidgetAnimation* Anim_Check; // 0x288(0x08)
	struct UImage* Bg; // 0x290(0x08)
	struct UImage* Complete; // 0x298(0x08)
	struct UUW-ImageText_C* UW-ImageText; // 0x2a0(0x08)
	struct FQuestTaskInfo TaskInfo; // 0x2a8(0x20)
	int32_t TaskIndex; // 0x2c8(0x04)

	void SetTaskInfo(struct FQuestTaskInfo TaskInfo); // Function UW-MultiQuestCell_Sub.UW-MultiQuestCell_Sub_C.SetTaskInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

