// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C
// Size: 0x2cff6a98 (Inherited: 0x2cff6a48)
struct UUW-BlackMarket_Slot_Attachment_C : UUW-BlackMarket_Slot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UButton* BTN-Menu02; // 0x450(0x08)
	struct UButton* BTN-Menu03; // 0x458(0x08)
	struct UButton* BTN-Menu04; // 0x460(0x08)
	struct UButton* BTN-Menu05; // 0x468(0x08)
	struct UButton* BTN-Menu06; // 0x470(0x08)
	struct UButton* BTN-Menu07; // 0x478(0x08)
	struct UButton* BTN-Menu08; // 0x480(0x08)
	struct UButton* BTN-Menu09; // 0x488(0x08)
	struct UCanvasPanel* CP-SlotInfo; // 0x490(0x08)
	struct UImage* IMG-BG; // 0x498(0x08)
	struct UImage* IMG-BG-Border; // 0x4a0(0x08)
	struct UImage* IMG-Item; // 0x4a8(0x08)
	struct UImage* IMG-Mask; // 0x4b0(0x08)
	struct UImage* IMG-Over; // 0x4b8(0x08)
	struct UImage* IMG-Over-Border; // 0x4c0(0x08)
	struct UOverlay* Menu02; // 0x4c8(0x08)
	struct UOverlay* Menu03; // 0x4d0(0x08)
	struct UOverlay* Menu04; // 0x4d8(0x08)
	struct UOverlay* Menu05; // 0x4e0(0x08)
	struct UOverlay* Menu06; // 0x4e8(0x08)
	struct UOverlay* Menu07; // 0x4f0(0x08)
	struct UOverlay* Menu08; // 0x4f8(0x08)
	struct UOverlay* Menu09; // 0x500(0x08)
	struct UOverlay* Overlay_Mask; // 0x508(0x08)
	struct UTextBlock* TXT-ContinuousSpeed; // 0x510(0x08)
	struct UTextBlock* TXT-Horizental; // 0x518(0x08)
	struct UTextBlock* TXT-ItemName; // 0x520(0x08)
	struct UTextBlock* TXT-Menu01; // 0x528(0x08)
	struct UTextBlock* TXT-Menu02; // 0x530(0x08)
	struct UTextBlock* TXT-Menu03; // 0x538(0x08)
	struct UTextBlock* TXT-Menu04; // 0x540(0x08)
	struct UTextBlock* TXT-Menu05; // 0x548(0x08)
	struct UTextBlock* TXT-Menu06; // 0x550(0x08)
	struct UTextBlock* TXT-Menu07; // 0x558(0x08)
	struct UTextBlock* TXT-Menu08; // 0x560(0x08)
	struct UTextBlock* TXT-Menu09; // 0x568(0x08)
	struct UTextBlock* TXT-MovingSpeed; // 0x570(0x08)
	struct UTextBlock* TXT-Reload; // 0x578(0x08)
	struct UTextBlock* TXT-Type; // 0x580(0x08)
	struct UTextBlock* TXT-Vertical; // 0x588(0x08)
	struct UTextBlock* TXT-Weight; // 0x590(0x08)

	struct FEventReply On_IMG-BG_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.On_IMG-BG_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SetIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_F81B5B0343A0A1A16D1EBABD173C2F15(struct UObject* Loaded); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnLoaded_F81B5B0343A0A1A16D1EBABD173C2F15 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.AysncLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SwitchMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.SwitchSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_220_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_237_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_237_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_294_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_294_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_315_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_315_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_337_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BlackMarket_Slot_Attachment(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Attachment.UW-BlackMarket_Slot_Attachment_C.ExecuteUbergraph_UW-BlackMarket_Slot_Attachment // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

