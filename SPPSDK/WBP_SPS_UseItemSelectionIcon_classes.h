// WidgetBlueprintGeneratedClass WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C
// Size: 0x2cff6af8 (Inherited: 0x2cff6a88)
struct UWBP_SPS_UseItemSelectionIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* IconImage; // 0x290(0x08)
	struct FMulticastInlineDelegate Hovered; // 0x298(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0x2a8(0x10)
	struct FMulticastInlineDelegate Pressed; // 0x2b8(0x10)
	struct USmartPingSystem_C* SmartPingComponent; // 0x2c8(0x08)
	int32_t Index; // 0x2d0(0x04)
	struct FLinearColor TintColorToUse; // 0x2d4(0x10)
	bool Found Setting; // 0x2e4(0x01)
	struct FBravoHotelSmartPingIconSettings Settings; // 0x2e8(0xd0)
	struct FName TableID; // 0x3b8(0x0c)
	struct TSoftObjectPtr<UPaperSprite> Image; // 0x3c8(0x30)

	void OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3(struct UObject* Loaded); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.OnLoaded_6834BC7D48AF986BC5969685C4D6D2B3 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Unselected(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unselected // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Selected(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(struct FBravoHotelSmartPingIconSettings Data, struct FName ItemKey, bool IsHaveItem); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon(int32_t EntryPoint); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.ExecuteUbergraph_WBP_SPS_UseItemSelectionIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void Pressed__DelegateSignature(); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Pressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Unhovered__DelegateSignature(int32_t Index); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hovered__DelegateSignature(int32_t Index); // Function WBP_SPS_UseItemSelectionIcon.WBP_SPS_UseItemSelectionIcon_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

