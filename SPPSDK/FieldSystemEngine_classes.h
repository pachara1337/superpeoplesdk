// Class FieldSystemEngine.FieldSystemActor
// Size: 0x2cff6b10 (Inherited: 0x2cff6b08)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x308(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UFieldSystem : UObject {
	char pad_2CFF6930[0x110]; // 0x2cff6930(0x110)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x2cff6b00 (Inherited: 0x2cffdfc0)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x4c0(0x08)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x4d8(0x10)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x48eb810
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x48eb660
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x48eb4b0
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x48eb390
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x48eb220
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x48eb100
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x48eafb0
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x48eae90
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x48ead40
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0x2cff6ab8 (Inherited: 0x2cff6cb8)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0x2cff6ac0 (Inherited: 0x2cff6ab8)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb8(0x04)
	char pad_2CFF6ABC[0x4]; // 0x2cff6abc(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48ebb60
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0x2cff6ac0 (Inherited: 0x2cff6ab8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xb8(0x01)
	char pad_2CFF6AB9[0x7]; // 0x2cff6ab9(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48ebbf0
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0x2cff6ab8 (Inherited: 0x2cff6cb8)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0x2cff6ab8 (Inherited: 0x2cff6ab8)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0x2cff6ab8 (Inherited: 0x2cff6ab8)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0x2cff6ab8 (Inherited: 0x2cff6ab8)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0x2cff6ac0 (Inherited: 0x2cff6ab8)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb8(0x04)
	char pad_2CFF6ABC[0x4]; // 0x2cff6abc(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48ebb60
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ab8)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb8(0x04)
	struct FVector Position; // 0xbc(0x0c)
	int32_t InteriorValue; // 0xc8(0x04)
	int32_t ExteriorValue; // 0xcc(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xd0(0x01)
	char pad_2CFF6AD1[0x7]; // 0x2cff6ad1(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48ec3f0
};

// Class FieldSystemEngine.UniformScalar
// Size: 0x2cff6ac0 (Inherited: 0x2cff6ab8)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	char pad_2CFF6ABC[0x4]; // 0x2cff6abc(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48ec690
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0x2cff6ae0 (Inherited: 0x2cff6ab8)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	float MinRange; // 0xbc(0x04)
	float MaxRange; // 0xc0(0x04)
	float Default; // 0xc4(0x04)
	float Radius; // 0xc8(0x04)
	struct FVector Position; // 0xcc(0x0c)
	enum class EFieldFalloffType Falloff; // 0xd8(0x01)
	char pad_2CFF6AD9[0x7]; // 0x2cff6ad9(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48ec1d0
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ab8)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	float MinRange; // 0xbc(0x04)
	float MaxRange; // 0xc0(0x04)
	float Default; // 0xc4(0x04)
	float Distance; // 0xc8(0x04)
	struct FVector Position; // 0xcc(0x0c)
	struct FVector Normal; // 0xd8(0x0c)
	enum class EFieldFalloffType Falloff; // 0xe4(0x01)
	char pad_2CFF6AE5[0x3]; // 0x2cff6ae5(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48ebf50
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x2cff6b10 (Inherited: 0x2cff6ab8)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb8(0x04)
	float MinRange; // 0xbc(0x04)
	float MaxRange; // 0xc0(0x04)
	float Default; // 0xc4(0x04)
	struct FTransform Transform; // 0xd0(0x30)
	enum class EFieldFalloffType Falloff; // 0x100(0x01)
	char pad_2CFF6AF9[0x17]; // 0x2cff6af9(0x17)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48eb830
};

// Class FieldSystemEngine.NoiseField
// Size: 0x2cff6af0 (Inherited: 0x2cff6ab8)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb8(0x04)
	float MaxRange; // 0xbc(0x04)
	struct FTransform Transform; // 0xc0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48ebc80
};

// Class FieldSystemEngine.UniformVector
// Size: 0x2cff6ac8 (Inherited: 0x2cff6ab8)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb8(0x04)
	struct FVector Direction; // 0xbc(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48ec5b0
};

// Class FieldSystemEngine.RadialVector
// Size: 0x2cff6ac8 (Inherited: 0x2cff6ab8)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb8(0x04)
	struct FVector Position; // 0xbc(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x48ec5b0
};

// Class FieldSystemEngine.RandomVector
// Size: 0x2cff6ac0 (Inherited: 0x2cff6ab8)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb8(0x04)
	char pad_2CFF6ABC[0x4]; // 0x2cff6abc(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48ec690
};

// Class FieldSystemEngine.OperatorField
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ab8)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb8(0x04)
	struct UFieldNodeBase* RightField; // 0xc0(0x08)
	struct UFieldNodeBase* LeftField; // 0xc8(0x08)
	enum class EFieldOperationType Operation; // 0xd0(0x01)
	char pad_2CFF6ACD[0xb]; // 0x2cff6acd(0x0b)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48ebe00
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0x2cff6ac0 (Inherited: 0x2cff6ab8)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xb8(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48ec750
};

// Class FieldSystemEngine.ToFloatField
// Size: 0x2cff6ac0 (Inherited: 0x2cff6ab8)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xb8(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48ec750
};

// Class FieldSystemEngine.CullingField
// Size: 0x2cff6ad0 (Inherited: 0x2cff6ab8)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xb8(0x08)
	struct UFieldNodeBase* Field; // 0xc0(0x08)
	enum class EFieldCullingOperationType Operation; // 0xc8(0x01)
	char pad_2CFF6AC9[0x7]; // 0x2cff6ac9(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48eba60
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0x2cff6ab8 (Inherited: 0x2cff6ab8)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x48ec720
};

