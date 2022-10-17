// Class BattlEyeCommon.BattlEyeNetComponent
// Size: 0x2cff6ad0 (Inherited: 0x2cff6cb8)
struct UBattlEyeNetComponent : UActorComponent {

	void ServerMessageSLS(struct FString Extra, struct FString Token, uint64_t Cid); // Function BattlEyeCommon.BattlEyeNetComponent.ServerMessageSLS // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x18d9d50
	void ServerMessage(struct TArray<char> Message); // Function BattlEyeCommon.BattlEyeNetComponent.ServerMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x18d9c90
	void ServerKickTest(struct FString Message); // Function BattlEyeCommon.BattlEyeNetComponent.ServerKickTest // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x18d9bc0
	void ServerCommand(struct FString Command); // Function BattlEyeCommon.BattlEyeNetComponent.ServerCommand // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x18d9af0
	void ClientMessage(struct TArray<char> Message); // Function BattlEyeCommon.BattlEyeNetComponent.ClientMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x18d9a50
	void ClientInit(); // Function BattlEyeCommon.BattlEyeNetComponent.ClientInit // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x18d9a30
};

