// WidgetBlueprintGeneratedClass UW-CustomizedCharacter.UW-CustomizedCharacter_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6a88)
struct UUW-CustomizedCharacter_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct FRotator CurrentAccel; // 0x290(0x0c)
	struct FRotator TargetAccel; // 0x29c(0x0c)
	struct ACineCameraActor* CurrentCameraActor; // 0x2a8(0x08)
	struct FVector OldCameraLocation; // 0x2b0(0x0c)
	struct FVector CurrentCameraLocation; // 0x2bc(0x0c)
	struct FVector OriginCameraLocation; // 0x2c8(0x0c)
	struct FVector TargetCameraLocation; // 0x2d4(0x0c)
	struct UCustomizedChara_DataAsset_C* DataAsset; // 0x2e0(0x08)
	bool ResetOriginTransform; // 0x2e8(0x01)
	float BeginFocusDist; // 0x2ec(0x04)
	float EndFocusDist; // 0x2f0(0x04)
	float CurrentFocusDist; // 0x2f4(0x04)
	struct UCustomizedChara_DataAsset_C* ParachuteDataAsset; // 0x2f8(0x08)
	char pad_2CFF6AFD[0x3]; // 0x2cff6afd(0x03)

	void UpdateMouseWheel(float Delta); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseY(float Delta); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseY // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseX(float Delta); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateMouseX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCharacter(float DeltaTime); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCamera(float DeltaTime); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.UpdateCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PercentDist(float CurDist, float& Percent); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.PercentDist // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MouseWheel(float Delta); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.MouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(bool ForceSnap); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCameraActor(struct ACineCameraActor* CurrentCamera, struct ACineCameraActor* TargetCamera, float BeginFocusDist, float EndFocusDist, bool IsParachute); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.SetCameraActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetLobbyWidget(struct UBP-LobbyWidget_Web_C*& Widget); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.GetLobbyWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide(); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Show(); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-CustomizedCharacter(int32_t EntryPoint); // Function UW-CustomizedCharacter.UW-CustomizedCharacter_C.ExecuteUbergraph_UW-CustomizedCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

