// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x2cff6a40 (Inherited: 0x2cff6ae0)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x5d8(0x10)
	struct FString LookUpAtRateAxisName; // 0x5e8(0x10)
	struct FString TurnAxisName; // 0x5f8(0x10)
	struct FString TurnAtRateAxisName; // 0x608(0x10)
	struct FString MoveForwardAxisName; // 0x618(0x10)
	struct FString MoveRightAxisName; // 0x628(0x10)
	float MouseSensitivityScale_Pitch; // 0x638(0x04)
	float MouseSensitivityScale_Yaw; // 0x63c(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0x2cff6a90 (Inherited: 0x2cff6c40)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0x738(0x0c)
	struct FRotator RotationalDeceleration; // 0x744(0x0c)
	struct FRotator MaxRotationalVelocity; // 0x750(0x0c)
	float MinPitch; // 0x75c(0x04)
	float MaxPitch; // 0x760(0x04)
	float WalkingFriction; // 0x764(0x04)
	float WalkingSpeed; // 0x768(0x04)
	float WalkingAcceleration; // 0x76c(0x04)
};

