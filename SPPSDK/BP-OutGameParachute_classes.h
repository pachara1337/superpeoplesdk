// BlueprintGeneratedClass BP-OutGameParachute.BP-OutGameParachute_C
// Size: 0x2cff6a28 (Inherited: 0x2cff6b08)
struct ABP-OutGameParachute_C : ABravoHotelOutGameParachuteActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct USkeletalMeshComponent* ParachuteBag_SkeletalMesh; // 0x310(0x08)
	struct USkeletalMeshComponent* Parachute_SkeletalMesh; // 0x318(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x320(0x08)

	void ReceiveBeginPlay(); // Function BP-OutGameParachute.BP-OutGameParachute_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void SetSkinMaterial(struct UMaterialInterface* Material); // Function BP-OutGameParachute.BP-OutGameParachute_C.SetSkinMaterial // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-OutGameParachute(int32_t EntryPoint); // Function BP-OutGameParachute.BP-OutGameParachute_C.ExecuteUbergraph_BP-OutGameParachute // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

