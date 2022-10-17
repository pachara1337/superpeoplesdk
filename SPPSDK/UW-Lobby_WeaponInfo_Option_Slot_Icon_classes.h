// WidgetBlueprintGeneratedClass UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a88)
struct UUW-Lobby_WeaponInfo_Option_Slot_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image_Buff; // 0x290(0x08)
	struct UImage* Image_Grade_Color_Line; // 0x298(0x08)
	struct FItemOption ItemOption; // 0x2a0(0x130)

	void SetItemOption(struct FItemOption& ItemOption); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.SetItemOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753(struct UObject* Loaded); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnLoaded_6C8A793942B5F7D63CF7C5BA6F5F3753 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadImg(struct TSoftObjectPtr<UObject> Object); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.AsyncLoadImg // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon(int32_t EntryPoint); // Function UW-Lobby_WeaponInfo_Option_Slot_Icon.UW-Lobby_WeaponInfo_Option_Slot_Icon_C.ExecuteUbergraph_UW-Lobby_WeaponInfo_Option_Slot_Icon // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

