// WidgetBlueprintGeneratedClass UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C
// Size: 0x2cff6a70 (Inherited: 0x2cff6a88)
struct UUW-Inventory_PopupPerkSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct FPerkUIInfo PerkInfo; // 0x2a8(0x40)
	struct FPerkData PerkData; // 0x2e8(0xf0)
	struct FSlateBrush IconBrush; // 0x3d8(0x90)
	struct UUW-Inventory_ItemSlotHover_C* Popup; // 0x468(0x08)

	struct FLinearColor GetColorAndOpacity(); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.GetColorAndOpacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetBG(); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetBG // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIcon(); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPerk(struct FPerkUIInfo PerkInfo); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.SetPerk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB(struct UObject* Loaded); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnLoaded_E4FEEA874F6096BAF3D0FB94F9EE8AAB // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIcon(struct TSoftObjectPtr<UObject> Image); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.AsyncLoadIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_PopupPerkSlot(int32_t EntryPoint); // Function UW-Inventory_PopupPerkSlot.UW-Inventory_PopupPerkSlot_C.ExecuteUbergraph_UW-Inventory_PopupPerkSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

