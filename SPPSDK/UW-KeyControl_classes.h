// WidgetBlueprintGeneratedClass UW-KeyControl.UW-KeyControl_C
// Size: 0x2cff6a38 (Inherited: 0x2cff6a88)
struct UUW-KeyControl_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USizeBox* Action; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* LeftBtn; // 0x2a0(0x08)
	struct UImage* LeftBtnDrag; // 0x2a8(0x08)
	struct UImage* MidBtn; // 0x2b0(0x08)
	struct UOverlay* Mouse; // 0x2b8(0x08)
	struct UImage* RightBtn; // 0x2c0(0x08)
	struct UScaleBox* ScaleBox; // 0x2c8(0x08)
	struct UImage* SideDown; // 0x2d0(0x08)
	struct UImage* SideUp; // 0x2d8(0x08)
	struct UTextBlock* Text_Action; // 0x2e0(0x08)
	struct UTextBlock* Text_Action_UsingAlphaBg; // 0x2e8(0x08)
	struct UImage* Turn; // 0x2f0(0x08)
	struct UImage* WheelDown; // 0x2f8(0x08)
	struct UImage* WheelUp; // 0x300(0x08)
	struct UImage* WheelUpDown; // 0x308(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_TextStyle; // 0x310(0x08)
	struct UImage* X; // 0x318(0x08)
	struct UImage* Y; // 0x320(0x08)
	struct UObject* Temp; // 0x328(0x08)
	bool NewVar; // 0x330(0x01)
	float DefalutScale; // 0x334(0x04)

	void SetCustomKey(enum class EKeySettingType KeyType); // Function UW-KeyControl.UW-KeyControl_C.SetCustomKey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideAllMouseKeys(); // Function UW-KeyControl.UW-KeyControl_C.HideAllMouseKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetFontSize(int32_t Size); // Function UW-KeyControl.UW-KeyControl_C.SetFontSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetKeyNameFromKey(struct FKey Key, struct FString& Name); // Function UW-KeyControl.UW-KeyControl_C.GetKeyNameFromKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set KeyInfo(struct FName KeyString, struct FKey InputKey, bool IsHold); // Function UW-KeyControl.UW-KeyControl_C.Set KeyInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Using Alpha Bg(bool Using); // Function UW-KeyControl.UW-KeyControl_C.Set Using Alpha Bg // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-KeyControl.UW-KeyControl_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-KeyControl(int32_t EntryPoint); // Function UW-KeyControl.UW-KeyControl_C.ExecuteUbergraph_UW-KeyControl // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

