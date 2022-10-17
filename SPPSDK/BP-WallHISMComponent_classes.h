// BlueprintGeneratedClass BP-WallHISMComponent.BP-WallHISMComponent_C
// Size: 0x2cff6a60 (Inherited: 0x2cff6b10)
struct UBP-WallHISMComponent_C : UBravoHotelHIDestructibleComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x910(0x08)
	float DestructibleMeshLifeTime; // 0x918(0x04)
	float MassInKg; // 0x91c(0x04)
	struct FName Class; // 0x920(0x0c)
	struct TArray<float> HpCacheArr; // 0x930(0x10)
	struct TArray<struct FTransform> InstanceTransform; // 0x940(0x10)
	float LinearDamping; // 0x950(0x04)
	float AngularDamping; // 0x954(0x04)
	struct UStaticMesh* PhysicsMesh; // 0x958(0x08)

	struct FName GetMeshClassTypeName(); // Function BP-WallHISMComponent.BP-WallHISMComponent_C.GetMeshClassTypeName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-WallHISMComponent.BP-WallHISMComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-WallHISMComponent(int32_t EntryPoint); // Function BP-WallHISMComponent.BP-WallHISMComponent_C.ExecuteUbergraph_BP-WallHISMComponent // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

