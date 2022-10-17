// BlueprintGeneratedClass BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a70)
struct UBP-PlayAssistScenario_Combine_C : UBP-PlayAssistScenarioBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	bool bIsPlayingQuestCellFadeOut; // 0x78(0x01)
	bool bShouldDrawEmphasisEffect; // 0x79(0x01)
	struct FTimerHandle TimerHandleOfInitOrFadeOutEvent; // 0x80(0x08)
	int32_t TickCount; // 0x88(0x04)
	enum class EItemRarity PlayAssistGoalRarity; // 0x8c(0x01)
	struct FName PlayAssistQuestKey; // 0x90(0x0c)
	struct FName PlayAssistConversationKey; // 0x9c(0x0c)
	struct FName PlayAssistEffectWidgetKey; // 0xa8(0x0c)
	int32_t Priority; // 0xb4(0x04)
	int32_t MaxQuestCount; // 0xb8(0x04)
	struct TArray<struct FScenarioUIInfo> LocalScenarioUIInfos_ForDrawEmphasisEffect; // 0xc0(0x10)
	struct ABravoHotelPlayerController* BravoHotelPlayerController; // 0xd0(0x08)
	struct ABravoHotelCharacter* BravoHotelCharacter; // 0xd8(0x08)
	char pad_2CFF6AD3[0xd]; // 0x2cff6ad3(0x0d)

	void PlayAssistEffectOnOrOff(bool bFlag, struct TArray<struct FScenarioUIInfo>& ScenarioUIInfos); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.PlayAssistEffectOnOrOff // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetScenarioUIInfos(struct TArray<struct FScenarioUIInfo>& ScenarioUIInfos); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.GetScenarioUIInfos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsEmptyCombinableRecipeList(bool& bIsEmpty); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.IsEmptyCombinableRecipeList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetRarityToCheckCompleted(enum class EItemRarity& Rarity); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.GetRarityToCheckCompleted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CheckPlayAssistCompleted(bool& bCompleted); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.CheckPlayAssistCompleted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CanStartScenario(bool& bAble); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.CanStartScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Cancled_6632ED1E42ED364CD003D3B059531889(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Cancled_6632ED1E42ED364CD003D3B059531889 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_6632ED1E42ED364CD003D3B059531889(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Finished_6632ED1E42ED364CD003D3B059531889 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_866060D14A1CA6016CE287A635E98C82(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Finished_866060D14A1CA6016CE287A635E98C82 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnInit(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.K2_OnInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ResetScenario(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.K2_ResetScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UnbindAll(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.UnbindAll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StopScenario(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.K2_StopScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void EventOnChangeRecipeList(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.EventOnChangeRecipeList // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_CompleteScenario(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.K2_CompleteScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Completed Combine(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Event On Completed Combine // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_TickScenario(float DeltaTime); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.K2_TickScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Toggle Widget(enum class EToggleWidgetModeType& ToggleType); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Event On Toggle Widget // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Changed Minimap Size(bool bChanged); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Event On Changed Minimap Size // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Opened Popup Widget(struct UUserWidget* PopupWidget); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Event On Opened Popup Widget // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Closed Popup Widget(struct UUserWidget* PopupWidget); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Event On Closed Popup Widget // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void On Removed Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.On Removed Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Changed Weapon(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Event On Changed Weapon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Changed Wearable(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Event On Changed Wearable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  Event On Added Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C. Event On Added Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Start Scenario By Init Or Fade Out Event(); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.Event On Start Scenario By Init Or Fade Out Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenario_Combine(int32_t EntryPoint); // Function BP-PlayAssistScenario_Combine.BP-PlayAssistScenario_Combine_C.ExecuteUbergraph_BP-PlayAssistScenario_Combine // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

