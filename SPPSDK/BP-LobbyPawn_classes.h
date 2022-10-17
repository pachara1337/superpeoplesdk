// BlueprintGeneratedClass BP-LobbyPawn.BP-LobbyPawn_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6ab0)
struct ABP-LobbyPawn_C : ABravoHotelLobbyCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x41b0(0x08)
	int32_t PawnIndex; // 0x41b8(0x04)
	struct ABravoHotelPlayerState* BravoHotelPlayerStateClass; // 0x41c0(0x08)
	bool bReady; // 0x41c8(0x01)
	bool bMatchSuccess; // 0x41c9(0x01)
	bool bIsFaceCustomizing; // 0x41ca(0x01)
	struct FString ScenePage; // 0x41d0(0x10)
	char pad_2CFF6AD7[0x9]; // 0x2cff6ad7(0x09)

	void ReceiveBeginPlay(); // Function BP-LobbyPawn.BP-LobbyPawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnEquipWeapon(); // Function BP-LobbyPawn.BP-LobbyPawn_C.OnEquipWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitCustomizableObjectInstance(); // Function BP-LobbyPawn.BP-LobbyPawn_C.InitCustomizableObjectInstance // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-LobbyPawn(int32_t EntryPoint); // Function BP-LobbyPawn.BP-LobbyPawn_C.ExecuteUbergraph_BP-LobbyPawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

