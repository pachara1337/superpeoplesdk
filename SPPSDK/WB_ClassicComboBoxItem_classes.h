// WidgetBlueprintGeneratedClass WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a88)
struct UWB_ClassicComboBoxItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTextBlock* TextComboBoxItem; // 0x290(0x08)
	struct UWB_ClassicComboBoxButton_C* WB_ClassicComboBoxButton; // 0x298(0x08)
	struct FString ItemOption; // 0x2a0(0x10)
	struct FSVideoResolution Resolution; // 0x2b0(0x08)

	void Construct(); // Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_WB_ClassicComboBoxItem(int32_t EntryPoint); // Function WB_ClassicComboBoxItem.WB_ClassicComboBoxItem_C.ExecuteUbergraph_WB_ClassicComboBoxItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

