// Class RoadRuntime.CrossActor
// Size: 0x2cff6a48 (Inherited: 0x2cff6b18)
struct ACrossActor : AStaticMeshActor {
	struct FString UniqueKey; // 0x318(0x10)
	struct TArray<struct FCrossActorManager> SideActors; // 0x328(0x10)
	struct TArray<struct FCrossMeshManager> SideMeshes; // 0x338(0x10)

	void UpdateSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, struct FVector MeshRelativeScale, int32_t SocketIndex, bool IsEnable, bool IsNormalized); // Function RoadRuntime.CrossActor.UpdateSideMesh // (Final|Native|Public|HasDefaults) // @ game+0x12bf6b0
	void UpdateSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, struct FVector ActorRelativeScale, int32_t SocketIndex, bool IsEnable, bool IsNormalized); // Function RoadRuntime.CrossActor.UpdateSideActor // (Final|Native|Public|HasDefaults) // @ game+0x12bf1d0
	void PushSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, struct FVector MeshRelativeScale, int32_t SocketIndex, bool IsEnable, bool IsNormalized); // Function RoadRuntime.CrossActor.PushSideMesh // (Final|Native|Public|HasDefaults) // @ game+0x12bebb0
	void PushSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, struct FVector ActorRelativeScale, int32_t SocketIndex, bool IsEnable, bool IsNormalized); // Function RoadRuntime.CrossActor.PushSideActor // (Final|Native|Public|HasDefaults) // @ game+0x12be6d0
	void DestroySideObjects(); // Function RoadRuntime.CrossActor.DestroySideObjects // (Final|Native|Public) // @ game+0x12be3f0
};

// Class RoadRuntime.RoadActor
// Size: 0x2cff6ab0 (Inherited: 0x2cff6b08)
struct ARoadActor : AActor {
	enum class ESplineMeshAxis SplineMeshAxis; // 0x308(0x01)
	struct FVector LocalOffset; // 0x30c(0x0c)
	struct ARoadActor* Father; // 0x318(0x08)
	struct FString UniqueKey; // 0x320(0x10)
	struct USplineComponent* Spline; // 0x330(0x08)
	int32_t Index; // 0x338(0x04)
	int32_t Segmentation; // 0x33c(0x04)
	int32_t StepGeneration; // 0x340(0x04)
	float Size; // 0x344(0x04)
	struct UStaticMesh* RoadMesh; // 0x348(0x08)
	struct TArray<struct USplineMeshComponent*> RoadMeshesComp; // 0x350(0x10)
	struct TArray<struct FSideActorManager> SideActors; // 0x360(0x10)
	struct TArray<struct FSideMeshManager> SideMeshes; // 0x370(0x10)
	struct TArray<struct FCurbsManager> SideCurbs; // 0x380(0x10)

	void UpdateSplineMesh(int32_t MeshIndex); // Function RoadRuntime.RoadActor.UpdateSplineMesh // (Final|Native|Public) // @ game+0x12bfb90
	void UpdateSideMeshes(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, struct FVector MeshRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, bool IsEnable, bool IsNormalized); // Function RoadRuntime.RoadActor.UpdateSideMeshes // (Final|Native|Public|HasDefaults) // @ game+0x12bf8e0
	void UpdateSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, struct FVector ActorRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, bool IsEnable, bool IsNormalized); // Function RoadRuntime.RoadActor.UpdateSideActor // (Final|Native|Public|HasDefaults) // @ game+0x12bf400
	void UpdateSegment(int32_t SegmentIndex, struct USplineComponent* SplineComponent, struct UStaticMesh* StaticMesh, enum class ESplineMeshAxis InAxis); // Function RoadRuntime.RoadActor.UpdateSegment // (Final|Native|Public) // @ game+0x12bf090
	void PushSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, struct FVector MeshRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, bool IsEnable, bool IsNormalized); // Function RoadRuntime.RoadActor.PushSideMesh // (Final|Native|Public|HasDefaults) // @ game+0x12bede0
	void PushSideActor(struct AActor* InPrototype, struct FVector ActorRelativeLocation, struct FRotator ActorRelativeRotation, struct FVector ActorRelativeScale, int32_t SocketIndex, int32_t InShift, int32_t InSpacing, bool IsEnable, bool IsNormalized); // Function RoadRuntime.RoadActor.PushSideActor // (Final|Native|Public|HasDefaults) // @ game+0x12be900
	void PushCurbsMeshes(struct UStaticMesh* InPrototype, struct UStaticMesh* InStartPrototype, struct UStaticMesh* InEndPrototype, struct FVector MeshRelativeLocation, struct FVector MeshRelativeScale, int32_t SocketIndex, bool IsEnable, bool InStartEnable, bool InEndEnable); // Function RoadRuntime.RoadActor.PushCurbsMeshes // (Final|Native|Public|HasDefaults) // @ game+0x12be430
	void DestroySideObjects(); // Function RoadRuntime.RoadActor.DestroySideObjects // (Final|Native|Public) // @ game+0x12be410
	void DestroySideCurbs(); // Function RoadRuntime.RoadActor.DestroySideCurbs // (Final|Native|Public) // @ game+0x12be3d0
	void ClearSplineMeshes(); // Function RoadRuntime.RoadActor.ClearSplineMeshes // (Final|Native|Public) // @ game+0x12be3b0
	float ApproxLength(struct FInterpCurveVector& SplineInfo, float Start, float End, int32_t ApproxSections); // Function RoadRuntime.RoadActor.ApproxLength // (Final|Native|Static|Public|HasOutParms) // @ game+0x12be230
	void AddSplineMesh(int32_t MeshIndex); // Function RoadRuntime.RoadActor.AddSplineMesh // (Final|Native|Public) // @ game+0x12be1b0
};

