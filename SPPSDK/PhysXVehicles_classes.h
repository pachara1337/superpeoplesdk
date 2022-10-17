// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a48)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char bDeprecatedSpringOffsetMode : 1; // 0x150(0x01)
	char bReverseAsBrake : 1; // 0x150(0x01)
	char bUseRVOAvoidance : 1; // 0x150(0x01)
	char bRawHandbrakeInput : 1; // 0x150(0x01)
	char bRawGearUpInput : 1; // 0x150(0x01)
	char bRawGearDownInput : 1; // 0x150(0x01)
	char bWasAvoidanceUpdated : 1; // 0x154(0x01)
	float Mass; // 0x158(0x04)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x160(0x10)
	float DragCoefficient; // 0x170(0x04)
	float ChassisWidth; // 0x174(0x04)
	float ChassisHeight; // 0x178(0x04)
	float DragArea; // 0x17c(0x04)
	float EstimatedMaxEngineSpeed; // 0x180(0x04)
	float MaxEngineRPM; // 0x184(0x04)
	float DebugDragMagnitude; // 0x188(0x04)
	struct FVector InertiaTensorScale; // 0x18c(0x0c)
	float MinNormalizedTireLoad; // 0x198(0x04)
	float MinNormalizedTireLoadFiltered; // 0x19c(0x04)
	float MaxNormalizedTireLoad; // 0x1a0(0x04)
	float MaxNormalizedTireLoadFiltered; // 0x1a4(0x04)
	float ThresholdLongitudinalSpeed; // 0x1a8(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x1ac(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x1b0(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x1b8(0x10)
	enum class ECollisionChannel WheelsCollisionChannel; // 0x1c8(0x01)
	float RVOAvoidanceRadius; // 0x1e0(0x04)
	float RVOAvoidanceHeight; // 0x1e4(0x04)
	float AvoidanceConsiderationRadius; // 0x1e8(0x04)
	float RVOSteeringStep; // 0x1ec(0x04)
	float RVOThrottleStep; // 0x1f0(0x04)
	int32_t AvoidanceUID; // 0x1f4(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x1f8(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x1fc(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x200(0x04)
	float AvoidanceWeight; // 0x204(0x04)
	struct FVector PendingLaunchVelocity; // 0x208(0x0c)
	struct FReplicatedVehicleState ReplicatedState; // 0x214(0x14)
	float RawSteeringInput; // 0x22c(0x04)
	float RawThrottleInput; // 0x230(0x04)
	float RawBrakeInput; // 0x234(0x04)
	float SteeringInput; // 0x238(0x04)
	float ThrottleInput; // 0x23c(0x04)
	float BrakeInput; // 0x240(0x04)
	float HandbrakeInput; // 0x244(0x04)
	float IdleBrakeInput; // 0x248(0x04)
	float StopThreshold; // 0x24c(0x04)
	float WrongDirectionThreshold; // 0x250(0x04)
	struct FVehicleInputRate ThrottleInputRate; // 0x254(0x08)
	struct FVehicleInputRate BrakeInputRate; // 0x25c(0x08)
	struct FVehicleInputRate HandbrakeInputRate; // 0x264(0x08)
	struct FVehicleInputRate SteeringInputRate; // 0x26c(0x08)
	struct AController* OverrideController; // 0x298(0x08)

	void SetUseAutoGears(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears // (Final|Native|Public|BlueprintCallable) // @ game+0x1b27580
	void SetThrottleInput(float Throttle); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput // (Native|Public|BlueprintCallable) // @ game+0x1b27500
	void SetTargetGear(int32_t GearNum, bool bImmediate); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear // (Final|Native|Public|BlueprintCallable) // @ game+0x1b27440
	void SetSteeringInput(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput // (Native|Public|BlueprintCallable) // @ game+0x1b273c0
	void SetHandbrakeInput(bool bNewHandbrake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput // (Native|Public|BlueprintCallable) // @ game+0x1b27260
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b271d0
	void SetGroupsToIgnore(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore // (Final|Native|Public|BlueprintCallable) // @ game+0x1b27150
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b270c0
	void SetGroupsToAvoid(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid // (Final|Native|Public|BlueprintCallable) // @ game+0x1b27040
	void SetGearUp(bool bNewGearUp); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp // (Final|Native|Public|BlueprintCallable) // @ game+0x1b26fb0
	void SetGearDown(bool bNewGearDown); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown // (Final|Native|Public|BlueprintCallable) // @ game+0x1b26f20
	void SetBrakeInput(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput // (Final|Native|Public|BlueprintCallable) // @ game+0x1b26d00
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b26c70
	void SetAvoidanceGroup(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x1b26bf0
	void SetAvoidanceEnabled(bool bEnable); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x1b26b60
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1b26990
	float GetWheelsRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetWheelsRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b26930
	bool GetUseAutoGears(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b268d0
	int32_t GetTargetGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b268a0
	float GetForwardSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b267d0
	float GetEngineRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b267a0
	float GetEngineMaxRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b26770
	int32_t GetCurrentGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b26740
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x2cff6aa0 (Inherited: 0x2cff6aa0)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	void SetSteerAngle(float SteerAngle, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x1b272f0
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x1b26e50
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x1b26d80
};

// Class PhysXVehicles.TireConfig
// Size: 0x2cff6a58 (Inherited: 0x2cff6a38)
struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x38(0x04)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x40(0x10)
	char pad_2CFF6A4C[0xc]; // 0x2cff6a4c(0x0c)
};

// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x2cff6a90 (Inherited: 0x2cff6a70)
struct UVehicleAnimInstance : UAnimInstance {
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x980(0x08)
	char pad_2CFF6A78[0x18]; // 0x2cff6a78(0x18)

	struct AWheeledVehicle* GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x1b26900
};

// Class PhysXVehicles.VehicleWheel
// Size: 0x2cff6af8 (Inherited: 0x2cff6930)
struct UVehicleWheel : UObject {
	struct UStaticMesh* CollisionMesh; // 0x30(0x08)
	bool bDontCreateShape; // 0x38(0x01)
	bool bAutoAdjustCollisionSize; // 0x39(0x01)
	struct FVector Offset; // 0x3c(0x0c)
	float ShapeRadius; // 0x48(0x04)
	float ShapeWidth; // 0x4c(0x04)
	float Mass; // 0x50(0x04)
	float DampingRate; // 0x54(0x04)
	float SteerAngle; // 0x58(0x04)
	bool bAffectedByHandbrake; // 0x5c(0x01)
	struct UTireType* TireType; // 0x60(0x08)
	struct UTireConfig* TireConfig; // 0x68(0x08)
	float LatStiffMaxLoad; // 0x70(0x04)
	float LatStiffValue; // 0x74(0x04)
	float LongStiffValue; // 0x78(0x04)
	float SuspensionForceOffset; // 0x7c(0x04)
	float SuspensionMaxRaise; // 0x80(0x04)
	float SuspensionMaxDrop; // 0x84(0x04)
	float SuspensionNaturalFrequency; // 0x88(0x04)
	float SuspensionDampingRatio; // 0x8c(0x04)
	enum class EWheelSweepType SweepType; // 0x90(0x01)
	float MaxBrakeTorque; // 0x94(0x04)
	float MaxHandBrakeTorque; // 0x98(0x04)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0xa0(0x08)
	int32_t WheelIndex; // 0xa8(0x04)
	float DebugLongSlip; // 0xac(0x04)
	float DebugLatSlip; // 0xb0(0x04)
	float DebugNormalizedTireLoad; // 0xb4(0x04)
	float DebugWheelTorque; // 0xbc(0x04)
	float DebugLongForce; // 0xc0(0x04)
	float DebugLatForce; // 0xc4(0x04)
	struct FVector Location; // 0xc8(0x0c)
	struct FVector OldLocation; // 0xd4(0x0c)
	struct FVector Velocity; // 0xe0(0x0c)
	char pad_2CFF69DC[0x11c]; // 0x2cff69dc(0x11c)

	bool IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b26960
	float GetSuspensionOffset(); // Function PhysXVehicles.VehicleWheel.GetSuspensionOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b26870
	float GetSteerAngle(); // Function PhysXVehicles.VehicleWheel.GetSteerAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b26840
	float GetRotationAngle(); // Function PhysXVehicles.VehicleWheel.GetRotationAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b26810
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x2cff6a88 (Inherited: 0x2d002d78)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x378(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x380(0x08)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x2cff6b18 (Inherited: 0x2cff6aa0)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct FVehicleEngineData EngineSetup; // 0x2a0(0xa0)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x340(0x1c)
	float AckermannAccuracy; // 0x35c(0x04)
	struct FVehicleTransmissionData TransmissionSetup; // 0x360(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x390(0x88)
};

// Class PhysXVehicles.WheeledVehicleMovementComponentMotor
// Size: 0x2cff6af8 (Inherited: 0x2cff6aa0)
struct UWheeledVehicleMovementComponentMotor : UWheeledVehicleMovementComponent {
	struct FVehicleEngineData EngineSetup; // 0x2a0(0xa0)
	struct FVehicleTransmissionData TransmissionSetup; // 0x340(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x370(0x88)
};

