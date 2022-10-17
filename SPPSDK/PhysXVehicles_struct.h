// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8 {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EVehicleDifferential4W_MAX = 6
};

// Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8 {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3
};

// ScriptStruct PhysXVehicles.VehicleInputRate
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FVehicleInputRate {
	float RiseRate; // 0x00(0x04)
	float FallRate; // 0x04(0x04)
	char pad_8[0x2cff6a00]; // 0x08(0x2cff6a00)
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// Size: 0x2cff6a14 (Inherited: 0x00)
struct FReplicatedVehicleState {
	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float HandbrakeInput; // 0x0c(0x04)
	int32_t CurrentGear; // 0x10(0x04)
	char pad_14[0x2cff6a00]; // 0x14(0x2cff6a00)
};

// ScriptStruct PhysXVehicles.WheelSetup
// Size: 0x2cffdf28 (Inherited: 0x00)
struct FWheelSetup {
	struct UVehicleWheel* WheelClass; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x0c)
	struct FVector AdditionalOffset; // 0x14(0x0c)
	bool bDisableSteering; // 0x20(0x01)
	char pad_21[0x2cffdf07]; // 0x21(0x2cffdf07)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x2cff6930 (Inherited: 0x00)
struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float GearAutoBoxLatency; // 0x08(0x04)
	float FinalRatio; // 0x0c(0x04)
	struct TArray<struct FVehicleGearData> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float NeutralGearUpRatio; // 0x24(0x04)
	float ClutchStrength; // 0x28(0x04)
	char pad_2C[0x2cff6904]; // 0x2c(0x2cff6904)
};

// ScriptStruct PhysXVehicles.VehicleGearData
// Size: 0x2cff6a0c (Inherited: 0x00)
struct FVehicleGearData {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
	char pad_C[0x2cff6a00]; // 0x0c(0x2cff6a00)
};

// ScriptStruct PhysXVehicles.VehicleEngineData
// Size: 0x2cff69a0 (Inherited: 0x00)
struct FVehicleEngineData {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x88)
	float MaxRPM; // 0x88(0x04)
	float MOI; // 0x8c(0x04)
	float TorqueScale; // 0x90(0x04)
	float DampingRateFullThrottle; // 0x94(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0x98(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0x9c(0x04)
	char pad_A0[0x2cff6900]; // 0xa0(0x2cff6900)
};

// ScriptStruct PhysXVehicles.VehicleErrorCorrection
// Size: 0x2cff6a34 (Inherited: 0x2cffdd34)
struct FVehicleErrorCorrection : FRigidBodyErrorCorrection {
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0x2cff69e8 (Inherited: 0x2cffcbd0)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FTireConfigMaterialFriction {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float FrictionScale; // 0x08(0x04)
	char pad_C[0x2cff6a04]; // 0x0c(0x2cff6a04)
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// Size: 0x2cff6a00 (Inherited: 0x2cffcdf0)
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// Size: 0x2cff6a1c (Inherited: 0x00)
struct FVehicleDifferential4WData {
	enum class EVehicleDifferential4W DifferentialType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FrontRearSplit; // 0x04(0x04)
	float FrontLeftRightSplit; // 0x08(0x04)
	float RearLeftRightSplit; // 0x0c(0x04)
	float CentreBias; // 0x10(0x04)
	float FrontBias; // 0x14(0x04)
	float RearBias; // 0x18(0x04)
	char pad_1C[0x2cff6a00]; // 0x1c(0x2cff6a00)
};

