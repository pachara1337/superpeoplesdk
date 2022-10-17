// BlueprintGeneratedClass BP-Weapon_RPG.BP-Weapon_RPG_C
// Size: 0x2cff6a28 (Inherited: 0x2cff6a20)
struct ABP-Weapon_RPG_C : ABP-RangedWeaponBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2620(0x08)

	void GetTargetEffectorLocationR(struct FVector& TargetEffectorLocationR); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.GetTargetEffectorLocationR // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnEquip(); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.K2_OnEquip // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnUnEquip(); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void CheckWeaponScale(); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.CheckWeaponScale // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-Weapon_RPG(int32_t EntryPoint); // Function BP-Weapon_RPG.BP-Weapon_RPG_C.ExecuteUbergraph_BP-Weapon_RPG // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

