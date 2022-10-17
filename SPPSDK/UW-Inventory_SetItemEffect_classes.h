// WidgetBlueprintGeneratedClass UW-Inventory_SetItemEffect.UW-Inventory_SetItemEffect_C
// Size: 0x2cff6acc (Inherited: 0x2cff6a88)
struct UUW-Inventory_SetItemEffect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTextBlock* TextBlock_Count; // 0x290(0x08)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C* UW-Inventory_ItemSlotHover_WeaponSlot; // 0x298(0x08)
	struct UUW-Inventory_ItemSlotHover_WeaponSlot_C* UW-Inventory_ItemSlotHover_WeaponSlot; // 0x2a0(0x08)
	struct UVerticalBox* VerticalBox_Options; // 0x2a8(0x08)
	struct FSetItemEffectElement SetItemEffect; // 0x2b0(0x18)
	int32_t CurrentCount; // 0x2c8(0x04)

	void Construct(); // Function UW-Inventory_SetItemEffect.UW-Inventory_SetItemEffect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_SetItemEffect(int32_t EntryPoint); // Function UW-Inventory_SetItemEffect.UW-Inventory_SetItemEffect_C.ExecuteUbergraph_UW-Inventory_SetItemEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

