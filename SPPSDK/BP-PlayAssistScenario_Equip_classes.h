// BlueprintGeneratedClass BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C
// Size: 0x2cff6b18 (Inherited: 0x2cff6a70)
struct UBP-PlayAssistScenario_Equip_C : UBP-PlayAssistScenarioBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	bool bHasBeenStartedScenario; // 0x78(0x01)
	bool bIsPlayingQuestCellFadeOut; // 0x79(0x01)
	struct TArray<bool> CompletedEquipments; // 0x80(0x10)
	struct TArray<struct ABravoHotelPickup*> TargetWeapons; // 0x90(0x10)
	struct TArray<struct ABravoHotelPickup*> TargetHelmets; // 0xa0(0x10)
	struct TArray<struct ABravoHotelPickup*> TargetArmors; // 0xb0(0x10)
	struct TArray<struct ABravoHotelPickup*> TargetBags; // 0xc0(0x10)
	struct TArray<struct ABravoHotelPickup*> TargetActors; // 0xd0(0x10)
	struct UParticleSystem* PlayAssistEffect; // 0xe0(0x08)
	struct FName PlayAssistQuestKey; // 0xe8(0x0c)
	struct FName PlayAssistConversationKey; // 0xf4(0x0c)
	int32_t Priority; // 0x100(0x04)
	int32_t MaxQuestCount; // 0x104(0x04)
	struct ABravoHotelPlayerController* BravoHotelPlayerController; // 0x108(0x08)
	struct ABravoHotelCharacter* BravoHotelCharacter; // 0x110(0x08)
	char pad_2CFF6B12[0x6]; // 0x2cff6b12(0x06)

	void UpdateCompletedQuest(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.UpdateCompletedQuest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateTargetActors(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.UpdateTargetActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetItemRarity(struct ABravoHotelPickup*& PickupItem, enum class EItemRarity& Rarity); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.GetItemRarity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CheckCompletedQuest(int32_t Index, bool& bCompleted); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.CheckCompletedQuest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsEquip(struct ABravoHotelPickup*& PickupItem, bool& bIsEquip); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.IsEquip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsEmptyTargetActors(bool& bEmpty); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.IsEmptyTargetActors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void FindHighestGradeEquip(int32_t Index, struct ABravoHotelPickup*& PickupItem); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.FindHighestGradeEquip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsGreaterThanOriginTargetGrade(struct ABravoHotelPickup*& PickupItem, bool& bIsGreater); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.IsGreaterThanOriginTargetGrade // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void GetEquipmentIndex(struct ABravoHotelPickup* PickupItem, int32_t& Index); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.GetEquipmentIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsEmptyWearableSlot(enum class EWearableItemType WearableSlotType, bool& bIsEmpty); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.IsEmptyWearableSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void Is Empty Weapon Slot(int32_t WeaponSlotIndex, bool& bIsEmpty); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Is Empty Weapon Slot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void IsEmptySlot(struct ABravoHotelPickup*& PickupItem, bool& bEmpty); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.IsEmptySlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CanDrawEffect(struct ABravoHotelPickup*& PickupItem, bool& bCanDraw); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.CanDrawEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CheckPlayAssistComplete(bool& bIsCompleted); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.CheckPlayAssistComplete // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void CanStartScenario(struct ABravoHotelPickup*& InPickupItem, bool& bCanStart); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.CanStartScenario // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void Cancled_72CBCEEB45EE96E790DC9E9B58A4F5BB(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Cancled_72CBCEEB45EE96E790DC9E9B58A4F5BB // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_72CBCEEB45EE96E790DC9E9B58A4F5BB(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Finished_72CBCEEB45EE96E790DC9E9B58A4F5BB // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Finished_BB2EB3344ACBC4A8634E038B5E5CC845(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Finished_BB2EB3344ACBC4A8634E038B5E5CC845 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Pick Up Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Event Pick Up Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Add Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Event Add Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Remove Near Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Event Remove Near Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Drop Item(struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Event Drop Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ????? (struct ABravoHotelPickup* InPickupItem); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C. ?????  // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnInit(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.K2_OnInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_ResetScenario(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.K2_ResetScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event UnbindAll(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Event UnbindAll // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StopScenario(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.K2_StopScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_CompleteScenario(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.K2_CompleteScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartScenario(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.K2_StartScenario // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event Change Weapons(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Event Change Weapons // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Change Wearable Item(); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Event Change Wearable Item // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event On Removed Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.Event On Removed Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  Event On Added Multi Quest(struct FName& InQuestKey); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C. Event On Added Multi Quest // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-PlayAssistScenario_Equip(int32_t EntryPoint); // Function BP-PlayAssistScenario_Equip.BP-PlayAssistScenario_Equip_C.ExecuteUbergraph_BP-PlayAssistScenario_Equip // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

