// BlueprintGeneratedClass BP-DestructibleComponent.BP-DestructibleComponent_C
// Size: 0x2cff6a7d (Inherited: 0x2cff6a40)
struct UBP-DestructibleComponent_C : UBravoHotelDestructibleComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x08)
	float DestructibleMeshLifeTime; // 0x648(0x04)
	bool IsLegacyMethodEnable; // 0x64c(0x01)
	float StaticMeshLifeSpanTime; // 0x650(0x04)
	bool GameStarted; // 0x654(0x01)
	float DefaultHpCache; // 0x658(0x04)
	bool IsDestructedBeforeGameStart; // 0x65c(0x01)
	bool Is; // 0x65d(0x01)
	struct FMulticastInlineDelegate DestructEventDispatcher; // 0x660(0x10)
	float LinearDamping; // 0x670(0x04)
	float MassInKg; // 0x674(0x04)
	float AngularDamping; // 0x678(0x04)
	enum class CollisionTypeEnum ClassType; // 0x67c(0x01)
	char pad_2CFF6A75[0x8]; // 0x2cff6a75(0x08)

	void OnRep_IsDestructedBeforeGameStart(); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.OnRep_IsDestructedBeforeGameStart // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(float Damage, struct FVector HitLocation, struct FVector ImpactDirection, struct ABP-DestructibleActor_C*& DM); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.Destruct // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnDestructComponent(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpactDir); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.K2_OnDestructComponent // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SetLifeSpan(float LifeSpan); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.SetLifeSpan // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCollisionEnableWithDelay(float DelayTime); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.SetCollisionEnableWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-DestructibleComponent(int32_t EntryPoint); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.ExecuteUbergraph_BP-DestructibleComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void DestructEventDispatcher__DelegateSignature(); // Function BP-DestructibleComponent.BP-DestructibleComponent_C.DestructEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

