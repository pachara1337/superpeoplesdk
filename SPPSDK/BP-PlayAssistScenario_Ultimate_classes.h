// BlueprintGeneratedClass BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C
// Size: 0x2cff6b10 (Inherited: 0x2cff6a70)
struct UBP-PlayAssistScenario_Ultimate_C : UBP-PlayAssistScenarioBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	bool bIsPlayingQuestCellAnimation; // 0x78(0x01)
	struct UParticleSystem* PlayAssistEffect; // 0x80(0x08)
	struct FName PlayAssistActiveQuestName1; // 0x88(0x0c)
	struct FName PlayAssistActiveQuestName2; // 0x94(0x0c)
	struct FName PlayAssistPassiveQuestName1; // 0xa0(0x0c)
	struct FName PlayAssistPassiveQuestName2; // 0xac(0x0c)
	struct FName PlayAssistActiveConversationName; // 0xb8(0x0c)
	struct FName PlayAssistPassiveConversationName; // 0xc4(0x0c)
	struct FName LocalCurrentQuestKey1; // 0xd0(0x0c)
	struct FName LocalCurrentQuestKey2; // 0xdc(0x0c)
	struct FName LocalCurrentConversationKey; // 0xe8(0x0c)
	int32_t Priority; // 0xf4(0x04)
	int32_t MaxQuestCount; // 0xf8(0x04)
	struct ABravoHotelPlayerController* BravoHotelPlayerController; // 0x100(0x08)
	struct ABravoHotelCharacter* BravoHotelCharacter; // 0x108(0x08)
	char pad_2CFF6B05[0xb]; // 0x2cff6b05(0x0b)

	void Can Start Scenario(bool& bAble); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Can Start Scenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Cancled_E01370404CC242065F2535B0B78E2998(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Cancled_E01370404CC242065F2535B0B78E2998 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_E01370404CC242065F2535B0B78E2998(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Finished_E01370404CC242065F2535B0B78E2998 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_2382E1CE44EDD898FA2913AADD4C2443(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Cancled_2382E1CE44EDD898FA2913AADD4C2443 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_2382E1CE44EDD898FA2913AADD4C2443(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Finished_2382E1CE44EDD898FA2913AADD4C2443 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_265DD2DB4D5708B960951ABB83AA5216(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Cancled_265DD2DB4D5708B960951ABB83AA5216 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_265DD2DB4D5708B960951ABB83AA5216(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Finished_265DD2DB4D5708B960951ABB83AA5216 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_E886F86D44DA052A5DD656A016B6FB6D(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Cancled_E886F86D44DA052A5DD656A016B6FB6D // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_E886F86D44DA052A5DD656A016B6FB6D(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Finished_E886F86D44DA052A5DD656A016B6FB6D // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_579E64FD4CB7D8C8ECC95783526DE997(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Finished_579E64FD4CB7D8C8ECC95783526DE997 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_C3CDB4CC4A4DFC955CE628901141788D(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Cancled_C3CDB4CC4A4DFC955CE628901141788D // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_C3CDB4CC4A4DFC955CE628901141788D(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Finished_C3CDB4CC4A4DFC955CE628901141788D // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnInit(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.K2_OnInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ResetScenario(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.K2_ResetScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StopScenario(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.K2_StopScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UnbindAll(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.UnbindAll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_CompleteScenario(); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.K2_CompleteScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Removed Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Event On Removed Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Added Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.Event On Added Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenario_Ultimate(int32_t EntryPoint); // Function BP-PlayAssistScenario_Ultimate.BP-PlayAssistScenario_Ultimate_C.ExecuteUbergraph_BP-PlayAssistScenario_Ultimate // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

