// ScriptStruct RoadRuntime.CrossMeshManager
// Size: 0x2cffea20 (Inherited: 0x00)
struct FCrossMeshManager {
	struct UStaticMesh* Prototype; // 0x00(0x08)
	struct AActor* Owner; // 0x08(0x08)
	struct UStaticMeshComponent* SideMesh; // 0x10(0x08)
	int32_t SocketIndex; // 0x18(0x04)
	char pad_1C[0x2cffea04]; // 0x1c(0x2cffea04)
};

// ScriptStruct RoadRuntime.CrossActorManager
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FCrossActorManager {
	struct AActor* Prototype; // 0x00(0x08)
	struct AActor* SideActor; // 0x08(0x08)
	int32_t SocketIndex; // 0x10(0x04)
	char pad_14[0x2cff6a04]; // 0x14(0x2cff6a04)
};

// ScriptStruct RoadRuntime.SideMeshManager
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FSideMeshManager {
	struct UStaticMesh* Prototype; // 0x00(0x08)
	struct AActor* Owner; // 0x08(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* SideMeshes; // 0x10(0x08)
	int32_t SocketIndex; // 0x18(0x04)
	char pad_1C[0x2cff6a04]; // 0x1c(0x2cff6a04)
};

// ScriptStruct RoadRuntime.CurbsManager
// Size: 0x2cff6988 (Inherited: 0x00)
struct FCurbsManager {
	struct AActor* Owner; // 0x00(0x08)
	struct UStaticMesh* Prototype; // 0x08(0x08)
	struct UStaticMesh* StartPrototype; // 0x10(0x08)
	struct UStaticMesh* EndPrototype; // 0x18(0x08)
	struct TArray<struct USplineMeshComponent*> CurbsComp; // 0x20(0x10)
	struct USplineComponent* Spline; // 0x30(0x08)
	int32_t SplineIndex; // 0x38(0x04)
	int32_t SocketIndex; // 0x3c(0x04)
	int32_t Segmentation; // 0x40(0x04)
	int32_t StepGeneration; // 0x44(0x04)
	struct FVector Offset; // 0x48(0x0c)
	struct FVector Scale; // 0x54(0x0c)
	bool CurbEnable; // 0x60(0x01)
	bool StartEnable; // 0x61(0x01)
	bool EndEnable; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct FInterpCurveVector SplineInfo; // 0x68(0x18)
	float StartRoll; // 0x80(0x04)
	float EndRoll; // 0x84(0x04)
	char pad_88[0x2cff6900]; // 0x88(0x2cff6900)
};

// ScriptStruct RoadRuntime.SideActorManager
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FSideActorManager {
	struct AActor* Prototype; // 0x00(0x08)
	struct TArray<struct AActor*> SideActors; // 0x08(0x10)
	int32_t SocketIndex; // 0x18(0x04)
	char pad_1C[0x2cff6a04]; // 0x1c(0x2cff6a04)
};

