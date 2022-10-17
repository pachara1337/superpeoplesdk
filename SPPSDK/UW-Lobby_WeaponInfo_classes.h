// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo.UW-Lobby_WeaponInfo_C
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a88)
struct UUW-Lobby_WeaponInfo_C : UUserWidget {
	struct UImage* Image; // 0x288(0x08)
	struct UUW-Lobby_ItemName_C* UW-Lobby_ItemName; // 0x290(0x08)
	struct UUW-Lobby_WeaponInfo_Stat_C* UW-Lobby_WeaponInfo_Stat; // 0x298(0x08)

	void SetPerkNameVisibility(bool Show); // Function UW-Lobby_WeaponInfo.UW-Lobby_WeaponInfo_C.SetPerkNameVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponInfo(int32_t WeaponItemID, struct TArray<int32_t>& Option); // Function UW-Lobby_WeaponInfo.UW-Lobby_WeaponInfo_C.SetWeaponInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

