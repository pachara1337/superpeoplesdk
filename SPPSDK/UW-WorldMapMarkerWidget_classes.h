// WidgetBlueprintGeneratedClass UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a88)
struct UUW-WorldMapMarkerWidget_C : UBravoHotelPlayerMarkerWidget {
	struct UImage* Image_SupplyBoxMarker; // 0x288(0x08)
	struct UCanvasPanel* PersonalSupplyBox; // 0x290(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x298(0x08)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x2a0(0x10)
	struct UImage* CurrentMarker; // 0x2b0(0x08)
	struct UUW-MapComp_C* MapCompRef; // 0x2b8(0x08)
	struct UObject* TmpPingTypeTexture; // 0x2c0(0x08)

	void UpdatePersonalSupplyBox(); // Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.UpdatePersonalSupplyBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPersonalSupplyBox(struct UUW-MapComp_C* MapCompRef); // Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.SetPersonalSupplyBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-WorldMapMarkerWidget.UW-WorldMapMarkerWidget_C.OnMarkerClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

