// WidgetBlueprintGeneratedClass UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C
// Size: 0x2cff6aa9 (Inherited: 0x2cff6a88)
struct UUW-RoutePingWidget_Line_C : UBravoHotelRoutePingWidget {
	struct UWidgetAnimation* Anim_OnShow; // 0x288(0x08)
	struct UImage* Line; // 0x290(0x08)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x298(0x10)
	bool IsLastPoint; // 0x2a8(0x01)

	void SetGuideLine(); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetGuideLine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Line Visibility(bool IsLastPoint); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.Set Line Visibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetLineLength(float Length); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetLineLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeamColor(struct FLinearColor LinearColor); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.SetTeamColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-RoutePingWidget_Line.UW-RoutePingWidget_Line_C.OnMarkerClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

