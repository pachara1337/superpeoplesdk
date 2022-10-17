// UserDefinedStruct StructBP-Fence.StructBP-Fence
// Size: 0x2cff6c84 (Inherited: 0x00)
struct FStructBP-Fence {
	struct FString DestructibleMeshName_4_222664DC4DB17ECBE244AC99DF9EA123; // 0x00(0x10)
	struct TSoftObjectPtr<UDestructibleMesh> DestructibleMeshReference_28_5AF981FF401ECFC018463B85313D447D; // 0x10(0x30)
	enum class CollisionTypeEnum ClassType_12_CF0ABC634B5CFAF8678A258BF8E8211B; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float HP_15_9E7F5C0B4E9E3E4FCF6BE7AA3120F91D; // 0x44(0x04)
	bool DamageType_Crash_21_5C4FE81C4CA7E4177928199A12D9A032; // 0x48(0x01)
	bool DamageType_Bump_23_30724A2D4B88F72F2048AEAA8B0131AD; // 0x49(0x01)
	bool DamageType_Weapon_ByPhysics_30_2BF581F44CD54958271FA98DF6078D39; // 0x4a(0x01)
	enum class EWalkableSlopeBehavior WalkableSlopeBehavior_27_5D471CD74EF9C49060788D8D3A731D84; // 0x4b(0x01)
	bool bOverrideImpulse_37_15D062DB431078187CF75781B113F9C0; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float Impulse_36_EDDD259A41228C6F27DB4C8E465D6FFC; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UParticleSystem* Effect_40_C8895A794C38ED9529FA158023DD896B; // 0x58(0x08)
	struct FVector EffectPositionDelta_43_FE0F3FCB49D05CA49155EFA4B43241DD; // 0x60(0x0c)
	struct FVector EffectRotationDelta_45_12E7D959459A40722193F284A07CC780; // 0x6c(0x0c)
	struct UMaterialInterface* OverrideDestructibleMaterial_48_B19C36374C99E4A9177FB8ACF48FC8FA; // 0x78(0x08)
	int32_t OverrideDestructibleMaterialIndex_51_40AA187C4AF7A0BFA001949C91020E57; // 0x80(0x04)
	char pad_84[0x2cff6c00]; // 0x84(0x2cff6c00)
};

