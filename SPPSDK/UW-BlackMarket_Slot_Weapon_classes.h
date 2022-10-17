// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a48)
struct UUW-BlackMarket_Slot_Weapon_C : UUW-BlackMarket_Slot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UButton* BTN-Menu02; // 0x450(0x08)
	struct UButton* BTN-Menu03; // 0x458(0x08)
	struct UButton* BTN-Menu04; // 0x460(0x08)
	struct UButton* BTN-Menu05; // 0x468(0x08)
	struct UButton* BTN-Menu06; // 0x470(0x08)
	struct UButton* BTN-Menu07; // 0x478(0x08)
	struct UButton* BTN-Menu08; // 0x480(0x08)
	struct UButton* BTN-Menu09; // 0x488(0x08)
	struct UButton* BTN-Menu10; // 0x490(0x08)
	struct UButton* BTN-Menu11; // 0x498(0x08)
	struct UCanvasPanel* CP-SlotInfo; // 0x4a0(0x08)
	struct UImage* IMG-BG; // 0x4a8(0x08)
	struct UImage* IMG-BG-Border; // 0x4b0(0x08)
	struct UImage* IMG-Item; // 0x4b8(0x08)
	struct UImage* IMG-Mask; // 0x4c0(0x08)
	struct UImage* IMG-Over; // 0x4c8(0x08)
	struct UImage* IMG-Over-Border; // 0x4d0(0x08)
	struct UOverlay* Menu02; // 0x4d8(0x08)
	struct UOverlay* Menu03; // 0x4e0(0x08)
	struct UOverlay* Menu04; // 0x4e8(0x08)
	struct UOverlay* Menu05; // 0x4f0(0x08)
	struct UOverlay* Menu06; // 0x4f8(0x08)
	struct UOverlay* Menu07; // 0x500(0x08)
	struct UOverlay* Menu08; // 0x508(0x08)
	struct UOverlay* Menu09; // 0x510(0x08)
	struct UOverlay* Menu10; // 0x518(0x08)
	struct UOverlay* Menu11; // 0x520(0x08)
	struct UOverlay* Overlay_Mask; // 0x528(0x08)
	struct UTextBlock* TXT-Ammo; // 0x530(0x08)
	struct UTextBlock* TXT-Damage; // 0x538(0x08)
	struct UTextBlock* TXT-FireMode; // 0x540(0x08)
	struct UTextBlock* TXT-FireRate; // 0x548(0x08)
	struct UTextBlock* TXT-ItemName; // 0x550(0x08)
	struct UTextBlock* TXT-MagSize; // 0x558(0x08)
	struct UTextBlock* TXT-Menu01; // 0x560(0x08)
	struct UTextBlock* TXT-Menu02; // 0x568(0x08)
	struct UTextBlock* TXT-Menu03; // 0x570(0x08)
	struct UTextBlock* TXT-Menu04; // 0x578(0x08)
	struct UTextBlock* TXT-Menu05; // 0x580(0x08)
	struct UTextBlock* TXT-Menu06; // 0x588(0x08)
	struct UTextBlock* TXT-Menu07; // 0x590(0x08)
	struct UTextBlock* TXT-Menu08; // 0x598(0x08)
	struct UTextBlock* TXT-Menu09; // 0x5a0(0x08)
	struct UTextBlock* TXT-Menu10; // 0x5a8(0x08)
	struct UTextBlock* TXT-Menu11; // 0x5b0(0x08)
	struct UTextBlock* TXT-MoveSpeed; // 0x5b8(0x08)
	struct UTextBlock* TXT-ProjectileVelocity; // 0x5c0(0x08)
	struct UTextBlock* TXT-ReloadTime; // 0x5c8(0x08)
	struct UTextBlock* TXT-Weight; // 0x5d0(0x08)

	void SetIconTexture(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SetIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-BG_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.On_IMG-BG_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_9693EBAC46E1F6BA769CC6A2AB0B68E0(struct UObject* Loaded); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnLoaded_9693EBAC46E1F6BA769CC6A2AB0B68E0 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AysncLoading(struct TSoftObjectPtr<UPaperSprite> IconTexture); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.AysncLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchMenu(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SwitchMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SwitchSlot(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.SwitchSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu02_K2Node_ComponentBoundEvent_95_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu03_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu04_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu05_K2Node_ComponentBoundEvent_589_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_609_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu06_K2Node_ComponentBoundEvent_609_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_630_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu07_K2Node_ComponentBoundEvent_630_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu08_K2Node_ComponentBoundEvent_652_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_675_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu09_K2Node_ComponentBoundEvent_675_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu10_K2Node_ComponentBoundEvent_699_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu10_K2Node_ComponentBoundEvent_699_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BTN-Menu11_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.BndEvt__BTN-Menu11_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BlackMarket_Slot_Weapon(int32_t EntryPoint); // Function UW-BlackMarket_Slot_Weapon.UW-BlackMarket_Slot_Weapon_C.ExecuteUbergraph_UW-BlackMarket_Slot_Weapon // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

