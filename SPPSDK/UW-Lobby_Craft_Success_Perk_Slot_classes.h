// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C
// Size: 0x2cff6b20 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_Success_Perk_Slot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* perk_Icon_Scale; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Img_GradeBG; // 0x2e0(0x08)
	struct UImage* Img_Icon; // 0x2e8(0x08)
	struct FItemOption ItemOptionInfo; // 0x2f0(0x130)

	void SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot(); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SequenceEvent__ENTRYPOINTUW-Lobby_Craft_Success_Perk_Slot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlaySoundSpread(); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlaySoundSpread // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemOption(struct FItemOption& ItemOption); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.SetItemOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_6CB9F6B747A71C38876DC8AFD4771124(struct UObject* Loaded); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnLoaded_6CB9F6B747A71C38876DC8AFD4771124 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadImg(struct TSoftObjectPtr<UObject> Object); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.AsyncLoadImg // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void PlayOpenAnim(); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.PlayOpenAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_Slot.UW-Lobby_Craft_Success_Perk_Slot_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Slot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

