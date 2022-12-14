// BlueprintGeneratedClass BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a70)
struct UBP-PlayAssistScenario_Material_C : UBP-PlayAssistScenarioBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	bool bCheckPickup; // 0x78(0x01)
	bool bWasRemovedByItemDrop; // 0x79(0x01)
	bool bIsPlayingQuestCellAnimation; // 0x7a(0x01)
	enum class EItemRarity PlayAssistGoalRarity; // 0x7b(0x01)
	struct UParticleSystem* PlayAssistEffect; // 0x80(0x08)
	struct TArray<struct ABravoHotelPickup*> TargetActors; // 0x88(0x10)
	struct FName PlayAssistQuestKey; // 0x98(0x0c)
	struct FName PlayAssistConversationKey; // 0xa4(0x0c)
	struct FName RowNameOfPickupItem; // 0xb0(0x0c)
	int32_t Priority; // 0xbc(0x04)
	int32_t MaxQuestCount; // 0xc0(0x04)
	struct ABravoHotelPlayerController* BravoHotelPlayerController; // 0xc8(0x08)
	struct ABravoHotelCharacter* BravoHotelCharacter; // 0xd0(0x08)
	char pad_2CFF6AD0[0x8]; // 0x2cff6ad0(0x08)

	void GetRowNameOfMaterial(struct ABravoHotelPickup*& PickupItem, struct FName& RowNameOfMaterial); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.GetRowNameOfMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsMaterial(struct ABravoHotelPickup*& PickupItem, bool& bIsMaterial); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.IsMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CheckPlayAssistCompleted(bool& bCompleted); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.CheckPlayAssistCompleted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CanStartScenario(struct ABravoHotelPickup*& InPickupItem, bool& bAble); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.CanStartScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Finished_1FD852204EE5E65270945EA14353CFF0(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Finished_1FD852204EE5E65270945EA14353CFF0 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Cancled_26617EF24E44A5F3A8D0AF852B678B53(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Cancled_26617EF24E44A5F3A8D0AF852B678B53 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_26617EF24E44A5F3A8D0AF852B678B53(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Finished_26617EF24E44A5F3A8D0AF852B678B53 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_26A768CB431664A6666FB5B95E755B12(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Finished_26A768CB431664A6666FB5B95E755B12 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Changed Weapon(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Event Changed Weapon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Changed Wearable(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Event Changed Wearable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Completed Combine(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Event Completed Combine // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Pick Up Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Event Pick Up Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Add Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Event Add Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Remove Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Event Remove Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Drop Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Event Drop Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ????? ???(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C. ????? ??? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Removed Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.Event On Removed Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UnbindAll(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.UnbindAll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnInit(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.K2_OnInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ResetScenario(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.K2_ResetScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StopScenario(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.K2_StopScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_CompleteScenario(); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.K2_CompleteScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  Event On Added Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C. Event On Added Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenario_Material(int32_t EntryPoint); // Function BP-PlayAssistScenario_Material.BP-PlayAssistScenario_Material_C.ExecuteUbergraph_BP-PlayAssistScenario_Material // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

