// BlueprintGeneratedClass BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C
// Size: 0x2cff6b18 (Inherited: 0x2cff6a70)
struct UBP-PlayAssistScenario_Booster_C : UBP-PlayAssistScenarioBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	bool bCheckPickup; // 0x78(0x01)
	bool bWasRemovedByItemDrop; // 0x79(0x01)
	bool bIsPlayingQuestCellAnimation; // 0x7a(0x01)
	struct FTimerHandle TimerHandleOfInitOrFadeOutEvent; // 0x80(0x08)
	int32_t Phase; // 0x88(0x04)
	struct TArray<struct ABravoHotelPickup*> TargetActors; // 0x90(0x10)
	struct UParticleSystem* PlayAssistEffect; // 0xa0(0x08)
	struct FName PlayAssistQuestKey; // 0xa8(0x0c)
	struct FName PlayAssistConversation_Detection; // 0xb4(0x0c)
	struct FName PlayAssistConversation_Use; // 0xc0(0x0c)
	struct FName RowNameOfPickupItem; // 0xcc(0x0c)
	struct FName EnergyBar_R; // 0xd8(0x0c)
	struct FName EnergyBar_G; // 0xe4(0x0c)
	struct FName EnergyBar_B; // 0xf0(0x0c)
	int32_t Priority; // 0xfc(0x04)
	int32_t MaxQuestCount; // 0x100(0x04)
	struct ABravoHotelPlayerController* BravoHotelPlayerController; // 0x108(0x08)
	struct ABravoHotelCharacter* BravoHotelCharacter; // 0x110(0x08)
	char pad_2CFF6B0B[0xd]; // 0x2cff6b0b(0x0d)

	void DontHaveEnergyBar(struct ABravoHotelPickup*& PickupItem, bool& bDontHaveEnergyBar); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.DontHaveEnergyBar // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void GetEnergyBarCount(int32_t& EnergyBarCount); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.GetEnergyBarCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void GetRowNameOfEnergybar(struct ABravoHotelPickup*& PickupItem, struct FName& RowNameOfEnergybar); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.GetRowNameOfEnergybar // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsEnergybar(struct ABravoHotelPickup*& PickupItem, bool& bIsEnergybar); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.IsEnergybar // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void Can Start Scenario by Init Or Quest Fade Out Event(bool& bAble); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Can Start Scenario by Init Or Quest Fade Out Event // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CanStartScenario(struct ABravoHotelPickup*& PickupItem, bool& bAble); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.CanStartScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Finished_E8DBE2094D0C6D5E388328BAAF7BEE01(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Finished_E8DBE2094D0C6D5E388328BAAF7BEE01 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_29B98EDA45F0D131510AC6B8E6F89BEB(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Cancled_29B98EDA45F0D131510AC6B8E6F89BEB // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_29B98EDA45F0D131510AC6B8E6F89BEB(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Finished_29B98EDA45F0D131510AC6B8E6F89BEB // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_7D96C5DE446C7ACE86DF5FB23F6FEF59(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Finished_7D96C5DE446C7ACE86DF5FB23F6FEF59 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnInit(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.K2_OnInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ResetScenario(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.K2_ResetScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_CompleteScenario(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.K2_CompleteScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UnbindAll(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.UnbindAll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StopScenario(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.K2_StopScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event Pick Up Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Event Pick Up Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Add Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Event Add Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Remove Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Event Remove Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Drop Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Event Drop Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ????? ???(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C. ????? ??? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Changed Phase(int32_t PrevPhase, int32_t CurrentPhase); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Event On Changed Phase // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Removed Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Event On Removed Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Added Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Event On Added Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Start Scenario By Init Or Fade Out Event(); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.Event On Start Scenario By Init Or Fade Out Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenario_Booster(int32_t EntryPoint); // Function BP-PlayAssistScenario_Booster.BP-PlayAssistScenario_Booster_C.ExecuteUbergraph_BP-PlayAssistScenario_Booster // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

