// WidgetBlueprintGeneratedClass UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C
// Size: 0x2cff6a40 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_Success_Perk_Close_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image_Arrow_Guide; // 0x2b0(0x08)
	struct UImage* Img_hover; // 0x2b8(0x08)
	struct UImage* Img_Pressed; // 0x2c0(0x08)
	struct UUW-Lobby_Craft_Success_Perk_Slot_C* UW-Lobby_Craft_Success_Perk_Slot; // 0x2c8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x2d0(0x08)
	struct FMulticastInlineDelegate EventDispatcher_EndOpen; // 0x2d8(0x10)
	struct FItemOption ItemOption; // 0x2e8(0x130)
	bool IsOpened; // 0x418(0x01)
	float CurrentHoverOpacity; // 0x41c(0x04)
	struct UMaterialInstanceDynamic* PressedMaterialInstance; // 0x420(0x08)
	float CurrentPressedAnim; // 0x428(0x04)
	struct FMulticastInlineDelegate EventDispatcher_StartOpen; // 0x430(0x10)

	void SetItemOption(struct FItemOption& ItemOption); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.SetItemOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.BndEvt__Button_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetIsOpened(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.SetIsOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayPressed(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.PlayPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopPressed(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.StopPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OpenPerk(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.OpenPerk // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ReversePerk(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.ReversePerk // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Close(int32_t EntryPoint); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.ExecuteUbergraph_UW-Lobby_Craft_Success_Perk_Close // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_StartOpen__DelegateSignature(); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.EventDispatcher_StartOpen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_EndOpen__DelegateSignature(struct FItemOption ItemOption); // Function UW-Lobby_Craft_Success_Perk_Close.UW-Lobby_Craft_Success_Perk_Close_C.EventDispatcher_EndOpen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

