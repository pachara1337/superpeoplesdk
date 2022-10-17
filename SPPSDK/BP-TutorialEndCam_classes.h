// BlueprintGeneratedClass BP-TutorialEndCam.BP-TutorialEndCam_C
// Size: 0x2cff6aac (Inherited: 0x2cff6b08)
struct ABP-TutorialEndCam_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UCameraComponent* WorldViewCamera; // 0x310(0x08)
	struct UCameraComponent* FarCamera; // 0x318(0x08)
	struct UCameraComponent* NearCamera; // 0x320(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x328(0x08)
	struct ABravoHotelCharacter* CharacterRef; // 0x330(0x08)
	struct FTransform TargetNearCameraTransform; // 0x340(0x30)
	float DeltaTime; // 0x370(0x04)
	struct FTransform TargetFarCameraTransform; // 0x380(0x30)
	struct ABravoHotelPlayerController* PlayerControllerRef; // 0x3b0(0x08)
	bool bIsBackgroundScene; // 0x3b8(0x01)
	struct TArray<struct ABravoHotelCharacter*> WinTeamCharacters; // 0x3c0(0x10)
	struct TArray<struct FVector> DuoLocation_Near; // 0x3d0(0x10)
	struct FVector CharacterOriginLocation; // 0x3e0(0x0c)
	struct TArray<struct FRotator> DuoRotation_Near; // 0x3f0(0x10)
	struct TArray<struct FVector> DuoLocation_Far; // 0x400(0x10)
	struct TArray<struct FRotator> DuoRotation_Far; // 0x410(0x10)
	struct TArray<struct FVector> TrioLocation_Near; // 0x420(0x10)
	struct TArray<struct FRotator> TrioRotation_Near; // 0x430(0x10)
	struct TArray<struct FVector> TrioLocation_Far; // 0x440(0x10)
	struct TArray<struct FRotator> TrioRotation_Far; // 0x450(0x10)
	struct TArray<struct FVector> SquadLocation_Near; // 0x460(0x10)
	struct TArray<struct FRotator> SquadRotation_Near; // 0x470(0x10)
	struct TArray<struct FVector> SquadLocation_Far; // 0x480(0x10)
	struct TArray<struct FRotator> SquadRotation_Far; // 0x490(0x10)
	struct FRotator CharacterOriginRotation; // 0x4a0(0x0c)

	void ResetCharacter(); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.ResetCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetFloorLocation(struct FVector InLocation, struct FVector& OutLocation); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.GetFloorLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void UpdateCharacterRotation(); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.UpdateCharacterRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCharacterLocation(); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.UpdateCharacterLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayWinAnimation(struct ABravoHotelCharacter* TargetCharacter); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.PlayWinAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetWinMontage(struct ABravoHotelCharacter* TargetCharacter, struct UAnimMontage*& WinMontage); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.GetWinMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckWorldViewCameraLocationRange(); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.CheckWorldViewCameraLocationRange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetActiveCamera(struct UCameraComponent*& ActiveCamera); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.GetActiveCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void PreventCameraWallCollision(); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.PreventCameraWallCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitReferences(bool& bSuccess); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.InitReferences // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Start Background Scene(); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.Start Background Scene // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-TutorialEndCam(int32_t EntryPoint); // Function BP-TutorialEndCam.BP-TutorialEndCam_C.ExecuteUbergraph_BP-TutorialEndCam // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

