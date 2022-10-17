// BlueprintGeneratedClass BP-DeathCam.BP-DeathCam_C
// Size: 0x2cff6a65 (Inherited: 0x2cff6b08)
struct ABP-DeathCam_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UCameraComponent* FirstCamera; // 0x310(0x08)
	struct USpringArmComponent* FirstSpringArm; // 0x318(0x08)
	struct UCameraComponent* ThirdCamera; // 0x320(0x08)
	struct UCameraComponent* SecondCamera; // 0x328(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x330(0x08)
	float DeltaSeconds; // 0x338(0x04)
	struct FVector TargetDeltaLocation; // 0x33c(0x0c)
	struct ABravoHotelCharacter* Character; // 0x348(0x08)
	float LowerBoundCameraHeightDelta; // 0x350(0x04)
	bool bHeightUpdateFinished; // 0x354(0x01)
	float ThridCameraRotationYawDelta; // 0x358(0x04)
	float ThirdCameraMinHeight; // 0x35c(0x04)
	float FirstSpringArmDeltaZ; // 0x360(0x04)
	bool bLockFirstCameraLocation; // 0x364(0x01)

	void CheckThirdCameraLocationRange(); // Function BP-DeathCam.BP-DeathCam_C.CheckThirdCameraLocationRange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateActorRotationToPelvis(); // Function BP-DeathCam.BP-DeathCam_C.UpdateActorRotationToPelvis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetActiveCamera(struct UCameraComponent*& ActiveCamera); // Function BP-DeathCam.BP-DeathCam_C.GetActiveCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void UpdateLowerBoundCameraHeight(); // Function BP-DeathCam.BP-DeathCam_C.UpdateLowerBoundCameraHeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreventCameraWallCollision(); // Function BP-DeathCam.BP-DeathCam_C.PreventCameraWallCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitReferences(bool& bSuccess); // Function BP-DeathCam.BP-DeathCam_C.InitReferences // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCameraHeightToHead(); // Function BP-DeathCam.BP-DeathCam_C.UpdateCameraHeightToHead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UserConstructionScript(); // Function BP-DeathCam.BP-DeathCam_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-DeathCam.BP-DeathCam_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP-DeathCam.BP-DeathCam_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnEndViewTarget(struct APlayerController* PC); // Function BP-DeathCam.BP-DeathCam_C.K2_OnEndViewTarget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-DeathCam(int32_t EntryPoint); // Function BP-DeathCam.BP-DeathCam_C.ExecuteUbergraph_BP-DeathCam // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

