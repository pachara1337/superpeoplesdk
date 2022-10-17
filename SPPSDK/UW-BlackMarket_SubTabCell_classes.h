// WidgetBlueprintGeneratedClass UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C
// Size: 0x2cff6add (Inherited: 0x2cff6a88)
struct UUW-BlackMarket_SubTabCell_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button_Tab; // 0x290(0x08)
	struct UImage* Image_Check; // 0x298(0x08)
	struct UTextBlock* TextBlock_TabName; // 0x2a0(0x08)
	struct UUW-BlackMarket_SubTab_C* BlackMarket_SubTab; // 0x2a8(0x08)
	enum class EBlackmarketTabType TabType; // 0x2b0(0x01)
	struct FText TabName; // 0x2b8(0x18)
	struct FName TabIndex; // 0x2d0(0x0c)
	bool Selected; // 0x2dc(0x01)
	char pad_2CFF6AD6[0x7]; // 0x2cff6ad6(0x07)

	struct FSlateColor Get_TextBlock_TabName_ColorAndOpacity(); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_TextBlock_TabName_ColorAndOpacity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	enum class ESlateVisibility Get_Image_Check_Visibility(); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.Get_Image_Check_Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.BndEvt__Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BlackMarket_SubTabCell(int32_t EntryPoint); // Function UW-BlackMarket_SubTabCell.UW-BlackMarket_SubTabCell_C.ExecuteUbergraph_UW-BlackMarket_SubTabCell // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

