// WidgetBlueprintGeneratedClass UW-SupplyToolTip.UW-SupplyToolTip_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a88)
struct UUW-SupplyToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* GoldImage; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UTextBlock* Message; // 0x2a0(0x08)
	struct UTextBlock* PriceValue; // 0x2a8(0x08)
	struct USizeBox* SizeBox; // 0x2b0(0x08)

	void SetPriceData(struct FText ItemName, int32_t Price); // Function UW-SupplyToolTip.UW-SupplyToolTip_C.SetPriceData // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetData(struct FText Msg); // Function UW-SupplyToolTip.UW-SupplyToolTip_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-SupplyToolTip(int32_t EntryPoint); // Function UW-SupplyToolTip.UW-SupplyToolTip_C.ExecuteUbergraph_UW-SupplyToolTip // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

