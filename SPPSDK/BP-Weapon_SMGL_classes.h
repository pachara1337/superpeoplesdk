// BlueprintGeneratedClass BP-Weapon_SMGL.BP-Weapon_SMGL_C
// Size: 0x2cff6a30 (Inherited: 0x2cff6a20)
struct ABP-Weapon_SMGL_C : ABP-RangedWeaponBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2620(0x08)
	struct UBravoHotelAudioEmitterComponent* BravoHotelAudioEmitter; // 0x2628(0x08)

	struct UBravoHotelAudioEmitterComponent* GetAudioEmitter(); // Function BP-Weapon_SMGL.BP-Weapon_SMGL_C.GetAudioEmitter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2bad3b0
	void GetTargetEffectorLocationR(struct FVector& TargetEffectorLocationR); // Function BP-Weapon_SMGL.BP-Weapon_SMGL_C.GetTargetEffectorLocationR // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP-Weapon_SMGL.BP-Weapon_SMGL_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-Weapon_SMGL.BP-Weapon_SMGL_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-Weapon_SMGL(int32_t EntryPoint); // Function BP-Weapon_SMGL.BP-Weapon_SMGL_C.ExecuteUbergraph_BP-Weapon_SMGL // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

