// WidgetBlueprintGeneratedClass UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C
// Size: 0x2cff6af0 (Inherited: 0x2cff6a88)
struct UUW-ListWidget_KillMessage_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_Hide; // 0x290(0x08)
	struct UWidgetAnimation* Anim_Down; // 0x298(0x08)
	struct UHorizontalBox* HorizontalBox_Killer; // 0x2a0(0x08)
	struct UImage* Image_CountryMark; // 0x2a8(0x08)
	struct UScaleBox* ScaleBox_KillerIcon; // 0x2b0(0x08)
	struct UImage* T_ClassIcon; // 0x2b8(0x08)
	struct UTextBlock* T_Level; // 0x2c0(0x08)
	struct UTextBlock* T_LV; // 0x2c8(0x08)
	struct UTextBlock* T_Name; // 0x2d0(0x08)
	struct FMulticastInlineDelegate OnTimeOut; // 0x2d8(0x10)
	struct ABravoHotelPlayerState* LocalPlayerState; // 0x2e8(0x08)

	void OnLoaded_9DF86FA64782B378E42DBB813545BD34(struct UObject* Loaded); // Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.OnLoaded_9DF86FA64782B378E42DBB813545BD34 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_CA72756D4117251A5087DB9713D9281B(struct UObject* Loaded); // Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.OnLoaded_CA72756D4117251A5087DB9713D9281B // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPlayerInfo(struct ABravoHotelPlayerState* PlayerState, struct FSlateColor InfoColor, enum class EBroadCastKillMessageType BroadCastKillMessageType); // Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.SetPlayerInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ListWidget_KillMessage_Item(int32_t EntryPoint); // Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.ExecuteUbergraph_UW-ListWidget_KillMessage_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnTimeOut__DelegateSignature(int32_t ArrayIndex, struct UUW-ListWidget_KillMessage_C* Slot); // Function UW-ListWidget_KillMessage_Item.UW-ListWidget_KillMessage_Item_C.OnTimeOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

