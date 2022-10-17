// BlueprintGeneratedClass BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C
// Size: 0x2cffe930 (Inherited: 0x2cff6a30)
struct UBravoHotelFunctionLibrary_C : UBlueprintFunctionLibrary {
	char pad_2CFF6A30[0x7f00]; // 0x2cff6a30(0x7f00)

	void GetTournamentLeagueInfo(struct FString LeagueType, struct UObject* __WorldContext, struct FTournamentLeagueInfoTableRow& Info, bool& ret); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetTournamentLeagueInfo // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetTournamentStepInfo(enum class ETournamentStep Step, struct UObject* __WorldContext, struct FTournamentStepInfoTableRow& Info, bool& ret); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetTournamentStepInfo // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMainWidget(struct UObject* __WorldContext, struct UBravoHotelMainWidget*& MainWidget); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetMainWidget // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void GetArmoryMainWidget(struct UObject* WorldContextObject, struct UObject* __WorldContext, struct UUW-Lobby_ArmoryMain_C*& ArmoryMainWidget); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetArmoryMainWidget // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetLobbyMainWidget(struct UObject* WorldContextObject, struct UObject* __WorldContext, struct UUW-Lobby_Main_Web_C*& LobbyMainWidget); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetLobbyMainWidget // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetLobbyWidget(struct UObject* WorldContextObject, struct UObject* __WorldContext, struct UBP-LobbyWidget_Web_C*& LobbyWidget); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetLobbyWidget // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetRarityImage(int32_t Rarity, struct UHorizontalBox*& HorizontalBox, bool IsBrightColor, struct UObject* __WorldContext); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.SetRarityImage // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetItemHoverWidget(struct UObject* __WorldContext, struct UUW-Inventory_ItemSlotHover_C*& HoverWidget, bool& ret); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetItemHoverWidget // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void NeedReInitBlueZone(struct UObject* __WorldContext, bool& NeedReInit); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.NeedReInitBlueZone // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CanControlPing(struct UObject* __WorldContext, bool& CanControl); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.CanControlPing // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void Get Ping Icon(enum class EPingType PingType, enum class EItemPingIconType ItemPingType, bool SupplyOpened, struct UObject* __WorldContext, struct UPaperSprite*& PingIcon); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.Get Ping Icon // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetTeamColorIndex(struct ABravoHotelPlayerState* PlayerState, struct UObject* __WorldContext, int32_t& Index); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetTeamColorIndex // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DebugLogNames(struct FString Title, struct TArray<struct FName>& InNames, bool bDebugLog, struct UObject* __WorldContext); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.DebugLogNames // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetLinearColorCalcByGamma(struct FLinearColor InColor, struct UObject* __WorldContext, struct FLinearColor& OutColor); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetLinearColorCalcByGamma // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetColorCalcByGamma(struct FLinearColor InColor, struct UObject* __WorldContext, struct FLinearColor& TeamColor); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetColorCalcByGamma // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetGammaIntensity(struct UObject* __WorldContext, float& GammaIntensity); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetGammaIntensity // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetTeamColor(int32_t TeamIndex, struct UObject* __WorldContext, struct FLinearColor& TeamColor); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetTeamColor // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct TArray<struct AActor*> AppendArray(struct TArray<struct AActor*>& A, struct TArray<struct AActor*>& B, struct UObject* __WorldContext); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.AppendArray // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsCheatable(struct UObject* __WorldContext, bool& IsCheatable); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.IsCheatable // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FString GetRuntimeErrorString(char Error, struct UObject* __WorldContext); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetRuntimeErrorString // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetBravoHotelGameMode(struct UObject* __WorldContext, struct ABravoHotelGameMode*& GameMode); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetBravoHotelGameMode // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetBravoHotelPlayerController(struct UObject* __WorldContext, struct ABravoHotelPlayerController*& PlayerController); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetBravoHotelPlayerController // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetDefaultPawn(struct UObject* __WorldContext, struct ABravoHotelCharacter*& Pawn); // Function BravoHotelFunctionLibrary.BravoHotelFunctionLibrary_C.GetDefaultPawn // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

