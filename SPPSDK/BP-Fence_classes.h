// BlueprintGeneratedClass BP-Fence.BP-Fence_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a70)
struct ABP-Fence_C : ABravoHotelFence {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UBP-WallHISMComponent_C* Mid_HISMComponent; // 0x378(0x08)
	struct UBP-WallHISMComponent_C* Mid_HISMComponent; // 0x380(0x08)
	struct UBP-WallHISMComponent_C* End_HISMComponent; // 0x388(0x08)
	struct UBP-WallHISMComponent_C* Start_HISMComponent; // 0x390(0x08)
	struct UBP-WallHISMComponent_C* Mid_HISMComponent; // 0x398(0x08)
	struct UBP-WallHISMComponent_C* Mid_HISMComponent; // 0x3a0(0x08)
	struct USplineComponent* Spline; // 0x3a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3b0(0x08)
	enum class ESplineMeshAxis Model_Axis; // 0x3b8(0x01)
	enum class ESplineMeshAxis Up_Axis; // 0x3b9(0x01)
	struct TMap<struct UBP-WallHISMComponent_C*, int32_t> HISMComponent_Array; // 0x3c0(0x50)
	float AverageSize; // 0x410(0x04)
	enum class ESplinePointType SplineType; // 0x414(0x01)
	bool LoopSpline; // 0x415(0x01)
	bool SplineMesh?; // 0x416(0x01)
	bool Random_Mid; // 0x417(0x01)
	struct FRandomStream RandomSeed; // 0x418(0x08)
	struct FTransform SaveTransform; // 0x420(0x30)
	float HISMHP; // 0x450(0x04)
	struct FName Class; // 0x454(0x0c)
	float SMCullDistance; // 0x460(0x04)
	float DMCullDistance; // 0x464(0x04)
	float PMCullDistance; // 0x468(0x04)
	float CullDistance; // 0x46c(0x04)
	struct TMap<struct UStaticMesh*, struct UDestructibleMesh*> Mid_SetUP; // 0x470(0x50)
	struct TMap<struct UStaticMesh*, struct UDestructibleMesh*> Start_SetUP; // 0x4c0(0x50)
	struct TMap<struct UStaticMesh*, struct UDestructibleMesh*> End_SetUP; // 0x510(0x50)
	bool Damage_Crash; // 0x560(0x01)
	bool Damage_Bump; // 0x561(0x01)
	struct TArray<int32_t> Mid_RandomPercent; // 0x568(0x10)
	enum class CollisionTypeEnum ClassType; // 0x578(0x01)
	float Size; // 0x57c(0x04)
	float End_Interval_X; // 0x580(0x04)
	float End_Interval_Y; // 0x584(0x04)
	float End_Interval_Z; // 0x588(0x04)
	float Mid_Interval; // 0x58c(0x04)
	int32_t SetIndex; // 0x590(0x04)
	bool AutoDataSetting; // 0x594(0x01)
	bool StaticMesh; // 0x595(0x01)
	float DM_Impulse Strength; // 0x598(0x04)
	float PM_Impulse Strength; // 0x59c(0x04)
	bool ApplyEndInterval; // 0x5a0(0x01)
	struct UBP-WallHISMComponent_C* NewVar; // 0x5a8(0x08)

	void DataSetting(struct TMap<struct UStaticMesh*, struct UDestructibleMesh*>& TargetMap, struct TArray<struct UBP-WallHISMComponent_C*>& HISMComponent); // Function BP-Fence.BP-Fence_C.DataSetting // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HLODoff(); // Function BP-Fence.BP-Fence_C.HLODoff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HLODon(); // Function BP-Fence.BP-Fence_C.HLODon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool ShouldReplicate(); // Function BP-Fence.BP-Fence_C.ShouldReplicate // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2bad3b0
	void RandomGetSplineComponent(struct UStaticMesh*& StaticMesh); // Function BP-Fence.BP-Fence_C.RandomGetSplineComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RandomGetHISMComponent(struct UBP-WallHISMComponent_C*& HISMComponent, int32_t& SetIndex); // Function BP-Fence.BP-Fence_C.RandomGetHISMComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HISM_DataSetUp(struct TArray<struct UBravoHotelHIDestructibleComponent*>& HISMComponentArray); // Function BP-Fence.BP-Fence_C.HISM_DataSetUp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetHISMComponent(struct TArray<struct UBP-WallHISMComponent_C*>& HISMComponent_Arry, struct TMap<struct UStaticMesh*, struct UDestructibleMesh*>& TargetMap); // Function BP-Fence.BP-Fence_C.ResetHISMComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Average(); // Function BP-Fence.BP-Fence_C.Average // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Create(); // Function BP-Fence.BP-Fence_C.Create // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTheSplineType(); // Function BP-Fence.BP-Fence_C.SetTheSplineType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UserConstructionScript(); // Function BP-Fence.BP-Fence_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Run(); // Function BP-Fence.BP-Fence_C.Run // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Lock(); // Function BP-Fence.BP-Fence_C.Lock // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Unlock(); // Function BP-Fence.BP-Fence_C.Unlock // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Clear(); // Function BP-Fence.BP-Fence_C.Clear // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClearFence(struct UBP-WallHISMComponent_C* ClearComponent); // Function BP-Fence.BP-Fence_C.ClearFence // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetData(); // Function BP-Fence.BP-Fence_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-Fence(int32_t EntryPoint); // Function BP-Fence.BP-Fence_C.ExecuteUbergraph_BP-Fence // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

