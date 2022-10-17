// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a88)
struct UUW-Lobby_WeaponInfo_OptionList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UUW-Lobby_WeaponInfo_Option_Slot_C* UW-Lobby_WeaponInfo_Option_Slot; // 0x290(0x08)
	struct UUW-Lobby_WeaponInfo_Option_Slot_C* UW-Lobby_WeaponInfo_Option_Slot; // 0x298(0x08)
	struct UUW-Lobby_WeaponInfo_Option_Slot_C* UW-Lobby_WeaponInfo_Option_Slot; // 0x2a0(0x08)
	struct UUW-Lobby_WeaponInfo_Option_Slot_C* UW-Lobby_WeaponInfo_Option_Slot; // 0x2a8(0x08)
	struct UVerticalBox* VerticalBox_OptionList; // 0x2b0(0x08)

	void AddOptionList(struct FItemOption& ItemOption); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.AddOptionList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOptionList(struct TArray<int32_t>& OptionIDList); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.SetOptionList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList(int32_t EntryPoint); // Function UW-Lobby_WeaponInfo_OptionList.UW-Lobby_WeaponInfo_OptionList_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_OptionList // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

