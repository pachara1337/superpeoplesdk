// BlueprintGeneratedClass BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C
// Size: 0x2cff6ad0 (Inherited: 0x2cff6ab8)
struct ABP-AreaSkill_PowerInterruption_C : ABravoHotelAreaSkillZonePowerInterruption {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	float SkillDelayTime; // 0x3c0(0x04)
	struct UMaterialInstanceDynamic* BlackOutDynamicMaterial; // 0x3c8(0x08)
	char pad_2CFF6ACC[0x4]; // 0x2cff6acc(0x04)

	void UserConstructionScript(); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ActivateEffect(struct ABravoHotelCharacter* Character); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ActivateEffect // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void DeactivateEffect(struct ABravoHotelCharacter* Character); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.DeactivateEffect // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void StartDestroy(); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.StartDestroy // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_StartAreaSkill(); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.K2_StartAreaSkill // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-AreaSkill_PowerInterruption(int32_t EntryPoint); // Function BP-AreaSkill_PowerInterruption.BP-AreaSkill_PowerInterruption_C.ExecuteUbergraph_BP-AreaSkill_PowerInterruption // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

