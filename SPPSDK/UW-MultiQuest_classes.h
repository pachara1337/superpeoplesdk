// WidgetBlueprintGeneratedClass UW-MultiQuest.UW-MultiQuest_C
// Size: 0x2cff6a40 (Inherited: 0x2cff6a88)
struct UUW-MultiQuest_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* EndQuest; // 0x290(0x08)
	struct UWidgetAnimation* StartQuest; // 0x298(0x08)
	struct UWidgetAnimation* Idle; // 0x2a0(0x08)
	struct UImage* Bg; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UOverlay* MultiQuest_Overlay; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_QuestDesc; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_QuestTitle; // 0x2d8(0x08)
	struct UUW-MultiQuestCell_C* UW-MultiQuestCell; // 0x2e0(0x08)
	struct UUW-MultiQuestCell_C* UW-MultiQuestCell; // 0x2e8(0x08)
	struct UUW-MultiQuestCell_C* UW-MultiQuestCell; // 0x2f0(0x08)
	struct UVerticalBox* VerticalBox_Quests; // 0x2f8(0x08)
	bool bActiveQuest; // 0x300(0x01)
	bool bAdd; // 0x301(0x01)
	bool bRemove; // 0x302(0x01)
	struct TArray<struct UUW-MultiQuestCell_C*> PendingAddMultiQuestCells; // 0x308(0x10)
	struct TArray<struct UUW-MultiQuestCell_C*> PendingRemoveMultiQuestCells; // 0x318(0x10)
	struct ABravoHotelPlayerController* BravoHotelPlayerController; // 0x328(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher; // 0x330(0x10)

	void RemoveQuestCellHelper(); // Function UW-MultiQuest.UW-MultiQuest_C.RemoveQuestCellHelper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ProcessRemoveQuestCell(); // Function UW-MultiQuest.UW-MultiQuest_C.ProcessRemoveQuestCell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddQuestCellHelper(); // Function UW-MultiQuest.UW-MultiQuest_C.AddQuestCellHelper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ProcessAddQuestCell(); // Function UW-MultiQuest.UW-MultiQuest_C.ProcessAddQuestCell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_C6CA7CDD4EB6E0E341BA6BBF1E7E5E34(); // Function UW-MultiQuest.UW-MultiQuest_C.Finished_C6CA7CDD4EB6E0E341BA6BBF1E7E5E34 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-MultiQuest.UW-MultiQuest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AddQuest(struct FPlayAssistQuestInfo QuestInfo); // Function UW-MultiQuest.UW-MultiQuest_C.AddQuest // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RemoveQuest(struct FPlayAssistQuestInfo QuestInfo); // Function UW-MultiQuest.UW-MultiQuest_C.RemoveQuest // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EndQuestAnimation(); // Function UW-MultiQuest.UW-MultiQuest_C.EndQuestAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateQuestInfo(struct FPlayAssistQuestInfo QuestInfos); // Function UW-MultiQuest.UW-MultiQuest_C.UpdateQuestInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckEndQuest(); // Function UW-MultiQuest.UW-MultiQuest_C.CheckEndQuest // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Remove All Quest(); // Function UW-MultiQuest.UW-MultiQuest_C.Remove All Quest // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MultiQuest(int32_t EntryPoint); // Function UW-MultiQuest.UW-MultiQuest_C.ExecuteUbergraph_UW-MultiQuest // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void NewEventDispatcher_0__DelegateSignature(); // Function UW-MultiQuest.UW-MultiQuest_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

