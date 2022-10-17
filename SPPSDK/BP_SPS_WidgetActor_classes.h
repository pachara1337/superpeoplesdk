// BlueprintGeneratedClass BP_SPS_WidgetActor.BP_SPS_WidgetActor_C
// Size: 0x2cff6a99 (Inherited: 0x2cff6ae8)
struct ABP_SPS_WidgetActor_C : ABravoHotelSmartPingActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e8(0x08)
	struct UWidgetComponent* Widget_Screen; // 0x5f0(0x08)
	struct UWidgetComponent* Widget_World; // 0x5f8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x600(0x08)
	struct UWBP_SPS_Icon_C* SmartPingWidget_World; // 0x608(0x08)
	struct FTimerHandle DeactivateTimer; // 0x610(0x08)
	struct USmartPingSystem_C* SmartPingComponent; // 0x618(0x08)
	struct FVector ScreenToWorldLocation; // 0x620(0x0c)
	float ScreenRotation; // 0x62c(0x04)
	struct UAudioComponent* HoldSound; // 0x630(0x08)
	struct FTimerHandle PhaseTimer; // 0x638(0x08)
	struct UTemp_C* TempWidget; // 0x640(0x08)
	int32_t PingIndex; // 0x648(0x04)
	struct FBravoHotelPingInfo SaveTempPingInfo; // 0x650(0x38)
	struct ALine_WidgetActor_C* LineActor; // 0x688(0x08)
	struct UWBP_SPS_Icon_C* SmartPingWidget_Screen; // 0x690(0x08)
	bool EnableShow; // 0x698(0x01)

	void GetTeamColor(int32_t TeamIndex, struct FLinearColor& OutColor); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetTeamColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct AActor* CreateLocationActor(struct FVector& SpawnLocation); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.CreateLocationActor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetEnableShow(bool IsPersonalBox, bool& bRet); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetEnableShow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetDurationFrompingType(enum class EPingType PingType, float& Time); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.GetDurationFrompingType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void Deactivate(bool Force); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.Deactivate // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TestLocation(struct FVector& Location); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void TestLocation2D(struct FVector2D& Location); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.TestLocation2D // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateRotation(float NewLineRate); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.UpdateRotation // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetInNm(bool IsIn); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetInNm // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPersonalSupplyBoxPingType(enum class EPersonalSupplyBoxPingType NewState); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetPersonalSupplyBoxPingType // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetRemoveMaterialPing(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveMaterialPing // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetRemoveExpertWeaponPing(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveExpertWeaponPing // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetRemoveMaterialPingByMyTeam(); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.SetRemoveMaterialPingByMyTeam // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP_SPS_WidgetActor(int32_t EntryPoint); // Function BP_SPS_WidgetActor.BP_SPS_WidgetActor_C.ExecuteUbergraph_BP_SPS_WidgetActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

