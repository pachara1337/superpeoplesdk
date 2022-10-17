// WidgetBlueprintGeneratedClass UW-Lobby_Craft_SlotBase.UW-Lobby_Craft_SlotBase_C
// Size: 0x2cff6a8a (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_SlotBase_C : UUserWidget {
	bool RButtonDown; // 0x288(0x01)
	bool bEpuipped; // 0x289(0x01)

	void IsEquipped(bool& Return); // Function UW-Lobby_Craft_SlotBase.UW-Lobby_Craft_SlotBase_C.IsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_SlotBase.UW-Lobby_Craft_SlotBase_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnRButtonClick(bool& bResult); // Function UW-Lobby_Craft_SlotBase.UW-Lobby_Craft_SlotBase_C.OnRButtonClick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_SlotBase.UW-Lobby_Craft_SlotBase_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

