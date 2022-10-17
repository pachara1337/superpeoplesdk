// WidgetBlueprintGeneratedClass UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6aa8)
struct UUW-ListWidget_CoreInfo_C : UUW-ListWidget_ItemBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* Anim_AddCoreInfo; // 0x2b0(0x08)
	struct UHorizontalBox* HB_Smartping; // 0x2b8(0x08)
	struct UImage* Img_Back; // 0x2c0(0x08)
	struct UImage* Img_MarkerIcon; // 0x2c8(0x08)
	struct UImage* IMG_PerkDeckIcon; // 0x2d0(0x08)
	struct UTextBlock* T_Message; // 0x2d8(0x08)
	struct URichTextBlock* T_MessageRichText; // 0x2e0(0x08)
	struct UTextBlock* T_PingType; // 0x2e8(0x08)
	struct UTextBlock* T_PlayerName; // 0x2f0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_MessageType; // 0x2f8(0x08)

	void SetCoreInfoRichTextMessage(struct FText Message); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoRichTextMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCoreInfoMessageType(struct FString Type); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoMessageType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetResuscitationPingInfo(); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetResuscitationPingInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCoreInfoResuscitation(struct ABravoHotelPlayerState* PlayerState); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoResuscitation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRequestMessageInfo(struct ABravoHotelPlayerState* PlayerState, struct FText Message); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRequestMessageInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRequestMessage(struct ABravoHotelPlayerState* Player State, struct FText Message); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRequestMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRoutePingInfo(); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetRoutePingInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCoreInfoRoutePing(struct ABravoHotelPlayerState* PlayerState); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoRoutePing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCoreInfoMessage(struct FText Message, struct FString Type); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPlayerInfo(struct ABravoHotelPlayerState* PlayerState); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetPlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPingType(struct FBravoHotelPingInfo PingInfo); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetPingType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCoreInfoSmartping(struct ABravoHotelPlayerState* PlayerState); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.SetCoreInfoSmartping // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayAddCoreInfoAnim(); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.PlayAddCoreInfoAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ListWidget_CoreInfo(int32_t EntryPoint); // Function UW-ListWidget_CoreInfo.UW-ListWidget_CoreInfo_C.ExecuteUbergraph_UW-ListWidget_CoreInfo // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

