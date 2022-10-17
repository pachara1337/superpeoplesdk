// Class LowEntrySocketConnection.LowEntryRawSocketConnection
// Size: 0x2cff6af8 (Inherited: 0x2cff6930)
struct ULowEntryRawSocketConnection : UObject {
	struct ULowEntryRawSocketConnectionListenerCode* ListenerCode; // 0x40(0x08)
	struct FString Host; // 0x48(0x10)
	int32_t Port; // 0x58(0x04)
	int32_t PortUdp; // 0x5c(0x04)
	struct TArray<char> SendingBytes; // 0x60(0x10)
	struct TArray<char> ReceivedBytes; // 0x70(0x10)
	struct TArray<char> ReceivingBuffer; // 0x80(0x10)
	bool CanCallOnDisconnect; // 0xa0(0x01)
	struct FDelegate OnConnectEvent; // 0xa4(0x14)
	struct FDelegate OnDisconnectEvent; // 0xb8(0x14)
	struct FDelegate OnReceiveMessageEvent; // 0xcc(0x14)
	struct FDelegate OnReceiveUnreliableMessageEvent; // 0xe0(0x14)
	char pad_2CFF69D1[0x127]; // 0x2cff69d1(0x127)

	void SendUnreliableMessage(struct TArray<char>& Bytes); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendUnreliableMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12a9590
	void SendMessage(struct TArray<char>& Bytes); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.SendMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12a9430
	bool IsConnected(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7e70
	int32_t GetPortUdp(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPortUdp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7e40
	int32_t GetPort(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetPort // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7e10
	int32_t GetLocalPortUdp(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPortUdp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7de0
	int32_t GetLocalPort(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetLocalPort // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7db0
	struct FString GetHost(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.GetHost // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7d30
	void Disconnect(); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.Disconnect // (Final|Native|Public|BlueprintCallable) // @ game+0x12a7cf0
	void Connect(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, bool& SUCCESS); // Function LowEntrySocketConnection.LowEntryRawSocketConnection.Connect // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12a7050
};

// Class LowEntrySocketConnection.LowEntryRawSocketConnectionListenerCode
// Size: 0x2cff6c58 (Inherited: 0x2cff6930)
struct ULowEntryRawSocketConnectionListenerCode : UObject {
	bool Stopped; // 0x30(0x01)
	bool RunExec; // 0x31(0x01)
	bool ConnectionSuccess; // 0x32(0x01)
	bool JustConnected; // 0x40(0x01)
	float WaitingForConnectionTime; // 0x44(0x04)
	struct ULowEntryRawSocketConnection* SocketConnection; // 0x48(0x08)
	int32_t LatentUUID; // 0x50(0x04)
	char pad_2CFF6944[0x314]; // 0x2cff6944(0x314)
};

// Class LowEntrySocketConnection.LowEntrySocketConnection
// Size: 0x2cff6ad8 (Inherited: 0x2cff6930)
struct ULowEntrySocketConnection : UObject {
	struct ULowEntrySocketConnectionListenerCode* ListenerCode; // 0x40(0x08)
	struct FString Host; // 0x48(0x10)
	int32_t Port; // 0x58(0x04)
	int32_t PortUdp; // 0x5c(0x04)
	int32_t NextConnectionValidationFunctionCallId; // 0x60(0x04)
	int32_t NextFunctionCallId; // 0x64(0x04)
	int32_t NextLatentFunctionCallId; // 0xb8(0x04)
	struct TArray<char> SendingBytes; // 0x110(0x10)
	struct TArray<char> ReceivedBytes; // 0x120(0x10)
	struct TArray<char> ReceivingBuffer; // 0x130(0x10)
	char ReceivingType; // 0x141(0x01)
	int32_t ReceivingFunctionCallId; // 0x144(0x04)
	int32_t ReceivingPacketSize; // 0x148(0x04)
	struct TArray<char> ReceivingPacket; // 0x150(0x10)
	bool WaitingForConnectionValidationResponse; // 0x170(0x01)
	float ConnectionValidationResponseTime; // 0x174(0x04)
	float ConnectionValidationDelayTime; // 0x178(0x04)
	float LatentFunctionConnectionValidationDelayTime; // 0x17c(0x04)
	int32_t ConnectionValidationFunctionCallId; // 0x180(0x04)
	bool PeriodicConnectionValidationEnabled; // 0x184(0x01)
	bool CanCallOnDisconnect; // 0x185(0x01)
	struct FDelegate OnConnectEvent; // 0x188(0x14)
	struct FDelegate OnDisconnectEvent; // 0x19c(0x14)
	struct FDelegate OnReceiveMessageEvent; // 0x1b0(0x14)
	struct FDelegate OnReceiveUnreliableMessageEvent; // 0x1c4(0x14)
	char pad_2CFF6A08[0xd0]; // 0x2cff6a08(0xd0)

	void SetPeriodicConnectionValidationEnabled(bool Enabled); // Function LowEntrySocketConnection.LowEntrySocketConnection.SetPeriodicConnectionValidationEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x12a96f0
	void SendUnreliableMessage(struct TArray<char>& Bytes); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendUnreliableMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12a9640
	void SendMessage(struct TArray<char>& Bytes); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12a94e0
	void SendLatentFunctionCall(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, enum class ELowEntryLatentFunctionCallAction Branch, struct TArray<char>& Bytes, bool& Failed, bool& Canceled, struct TArray<char>& ResponseBytes, float Timeout); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendLatentFunctionCall // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12a9150
	void SendFunctionCall(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct TArray<char>& Bytes, bool& SUCCESS, struct TArray<char>& ResponseBytes, float Timeout); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendFunctionCall // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12a8f00
	void SendConnectionValidation(float Timeout); // Function LowEntrySocketConnection.LowEntrySocketConnection.SendConnectionValidation // (Final|Native|Public|BlueprintCallable) // @ game+0x12a8e80
	void IsPeriodicConnectionValidationEnabled(bool& Enabled); // Function LowEntrySocketConnection.LowEntrySocketConnection.IsPeriodicConnectionValidationEnabled // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x12a7ed0
	bool IsConnected(); // Function LowEntrySocketConnection.LowEntrySocketConnection.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7ea0
	int32_t GetPortUdp(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetPortUdp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7e40
	int32_t GetPort(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetPort // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7e10
	int32_t GetLocalPortUdp(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPortUdp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7de0
	int32_t GetLocalPort(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetLocalPort // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7db0
	struct FString GetHost(); // Function LowEntrySocketConnection.LowEntrySocketConnection.GetHost // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x12a7d30
	void Disconnect(); // Function LowEntrySocketConnection.LowEntrySocketConnection.Disconnect // (Final|Native|Public|BlueprintCallable) // @ game+0x12a7d10
	void Connect(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, bool& SUCCESS); // Function LowEntrySocketConnection.LowEntrySocketConnection.Connect // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x12a7190
};

// Class LowEntrySocketConnection.LowEntrySocketConnectionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULowEntrySocketConnectionLibrary : UBlueprintFunctionLibrary {

	void Relisten(struct ULowEntrySocketConnection* SocketConnection, struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.Relisten // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a8d60
	void RawConnection_Relisten(struct ULowEntryRawSocketConnection* SocketConnection, struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.RawConnection_Relisten // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a8c40
	void RawConnection_Destroy(struct ULowEntryRawSocketConnection* SocketConnection); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.RawConnection_Destroy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a8bd0
	struct ULowEntryRawSocketConnection* RawConnection_CreateWithUdpCustomBufferSize(struct FString Host, int32_t PortTcp, int32_t PortUdp, int32_t BufferSize, struct FDelegate OnConnect, struct FDelegate OnDisconnect, struct FDelegate OnReceiveBytes, struct FDelegate OnReceiveUnreliableBytes); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.RawConnection_CreateWithUdpCustomBufferSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a88f0
	struct ULowEntryRawSocketConnection* RawConnection_CreateWithUdp(struct FString Host, int32_t PortTcp, int32_t PortUdp, struct FDelegate OnConnect, struct FDelegate OnDisconnect, struct FDelegate OnReceiveBytes, struct FDelegate OnReceiveUnreliableBytes); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.RawConnection_CreateWithUdp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a8650
	struct ULowEntryRawSocketConnection* RawConnection_CreateUdpOnlyCustomBufferSize(struct FString Host, int32_t PortUdp, int32_t BufferSize, struct FDelegate OnReceiveUnreliableBytes); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.RawConnection_CreateUdpOnlyCustomBufferSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a84e0
	struct ULowEntryRawSocketConnection* RawConnection_CreateUdpOnly(struct FString Host, int32_t PortUdp, struct FDelegate OnReceiveUnreliableBytes); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.RawConnection_CreateUdpOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a8390
	struct ULowEntryRawSocketConnection* RawConnection_CreateCustomBufferSize(struct FString Host, int32_t Port, int32_t BufferSize, struct FDelegate OnConnect, struct FDelegate OnDisconnect, struct FDelegate OnReceiveBytes); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.RawConnection_CreateCustomBufferSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a8160
	struct ULowEntryRawSocketConnection* RawConnection_Create(struct FString Host, int32_t Port, struct FDelegate OnConnect, struct FDelegate OnDisconnect, struct FDelegate OnReceiveBytes); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.RawConnection_Create // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a7f60
	void Connection_Destroy(struct ULowEntrySocketConnection* SocketConnection); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.Connection_Destroy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a7c80
	struct ULowEntrySocketConnection* Connection_CreateWithUdpCustomBufferSize(struct FString Host, int32_t PortTcp, int32_t PortUdp, int32_t BufferSize, struct FDelegate OnConnect, struct FDelegate OnDisconnect, struct FDelegate OnReceiveMessage, struct FDelegate OnReceiveUnreliableMessage); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.Connection_CreateWithUdpCustomBufferSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a79a0
	struct ULowEntrySocketConnection* Connection_CreateWithUdp(struct FString Host, int32_t PortTcp, int32_t PortUdp, struct FDelegate OnConnect, struct FDelegate OnDisconnect, struct FDelegate OnReceiveMessage, struct FDelegate OnReceiveUnreliableMessage); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.Connection_CreateWithUdp // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a7700
	struct ULowEntrySocketConnection* Connection_CreateCustomBufferSize(struct FString Host, int32_t Port, int32_t BufferSize, struct FDelegate OnConnect, struct FDelegate OnDisconnect, struct FDelegate OnReceiveMessage); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.Connection_CreateCustomBufferSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a74d0
	struct ULowEntrySocketConnection* Connection_Create(struct FString Host, int32_t Port, struct FDelegate OnConnect, struct FDelegate OnDisconnect, struct FDelegate OnReceiveMessage); // Function LowEntrySocketConnection.LowEntrySocketConnectionLibrary.Connection_Create // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x12a72d0
};

// Class LowEntrySocketConnection.LowEntrySocketConnectionListenerCode
// Size: 0x2cff6a58 (Inherited: 0x2cff6930)
struct ULowEntrySocketConnectionListenerCode : UObject {
	bool Stopped; // 0x30(0x01)
	bool RunExec; // 0x31(0x01)
	bool ConnectionSuccess; // 0x32(0x01)
	bool JustConnected; // 0x40(0x01)
	float WaitingForConnectionTime; // 0x44(0x04)
	struct ULowEntrySocketConnection* SocketConnection; // 0x48(0x08)
	int32_t LatentUUID; // 0x50(0x04)
	char pad_2CFF6944[0x114]; // 0x2cff6944(0x114)
};

