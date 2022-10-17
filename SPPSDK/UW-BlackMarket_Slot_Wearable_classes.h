// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C
// Size: 0x2cff6a38 (Inherited: 0x2cff6a48)
struct UUW-BlackMarket_Slot_Wearable_C : UUW-BlackMarket_Slot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UButton* BTN-Menu02; // 0x450(0x08)
	struct UButton* BTN-Menu03; // 0x458(0x08)
	struct UButton* BTN-Menu04; // 0x460(0x08)
	struct UButton* BTN-Menu05; // 0x468(0x08)
	struct UButton* BTN-Menu06; // 0x470(0x08)
	struct UCanvasPanel* CP-SlotInfo; // 0x478(0x08)
	struct UImage* IMG-BG; // 0x480(0x08)
	struct UImage* IMG-BG-Border; // 0x488(0x08)
	struct UImage* IMG-Item; // 0x490(0x08)
	struct UImage* IMG-Mask; // 0x498(0x08)
	struct UImage* IMG-Over; // 0x4a0(0x08)
	struct UImage* IMG-Over-Border; // 0x4a8(0x08)
	struct UOverlay* Menu02; // 0x4b0(0x08)
	struct UOverlay* Menu03; // 0x4b8(0x08)
	struct UOverlay* Menu04; // 0x4c0(0x08)
	struct UOverlay* Menu05; // 0x4c8(0x08)
	struct UOverlay* Menu06; // 0x4d0(0x08)
	struct UOverlay* Overlay_Mask; // 0x4d8(0x08)
	struct UTextBlock* TXT-Armor; // 0x4e0(0x08)
	struct UTextBlock* TXT-Capacity; // 0x4e8(0x08)
	struct UTextBlock* TXT-DecreaseReloadTime; // 0x4f0(0x08)
	struct UTextBlock* TXT-ItemName; // 0x4f8(0x08)
	struct UTextBlock* TXT-Menu01; // 0x500(0x08)
	struct UTextBlock* TXT-Menu02; // 0x508(0x08)
	struct UTextBlock* TXT-Menu03; // 0x510(0x08)
	struct UTextBlock* TXT-Menu04; // 0x518(0x08)
	struct UTextBlock* TXT-Menu05; // 0x520(0x08)
	struct UTextBlock* TXT-Menu06; // 0x528(0x08)
	struct UTextBlock* TXT-Type; // 0x530(0x08)

	struct FEventReply On_IMG-BG_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.On_IMG-BG_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.SetIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_F6A17E404AD1BD4EA73593A8AF9F47DF(struct UObject* Loaded); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.OnLoaded_F6A17E404AD1BD4EA73593A8AF9F47DF // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.AysncLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.SwitchMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.SwitchSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_135_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_209_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BlackMarket_Slot_Wearable(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Wearable.UW-BlackMarket_Slot_Wearable_C.ExecuteUbergraph_UW-BlackMarket_Slot_Wearable // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

