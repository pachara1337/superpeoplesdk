// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C
// Size: 0x2cff6b18 (Inherited: 0x2cff6a48)
struct UUW-BlackMarket_Slot_Ammo_C : UUW-BlackMarket_Slot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UButton* BTN-Menu02; // 0x450(0x08)
	struct UButton* BTN-Menu03; // 0x458(0x08)
	struct UButton* BTN-Menu04; // 0x460(0x08)
	struct UButton* BTN-Menu05; // 0x468(0x08)
	struct UCanvasPanel* CP-SlotInfo; // 0x470(0x08)
	struct UImage* IMG-BG; // 0x478(0x08)
	struct UImage* IMG-BG-Border; // 0x480(0x08)
	struct UImage* IMG-Item; // 0x488(0x08)
	struct UImage* IMG-Mask; // 0x490(0x08)
	struct UImage* IMG-Over; // 0x498(0x08)
	struct UImage* IMG-Over-Border; // 0x4a0(0x08)
	struct UOverlay* Menu02; // 0x4a8(0x08)
	struct UOverlay* Menu03; // 0x4b0(0x08)
	struct UOverlay* Menu04; // 0x4b8(0x08)
	struct UOverlay* Menu05; // 0x4c0(0x08)
	struct UOverlay* Overlay_Mask; // 0x4c8(0x08)
	struct UTextBlock* TXT-Count; // 0x4d0(0x08)
	struct UTextBlock* TXT-ItemName; // 0x4d8(0x08)
	struct UTextBlock* TXT-Menu01; // 0x4e0(0x08)
	struct UTextBlock* TXT-Menu02; // 0x4e8(0x08)
	struct UTextBlock* TXT-Menu03; // 0x4f0(0x08)
	struct UTextBlock* TXT-Menu04; // 0x4f8(0x08)
	struct UTextBlock* TXT-Menu05; // 0x500(0x08)
	struct UTextBlock* TXT-TotalWeight; // 0x508(0x08)
	struct UTextBlock* TXT-Weight; // 0x510(0x08)

	struct FEventReply On_IMG-BG_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.On_IMG-BG_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.SetIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_CF7AEC2246CE5FCA548190A8C8AE4FB8(struct UObject* Loaded); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.OnLoaded_CF7AEC2246CE5FCA548190A8C8AE4FB8 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.AysncLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.SwitchMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.SwitchSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BlackMarket_Slot_Ammo(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Ammo.UW-BlackMarket_Slot_Ammo_C.ExecuteUbergraph_UW-BlackMarket_Slot_Ammo // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

