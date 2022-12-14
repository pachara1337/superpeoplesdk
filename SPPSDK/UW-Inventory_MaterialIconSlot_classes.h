// WidgetBlueprintGeneratedClass UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C
// Size: 0x2cff6ade (Inherited: 0x2cff6aaa)
struct UUW-Inventory_MaterialIconSlot_C : UUW-Inventory_SlotBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* Complete_ani; // 0x14b8(0x08)
	struct UWidgetAnimation* Serching_ani; // 0x14c0(0x08)
	struct UButton* Button; // 0x14c8(0x08)
	struct UImage* IconBox; // 0x14d0(0x08)
	struct UImage* Image; // 0x14d8(0x08)
	struct UImage* Image; // 0x14e0(0x08)
	struct UImage* Image; // 0x14e8(0x08)
	struct UImage* Image; // 0x14f0(0x08)
	struct UImage* Image; // 0x14f8(0x08)
	struct UImage* Image; // 0x1500(0x08)
	struct UImage* Image; // 0x1508(0x08)
	struct UImage* Image; // 0x1510(0x08)
	struct UImage* Image; // 0x1518(0x08)
	struct UImage* Image; // 0x1520(0x08)
	struct UImage* Image; // 0x1528(0x08)
	struct UImage* Image; // 0x1530(0x08)
	struct UImage* Image; // 0x1538(0x08)
	struct UImage* Image; // 0x1540(0x08)
	struct UImage* Image_Full; // 0x1548(0x08)
	struct UImage* IMG_ItemIcon; // 0x1550(0x08)
	struct UImage* MaterialIcon; // 0x1558(0x08)
	struct USizeBox* MouseHover; // 0x1560(0x08)
	struct USizeBox* MouseHover_; // 0x1568(0x08)
	struct USizeBox* MousePress; // 0x1570(0x08)
	struct USizeBox* MousePress_; // 0x1578(0x08)
	struct USizeBox* Searching_; // 0x1580(0x08)
	struct UImage* Stroke; // 0x1588(0x08)
	struct UImage* Stroke; // 0x1590(0x08)
	struct UImage* Stroke; // 0x1598(0x08)
	struct UImage* Stroke; // 0x15a0(0x08)
	struct UWidget* PreHoveredWidget; // 0x15a8(0x08)
	enum class ItemWidgetDragType PreDragType; // 0x15b0(0x01)
	bool Selected; // 0x15b1(0x01)
	int32_t NeedCount; // 0x15b4(0x04)
	struct FName ItemKey; // 0x15b8(0x0c)
	struct FSelecteSearchMaterialItemInfo SelectItem; // 0x15c4(0x18)
	bool BindSelectSearch; // 0x15dc(0x01)
	bool EnableSearch; // 0x15dd(0x01)

	enum class ESlateVisibility Get_Image_Full_Visibility(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Get_Image_Full_Visibility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void MouseEnterImpl(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.MouseEnterImpl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMaterialInfo(struct FName ItemKey, int32_t Count, struct FName TopKey); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.SetMaterialInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct FSelecteSearchMaterialItemInfo MaterialItemKey, bool IsSelect); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Set Selecte(bool Select); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.Set Selecte // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(bool EnableMaterialSearch); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckFulImage(); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.CheckFulImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_MaterialIconSlot(int32_t EntryPoint); // Function UW-Inventory_MaterialIconSlot.UW-Inventory_MaterialIconSlot_C.ExecuteUbergraph_UW-Inventory_MaterialIconSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

