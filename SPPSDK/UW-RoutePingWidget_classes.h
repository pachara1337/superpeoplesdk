// WidgetBlueprintGeneratedClass UW-RoutePingWidget.UW-RoutePingWidget_C
// Size: 0x2cff6b10 (Inherited: 0x2cff6a88)
struct UUW-RoutePingWidget_C : UBravoHotelRoutePingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCanvasPanel* Canvas; // 0x290(0x08)
	struct FMulticastInlineDelegate OnMarkerClicked; // 0x298(0x10)
	struct ABravoHotelPlayerState* PlayerState; // 0x2a8(0x08)
	struct TArray<struct FVector2D> PointsArray; // 0x2b0(0x10)
	struct FVector2D StartPosition; // 0x2c0(0x08)
	struct TArray<struct UUW-RoutePingWidget_Point_C*> PointWidgets; // 0x2c8(0x10)
	struct TArray<struct UUW-RoutePingWidget_Line_C*> LineWidgets; // 0x2d8(0x10)
	struct UUW-MapComp_C* UW-MapCompRef; // 0x2e8(0x08)
	bool IsDrawing; // 0x2f0(0x01)
	struct UUW-RoutePingWidget_Line_C* GuideLineWidgetRef; // 0x2f8(0x08)
	struct FVector2D GuideLinePos; // 0x300(0x08)
	bool IsUpdate; // 0x308(0x01)
	int32_t LastIconIndex; // 0x30c(0x04)
	char pad_2CFF6B06[0xa]; // 0x2cff6b06(0x0a)

	void InitGuideLine(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.InitGuideLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetGuideLine(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.ResetGuideLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Guide Line(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.Update Guide Line // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsValidGuideLine(bool& Valid); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.IsValidGuideLine // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetLineInfo(struct UUW-RoutePingWidget_Line_C* LineRef, struct FVector2D CurrentPos, struct FVector2D NextPos); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetLineInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetAngleCurrentToNext(struct FVector2D CurrentPos, struct FVector2D NextPos, float& Angle); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.GetAngleCurrentToNext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetRouteWidgets(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetRouteWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeamColor(bool CreateWidget); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.SetTeamColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetAllWidgets(); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.ResetAllWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitWidget(bool& CreateWidget); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.InitWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Initialize(struct ABravoHotelPlayerState* PlayerState); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateRoutePing(struct UBravoHotelMapCompWidget* MapCompWidget, struct TArray<struct FVector2D>& Positions, bool IsUpdate); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.UpdateRoutePing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-RoutePingWidget(int32_t EntryPoint); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.ExecuteUbergraph_UW-RoutePingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnMarkerClicked__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-RoutePingWidget.UW-RoutePingWidget_C.OnMarkerClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

