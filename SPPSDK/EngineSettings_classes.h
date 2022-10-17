// Class EngineSettings.ConsoleSettings
// Size: 0x2cff6a78 (Inherited: 0x2cff6930)
struct UConsoleSettings : UObject {
	int32_t MaxScrollbackSize; // 0x30(0x04)
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; // 0x38(0x10)
	struct TArray<struct FString> AutoCompleteMapPaths; // 0x48(0x10)
	float BackgroundOpacityPercentage; // 0x58(0x04)
	bool bOrderTopToBottom; // 0x5c(0x01)
	bool bDisplayHelpInAutoComplete; // 0x5d(0x01)
	struct FColor InputColor; // 0x60(0x04)
	struct FColor HistoryColor; // 0x64(0x04)
	struct FColor AutoCompleteCommandColor; // 0x68(0x04)
	struct FColor AutoCompleteCVarColor; // 0x6c(0x04)
	struct FColor AutoCompleteFadedColor; // 0x70(0x04)
	char pad_2CFF696E[0x10a]; // 0x2cff696e(0x10a)
};

// Class EngineSettings.GameMapsSettings
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UGameMapsSettings : UObject {
	struct FString LocalMapOptions; // 0x30(0x10)
	struct FSoftObjectPath TransitionMap; // 0x40(0x20)
	bool bUseSplitscreen; // 0x60(0x01)
	enum class ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x61(0x01)
	enum class EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // 0x62(0x01)
	enum class EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x63(0x01)
	bool bOffsetPlayerGamepadIds; // 0x64(0x01)
	struct FSoftClassPath GameInstanceClass; // 0x68(0x20)
	struct FSoftClassPath ServerGameInstanceClass; // 0x88(0x20)
	struct FSoftObjectPath GameDefaultMap; // 0xa8(0x20)
	struct FSoftObjectPath ServerDefaultMap; // 0xc8(0x20)
	struct FSoftClassPath GlobalDefaultGameMode; // 0xe8(0x20)
	struct FSoftClassPath GlobalDefaultServerGameMode; // 0x108(0x20)
	struct TArray<struct FGameModeName> GameModeMapPrefixes; // 0x128(0x10)
	struct TArray<struct FGameModeName> GameModeClassAliases; // 0x138(0x10)
	char pad_2CFF6A45[0x3]; // 0x2cff6a45(0x03)

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer); // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1 // (Final|Native|Public|BlueprintCallable) // @ game+0x34789b0
	bool GetSkipAssigningGamepadToPlayer1(); // Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1 // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3478980
	struct UGameMapsSettings* GetGameMapsSettings(); // Function EngineSettings.GameMapsSettings.GetGameMapsSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3478950
};

// Class EngineSettings.GameNetworkManagerSettings
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UGameNetworkManagerSettings : UObject {
	int32_t MinDynamicBandwidth; // 0x30(0x04)
	int32_t MaxDynamicBandwidth; // 0x34(0x04)
	int32_t TotalNetBandwidth; // 0x38(0x04)
	int32_t BadPingThreshold; // 0x3c(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x40(0x01)
	float StandbyRxCheatTime; // 0x44(0x04)
	float StandbyTxCheatTime; // 0x48(0x04)
	float PercentMissingForRxStandby; // 0x4c(0x04)
	float PercentMissingForTxStandby; // 0x50(0x04)
	float PercentForBadPing; // 0x54(0x04)
	float JoinInProgressStandbyWaitTime; // 0x58(0x04)
	char pad_2CFF6958_1 : 7; // 0x2cff6958(0x01)
	char pad_2CFF6959[0x107]; // 0x2cff6959(0x107)
};

// Class EngineSettings.GameSessionSettings
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x30(0x04)
	int32_t MaxPlayers; // 0x34(0x04)
	char bRequiresPushToTalk : 1; // 0x38(0x01)
	char pad_2CFF6938_1 : 7; // 0x2cff6938(0x01)
	char pad_2CFF6939[0x107]; // 0x2cff6939(0x107)
};

// Class EngineSettings.GeneralEngineSettings
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UGeneralEngineSettings : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class EngineSettings.GeneralProjectSettings
// Size: 0x2cff6b20 (Inherited: 0x2cff6930)
struct UGeneralProjectSettings : UObject {
	struct FString CompanyName; // 0x30(0x10)
	struct FString CompanyDistinguishedName; // 0x40(0x10)
	struct FString CopyrightNotice; // 0x50(0x10)
	struct FString Description; // 0x60(0x10)
	struct FString Homepage; // 0x70(0x10)
	struct FString LicensingTerms; // 0x80(0x10)
	struct FString PrivacyPolicy; // 0x90(0x10)
	struct FGuid ProjectID; // 0xa0(0x10)
	struct FString ProjectName; // 0xb0(0x10)
	struct FString ProjectVersion; // 0xc0(0x10)
	struct FString SupportContact; // 0xd0(0x10)
	struct FText ProjectDisplayedTitle; // 0xe0(0x18)
	struct FText ProjectDebugTitleInfo; // 0xf8(0x18)
	bool bShouldWindowPreserveAspectRatio; // 0x110(0x01)
	bool bUseBorderlessWindow; // 0x111(0x01)
	bool bStartInVR; // 0x112(0x01)
	bool bStartInAR; // 0x113(0x01)
	bool bSupportAR; // 0x114(0x01)
	bool bAllowWindowResize; // 0x115(0x01)
	bool bAllowClose; // 0x116(0x01)
	bool bAllowMaximize; // 0x117(0x01)
	bool bAllowMinimize; // 0x118(0x01)
	char pad_2CFF6A19[0x107]; // 0x2cff6a19(0x107)
};

// Class EngineSettings.HudSettings
// Size: 0x2cff6c48 (Inherited: 0x2cff6930)
struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x30(0x01)
	struct TArray<struct FName> DebugDisplay; // 0x38(0x10)
	char pad_2CFF6940_1 : 7; // 0x2cff6940(0x01)
	char pad_2CFF6941[0x307]; // 0x2cff6941(0x307)
};

