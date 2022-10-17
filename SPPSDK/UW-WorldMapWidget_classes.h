// WidgetBlueprintGeneratedClass UW-WorldMapWidget.UW-WorldMapWidget_C
// Size: 0x2cff6ab8 (Inherited: 0x2cff6af8)
struct UUW-WorldMapWidget_C : UBravoHotelWorldMapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x300(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x308(0x08)
	struct UImage* Bg; // 0x310(0x08)
	struct UBorder* Border_Parachute; // 0x318(0x08)
	struct UBorder* Border_Teleport; // 0x320(0x08)
	struct UBP-CheckWeightMap_C* BP-CheckWeightMap; // 0x328(0x08)
	struct UUW-MapComp_C* BP-MapComp; // 0x330(0x08)
	struct UButton* Button_Parachute; // 0x338(0x08)
	struct UButton* Button_Teleport; // 0x340(0x08)
	struct UCanvasPanel* Canvas_TeleportSlot; // 0x348(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x350(0x08)
	struct UCanvasPanel* CanvasPanel_Training; // 0x358(0x08)
	struct UButton* CloseButton; // 0x360(0x08)
	struct UEditableTextBox* EditableTextBox; // 0x368(0x08)
	struct UEditableTextBox* EditableTextBox; // 0x370(0x08)
	struct UHorizontalBox* HorizontalBox_Buttons; // 0x378(0x08)
	struct UButton* ShowHelBoxButton; // 0x380(0x08)
	struct USizeBox* SizeBox_Training; // 0x388(0x08)
	struct UUniformGridPanel* UniformGridPanel_AreaSlot; // 0x390(0x08)
	struct UUW-ClassinfoitemBoardWidget_C* UW-ClassinfoitemBoardWidget; // 0x398(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x3a0(0x08)
	int32_t MAX_ZOOM_LEVEL; // 0x3a8(0x04)
	int32_t ZoomLevel; // 0x3ac(0x04)
	float MAX_SCALE_FACTOR; // 0x3b0(0x04)
	int32_t InitializeCount; // 0x3b4(0x04)
	struct FVector2D PosOnViewport; // 0x3b8(0x08)
	float CurrentScaleFactor; // 0x3c0(0x04)
	struct FVector2D MouseButtonDownPos; // 0x3c4(0x08)
	struct FTimerHandle SelectPingMenuTimer; // 0x3d0(0x08)
	struct UWBP_SPS_SelectionMenu_C* SelectionMenu; // 0x3d8(0x08)
	bool IsRoutePing; // 0x3e0(0x01)
	int32_t MaxRoutePointCount; // 0x3e4(0x04)
	struct TArray<struct FVector> RoutePointArray; // 0x3e8(0x10)
	struct TMap<int32_t, struct UUW-WorldTeleportSlot_C*> AddPointList; // 0x3f8(0x50)
	struct FMulticastInlineDelegate OnClickPointList_Delegate; // 0x448(0x10)
	bool bIsTeleportMode; // 0x458(0x01)
	bool bIsParachuteMode; // 0x459(0x01)
	struct FButtonStyle NormalButtonStyle; // 0x460(0x2a8)
	struct FButtonStyle PressedButtonStyle; // 0x708(0x2a8)
	struct FVector2D CenterOfViewPort; // 0x9b0(0x08)

	void InitializeTrainingMapSize(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.InitializeTrainingMapSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTeleportParachuteButtonPosition(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetTeleportParachuteButtonPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitTrainingButtonStyle(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.InitTrainingButtonStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitTrainingModeButton(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.InitTrainingModeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_Border_Parachute_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.On_Border_Parachute_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_Border_Teleport_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.On_Border_Teleport_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Do Character Parachute Training(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.Do Character Parachute Training // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ParachuteMode(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.ParachuteMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init Parachute Circle(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.Init Parachute Circle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindHoverEvent(int32_t Index, bool bIsHover); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.BindHoverEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void TeleportCharacterToPoint_Training(int32_t ListIndex); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.TeleportCharacterToPoint_Training // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitializeTeleportList_Training(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.InitializeTeleportList_Training // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UBravoHotelMapCompWidget* GetMapCompWidget(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.GetMapCompWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void SetClassInfoBoardVisibilityByZoomLevel(int32_t LastZoomLevel, int32_t NewZoomLevel); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetClassInfoBoardVisibilityByZoomLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetZoomLevel(int32_t& ZoomLevel); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.GetZoomLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void StopRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.StopRoutePing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.UpdateRoutePing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsFullRoutePing(bool& NewParam); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.IsFullRoutePing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.CheckRoutePing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.ResetRoutePing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddRoutePing(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.AddRoutePing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRoutePing(bool ShowMessage); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetRoutePing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetVisiblePingMenu(bool Visible); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetVisiblePingMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DebugStringOnMap(struct FString DebugString, struct FVector WorldPosition, float RemainTime, float FontSize); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.DebugStringOnMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMapDragging(struct FVector2D DeltaOnViewport); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapDragging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RemoveMarker(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.RemoveMarker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMapRightClick(struct FVector2D PosOnViewport, bool IsAgree, struct FVector ForceLocation); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapRightClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetZoom(int32_t NewZoomLevel); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.SetZoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMapZoomOut(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapZoomOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMapZoomIn(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMapZoomIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalcScaleFactorByZoom(int32_t ZoomLevel, float& ScaleFactor); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.CalcScaleFactorByZoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsZoomLevelInRange(int32_t ZoomLevel, bool& ret); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.IsZoomLevelInRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.BndEvt__ShowHelBoxButton_K2Node_ComponentBoundEvent_452_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnAttackedWidget(int32_t UniquePlayerId); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnAttackedWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnFireWidget(int32_t UniquePlayerId, struct FRotator Rotation, float Length); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnFireWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnViewportSized(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnViewportSized // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void NotifyTargetPawnPos(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.NotifyTargetPawnPos // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateWorldMapClassInfo(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.UpdateWorldMapClassInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputSmartPingAgreeWorldMap(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingAgreeWorldMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputStopSmartPingWorldMap(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputStopSmartPingWorldMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputSmartPingMenuWorldMap(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingMenuWorldMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnInputSmartPingWorldMap(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnInputSmartPingWorldMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  »¤ìŠ¤(bool IsShow); // Function UW-WorldMapWidget.UW-WorldMapWidget_C. »¤ìŠ¤ // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowPingMenu(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.ShowPingMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseButtonDownOnMap(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMouseButtonDownOnMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseButtonUpOnMap(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnMouseButtonUpOnMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDraggingOnMap(struct FVector2D Delta); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnDraggingOnMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnWheelOnMap(float Delta, struct FVector2D PosOnViewport); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnWheelOnMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnObjectClickOnMap(struct FKey Button, char mapObjectID); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnObjectClickOnMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-WorldMapWidget(int32_t EntryPoint); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.ExecuteUbergraph_UW-WorldMapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnClickPointList_Delegate__DelegateSignature(); // Function UW-WorldMapWidget.UW-WorldMapWidget_C.OnClickPointList_Delegate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

