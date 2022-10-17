// BlueprintGeneratedClass BP-Weapon_Gatling.BP-Weapon_Gatling_C
// Size: 0x2cff6a38 (Inherited: 0x2cff6a20)
struct ABP-Weapon_Gatling_C : ABP-RangedWeaponBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2620(0x08)
	float BarrelHeatEffect_Effect_Intensity_B2A9FBB3451595B9BFEF019625EA581E; // 0x2628(0x04)
	enum class ETimelineDirection BarrelHeatEffect__Direction_B2A9FBB3451595B9BFEF019625EA581E; // 0x262c(0x01)
	struct UTimelineComponent* BarrelHeatEffect; // 0x2630(0x08)
	char pad_2CFF6A35[0x3]; // 0x2cff6a35(0x03)

	void BarrelHeatEffect__FinishedFunc(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.BarrelHeatEffect__FinishedFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void BarrelHeatEffect__UpdateFunc(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.BarrelHeatEffect__UpdateFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnStartSimulateFire(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.K2_OnStartSimulateFire // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnEndSimulateFire(); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.K2_OnEndSimulateFire // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-Weapon_Gatling(int32_t EntryPoint); // Function BP-Weapon_Gatling.BP-Weapon_Gatling_C.ExecuteUbergraph_BP-Weapon_Gatling // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

