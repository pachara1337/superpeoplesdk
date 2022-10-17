// WidgetBlueprintGeneratedClass UW-ArmoryInput.UW-ArmoryInput_C
// Size: 0x2cff6ac5 (Inherited: 0x2cff6a88)
struct UUW-ArmoryInput_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct FRotator TargetAccel; // 0x298(0x0c)
	struct FRotator CurrentAccel; // 0x2a4(0x0c)
	float TargetScale; // 0x2b0(0x04)
	struct UOutGameArmoryDataType_C* DataAsset; // 0x2b8(0x08)
	bool ResetOriginTransform; // 0x2c0(0x01)
	bool MouseInputLock; // 0x2c1(0x01)
	bool IsUpdatingRotation; // 0x2c2(0x01)
	bool IsValidMeshActor; // 0x2c3(0x01)
	bool IsPressedLeftMouse; // 0x2c4(0x01)
	char pad_2CFF6AC1[0x4]; // 0x2cff6ac1(0x04)

	void CheckValidMeshActor(bool& Return); // Function UW-ArmoryInput.UW-ArmoryInput_C.CheckValidMeshActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsSubTabContains(struct FString TabName, bool& State); // Function UW-ArmoryInput.UW-ArmoryInput_C.IsSubTabContains // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseWheel(float Delta); // Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseY(float Delta); // Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseY // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMouseX(float Delta); // Function UW-ArmoryInput.UW-ArmoryInput_C.UpdateMouseX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(bool Snap); // Function UW-ArmoryInput.UW-ArmoryInput_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetLobbyWidget(struct UBP-LobbyWidget_Web_C*& LobbyWidget); // Function UW-ArmoryInput.UW-ArmoryInput_C.GetLobbyWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MouseWheel(float Delta); // Function UW-ArmoryInput.UW-ArmoryInput_C.MouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide(); // Function UW-ArmoryInput.UW-ArmoryInput_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Show(); // Function UW-ArmoryInput.UW-ArmoryInput_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ArmoryInput.UW-ArmoryInput_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-ArmoryInput.UW-ArmoryInput_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BindResetTransform(); // Function UW-ArmoryInput.UW-ArmoryInput_C.BindResetTransform // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-ArmoryInput.UW-ArmoryInput_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ArmoryInput(int32_t EntryPoint); // Function UW-ArmoryInput.UW-ArmoryInput_C.ExecuteUbergraph_UW-ArmoryInput // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

