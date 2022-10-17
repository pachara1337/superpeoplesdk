// WidgetBlueprintGeneratedClass UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C
// Size: 0x2cff6a30 (Inherited: 0x2cff6a88)
struct UUW-Lobby_ArmoryMain_C : UUserWidget {
	struct UWidgetAnimation* ShowAnim; // 0x288(0x08)
	struct UUW-Lobby_Armory_Recipe_C* UW-Lobby_Armory_Recipe; // 0x290(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x298(0x08)
	int32_t Gold; // 0x2a0(0x04)
	struct TArray<struct FResponse_Weapon_List_Data> WeaponList; // 0x2a8(0x10)
	struct TArray<struct FResponse_MaterialList_Data> MaterialList; // 0x2b8(0x10)
	struct TArray<int32_t> ItemWeaponIDList; // 0x2c8(0x10)
	struct TArray<int32_t> LastItemWeaponIDList; // 0x2d8(0x10)
	struct TArray<int32_t> NewWeaponList; // 0x2e8(0x10)
	struct TArray<int32_t> MaterialIDList; // 0x2f8(0x10)
	struct TArray<int32_t> LastMaterialIDList; // 0x308(0x10)
	struct TArray<int32_t> NewMaterialList; // 0x318(0x10)
	struct TArray<struct FName> NewCraftIDList; // 0x328(0x10)
	struct FResponse_CraftWeapon_Data CraftWeaponInfo; // 0x338(0xc0)
	struct FString MainTabName; // 0x3f8(0x10)
	struct FString ArmoryTabName; // 0x408(0x10)
	bool bNeedCheckWeaponList; // 0x418(0x01)
	bool bNeedCheckMaterialList; // 0x419(0x01)
	struct FString SubTabName; // 0x420(0x10)

	void NotifyNewItemToCoh(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.NotifyNewItemToCoh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RemoveNewCraftingList(struct FName ID); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.RemoveNewCraftingList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateNewCraftingSlots(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewCraftingSlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateNewMaterialList(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewMaterialList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateNewWeaponList(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.UpdateNewWeaponList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateCraftWeaponPerkPopup(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CreateCraftWeaponPerkPopup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EndCraft(); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.EndCraft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartCraft(struct FResponse_CraftWeapon_Data& CraftWeapon); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.StartCraft // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetOwnWeaponCount(int32_t BaseWeaponID, int32_t& Count); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.GetOwnWeaponCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetOwnItemCount(int32_t ItemId, int32_t& Count); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.GetOwnItemCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckOwnWeapon(int32_t WeaponItemID, bool& IsOwn); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CheckOwnWeapon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckOwnItems(struct TArray<int32_t>& ItemId, bool& AllOwn, int32_t& OwnCount); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.CheckOwnItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnChangedMaterialList(struct TArray<struct FResponse_MaterialList_Data>& MaterialList); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedMaterialList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedWeaponList(struct TArray<struct FResponse_Weapon_List_Data>& WeaponList); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedWeaponList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedGold(int32_t Gold); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedGold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedArmoryTab(struct FString TabName); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedArmoryTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedMainTab(struct FString MainTabName, struct FString SubTabName); // Function UW-Lobby_ArmoryMain.UW-Lobby_ArmoryMain_C.OnChangedMainTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

