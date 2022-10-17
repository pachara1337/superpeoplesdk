// WidgetBlueprintGeneratedClass UW-Inventory_SetItemMember.UW-Inventory_SetItemMember_C
// Size: 0x2cff6af1 (Inherited: 0x2cff6a88)
struct UUW-Inventory_SetItemMember_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_Grade_Color_Line; // 0x2a0(0x08)
	struct UTextBlock* TextBlock; // 0x2a8(0x08)
	struct FName ItemKey; // 0x2b0(0x0c)
	struct FInventoryItemDetailInfo ItemDetailInfo; // 0x2c0(0x530)
	bool bHaving; // 0x7f0(0x01)

	void SetItemInfo(struct FText Name, struct TSoftObjectPtr<UObject> Icon, int32_t Rarity); // Function UW-Inventory_SetItemMember.UW-Inventory_SetItemMember_C.SetItemInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_EDBE7436482FBE862D0127A80ED2B453(struct UObject* Loaded); // Function UW-Inventory_SetItemMember.UW-Inventory_SetItemMember_C.OnLoaded_EDBE7436482FBE862D0127A80ED2B453 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_SetItemMember.UW-Inventory_SetItemMember_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UObject> IconTexture); // Function UW-Inventory_SetItemMember.UW-Inventory_SetItemMember_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_SetItemMember(int32_t EntryPoint); // Function UW-Inventory_SetItemMember.UW-Inventory_SetItemMember_C.ExecuteUbergraph_UW-Inventory_SetItemMember // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

