// WidgetBlueprintGeneratedClass UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C
// Size: 0x2cff6ae8 (Inherited: 0x2cff6a88)
struct UUW-PlayerMarkerWidget_C : UBravoHotelPlayerMarkerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_OnShow; // 0x290(0x08)
	struct UCanvasPanel* Canvas_Move; // 0x298(0x08)
	struct UIconImage_C* IconImage; // 0x2a0(0x08)
	struct UOverlay* Overlay; // 0x2a8(0x08)
	struct UOverlay* Overlay; // 0x2b0(0x08)
	struct UImage* PlayerMarker; // 0x2b8(0x08)
	struct UImage* PlayerMarker; // 0x2c0(0x08)
	struct USizeBox* SizeBox_IconImage; // 0x2c8(0x08)
	struct UTextBlock* TeamIndex; // 0x2d0(0x08)
	struct UUW-CompassWidget_Item_Resuscitation_C* UW-CompassWidget_Item_Resuscitation; // 0x2d8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Icon; // 0x2e0(0x08)
	bool IsShowingAnimReserved; // 0x2e8(0x01)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x2f0(0x10)
	struct UImage* CurrentMarker; // 0x300(0x08)
	struct TMap<enum class EPingType, struct UObject*> Map_PingTypeTexture; // 0x308(0x50)
	struct TMap<enum class EItemPingIconType, struct UObject*> Map_PingItemTypeTexture; // 0x358(0x50)
	struct UObject* SupplyBoxNotOpen; // 0x3a8(0x08)
	struct UObject* SupplyBoxOpened; // 0x3b0(0x08)
	struct ABravoHotelPlayerState* PlayerState; // 0x3b8(0x08)
	bool IsOnMap; // 0x3c0(0x01)
	bool Selected; // 0x3c1(0x01)
	bool MyPing; // 0x3c2(0x01)
	struct FMulticastInlineDelegate OnMouseUp; // 0x3c8(0x10)
	int32_t LastPlayerIconIndex; // 0x3d8(0x04)
	struct UObject* SupplyBoxDisable; // 0x3e0(0x08)

	void OnResetMarkerInfo(); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnResetMarkerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UCanvasPanelSlot* GetMoveSlot(); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.GetMoveSlot // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetImageFromPingType(enum class EPingType PingType, struct UPaperSprite*& Image); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.GetImageFromPingType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGuidePingInfoForSmartpingMenu(enum class EPingType PingType); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetGuidePingInfoForSmartpingMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPingType(struct FBravoHotelPingInfo PingInfo, enum class EPersonalSupplyBoxPingType SupplyPingType); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPingType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPlayerColor(struct ABravoHotelPlayerState* PlayerState); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetPlayerColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReserveShowingAnimation(); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ReserveShowingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Initialize(struct ABravoHotelPlayerState* PlayerState); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(struct FBravoHotelPingInfo PingInfo, bool UsingAnimation, enum class EPersonalSupplyBoxPingType SupplyPingType); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetMarkerInfo(bool IsUpdate); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ResetMarkerInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMaterialInfo(bool UsingAnimation, struct FMaterialItemPingInfo MaterialPingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetMaterialInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetResuscitationInfo(bool UsingAnimation, struct ABravoHotelPlayerState* PlayerState); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetResuscitationInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetLocalPingInfo(bool UsingAnimation, struct FBravoHotelLocalPingInfo LocalPingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetLocalPingInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetExpertWeaponInfo(bool UsingAnimation, struct FExpertWeaponPingInfo ExpertWeaponPingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetExpertWeaponInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SetFirePingInfo(bool Using Animation, struct FFirePingMarkerInfo FirePingInfo); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.SetFirePingInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PlayerMarkerWidget(int32_t EntryPoint); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.ExecuteUbergraph_UW-PlayerMarkerWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnMouseUp__DelegateSignature(struct FPointerEvent Mouse); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMouseUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-PlayerMarkerWidget.UW-PlayerMarkerWidget_C.OnMarkerClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

