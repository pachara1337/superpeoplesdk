// WidgetBlueprintGeneratedClass UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C
// Size: 0x2cff6aa0 (Inherited: 0x2cff6aa8)
struct UUW-ListWidget_KillMessage_C : UUW-ListWidget_ItemBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* Anim_Down; // 0x2b0(0x08)
	struct UCanvasPanel* CanvasPanel_Main; // 0x2b8(0x08)
	struct UImage* Img_Back; // 0x2c0(0x08)
	struct UImage* Img_BroadType; // 0x2c8(0x08)
	struct UImage* Img_DamegeType; // 0x2d0(0x08)
	struct UImage* Img_Weapon; // 0x2d8(0x08)
	struct UScaleBox* ScaleBox_Weapon; // 0x2e0(0x08)
	struct USizeBox* SizeBox_BroadType; // 0x2e8(0x08)
	struct USizeBox* SizeBox_DamageType; // 0x2f0(0x08)
	struct USizeBox* SizeBox_HeadShot; // 0x2f8(0x08)
	struct UUW-ListWidget_KillMessage_Item_C* UW-DiedInfoWidget; // 0x300(0x08)
	struct UUW-ListWidget_KillMessage_Item_C* UW-KillerInfoWidget; // 0x308(0x08)
	struct TMap<enum class EBroadCastKillMessageType, struct UPaperSprite*> BroadcastDamageType; // 0x310(0x50)
	struct FSlateColor MyTeamColor; // 0x360(0x28)
	struct FSlateColor MyTeamKnockOutColor; // 0x388(0x28)
	struct FSlateColor EnermyTeamColor; // 0x3b0(0x28)
	struct FSlateColor EnermyTeamKnockOutColor; // 0x3d8(0x28)
	struct FSlateColor DefaultColor; // 0x400(0x28)
	struct FSlateColor DefaultKnockColor; // 0x428(0x28)
	struct FSlateColor ResuscatedColor; // 0x450(0x28)
	struct FSlateColor CurrentInfoColor; // 0x478(0x28)

	void PlayUpDownAnim(); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.PlayUpDownAnim // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetInfos(); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.ResetInfos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBroadcastTypeIcon(enum class EBroadCastKillMessageType MessageType); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetBroadcastTypeIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetTeamType(struct ABravoHotelPlayerState* PlayerState, enum class EBroadCastTeamType& TeamType); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.GetTeamType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetInfoColor(struct ABravoHotelPlayerState* Killer, struct ABravoHotelPlayerState* Died, enum class EBroadCastKillMessageType MessageType, struct FSlateColor& OutTeamColor); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.GetInfoColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetBGColor(enum class EBroadCastKillMessageType MessageType); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetBGColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA(struct UObject* Loaded); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.OnLoaded_E905D98740C8E2F4A90B4C89D663ACAA // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1(struct UObject* Loaded); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.OnLoaded_342F68DF4CB26590AC0C9EA8C343CCF1 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetKillMessageInfo(struct FKillBroadcastUIInfo& Info); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.SetKillMessageInfo // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ListWidget_KillMessage(int32_t EntryPoint); // Function UW-ListWidget_KillMessage.UW-ListWidget_KillMessage_C.ExecuteUbergraph_UW-ListWidget_KillMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

