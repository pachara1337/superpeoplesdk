// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_Success_Perk_OpenPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Popup_Alpha_Bg_Black; // 0x290(0x08)
	struct UButton* btn_OK; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UHorizontalBox* Perk_List; // 0x2a8(0x08)
	struct UUW-Lobby_Craft_Success_Perk_Open_C* UW-Lobby_Craft_Success_Perk_Open; // 0x2b0(0x08)
	struct UUW-Lobby_Craft_Success_Perk_Open_C* UW-Lobby_Craft_Success_Perk_Open; // 0x2b8(0x08)
	struct UUW-Lobby_Craft_Success_Perk_Open_C* UW-Lobby_Craft_Success_Perk_Open; // 0x2c0(0x08)
	struct FMulticastInlineDelegate EventDispatcher_OnClosePerkPopup; // 0x2c8(0x10)

	void SetOptionList(struct TArray<struct FItemOption>& OptionList); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.SetOptionList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_OpenPopup(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_OpenPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_OnClosePerkPopup__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_OpenPopup.UW-Lobby_Craft_Success_Perk_OpenPopup_C.EventDispatcher_OnClosePerkPopup__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

