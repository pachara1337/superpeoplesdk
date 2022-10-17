// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// Size: 0x2cff6ab8 (Inherited: 0x2cff6cb8)
struct UMagicLeapHandMeshingComponent : UActorComponent {

	void SetUseWeightedNormals(bool bInUseWeightedNormals); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals // (Final|Native|Public|BlueprintCallable) // @ game+0x1aa02d0
	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1aa01c0
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x1aa0050
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMagicLeapHandMeshingFunctionLibrary : UBlueprintFunctionLibrary {

	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1aa0250
	bool DestroyClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1aa0190
	bool CreateClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1aa0160
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1aa00e0
};

