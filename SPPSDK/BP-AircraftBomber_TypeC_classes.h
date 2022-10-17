// BlueprintGeneratedClass BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C
// Size: 0x2cff6a38 (Inherited: 0x2cff6b18)
struct ABP-AircraftBomber_TypeC_C : ABravoHotelAircraftBomber {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x320(0x08)
	struct UStaticMeshComponent* SM-Aricraft001__WheelFolding; // 0x328(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x330(0x08)

	void ReceiveBeginPlay(); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveDestroyed(); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature(struct FHitResult& ImpactResult, float Time); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnInterpToResetDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-AircraftBomber_TypeC(int32_t EntryPoint); // Function BP-AircraftBomber_TypeC.BP-AircraftBomber_TypeC_C.ExecuteUbergraph_BP-AircraftBomber_TypeC // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

