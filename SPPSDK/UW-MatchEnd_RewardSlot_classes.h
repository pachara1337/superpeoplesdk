// WidgetBlueprintGeneratedClass UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C
// Size: 0x2cff6b10 (Inherited: 0x2cff6a88)
struct UUW-MatchEnd_RewardSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_Rarity; // 0x290(0x08)
	struct UImage* Image_Bg; // 0x298(0x08)
	struct UImage* Image_Icon; // 0x2a0(0x08)
	struct UTextBlock* T_Name; // 0x2a8(0x08)
	struct UTextBlock* T_WeaponType; // 0x2b0(0x08)
	struct UTextBlock* TextBlock; // 0x2b8(0x08)
	struct UUW-Inventory_ItemSlotHover_C* Tooltip; // 0x2c0(0x08)
	struct FRewardItemInfo ItemInfo; // 0x2c8(0x18)
	struct FInventoryItemDetailInfo ItemDetailInfo; // 0x2e0(0x530)

	void SetRarity(); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.SetRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetHoverPosition(struct FVector2D ViewportSize, struct FVector2D MousePosition, struct FVector2D HoverSize, struct FVector2D& Out); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.GetHoverPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(struct FRewardItemInfo ItemInfo); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_476BD37943992650800406AA289D7379(struct UObject* Loaded); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnLoaded_476BD37943992650800406AA289D7379 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIcon(struct TSoftObjectPtr<UObject> Icon); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.AsyncLoadIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MatchEnd_RewardSlot(int32_t EntryPoint); // Function UW-MatchEnd_RewardSlot.UW-MatchEnd_RewardSlot_C.ExecuteUbergraph_UW-MatchEnd_RewardSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

