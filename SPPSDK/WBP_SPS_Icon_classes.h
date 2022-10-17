// WidgetBlueprintGeneratedClass WBP_SPS_Icon.WBP_SPS_Icon_C
// Size: 0x2cff6a90 (Inherited: 0x2cff6a98)
struct UWBP_SPS_Icon_C : UBravoHotelSmartPingIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UWidgetAnimation* Anim_Icon_Effect; // 0x4a0(0x08)
	struct UIconImage_C* BgIcon; // 0x4a8(0x08)
	struct UImage* Icon; // 0x4b0(0x08)
	struct UImage* Image; // 0x4b8(0x08)
	struct UImage* Image_Icon_Effect; // 0x4c0(0x08)
	struct UImage* Image_Icon_Effect; // 0x4c8(0x08)
	struct UImage* Indicator; // 0x4d0(0x08)
	struct UOverlay* Overlay; // 0x4d8(0x08)
	struct UTextBlock* TeamIndex; // 0x4e0(0x08)
	struct UTextBlock* TextBlock; // 0x4e8(0x08)
	struct UTextBlock* TextBlock; // 0x4f0(0x08)
	struct UTextBlock* TextBlock; // 0x4f8(0x08)
	struct UTextBlock* TextBlock; // 0x500(0x08)
	struct UTextBlock* TextBlock; // 0x508(0x08)
	struct UTextBlock* TextBlock; // 0x510(0x08)
	struct UTextBlock* TextBlock; // 0x518(0x08)
	struct UTextBlock* TextBlock; // 0x520(0x08)
	struct UTextBlock* TextBlock; // 0x528(0x08)
	struct UTextBlock* TextBlock; // 0x530(0x08)
	struct UTextBlock* TextBlock; // 0x538(0x08)
	struct UVerticalBox* VerticalBox; // 0x540(0x08)
	struct APlayerCameraManager* PlayerCamera; // 0x548(0x08)
	struct USmartPingSystem_C* ParentComponent; // 0x550(0x08)
	struct UCanvasPanelSlot* CanvasSlot; // 0x558(0x08)
	struct FMaterialItemPingInfo MaterialPingInfo; // 0x560(0x30)

	bool SetExpertWeaponPing(struct FExpertWeaponPingInfo& PingInfo); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetExpertWeaponPing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool SetLocalPing(struct FBravoHotelLocalPingInfo& PingInfo); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLocalPing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	bool SetMaterialPing(struct FMaterialItemPingInfo& PingInfo); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetMaterialPing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Set_IconSize(float Size); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.Set_IconSize // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWidgetComponentsRenderScale(float ScaleRate); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetWidgetComponentsRenderScale // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetChangeIcon(struct UPaperSprite* Texture); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetChangeIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIcon(int32_t TeamPlayerIndex, enum class EItemPingIconType ItemPingIconType, bool IgnoreTeamIndex); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIcon // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRemovePingIcon(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemovePingIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetIconAlpha(float NewAlpha); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetIconAlpha // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetShowDebugLightPole(bool IsShow); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetShowDebugLightPole // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetLightPoleValue(float Height, float RadiusCurve, float Diameter, float AlphaCurve, float ADSFOV); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetLightPoleValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRemoveExpertWeaponPingIcon(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetRemoveExpertWeaponPingIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetScale(float Scale); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetScale // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSupplyBoxState(enum class EPersonalSupplyBoxPingType Type); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.SetSupplyBoxState // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_WBP_SPS_Icon(int32_t EntryPoint); // Function WBP_SPS_Icon.WBP_SPS_Icon_C.ExecuteUbergraph_WBP_SPS_Icon // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

