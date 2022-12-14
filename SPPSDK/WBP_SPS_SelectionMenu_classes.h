// WidgetBlueprintGeneratedClass WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C
// Size: 0x2cff6a82 (Inherited: 0x2cff6a88)
struct UWBP_SPS_SelectionMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCanvasPanel* Canvas; // 0x290(0x08)
	struct UImage* CenterCursor; // 0x298(0x08)
	struct UTextBlock* DisplayText; // 0x2a0(0x08)
	struct UImage* Image; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UTextBlock* Message0; // 0x2e8(0x08)
	struct UTextBlock* Message2; // 0x2f0(0x08)
	struct UTextBlock* Message3; // 0x2f8(0x08)
	struct UTextBlock* Message3; // 0x300(0x08)
	struct UTextBlock* Message3; // 0x308(0x08)
	struct UTextBlock* Message3; // 0x310(0x08)
	struct UTextBlock* Message3; // 0x318(0x08)
	struct UTextBlock* Message3; // 0x320(0x08)
	struct UTextBlock* Message3; // 0x328(0x08)
	struct UTextBlock* Message3; // 0x330(0x08)
	struct UTextBlock* Message3; // 0x338(0x08)
	struct UTextBlock* Message4; // 0x340(0x08)
	struct UTextBlock* Message5; // 0x348(0x08)
	struct UTextBlock* Message6; // 0x350(0x08)
	struct UTextBlock* Message7; // 0x358(0x08)
	struct UTextBlock* Messgae1; // 0x360(0x08)
	struct UImage* Over1; // 0x368(0x08)
	struct UImage* Over2; // 0x370(0x08)
	struct UImage* Over3; // 0x378(0x08)
	struct UImage* Over4; // 0x380(0x08)
	struct UImage* Over5; // 0x388(0x08)
	struct UImage* Over6; // 0x390(0x08)
	struct UImage* Over7; // 0x398(0x08)
	struct UImage* Over8; // 0x3a0(0x08)
	struct UWBP_SPS_SelectionIcon_C* Slot0; // 0x3a8(0x08)
	struct UWBP_SPS_SelectionIcon_C* Slot1; // 0x3b0(0x08)
	struct UWBP_SPS_SelectionIcon_C* Slot2; // 0x3b8(0x08)
	struct UWBP_SPS_SelectionIcon_C* Slot3; // 0x3c0(0x08)
	struct UWBP_SPS_SelectionIcon_C* Slot4; // 0x3c8(0x08)
	struct UWBP_SPS_SelectionIcon_C* Slot5; // 0x3d0(0x08)
	struct UWBP_SPS_SelectionIcon_C* Slot6; // 0x3d8(0x08)
	struct UWBP_SPS_SelectionIcon_C* Slot7; // 0x3e0(0x08)
	struct UTextBlock* Type; // 0x3e8(0x08)
	struct UUW-PlayerMarkerWidget_C* UW-PlayerMarkerWidget; // 0x3f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x3f8(0x08)
	struct TArray<struct UWBP_SPS_SelectionIcon_C*> SelectionWidgets; // 0x400(0x10)
	struct FVector2D MenuCenter; // 0x410(0x08)
	struct FVector ReferenceVector; // 0x418(0x0c)
	struct FMulticastInlineDelegate Selected; // 0x428(0x10)
	struct USmartPingSystem_C* SmartPingComponent; // 0x438(0x08)
	struct UMaterialInstanceDynamic* RadialMenuMaterial; // 0x440(0x08)
	int32_t SelectedIndex; // 0x448(0x04)
	int32_t StartIndex; // 0x44c(0x04)
	float AngleSize; // 0x450(0x04)
	float DistanceFromCenter; // 0x454(0x04)
	int32_t Divisions; // 0x458(0x04)
	float SelectionToleranceFromCenter; // 0x45c(0x04)
	struct FMulticastInlineDelegate Hovered; // 0x460(0x10)
	struct FMulticastInlineDelegate ClearPing; // 0x470(0x10)
	bool IsPingType; // 0x480(0x01)
	bool Enable RequestMessage; // 0x481(0x01)

	void GetRequestTextFromIndex(int32_t Index, struct UTextBlock*& Text); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.GetRequestTextFromIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Icon from Index(int32_t Index, struct UWBP_SPS_SelectionIcon_C*& Icon); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Get Icon from Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MakeSmartpingInfo(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.MakeSmartpingInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisibleOverImage(int32_t SelectIndex, enum class ESlateVisibility VisibleType); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetVisibleOverImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetActiveSelection(int32_t Index); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetActiveSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClearActiveSelection(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearActiveSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CancelSelection(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CancelSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ConfirmSelection(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConfirmSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	int32_t CalculateSelectionIndexFromVector(struct FVector InputVector); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.CalculateSelectionIndexFromVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ConstructMenuElements(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ConstructMenuElements // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSelectedIndex(int32_t SelectedIndex); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.SetSelectedIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(int32_t Index, struct FBravoHotelSmartPingIconSettings Settings); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TogglePingType(bool NewIsPingType); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.TogglePingType // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_WBP_SPS_SelectionMenu(int32_t EntryPoint); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ExecuteUbergraph_WBP_SPS_SelectionMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void ClearPing__DelegateSignature(); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.ClearPing__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hovered__DelegateSignature(struct FBravoHotelSmartPingIconSettings Settings, bool IsPingType); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Selected__DelegateSignature(struct FBravoHotelSmartPingIconSettings Selected, struct FName ID, bool IsPingType, int32_t RequestMessageIndex); // Function WBP_SPS_SelectionMenu.WBP_SPS_SelectionMenu_C.Selected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

