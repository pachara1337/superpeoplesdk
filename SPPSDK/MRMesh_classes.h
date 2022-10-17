// Class MRMesh.MeshReconstructorBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UMeshReconstructorBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0x3731bc0
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // @ game+0x3731ba0
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // @ game+0x23cb200
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3731b70
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3731b40
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // @ game+0x3731a40
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // @ game+0x3731930
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a40)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x238(0x10)
	bool ScanWorld; // 0x248(0x01)
	bool RequestNormals; // 0x249(0x01)
	bool RequestVertexConfidence; // 0x24a(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x24b(0x01)
	struct TArray<struct FColor> BlockVertexColors; // 0x250(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x260(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x270(0x10)
	float UpdateInterval; // 0x280(0x04)
	struct UMRMeshComponent* MRMesh; // 0x288(0x08)
	char pad_2CFF6A90[0x20]; // 0x2cff6a90(0x20)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x3731a60
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x37319c0
};

// Class MRMesh.MRMeshComponent
// Size: 0x2cff6a40 (Inherited: 0x2cffdfc0)
struct UMRMeshComponent : UPrimitiveComponent {
	struct UMaterialInterface* Material; // 0x4c8(0x08)
	bool bCreateMeshProxySections; // 0x4d0(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x4d1(0x01)
	bool bNeverCreateCollisionMesh; // 0x4d2(0x01)
	struct UBodySetup* CachedBodySetup; // 0x4d8(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x4e0(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x4f0(0x08)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3731b00
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x3731ae0
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x3731900
};

