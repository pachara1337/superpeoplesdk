// BlueprintGeneratedClass BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C
// Size: 0x2cff6a30 (Inherited: 0x2cff6a70)
struct UBP-PlayAssistScenario_Capsule_C : UBP-PlayAssistScenarioBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	bool bCheckPickup; // 0x78(0x01)
	bool bWasRemovedByItemDrop; // 0x79(0x01)
	bool bIsPlayingQuestCellAnimation; // 0x7a(0x01)
	struct FTimerHandle TimerHandleOfInitOrFadeOutEvent; // 0x80(0x08)
	struct TArray<struct ABravoHotelPickup*> TargetActors; // 0x88(0x10)
	int32_t LimitedClassLevel; // 0x98(0x04)
	struct UParticleSystem* PlayAssistEffect; // 0xa0(0x08)
	struct FName PlayAssistQuestKey; // 0xa8(0x0c)
	struct FName PlayAssistConversation_Detection; // 0xb4(0x0c)
	struct FName PlayAssistConversation_Use; // 0xc0(0x0c)
	struct FName RowNameOfPickupItem; // 0xcc(0x0c)
	struct FName Capsule_Red; // 0xd8(0x0c)
	struct FName Capsule_Green; // 0xe4(0x0c)
	struct FName Capsule_Blue; // 0xf0(0x0c)
	struct FName Capsule_White; // 0xfc(0x0c)
	struct FName Capsule_Gold; // 0x108(0x0c)
	int32_t Priority; // 0x114(0x04)
	int32_t MaxQuestCount; // 0x118(0x04)
	struct ABravoHotelPlayerController* BravoHotelPlayerController; // 0x120(0x08)
	struct ABravoHotelCharacter* BravoHotelCharacter; // 0x128(0x08)

	void DontHaveCapsule(struct ABravoHotelPickup*& PickupItem, bool& bDontHaveCapsule); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.DontHaveCapsule // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void GetCapsuleCount(int32_t& CapsuleCount); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.GetCapsuleCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void GetRowNameOfCapsule(struct ABravoHotelPickup*& PickupItem, struct FName& RowNameOfCapsule); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.GetRowNameOfCapsule // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void GetCapsuleColor(struct ABravoHotelPickup*& PickupItem, enum class EPerkSlotFlag& Color); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.GetCapsuleColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsCapsule(struct ABravoHotelPickup*& PickupItem, bool& bIsCapsule); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.IsCapsule // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void Can Start Scenario by Init Or Quest Fade Out Event(bool& bAble); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Can Start Scenario by Init Or Quest Fade Out Event // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CanStartScenario(struct ABravoHotelPickup*& PickupItem, bool& bAble); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.CanStartScenario // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Finished_471328FC470373DBD5F6B082B4AF0A14(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Finished_471328FC470373DBD5F6B082B4AF0A14 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_BDCC53774E4A4C05AD519A93852E870D(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Cancled_BDCC53774E4A4C05AD519A93852E870D // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_BDCC53774E4A4C05AD519A93852E870D(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Finished_BDCC53774E4A4C05AD519A93852E870D // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_573F4BB0428B871546E93AA0614761B3(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Finished_573F4BB0428B871546E93AA0614761B3 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Changed Class Level(int32_t Level); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Event On Changed Class Level // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UnbindAll(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.UnbindAll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Pick Up Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Event Pick Up Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Add Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Event Add Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Remove Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Event Remove Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Drop Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Event Drop Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ????? ???(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C. ????? ??? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnInit(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.K2_OnInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ResetScenario(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.K2_ResetScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StopScenario(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.K2_StopScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_CompleteScenario(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.K2_CompleteScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Removed Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Event On Removed Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Added Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Event On Added Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Start Scenario By Init Or Fade Out Event(); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.Event On Start Scenario By Init Or Fade Out Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenario_Capsule(int32_t EntryPoint); // Function BP-PlayAssistScenario_Capsule.BP-PlayAssistScenario_Capsule_C.ExecuteUbergraph_BP-PlayAssistScenario_Capsule // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

