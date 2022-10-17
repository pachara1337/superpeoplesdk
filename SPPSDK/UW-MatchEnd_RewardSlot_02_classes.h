// WidgetBlueprintGeneratedClass UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C
// Size: 0x2cff6af9 (Inherited: 0x2cff6a88)
struct UUW-MatchEnd_RewardSlot_02_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image_Grade_Color_Line; // 0x340(0x08)
	struct UImage* Option; // 0x348(0x08)
	struct UOverlay* Overlay; // 0x350(0x08)
	struct USizeBox* SizeBox; // 0x358(0x08)
	struct USizeBox* SizeBox; // 0x360(0x08)
	struct USizeBox* SizeBox; // 0x368(0x08)
	struct UTextBlock* T_WeaponType; // 0x370(0x08)
	struct UTextBlock* TextBlock; // 0x378(0x08)
	struct UTextBlock* TextBlock; // 0x380(0x08)
	struct UTextBlock* TextBlock; // 0x388(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x390(0x08)
	struct FRewardItemInfo ItemInfo; // 0x398(0x18)
	struct FInventoryItemDetailInfo ItemDetailInfo; // 0x3b0(0x530)
	struct FText LocalText; // 0x8e0(0x18)
	bool bIsSmallIcon; // 0x8f8(0x01)

	void IsMaterialData(struct FName ItemKey, bool& bRet, int32_t& Index); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.IsMaterialData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRarity(); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.SetRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(struct FRewardItemInfo ItemInfo, bool UseSmallIcon); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIcon(struct TSoftObjectPtr<UObject> Icon); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.AsyncLoadIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadOptionIcon(struct TSoftObjectPtr<UObject> Icon); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.AsyncLoadOptionIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MatchEnd_RewardSlot_02(int32_t EntryPoint); // Function UW-MatchEnd_RewardSlot_02.UW-MatchEnd_RewardSlot_02_C.ExecuteUbergraph_UW-MatchEnd_RewardSlot_02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

