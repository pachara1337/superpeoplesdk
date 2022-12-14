// BlueprintGeneratedClass BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a70)
struct UBP-PlayAssistScenario_Gold_C : UBP-PlayAssistScenarioBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	bool bCheckPickup; // 0x78(0x01)
	bool bWasRemovedByItemDrop; // 0x79(0x01)
	bool bIsPlayingQuestCellAnimation; // 0x7a(0x01)
	struct TArray<struct ABravoHotelPickup*> TargetActors; // 0x80(0x10)
	struct UParticleSystem* PlayAssistEffect; // 0x90(0x08)
	struct FName PlayAssistQuestKey; // 0x98(0x0c)
	struct FName PlayAssistConversationKey; // 0xa4(0x0c)
	struct FName RowNameOfPickupItem; // 0xb0(0x0c)
	int32_t Priority; // 0xbc(0x04)
	int32_t MaxQuestCount; // 0xc0(0x04)
	struct ABravoHotelPlayerController* BravoHotelPlayerController; // 0xc8(0x08)
	struct ABravoHotelCharacter* BravoHotelCharacter; // 0xd0(0x08)
	char pad_2CFF6ACF[0x9]; // 0x2cff6acf(0x09)

	void Get Row Name Is Gold(struct ABravoHotelPickup*& PickupItem, struct FName& RowNameOfGold); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Get Row Name Is Gold // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsGold(struct ABravoHotelPickup*& PickupItem, bool& bIsGold); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.IsGold // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CanStartScenario(struct ABravoHotelPickup*& PickupItem, bool& bAble); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.CanStartScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Finished_82C0FBF442299DD18973199E9144DB79(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Finished_82C0FBF442299DD18973199E9144DB79 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_7ADD5A33411E309F5D419DA29AE3FA63(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Cancled_7ADD5A33411E309F5D419DA29AE3FA63 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_7ADD5A33411E309F5D419DA29AE3FA63(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Finished_7ADD5A33411E309F5D419DA29AE3FA63 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_EE4CB65E412EF758A797F2B0E05DE8F7(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Finished_EE4CB65E412EF758A797F2B0E05DE8F7 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UnbindAll(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.UnbindAll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Pick Up Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Event Pick Up Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Add Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Event Add Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Remove Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Event Remove Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Drop Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Event Drop Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ????? ???(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C. ????? ??? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnInit(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.K2_OnInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ResetScenario(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.K2_ResetScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StopScenario(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.K2_StopScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_CompleteScenario(); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.K2_CompleteScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Removed Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.Event On Removed Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  Event On Added Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C. Event On Added Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenario_Gold(int32_t EntryPoint); // Function BP-PlayAssistScenario_Gold.BP-PlayAssistScenario_Gold_C.ExecuteUbergraph_BP-PlayAssistScenario_Gold // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

