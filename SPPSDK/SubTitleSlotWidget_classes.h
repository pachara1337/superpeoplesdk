// WidgetBlueprintGeneratedClass SubTitleSlotWidget.SubTitleSlotWidget_C
// Size: 0x2cff6a40 (Inherited: 0x2cff6a88)
struct USubTitleSlotWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
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
	struct USizeBox* SizeBox; // 0x2f0(0x08)
	struct USizeBox* SizeBox; // 0x2f8(0x08)
	struct UTextBlock* TextBlock; // 0x300(0x08)
	struct UTextBlock* TextBlock; // 0x308(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x310(0x08)
	struct FText Title; // 0x318(0x18)
	bool IsSkillType; // 0x330(0x01)
	struct FName PerkDeckName; // 0x334(0x0c)

	void Construct(); // Function SubTitleSlotWidget.SubTitleSlotWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Set SubType(enum class EKeySettingSubType SubType); // Function SubTitleSlotWidget.SubTitleSlotWidget_C.Set SubType // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSubSubText(struct FText Text); // Function SubTitleSlotWidget.SubTitleSlotWidget_C.SetSubSubText // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_SubTitleSlotWidget(int32_t EntryPoint); // Function SubTitleSlotWidget.SubTitleSlotWidget_C.ExecuteUbergraph_SubTitleSlotWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

