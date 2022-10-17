// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a48)
struct UUW-BlackMarket_Slot_Custom_C : UUW-BlackMarket_Slot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UButton* BTN-Menu02; // 0x450(0x08)
	struct UCanvasPanel* CP-SlotInfo; // 0x458(0x08)
	struct UImage* IMG-BG; // 0x460(0x08)
	struct UImage* IMG-BG-Border; // 0x468(0x08)
	struct UImage* IMG-Item; // 0x470(0x08)
	struct UImage* IMG-Mask; // 0x478(0x08)
	struct UImage* IMG-Over; // 0x480(0x08)
	struct UImage* IMG-Over-Border; // 0x488(0x08)
	struct UOverlay* Menu02; // 0x490(0x08)
	struct UOverlay* Overlay_Mask; // 0x498(0x08)
	struct UTextBlock* TXT-ItemName; // 0x4a0(0x08)
	struct UTextBlock* TXT-Menu01; // 0x4a8(0x08)
	struct UTextBlock* TXT-Menu02; // 0x4b0(0x08)

	void SetSlotInfo(struct FBravoHotelBlackMarketDataType BlackmarketDataInfo); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SetSlotInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnClick(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnClick // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SetIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_7C34C7D64FB053FED5EAACB72A3EAAD0(struct UObject* Loaded); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnLoaded_7C34C7D64FB053FED5EAACB72A3EAAD0 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.AysncLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SwitchMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.SwitchSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BlackMarket_Slot_Custom(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Custom.UW-BlackMarket_Slot_Custom_C.ExecuteUbergraph_UW-BlackMarket_Slot_Custom // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

