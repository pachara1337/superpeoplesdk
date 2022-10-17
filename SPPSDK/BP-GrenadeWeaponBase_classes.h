// BlueprintGeneratedClass BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C
// Size: 0x2cff6a80 (Inherited: 0x2cff6ab0)
struct ABP-GrenadeWeaponBase_C : ABravoHotelGrenadeWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x21b0(0x08)
	struct UStaticMeshComponent* StaticMesh_Ring; // 0x21b8(0x08)
	struct UStaticMeshComponent* StaticMesh_Lever; // 0x21c0(0x08)
	float Timeline_0_Lerp_77CED3694A7ECD58C02266AF5F5B5991; // 0x21c8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_77CED3694A7ECD58C02266AF5F5B5991; // 0x21cc(0x01)
	struct UTimelineComponent* Timeline; // 0x21d0(0x08)
	float Lerp_Lerp_EDD5977E4E850EC460B1E599F1FF45F8; // 0x21d8(0x04)
	enum class ETimelineDirection Lerp__Direction_EDD5977E4E850EC460B1E599F1FF45F8; // 0x21dc(0x01)
	struct UTimelineComponent* Lerp; // 0x21e0(0x08)
	struct FVector InterpOffset; // 0x21e8(0x0c)
	struct FVector DesiredLocation; // 0x21f4(0x0c)
	struct FVector InitalLocalVelocity; // 0x2200(0x0c)
	struct FVector DesiredLocation_Ing; // 0x220c(0x0c)
	struct FVector InitalLocalVelocity_Ing; // 0x2218(0x0c)
	enum class EThrowingWeaponState ThrowingWeaponState; // 0x2224(0x01)
	bool ThrowingAction_Bool; // 0x2225(0x01)
	struct FVector DesiredLocation; // 0x2228(0x0c)
	struct FVector DesiredLocation_2_Ing; // 0x2234(0x0c)
	struct FVector InitalLocalVelocity; // 0x2240(0x0c)
	struct FVector InitalLocalVelocity_2_ing; // 0x224c(0x0c)
	float PathLifeTime; // 0x2258(0x04)
	float TimeInterval; // 0x225c(0x04)
	struct UStaticMeshComponent* IndicatorComponent; // 0x2260(0x08)
	struct UStaticMeshComponent* IndicatorComponent; // 0x2268(0x08)
	struct UProjectileTrajectoryComponent_C* TrajectoryComponent; // 0x2270(0x08)
	struct UProjectileTrajectoryComponent_C* TrajectoryComponent; // 0x2278(0x08)

	void DrawByWeaponState(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawByWeaponState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UBravoHotelDebugInfo* GetDebugInfo(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetDebugInfo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckNeedDrawing(bool& Need); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CheckNeedDrawing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsReplayTarget(bool& IsReplayTarget); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.IsReplayTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetProjectileLocationAndVelocity(int32_t Index, struct FVector& Location, struct FVector& Velocity); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.GetProjectileLocationAndVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ThrowingAction(enum class EThrowingWeaponState ThrowingWeaponState, bool Condition); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ThrowingAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct USplineMeshComponent* Add Spline Mesh(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Add Spline Mesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalcGrenadeWeaponLocationOffset(struct FVector Offest); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.CalcGrenadeWeaponLocationOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Lerp__FinishedFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__FinishedFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void Lerp__UpdateFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Lerp__UpdateFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void Timeline_0__FinishedFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void Timeline_0__UpdateFunc(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void DrawProjectileTrajectory(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveDestroyed(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeThrowingWeaponStateDelegate_Event(enum class EThrowingWeaponState ThrowingWeaponState); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingWeaponStateDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeThrowingTypeDelegate_Event(enum class EGrenadeThrowingType ThrowingType); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangeThrowingTypeDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DrawProjectileTrajectory_ChangeType(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.DrawProjectileTrajectory_ChangeType // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnCharacterGroundStateChangeDelegate(enum class ECharacterGroundState State); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnCharacterGroundStateChangeDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitProjectileTrajectory(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.InitProjectileTrajectory // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnFire(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnFire // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ForceUpdateProjectileTrajectory(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ForceUpdateProjectileTrajectory // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedReplayViewMode(bool IsPlayer); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.OnChangedReplayViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnOwnerBecomeViewTarget(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerBecomeViewTarget // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnOwnerEndViewTarget(); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.K2_OnOwnerEndViewTarget // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-GrenadeWeaponBase(int32_t EntryPoint); // Function BP-GrenadeWeaponBase.BP-GrenadeWeaponBase_C.ExecuteUbergraph_BP-GrenadeWeaponBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

