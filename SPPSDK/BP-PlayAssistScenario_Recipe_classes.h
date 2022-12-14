// BlueprintGeneratedClass BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a70)
struct UBP-PlayAssistScenario_Recipe_C : UBP-PlayAssistScenarioBase_C {
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

	void GetRowNameOfRecipe(struct ABravoHotelPickup*& PickupItem, struct FName& GetRowNameOfRecipe); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.GetRowNameOfRecipe // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsRecipe(struct ABravoHotelPickup*& PickupItem, bool& bIsRecipe); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.IsRecipe // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CanStartScenario(struct ABravoHotelPickup*& InPickupItem, bool& bAble); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.CanStartScenario // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Finished_B277EC6442186D15C2B45FB408EB52DD(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.Finished_B277EC6442186D15C2B45FB408EB52DD // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_11521A5446108F596F3AE2836BE1BD4B(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.Cancled_11521A5446108F596F3AE2836BE1BD4B // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_11521A5446108F596F3AE2836BE1BD4B(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.Finished_11521A5446108F596F3AE2836BE1BD4B // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_CE306D274BF1CA26D6144C836DC2DE35(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.Finished_CE306D274BF1CA26D6144C836DC2DE35 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Pick Up Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.Event Pick Up Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Add Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.Event Add Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Remove Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.Event Remove Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Drop Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.Event Drop Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ????? ???(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C. ????? ??? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Removed Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.Event On Removed Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnInit(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.K2_OnInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ResetScenario(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.K2_ResetScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_CompleteScenario(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.K2_CompleteScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UnbindAll(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.UnbindAll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StopScenario(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.K2_StopScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  Event On Added Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C. Event On Added Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenario_Recipe(int32_t EntryPoint); // Function BP-PlayAssistScenario_Recipe.BP-PlayAssistScenario_Recipe_C.ExecuteUbergraph_BP-PlayAssistScenario_Recipe // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

