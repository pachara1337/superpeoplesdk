// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory {
};

// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x2cff6a70 (Inherited: 0x2cff6a68)
struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1b68(0x01)
	char pad_2CFF6A69[0x7]; // 0x2cff6a69(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae0)
struct USteamNetDriver : UIpNetDriver {
	char pad_2CFF6AE0[0x8]; // 0x2cff6ae0(0x08)
};

