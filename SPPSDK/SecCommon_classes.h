// Class SecCommon.SecNetComponent
// Size: 0x2cff6ac0 (Inherited: 0x2cff6cb8)
struct USecNetComponent : UActorComponent {

	void ServerMessageWLV(struct FString Message); // Function SecCommon.SecNetComponent.ServerMessageWLV // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x18dd950
	void ServerMessage(struct FString Message); // Function SecCommon.SecNetComponent.ServerMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x18dd880
	void ClientMessage(struct FString Message); // Function SecCommon.SecNetComponent.ClientMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x18dd7d0
};

