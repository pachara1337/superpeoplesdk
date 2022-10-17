// WidgetBlueprintGeneratedClass UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C
// Size: 0x2cff6ac0 (Inherited: 0x2cff6aa8)
struct UUW-ListWidget_MyKillMessage_C : UUW-ListWidget_ItemBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* Anim_KillMessage; // 0x2b0(0x08)
	struct UTextBlock* T_Message; // 0x2b8(0x08)

	void SetMyKillMessage(struct FText Message); // Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.SetMyKillMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayKillMessageAnim(); // Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.PlayKillMessageAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ListWidget_MyKillMessage(int32_t EntryPoint); // Function UW-ListWidget_MyKillMessage.UW-ListWidget_MyKillMessage_C.ExecuteUbergraph_UW-ListWidget_MyKillMessage // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

