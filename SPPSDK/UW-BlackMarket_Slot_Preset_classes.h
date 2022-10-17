// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a48)
struct UUW-BlackMarket_Slot_Preset_C : UUW-BlackMarket_Slot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UButton* BTN-Menu02; // 0x450(0x08)
	struct UButton* BTN-Menu03; // 0x458(0x08)
	struct UCanvasPanel* CP-SlotInfo; // 0x460(0x08)
	struct UImage* IMG-BG; // 0x468(0x08)
	struct UImage* IMG-BG-Border; // 0x470(0x08)
	struct UImage* IMG-Item; // 0x478(0x08)
	struct UImage* IMG-Mask; // 0x480(0x08)
	struct UImage* IMG-Over; // 0x488(0x08)
	struct UImage* IMG-Over-Border; // 0x490(0x08)
	struct UOverlay* Menu02; // 0x498(0x08)
	struct UOverlay* Menu03; // 0x4a0(0x08)
	struct UOverlay* Overlay_Mask; // 0x4a8(0x08)
	struct UTextBlock* TXT-ItemDesc; // 0x4b0(0x08)
	struct UTextBlock* TXT-ItemName; // 0x4b8(0x08)
	struct UTextBlock* TXT-Menu01; // 0x4c0(0x08)
	struct UTextBlock* TXT-Menu02; // 0x4c8(0x08)
	struct UTextBlock* TXT-Menu03; // 0x4d0(0x08)

	void SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.SetIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Over-Border_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.On_IMG-Over-Border_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_B9C38FBE4303B12CB7C28ABE281A371A(struct UObject* Loaded); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.OnLoaded_B9C38FBE4303B12CB7C28ABE281A371A // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.AysncLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.SwitchMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.SwitchSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void RunCommand(); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.RunCommand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BlackMarket_Slot_Preset(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Preset.UW-BlackMarket_Slot_Preset_C.ExecuteUbergraph_UW-BlackMarket_Slot_Preset // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

