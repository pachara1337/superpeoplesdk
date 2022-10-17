// WidgetBlueprintGeneratedClass UW-VoiceTalk.UW-VoiceTalk_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a88)
struct UUW-VoiceTalk_C : UBravoHotelVoiceTalkWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UOverlay* Overlay; // 0x2a0(0x08)
	struct UScrollBox* ScrollBox; // 0x2a8(0x08)
	struct UUW-VoiceTalkSlot_C* UW-VoiceTalkSlot; // 0x2b0(0x08)
	struct UUW-VoiceTalkSlot_C* UW-VoiceTalkSlot; // 0x2b8(0x08)
	struct UUW-VoiceTalkSlot_C* UW-VoiceTalkSlot; // 0x2c0(0x08)
	struct TArray<struct ABravoHotelPlayerState*> TempTeamPlayers; // 0x2c8(0x10)

	void CheckCreateSlot(bool& bRet); // Function UW-VoiceTalk.UW-VoiceTalk_C.CheckCreateSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-VoiceTalk.UW-VoiceTalk_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeVolumeState(struct FVoiceTalkState VoiceTalkState); // Function UW-VoiceTalk.UW-VoiceTalk_C.ChangeVolumeState // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-VoiceTalk.UW-VoiceTalk_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-VoiceTalk(int32_t EntryPoint); // Function UW-VoiceTalk.UW-VoiceTalk_C.ExecuteUbergraph_UW-VoiceTalk // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

