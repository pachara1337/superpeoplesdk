// WidgetBlueprintGeneratedClass WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C
// Size: 0x2cff6aad (Inherited: 0x2cff6a88)
struct UWBP_SPS_UseItemSelectionMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Bg1; // 0x290(0x08)
	struct UImage* Bg2; // 0x298(0x08)
	struct UImage* Bg3; // 0x2a0(0x08)
	struct UImage* Bg4; // 0x2a8(0x08)
	struct UImage* Bg5; // 0x2b0(0x08)
	struct UImage* Bg6; // 0x2b8(0x08)
	struct UImage* Bg7; // 0x2c0(0x08)
	struct UImage* Bg8; // 0x2c8(0x08)
	struct UCanvasPanel* Canvas; // 0x2d0(0x08)
	struct UImage* CenterCursor; // 0x2d8(0x08)
	struct UTextBlock* DisplayText; // 0x2e0(0x08)
	struct UImage* IconImage; // 0x2e8(0x08)
	struct UImage* Index1; // 0x2f0(0x08)
	struct UImage* Index2; // 0x2f8(0x08)
	struct UImage* Index3; // 0x300(0x08)
	struct UImage* Index4; // 0x308(0x08)
	struct UImage* Index5; // 0x310(0x08)
	struct UImage* Index6; // 0x318(0x08)
	struct UImage* Index7; // 0x320(0x08)
	struct UImage* Index8; // 0x328(0x08)
	struct UTextBlock* Key1; // 0x330(0x08)
	struct UTextBlock* Key2; // 0x338(0x08)
	struct UTextBlock* Key3; // 0x340(0x08)
	struct UTextBlock* Key4; // 0x348(0x08)
	struct UTextBlock* Key5; // 0x350(0x08)
	struct UTextBlock* Key6; // 0x358(0x08)
	struct UTextBlock* Key7; // 0x360(0x08)
	struct UTextBlock* Key8; // 0x368(0x08)
	struct UTextBlock* Message2; // 0x370(0x08)
	struct UTextBlock* Message3; // 0x378(0x08)
	struct UTextBlock* Message3; // 0x380(0x08)
	struct UTextBlock* Message3; // 0x388(0x08)
	struct UTextBlock* Message3; // 0x390(0x08)
	struct UTextBlock* Message3; // 0x398(0x08)
	struct UTextBlock* Message3; // 0x3a0(0x08)
	struct UTextBlock* Message3; // 0x3a8(0x08)
	struct UTextBlock* Message3; // 0x3b0(0x08)
	struct UTextBlock* Message3; // 0x3b8(0x08)
	struct UTextBlock* Message4; // 0x3c0(0x08)
	struct UTextBlock* Message5; // 0x3c8(0x08)
	struct UTextBlock* Message6; // 0x3d0(0x08)
	struct UTextBlock* Message7; // 0x3d8(0x08)
	struct UTextBlock* Message8; // 0x3e0(0x08)
	struct UTextBlock* Messgae1; // 0x3e8(0x08)
	struct UImage* Over1; // 0x3f0(0x08)
	struct UImage* Over2; // 0x3f8(0x08)
	struct UImage* Over3; // 0x400(0x08)
	struct UImage* Over4; // 0x408(0x08)
	struct UImage* Over5; // 0x410(0x08)
	struct UImage* Over6; // 0x418(0x08)
	struct UImage* Over7; // 0x420(0x08)
	struct UImage* Over8; // 0x428(0x08)
	struct UWBP_SPS_UseItemSelectionIcon_C* UseSlot1; // 0x430(0x08)
	struct UWBP_SPS_UseItemSelectionIcon_C* UseSlot2; // 0x438(0x08)
	struct UWBP_SPS_UseItemSelectionIcon_C* UseSlot3; // 0x440(0x08)
	struct UWBP_SPS_UseItemSelectionIcon_C* UseSlot4; // 0x448(0x08)
	struct UWBP_SPS_UseItemSelectionIcon_C* UseSlot5; // 0x450(0x08)
	struct UWBP_SPS_UseItemSelectionIcon_C* UseSlot6; // 0x458(0x08)
	struct UWBP_SPS_UseItemSelectionIcon_C* UseSlot7; // 0x460(0x08)
	struct UWBP_SPS_UseItemSelectionIcon_C* UseSlot8; // 0x468(0x08)
	struct UUW-PlayerMarkerWidget_C* UW-PlayerMarkerWidget; // 0x470(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x478(0x08)
	struct TArray<struct UWBP_SPS_SelectionIcon_C*> SelectionWidgets; // 0x480(0x10)
	struct FVector2D MenuCenter; // 0x490(0x08)
	struct FVector ReferenceVector; // 0x498(0x0c)
	struct FMulticastInlineDelegate Selected; // 0x4a8(0x10)
	int32_t SelectedIndex; // 0x4b8(0x04)
	float AngleSize; // 0x4bc(0x04)
	float DistanceFromCenter; // 0x4c0(0x04)
	int32_t Divisions; // 0x4c4(0x04)
	float SelectionToleranceFromCenter; // 0x4c8(0x04)
	struct FMulticastInlineDelegate Hovered; // 0x4d0(0x10)
	struct FMulticastInlineDelegate ClearPing; // 0x4e0(0x10)
	struct FText Title; // 0x4f0(0x18)
	struct FName ItemKey; // 0x508(0x0c)
	float OverOpacity; // 0x514(0x04)
	float BgOpacity; // 0x518(0x04)
	struct TMap<int32_t, struct FName> List; // 0x520(0x50)
	enum class ESlateVisibility IndexTextVisible; // 0x570(0x01)
	bool NewVar; // 0x571(0x01)
	struct TSoftObjectPtr<UPaperSprite> Image; // 0x578(0x30)
	float TextOpacity; // 0x5a8(0x04)
	enum class ESelectionMenuType MenuType; // 0x5ac(0x01)

	void Get Icon from Index(int32_t Index, struct UWBP_SPS_UseItemSelectionIcon_C*& Icon); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Get Icon from Index // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisibleOverImage(int32_t SelectIndex, enum class ESlateVisibility VisibleType); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetVisibleOverImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetActiveSelection(int32_t Index); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetActiveSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClearActiveSelection(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearActiveSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CancelSelection(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CancelSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ConfirmSelection(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConfirmSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	int32_t CalculateSelectionIndexFromVector(struct FVector InputVector); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.CalculateSelectionIndexFromVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_B2D87D22498868B7225333B61217C4AA(struct UObject* Loaded); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.OnLoaded_B2D87D22498868B7225333B61217C4AA // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ConstructMenuElements(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ConstructMenuElements // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSelectedIndex(int32_t SelectedIndex); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.SetSelectedIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(int32_t Index); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AssetLoad(struct TSoftObjectPtr<UPaperSprite> Image); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.AssetLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu(int32_t EntryPoint); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void ClearPing__DelegateSignature(); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.ClearPing__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hovered__DelegateSignature(struct FName ItemKey); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Selected__DelegateSignature(struct FName ItemKey); // Function WBP_SPS_UseItemSelectionMenu.WBP_SPS_UseItemSelectionMenu_C.Selected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

