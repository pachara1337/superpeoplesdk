// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C
// Size: 0x2cff6b10 (Inherited: 0x2cff6a48)
struct UUW-BlackMarket_Slot_Perk_C : UUW-BlackMarket_Slot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UButton* BTN-Menu02; // 0x450(0x08)
	struct UButton* BTN-Menu03; // 0x458(0x08)
	struct UButton* BTN-Menu04; // 0x460(0x08)
	struct UCanvasPanel* CP-SlotInfo; // 0x468(0x08)
	struct UImage* IMG-BG; // 0x470(0x08)
	struct UImage* IMG-BG-Border; // 0x478(0x08)
	struct UImage* IMG-Item; // 0x480(0x08)
	struct UImage* IMG-Mask; // 0x488(0x08)
	struct UImage* IMG-Over; // 0x490(0x08)
	struct UImage* IMG-Over-Border; // 0x498(0x08)
	struct UOverlay* Menu02; // 0x4a0(0x08)
	struct UOverlay* Menu03; // 0x4a8(0x08)
	struct UOverlay* Menu04; // 0x4b0(0x08)
	struct UOverlay* Overlay_Mask; // 0x4b8(0x08)
	struct UTextBlock* TXT-ItemDesc; // 0x4c0(0x08)
	struct UTextBlock* TXT-ItemName; // 0x4c8(0x08)
	struct UTextBlock* TXT-ItemSlot; // 0x4d0(0x08)
	struct UTextBlock* TXT-Menu01; // 0x4d8(0x08)
	struct UTextBlock* TXT-Menu02; // 0x4e0(0x08)
	struct UTextBlock* TXT-Menu03; // 0x4e8(0x08)
	struct UTextBlock* TXT-Menu04; // 0x4f0(0x08)
	struct FText PerkSlot; // 0x4f8(0x18)

	void SetIconTexture(struct TSoftObjectPtr<UObject> IconTexture); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.SetIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Over-Border_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.On_IMG-Over-Border_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_9CBCD238440D1A899A0522A5A29885AA(struct UObject* Loaded); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.OnLoaded_9CBCD238440D1A899A0522A5A29885AA // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoading(struct TSoftObjectPtr<UObject> IconTexture); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.AysncLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.SwitchMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.SwitchSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetData(struct FBravoHotelBlackMarketDataType Data); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BlackMarket_Slot_Perk(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Perk.UW-BlackMarket_Slot_Perk_C.ExecuteUbergraph_UW-BlackMarket_Slot_Perk // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

