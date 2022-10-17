// Class OnlineSubsystemUtils.IpConnection
// Size: 0x2cff6a68 (Inherited: 0x2cff6ac8)
struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; // 0x1b18(0x04)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a68)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x768(0x01)
	char AllowPlayerPortUnreach : 1; // 0x768(0x01)
	uint32_t MaxPortCountToTry; // 0x76c(0x04)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x77c(0x04)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x780(0x04)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x784(0x04)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x788(0x04)
	double MaxSecondsInReceive; // 0x790(0x08)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x798(0x04)
	float ResolutionConnectionTimeout; // 0x79c(0x04)
	char pad_2CFF6A8C_2 : 6; // 0x2cff6a8c(0x01)
	char pad_2CFF6A8D[0x53]; // 0x2cff6a8d(0x53)
};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, float& progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13f9050
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool& bFoundID, struct FText& Title, struct FText& LockedDescription, struct FText& UnlockedDescription, bool& bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13f8cf0
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x2cff6a70 (Inherited: 0x2cff6938)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x118]; // 0x2cff6958(0x118)

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f7d70
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f7cb0
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x2cff6a90 (Inherited: 0x2cff6938)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x138]; // 0x2cff6958(0x138)

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f99b0
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x2cff6a80 (Inherited: 0x2cff6938)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x128]; // 0x2cff6958(0x128)

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f7e30
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x2cff6aa0 (Inherited: 0x2cff6938)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x148]; // 0x2cff6958(0x148)

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f83f0
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x2cff6a80 (Inherited: 0x2cff6938)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x128]; // 0x2cff6958(0x128)

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f8520
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x2cff6a88 (Inherited: 0x2cff6938)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x130]; // 0x2cff6958(0x130)

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f85e0
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x2cff6a80 (Inherited: 0x2cff6938)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x128]; // 0x2cff6958(0x128)

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f8810
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x2cff6a98 (Inherited: 0x2cff6938)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x140]; // 0x2cff6958(0x140)

	struct FString GetServerName(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13f9790
	int32_t GetPingInMs(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13f95b0
	int32_t GetMaxPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13f93d0
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x13f91f0
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f89b0
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x2cff6a90 (Inherited: 0x2cff6938)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x138]; // 0x2cff6958(0x138)

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f8ae0
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x2cff6a88 (Inherited: 0x2cff6930)
struct UInAppPurchaseCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_2CFF6950[0x138]; // 0x2cff6950(0x138)

	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13f7fe0
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0x2cff6ab0 (Inherited: 0x2cff6930)
struct UInAppPurchaseCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_2CFF6950[0x160]; // 0x2cff6950(0x160)

	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f8370
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13f82f0
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2& ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13f7ef0
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x2cff6a98 (Inherited: 0x2cff6930)
struct UInAppPurchaseQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_2CFF6950[0x148]; // 0x2cff6950(0x148)

	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13f81e0
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_2CFF6950[0x120]; // 0x2cff6950(0x120)

	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString>& ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13f80d0
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x2cff6a98 (Inherited: 0x2cff6930)
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_2CFF6950[0x148]; // 0x2cff6950(0x148)

	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13fd690
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0x2cff6ab0 (Inherited: 0x2cff6930)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_2CFF6950[0x160]; // 0x2cff6950(0x160)

	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13fd570
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x2cff6a38 (Inherited: 0x2cff6938)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0xe0]; // 0x2cff6958(0xe0)

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x13fd890
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13fe670
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_2CFF6950[0x120]; // 0x2cff6950(0x120)

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13fd490
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x2cff6aa0 (Inherited: 0x2cff6930)
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_2CFF6950[0x150]; // 0x2cff6950(0x150)

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13fd7b0
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x2cff6a70 (Inherited: 0x2cff6a38)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6A58[0x18]; // 0x2cff6a58(0x18)

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13fdaf0
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x2cff6a40 (Inherited: 0x2cff6b08)
struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; // 0x310(0x04)
	float BeaconConnectionTimeout; // 0x314(0x04)
	struct UNetDriver* NetDriver; // 0x318(0x08)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x2cff6ca0 (Inherited: 0x2cff6a40)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x340(0x08)
	struct UNetConnection* BeaconConnection; // 0x348(0x08)
	enum class EBeaconConnectionState ConnectionState; // 0x350(0x01)
	char pad_2CFF6A51[0x24f]; // 0x2cff6a51(0x24f)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x13fd340
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x2cff6af8 (Inherited: 0x2cff6a40)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x340(0x04)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x348(0x10)
	char pad_2CFF6A54[0xa4]; // 0x2cff6a54(0xa4)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x2cff6a30 (Inherited: 0x2cff6b08)
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; // 0x308(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x318(0x08)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x320(0x10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x2cff6a38 (Inherited: 0x2cff6a30)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct FName VoiceSubsystemNameOverride; // 0x30(0x0c)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x2cff6a60 (Inherited: 0x2cff6a48)
struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x48(0x01)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x50(0x10)
	char pad_2CFF6A59[0x7]; // 0x2cff6a59(0x07)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x2cff6a98 (Inherited: 0x2cff6a30)
struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; // 0x190(0x01)
	bool bHandlingDisconnect; // 0x191(0x01)
	char pad_2CFF6A32[0x66]; // 0x2cff6a32(0x66)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x2cff6a60 (Inherited: 0x2cff6ca0)
struct APartyBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; // 0x3d0(0x10)
	struct FPartyReservation PendingReservation; // 0x3e0(0x50)
	enum class EClientRequestType RequestType; // 0x430(0x01)
	bool bPendingReservationSent; // 0x431(0x01)
	bool bCancelReservation; // 0x432(0x01)

	void ServerUpdateReservationRequest(struct FString SessionID, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x13fe3d0
	void ServerReservationRequest(struct FString SessionID, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x13fe130
	void ServerRemoveMemberFromReservationRequest(struct FString SessionID, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x13fde90
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x13fdd80
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x13fd400
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x13fd3e0
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x13fd360
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x13fd2c0
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a30)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; // 0x330(0x08)
	bool bLogoutOnSessionTimeout; // 0x398(0x01)
	float SessionTimeoutSecs; // 0x39c(0x04)
	float TravelSessionTimeoutSecs; // 0x3a0(0x04)
	char pad_2CFF6A41[0x67]; // 0x2cff6a41(0x67)
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x2cff6a88 (Inherited: 0x2cff6930)
struct UPartyBeaconState : UObject {
	struct FName SessionName; // 0x30(0x0c)
	int32_t NumConsumedReservations; // 0x3c(0x04)
	int32_t MaxReservations; // 0x40(0x04)
	int32_t NumTeams; // 0x44(0x04)
	int32_t NumPlayersPerTeam; // 0x48(0x04)
	struct FName TeamAssignmentMethod; // 0x4c(0x0c)
	int32_t ReservedHostTeamNum; // 0x58(0x04)
	int32_t ForceTeamNum; // 0x5c(0x04)
	bool bRestrictCrossConsole; // 0x60(0x01)
	bool bEnableRemovalRequests; // 0x61(0x01)
	struct TArray<struct FPartyReservation> Reservations; // 0x68(0x10)
	char pad_2CFF6972[0x116]; // 0x2cff6972(0x116)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x2cff6a80 (Inherited: 0x2cff6938)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6958[0x128]; // 0x2cff6958(0x128)

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x13fdbb0
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x2cff6a68 (Inherited: 0x2cff6a38)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x48(0x10)
	char pad_2CFF6A58[0x10]; // 0x2cff6a58(0x10)

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1400960
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x2cff6a88 (Inherited: 0x2cff6ca0)
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	struct FString DestSessionId; // 0x3d0(0x10)
	struct FSpectatorReservation PendingReservation; // 0x3e0(0x78)
	enum class ESpectatorClientRequestType RequestType; // 0x458(0x01)
	bool bPendingReservationSent; // 0x459(0x01)
	bool bCancelReservation; // 0x45a(0x01)

	void ServerReservationRequest(struct FString SessionID, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x1400760
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x13fdd80
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1400000
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x13fffe0
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x13fff60
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x13ffec0
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a30)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct USpectatorBeaconState* State; // 0x330(0x08)
	bool bLogoutOnSessionTimeout; // 0x398(0x01)
	float SessionTimeoutSecs; // 0x39c(0x04)
	float TravelSessionTimeoutSecs; // 0x3a0(0x04)
	char pad_2CFF6A41[0x67]; // 0x2cff6a41(0x67)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct USpectatorBeaconState : UObject {
	struct FName SessionName; // 0x30(0x0c)
	int32_t NumConsumedReservations; // 0x3c(0x04)
	int32_t MaxReservations; // 0x40(0x04)
	bool bRestrictCrossConsole; // 0x44(0x01)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x48(0x10)
	char pad_2CFF6955[0x113]; // 0x2cff6955(0x113)
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x2cff6aa0 (Inherited: 0x2cff6ca0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x1400710
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x13fff40
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1400620
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString& PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x14003f0
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t& PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1400240
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool& bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1400090
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x2cff6a70 (Inherited: 0x2cff6b10)
struct UVoipListenerSynthComponent : USynthComponent {

	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling // (Final|Native|Public|BlueprintCallable) // @ game+0x14005f0
};

