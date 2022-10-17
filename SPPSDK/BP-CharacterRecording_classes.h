// BlueprintGeneratedClass BP-CharacterRecording.BP-CharacterRecording_C
// Size: 0x2cff6aac (Inherited: 0x2cff6b10)
struct ABP-CharacterRecording_C : ABravoHotel3DViewActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UPointLightComponent* PointLight3; // 0x318(0x08)
	struct UPointLightComponent* PointLight2; // 0x320(0x08)
	struct USpotLightComponent* SpotLight; // 0x328(0x08)
	struct UPointLightComponent* PointLight1; // 0x330(0x08)
	struct UBravoHotelSceneCaptureComponent2D* BravoHotelSceneCaptureComponent2D; // 0x338(0x08)
	struct UPointLightComponent* PointLight; // 0x340(0x08)
	struct USpotLightComponent* SpotLight2; // 0x348(0x08)
	struct UStaticMeshComponent* Cube; // 0x350(0x08)
	struct UCustomizableSkeletalComponent* CustomizableSkeletal; // 0x358(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x360(0x08)
	struct UCameraComponent* Camera; // 0x368(0x08)
	struct USceneComponent* Scene; // 0x370(0x08)
	struct ABravoHotelCharacter* CharacterRef; // 0x378(0x08)
	struct TArray<struct ABravoHotelWeaponBase*> PreviewWeapons; // 0x380(0x10)
	bool EnableTick; // 0x390(0x01)
	struct FRotator TargetAccel; // 0x394(0x0c)
	struct FRotator CurrentAccel; // 0x3a0(0x0c)

	void Resize Render Target(int32_t SizeX, int32_t SizeY); // Function BP-CharacterRecording.BP-CharacterRecording_C.Resize Render Target // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddRotation(float Delta); // Function BP-CharacterRecording.BP-CharacterRecording_C.AddRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP-CharacterRecording.BP-CharacterRecording_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdatedMutable(struct UCustomizableObjectInstance* Instance); // Function BP-CharacterRecording.BP-CharacterRecording_C.OnUpdatedMutable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-CharacterRecording(int32_t EntryPoint); // Function BP-CharacterRecording.BP-CharacterRecording_C.ExecuteUbergraph_BP-CharacterRecording // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

