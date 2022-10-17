// WidgetBlueprintGeneratedClass UW-RequestResuscitation.UW-RequestResuscitation_C
// Size: 0x2cff6a89 (Inherited: 0x2cff6a88)
struct UUW-RequestResuscitation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button_Request; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct USizeBox* SizeBox; // 0x2a8(0x08)
	struct USizeBox* SizeBox; // 0x2b0(0x08)
	struct UTextBlock* Text_Price; // 0x2b8(0x08)
	struct UTextBlock* Text_Price; // 0x2c0(0x08)
	struct UTextBlock* TextBlock; // 0x2c8(0x08)
	struct UUW-FreeTicket_C* UW-FreeTicket; // 0x2d0(0x08)
	struct UUW-FreeTicket_C* UW-FreeTicket; // 0x2d8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x2e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Price; // 0x2e8(0x08)
	struct ABP-BravoHotel-PlayerController_C* PlayerControllerRef; // 0x2f0(0x08)
	bool bCanRequest; // 0x2f8(0x01)
	bool bRequest; // 0x2f9(0x01)
	struct FText RequstingResuscitationText; // 0x300(0x18)
	float RequestingSizeBoxWidth; // 0x318(0x04)
	struct FSlateColor RequestTextColor; // 0x320(0x28)
	struct FSlateColor RequestingTextColor; // 0x348(0x28)
	float RequestingSizeBoxInitWidth; // 0x370(0x04)
	struct FText RequstingResuscitationInitText; // 0x378(0x18)
	struct FButtonStyle InitButtonStyle; // 0x390(0x2a8)
	struct FButtonStyle RequestingButtonStyle; // 0x638(0x2a8)
	struct FButtonStyle CanRequestButtonStyle; // 0x8e0(0x2a8)
	bool IsFree; // 0xb88(0x01)

	void Init(); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRequestState(bool bOnRequest); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.SetRequestState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPlayerController(struct ABravoHotelPlayerController*& PC); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.GetPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	bool Get_Button_Request_bIsEnabled(); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.Get_Button_Request_bIsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Construct(); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.BndEvt__Button_307_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetPrice(int32_t Price); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.SetPrice // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetFreeTicket(int32_t Count, int32_t HaveCount); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.SetFreeTicket // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-RequestResuscitation(int32_t EntryPoint); // Function UW-RequestResuscitation.UW-RequestResuscitation_C.ExecuteUbergraph_UW-RequestResuscitation // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

