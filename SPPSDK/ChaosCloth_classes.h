// Class ChaosCloth.ChaosClothConfig
// Size: 0x2cff6a90 (Inherited: 0x2cff6a30)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x30(0x01)
	float UniformMass; // 0x34(0x04)
	float TotalMass; // 0x38(0x04)
	float Density; // 0x3c(0x04)
	float MinPerParticleMass; // 0x40(0x04)
	float EdgeStiffness; // 0x44(0x04)
	float BendingStiffness; // 0x48(0x04)
	float AreaStiffness; // 0x4c(0x04)
	float VolumeStiffness; // 0x50(0x04)
	float StrainLimitingStiffness; // 0x54(0x04)
	float LimitScale; // 0x58(0x04)
	bool bUseGeodesicDistance; // 0x5c(0x01)
	float ShapeTargetStiffness; // 0x60(0x04)
	float CollisionThickness; // 0x64(0x04)
	float FrictionCoefficient; // 0x68(0x04)
	float DampingCoefficient; // 0x6c(0x04)
	float DragCoefficient; // 0x70(0x04)
	float AnimDriveSpringStiffness; // 0x74(0x04)
	bool bUseBendingElements; // 0x78(0x01)
	bool bUseTetrahedralConstraints; // 0x79(0x01)
	bool bUseThinShellVolumeConstraints; // 0x7a(0x01)
	bool bUseSelfCollisions; // 0x7b(0x01)
	bool bUseContinuousCollisionDetection; // 0x7c(0x01)
	struct FVector LinearVelocityScale; // 0x80(0x0c)
	float AngularVelocityScale; // 0x8c(0x04)
	char pad_2CFF6A87[0x9]; // 0x2cff6a87(0x09)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x2cff6a60 (Inherited: 0x2cff6a30)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x30(0x04)
	int32_t SubdivisionCount; // 0x34(0x04)
	float SelfCollisionThickness; // 0x38(0x04)
	float CollisionThickness; // 0x3c(0x04)
	bool bUseDampingOverride; // 0x40(0x01)
	float Damping; // 0x44(0x04)
	bool bUseGravityOverride; // 0x48(0x01)
	float GravityScale; // 0x4c(0x04)
	struct FVector Gravity; // 0x50(0x0c)
	bool bUseLocalSpaceSimulation; // 0x5c(0x01)
	bool bUseXPBDConstraints; // 0x5d(0x01)
	char pad_2CFF6A58[0x8]; // 0x2cff6a58(0x08)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
	char pad_2CFF6A38[0x10]; // 0x2cff6a38(0x10)
};

