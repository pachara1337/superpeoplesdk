// WidgetBlueprintGeneratedClass UW-MapComp.UW-MapComp_C
// Size: 0x2cff6a60 (Inherited: 0x2cff6a30)
struct UUW-MapComp_C : UBravoHotelMapCompWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UCanvasPanel* Canvas; // 0x638(0x08)
	struct UCanvasPanel* CanvasPanel_Aircraft; // 0x640(0x08)
	struct UCanvasPanel* CanvasPanel_AreaWidget; // 0x648(0x08)
	struct UCanvasPanel* CanvasPanel_PlayerIcon; // 0x650(0x08)
	struct UCanvasPanel* CanvasPanel_PlayerMarker; // 0x658(0x08)
	struct UCanvasPanel* CanvasPanel_RoutePing; // 0x660(0x08)
	struct UImage* TestDescentEndPoint; // 0x668(0x08)
	struct UImage* TestDescentStartPoint; // 0x670(0x08)
	struct UImage* TestLineRouteDotline; // 0x678(0x08)
	int32_t MapDisplayInfoFlag; // 0x680(0x04)
	struct FMulticastInlineDelegate OnWheelOnMap; // 0x688(0x10)
	struct FMulticastInlineDelegate OnMouseButtonUpOnMap; // 0x698(0x10)
	struct FMulticastInlineDelegate OnObjectClickOnMap; // 0x6a8(0x10)
	struct FMulticastInlineDelegate OnDragginOnMap; // 0x6b8(0x10)
	bool IsDragging; // 0x6c8(0x01)
	float DeltaValue; // 0x6cc(0x04)
	struct TArray<struct FString> GridString_XAxis; // 0x6d0(0x10)
	struct TArray<struct FString> GridString_YAxis; // 0x6e0(0x10)
	struct UUW-WorldMapMarkerWidget_C* PersonalSupplyBoxRef; // 0x6f0(0x08)
	struct UUW-PlayerIconWidget_C* ReplayFreeCamWidget; // 0x6f8(0x08)
	float MapScaleInterpSpeed; // 0x700(0x04)
	bool MouseLeftBtnDown; // 0x704(0x01)
	bool MouseRightBtnDown; // 0x705(0x01)
	struct FTimerHandle SelectPingMenuTimer; // 0x708(0x08)
	struct UWBP_SPS_SelectionMenu_C* SelectionMenu; // 0x710(0x08)
	struct FMulticastInlineDelegate OnMouseButtonDownOnMap; // 0x718(0x10)
	struct FVector2D MouseButtonDownPos; // 0x728(0x08)
	float MapScaleInerpSpeedRatio; // 0x730(0x04)
	bool IsDrawingRoutePing; // 0x734(0x01)
	struct TArray<struct FVector2D> IgnoreAreaCircleLines; // 0x738(0x10)
	struct UUW-ParachuteCircle_C* CurrentParachuteCircle; // 0x748(0x08)
	struct FMulticastInlineDelegate OnClickParachuteOnMap; // 0x750(0x10)

	void OnMouseMoveEvent(struct FPointerEvent& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseMoveEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UW-MapComp.UW-MapComp_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UBravoHotelWorldMapAreaWidget* K2_CreateAreaWidget(int32_t NewIndex); // Function UW-MapComp.UW-MapComp_C.K2_CreateAreaWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Remove Area WidgetImpl(enum class EWorldMapAreaWidgetType Type, struct FAreaWidgetInfo Info); // Function UW-MapComp.UW-MapComp_C.Remove Area WidgetImpl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWorldMapSetting(); // Function UW-MapComp.UW-MapComp_C.SetWorldMapSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEnabledInvalidationbox(bool Enabled); // Function UW-MapComp.UW-MapComp_C.SetEnabledInvalidationbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckAgreePing(bool& bRet, struct FVector& Location); // Function UW-MapComp.UW-MapComp_C.CheckAgreePing // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Cur Mouse Point(struct FVector2D& Pos); // Function UW-MapComp.UW-MapComp_C.Get Cur Mouse Point // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalcMapScaleInterpSpeed(int32_t TargetZoomLevel); // Function UW-MapComp.UW-MapComp_C.CalcMapScaleInterpSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateReplayCircleMask(); // Function UW-MapComp.UW-MapComp_C.UpdateReplayCircleMask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMapPos(); // Function UW-MapComp.UW-MapComp_C.UpdateMapPos // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2bad3b0
	void UpdateCircleMask(struct FVector2D centerPosOnWorld, float radiusOnWorld, struct FName CirclePosName, struct FName CircleRadiusName, float MaskAdditionalRadius, struct UMaterialInstanceDynamic* MaterialInstance); // Function UW-MapComp.UW-MapComp_C.UpdateCircleMask // (Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2bad3b0
	void Update Circle Masks(); // Function UW-MapComp.UW-MapComp_C.Update Circle Masks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Map Scale(); // Function UW-MapComp.UW-MapComp_C.Update Map Scale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayTargetPosAnim(); // Function UW-MapComp.UW-MapComp_C.PlayTargetPosAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreatePersonalSupplyBox(); // Function UW-MapComp.UW-MapComp_C.CreatePersonalSupplyBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateFreeCamWidget(); // Function UW-MapComp.UW-MapComp_C.CreateFreeCamWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateAirCraftWidget(); // Function UW-MapComp.UW-MapComp_C.CreateAirCraftWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Create Map Player Widget Impl(); // Function UW-MapComp.UW-MapComp_C.Create Map Player Widget Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAttackedWidget(int32_t UniquePlayerId); // Function UW-MapComp.UW-MapComp_C.OnAttackedWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnFireWidget(int32_t UniquePlayerId, struct FRotator Rotation, float Length); // Function UW-MapComp.UW-MapComp_C.OnFireWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetSkillMapFactor(float Distance, float& Factor); // Function UW-MapComp.UW-MapComp_C.GetSkillMapFactor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void WantChangeVisibility(enum class ESlateVisibility WantVisibility, struct UWidget* ChangeWidget); // Function UW-MapComp.UW-MapComp_C.WantChangeVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMiniMapFactor(float& Factor); // Function UW-MapComp.UW-MapComp_C.GetMiniMapFactor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ConvertSizeWorldToMap(struct FVector2D Size, struct FVector2D& ret); // Function UW-MapComp.UW-MapComp_C.ConvertSizeWorldToMap // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void OnMarkerClicked(struct FKey Button, char mapObjectID); // Function UW-MapComp.UW-MapComp_C.OnMarkerClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalPosRelatedMapOnViewport(struct FVector2D PosOnViewport, struct FVector2D& ret); // Function UW-MapComp.UW-MapComp_C.CalPosRelatedMapOnViewport // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void ConvertPosViewportToMap(struct FVector2D PosOnViewport, struct FVector2D& ret); // Function UW-MapComp.UW-MapComp_C.ConvertPosViewportToMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetMarker(bool isOn, struct FVector2D PosOnViewport, float Heigh); // Function UW-MapComp.UW-MapComp_C.SetMarker // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-MapComp.UW-MapComp_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPaint(struct FPaintContext& Context); // Function UW-MapComp.UW-MapComp_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2bad3b0
	void AddWidgetComp(struct UCanvasPanel* TargetCanvas, struct UUserWidget* WidgetClass, struct FVector2D Anchor, struct FVector2D Pivot, struct FVector2D Size, int32_t ZOrder, struct UUserWidget*& ret); // Function UW-MapComp.UW-MapComp_C.AddWidgetComp // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ConvertForwardToDegree(struct FVector Forward, float& Degree); // Function UW-MapComp.UW-MapComp_C.ConvertForwardToDegree // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_C5F225F94B2C743064A54D84F3497501(struct UObject* Loaded); // Function UW-MapComp.UW-MapComp_C.OnLoaded_C5F225F94B2C743064A54D84F3497501 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DebugStringOnMapEvent(struct FString DebugString, struct FVector WorldPosition, float RemainTime, float FontSize); // Function UW-MapComp.UW-MapComp_C.DebugStringOnMapEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateMapPlayerWidget(); // Function UW-MapComp.UW-MapComp_C.CreateMapPlayerWidget // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateSupplyBoxInfo(); // Function UW-MapComp.UW-MapComp_C.UpdateSupplyBoxInfo // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateFreeCamPosition(); // Function UW-MapComp.UW-MapComp_C.UpdateFreeCamPosition // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateFreeCamAngle(); // Function UW-MapComp.UW-MapComp_C.UpdateFreeCamAngle // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetFreeCamEnable(bool bEnable); // Function UW-MapComp.UW-MapComp_C.SetFreeCamEnable // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetAircraftVisibility(bool bVisible); // Function UW-MapComp.UW-MapComp_C.SetAircraftVisibility // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void PreUpdateComponents(); // Function UW-MapComp.UW-MapComp_C.PreUpdateComponents // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateCircleInfos(); // Function UW-MapComp.UW-MapComp_C.UpdateCircleInfos // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisiblePingMenu(bool Visible); // Function UW-MapComp.UW-MapComp_C.SetVisiblePingMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeMap(bool IsWeightMap); // Function UW-MapComp.UW-MapComp_C.ChangeMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseUp(struct FPointerEvent Mouse); // Function UW-MapComp.UW-MapComp_C.OnMouseUp // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateMapChangePosition(struct FVector2D& NewPosition); // Function UW-MapComp.UW-MapComp_C.UpdateMapChangePosition // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ResetMouseInput(); // Function UW-MapComp.UW-MapComp_C.ResetMouseInput // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDragging(bool bDrag); // Function UW-MapComp.UW-MapComp_C.SetDragging // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-MapComp.UW-MapComp_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnToggleWidgetDelegate_Event(enum class EToggleWidgetModeType& ToggleType); // Function UW-MapComp.UW-MapComp_C.OnToggleWidgetDelegate_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MapComp(int32_t EntryPoint); // Function UW-MapComp.UW-MapComp_C.ExecuteUbergraph_UW-MapComp // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnClickParachuteOnMap__DelegateSignature(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnClickParachuteOnMap__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseButtonDownOnMap__DelegateSignature(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonDownOnMap__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragginOnMap__DelegateSignature(struct FVector2D Delta); // Function UW-MapComp.UW-MapComp_C.OnDragginOnMap__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnObjectClickOnMap__DelegateSignature(struct FKey Button, char mapObjectID); // Function UW-MapComp.UW-MapComp_C.OnObjectClickOnMap__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseButtonUpOnMap__DelegateSignature(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnMouseButtonUpOnMap__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnWheelOnMap__DelegateSignature(float Delta, struct FVector2D PosOnViewport); // Function UW-MapComp.UW-MapComp_C.OnWheelOnMap__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

