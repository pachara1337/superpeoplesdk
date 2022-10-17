// WidgetBlueprintGeneratedClass UW-StatupWidget_Item.UW-StatupWidget_Item_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a88)
struct UUW-StatupWidget_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_TextBg; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox_Damage; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UTextBlock* T_StatName; // 0x2b0(0x08)
	struct UTextBlock* T_Value; // 0x2b8(0x08)
	struct FText Text_StatName; // 0x2c0(0x18)

	void SetStatValue(int32_t Type, float Value); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetStatName(struct FString NewParam); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.SetStatName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-StatupWidget_Item(int32_t EntryPoint); // Function UW-StatupWidget_Item.UW-StatupWidget_Item_C.ExecuteUbergraph_UW-StatupWidget_Item // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

