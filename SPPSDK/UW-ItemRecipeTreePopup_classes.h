// WidgetBlueprintGeneratedClass UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a88)
struct UUW-ItemRecipeTreePopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Hide; // 0x290(0x08)
	struct UWidgetAnimation* Show; // 0x298(0x08)
	struct UImage* Bg; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UTextBlock* Message; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_Title; // 0x2c0(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x2c8(0x08)
	struct UUW-ItemRecipeTree_C* UW-ItemRecipeTree; // 0x2d0(0x08)
	struct FTimerHandle Timer; // 0x2d8(0x08)

	void Construct(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.BndEvt__Button_159_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetItemKey(struct FName ItemKey, struct FName HaveItemKey); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.SetItemKey // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(struct FText Message); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOk_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.BndEvt__UW-ButtonOk_177_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ItemRecipeTreePopup(int32_t EntryPoint); // Function UW-ItemRecipeTreePopup.UW-ItemRecipeTreePopup_C.ExecuteUbergraph_UW-ItemRecipeTreePopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

