// WidgetBlueprintGeneratedClass UW-SearchingMaterial.UW-SearchingMaterial_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a88)
struct UUW-SearchingMaterial_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_LoopHintSpecialWeapon; // 0x290(0x08)
	struct UButton* Button; // 0x298(0x08)
	struct UButton* Button; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2a8(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Img_Find; // 0x2f0(0x08)
	struct UOverlay* Overlay; // 0x2f8(0x08)
	struct USizeBox* SizeBox; // 0x300(0x08)
	struct UTextBlock* T_SerchButton; // 0x308(0x08)
	struct UTextBlock* TextBlock; // 0x310(0x08)
	struct UTextBlock* TextBlock; // 0x318(0x08)
	struct UThrobber* Throbber; // 0x320(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x328(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x330(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x338(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x340(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x348(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x350(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x358(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x360(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x368(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x370(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x378(0x08)
	struct UUW-Inventory_MaterialIconSlot_C* UW-Inventory_MaterialIconSlot; // 0x380(0x08)
	struct UVerticalBox* VerticalBox; // 0x388(0x08)
	struct UVerticalBox* VerticalBox; // 0x390(0x08)
	bool ShowButton; // 0x398(0x01)
	int32_t Index; // 0x39c(0x04)
	struct TArray<struct FName> TempList; // 0x3a0(0x10)
	int32_t MaxSlotCount; // 0x3b0(0x04)
	bool EnableShowExpertWeapon; // 0x3b4(0x01)
	struct FMulticastInlineDelegate OnChangeSearchingMaterialList; // 0x3b8(0x10)

	void Get Slot Index(int32_t Index, struct UUW-Inventory_MaterialIconSlot_C*& Slot); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Get Slot Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Update(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct FSelecteSearchMaterialItemInfo MaterialItemKey, bool IsSelect); // Function UW-SearchingMaterial.UW-SearchingMaterial_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Enable MaterialSearch(bool EnableMaterialSearch); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.Enable MaterialSearch // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_282_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void UpdateUI(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.UpdateUI // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(bool EnableMaterialSearch); // Function UW-SearchingMaterial.UW-SearchingMaterial_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.BndEvt__Button_182_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-SearchingMaterial(int32_t EntryPoint); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.ExecuteUbergraph_UW-SearchingMaterial // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnChangeSearchingMaterialList__DelegateSignature(); // Function UW-SearchingMaterial.UW-SearchingMaterial_C.OnChangeSearchingMaterialList__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

