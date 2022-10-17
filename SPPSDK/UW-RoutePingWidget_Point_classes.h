// WidgetBlueprintGeneratedClass UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a88)
struct UUW-RoutePingWidget_Point_C : UBravoHotelRoutePingWidget {
	struct UWidgetAnimation* Anim_OnShow; // 0x288(0x08)
	struct UImage* BackColor; // 0x290(0x08)
	struct UTextBlock* T_Num; // 0x298(0x08)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x2a0(0x10)

	void SetPointAngle(float Angle); // Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SetPointAngle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SelectPointIcon(int32_t Index, bool IsLastPoint, bool IsUpdate); // Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SelectPointIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeamColor(struct FLinearColor LinearColor); // Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.SetTeamColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-RoutePingWidget_Point.UW-RoutePingWidget_Point_C.OnMarkerClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

