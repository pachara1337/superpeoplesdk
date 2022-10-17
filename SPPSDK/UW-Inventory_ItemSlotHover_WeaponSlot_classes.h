// WidgetBlueprintGeneratedClass UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a88)
struct UUW-Inventory_ItemSlotHover_WeaponSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_Grade_Color_Line; // 0x2a0(0x08)
	struct UTextBlock* TextBlock; // 0x2a8(0x08)

	void SetBuffInfo(struct FText BuffName, struct FText Desc, struct TSoftObjectPtr<UObject> Icon, int32_t Rarity); // Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.SetBuffInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1(struct UObject* Loaded); // Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.OnLoaded_EBF7B6BF4C04ABB8FF3715B4F6A51AD1 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UObject> IconTexture); // Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_ItemSlotHover_WeaponSlot(int32_t EntryPoint); // Function UW-Inventory_ItemSlotHover_WeaponSlot.UW-Inventory_ItemSlotHover_WeaponSlot_C.ExecuteUbergraph_UW-Inventory_ItemSlotHover_WeaponSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

