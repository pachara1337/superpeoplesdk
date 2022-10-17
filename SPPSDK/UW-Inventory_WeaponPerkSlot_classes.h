// WidgetBlueprintGeneratedClass UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C
// Size: 0x2cff6ae8 (Inherited: 0x2cff6a88)
struct UUW-Inventory_WeaponPerkSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* WeaponPerk_ani; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_Grade_Color_Line; // 0x2a8(0x08)
	struct FItemOption ItemOption; // 0x2b0(0x130)
	struct UUW-Inventory_ItemSlotHover_C* ItemSlotHoverWidgetRef; // 0x3e0(0x08)

	void SetBuffIconByItemOption(struct FItemOption ItemOption, struct UUserWidget* HoverWidgetRef); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.SetBuffIconByItemOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBuffIcon(struct TSoftObjectPtr<UObject> Icon, int32_t Rarity); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.SetBuffIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_F0D528FA4CCA8F059BD99488566476C1(struct UObject* Loaded); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.OnLoaded_F0D528FA4CCA8F059BD99488566476C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UObject> IconTexture); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_WeaponPerkSlot(int32_t EntryPoint); // Function UW-Inventory_WeaponPerkSlot.UW-Inventory_WeaponPerkSlot_C.ExecuteUbergraph_UW-Inventory_WeaponPerkSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

