// BlueprintGeneratedClass BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a70)
struct UBP-PlayAssistScenario_PersonalSupply_C : UBP-PlayAssistScenarioBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	bool bShouldDrawEffect; // 0x78(0x01)
	bool bIsPlayingQuestCellAnimation; // 0x79(0x01)
	struct FName PlayAssistQuestKey1; // 0x7c(0x0c)
	struct UParticleSystemComponent* LocalPersonalBoxParticleSystemComponent; // 0x88(0x08)
	struct FName PlayAssistQuestKey2; // 0x90(0x0c)
	struct FName PlayAssistConversationKey; // 0x9c(0x0c)
	struct FName PlayAssistConversationKey_Use; // 0xa8(0x0c)
	int32_t Phase; // 0xb4(0x04)
	int32_t Priority; // 0xb8(0x04)
	int32_t MaxQuestCount; // 0xbc(0x04)
	struct ABravoHotelPlayerController* BravoHotelPlayerController; // 0xc0(0x08)
	struct ABravoHotelCharacter* BravoHotelCharacter; // 0xc8(0x08)
	struct ABattleRoyaleGameState* BattleRoyaleGameState; // 0xd0(0x08)
	char pad_2CFF6AD6[0x2]; // 0x2cff6ad6(0x02)

	void OnOffPlayAssistEffect(bool bFlag, bool& bSuccessed); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.OnOffPlayAssistEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Can Start Scenario(bool& bAble); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Can Start Scenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Cancled_56FBB3364AD7E20AB49776AD3F177A88(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Cancled_56FBB3364AD7E20AB49776AD3F177A88 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_56FBB3364AD7E20AB49776AD3F177A88(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Finished_56FBB3364AD7E20AB49776AD3F177A88 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_541ED8E7494686512DB0DD8DC27AA1D2(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Cancled_541ED8E7494686512DB0DD8DC27AA1D2 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_541ED8E7494686512DB0DD8DC27AA1D2(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Finished_541ED8E7494686512DB0DD8DC27AA1D2 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_6469CF11487BA82A65F779BC53A04C2E(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Finished_6469CF11487BA82A65F779BC53A04C2E // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_98A252544247E3AF57180FABE34083CD(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Finished_98A252544247E3AF57180FABE34083CD // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnInit(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.K2_OnInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ResetScenario(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.K2_ResetScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UnbindAll(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.UnbindAll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Removed Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Event On Removed Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StopScenario(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.K2_StopScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_CompleteScenario(); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.K2_CompleteScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event Survival Circle Phase Changed(int32_t PrevPhase, int32_t CurrentPhase); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Event Survival Circle Phase Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_TickScenario(float DeltaTime); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.K2_TickScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Added Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.Event On Added Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenario_PersonalSupply(int32_t EntryPoint); // Function BP-PlayAssistScenario_PersonalSupply.BP-PlayAssistScenario_PersonalSupply_C.ExecuteUbergraph_BP-PlayAssistScenario_PersonalSupply // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

