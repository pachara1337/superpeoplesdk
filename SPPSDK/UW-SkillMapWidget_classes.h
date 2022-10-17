// WidgetBlueprintGeneratedClass UW-SkillMapWidget.UW-SkillMapWidget_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6af0)
struct UUW-SkillMapWidget_C : UBravoHotelSkillMapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* Tutorial_MouseCursor; // 0x2f8(0x08)
	struct UWidgetAnimation* Tutorial_Arrow_Loop2; // 0x300(0x08)
	struct UWidgetAnimation* RadarDecoLight; // 0x308(0x08)
	struct UWidgetAnimation* RadarCircle_M; // 0x310(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x318(0x08)
	struct UUW-MapComp_C* BP-MapComp; // 0x320(0x08)
	struct UButton* Button_Nuclear; // 0x328(0x08)
	struct UCanvasPanel* CP_RealMapSize; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image; // 0x348(0x08)
	struct UImage* Image; // 0x350(0x08)
	struct UImage* Image; // 0x358(0x08)
	struct UImage* Image; // 0x360(0x08)
	struct UImage* Image; // 0x368(0x08)
	struct UImage* Image; // 0x370(0x08)
	struct UImage* Image; // 0x378(0x08)
	struct UImage* Image; // 0x380(0x08)
	struct UImage* Image; // 0x388(0x08)
	struct UImage* Image; // 0x390(0x08)
	struct UImage* Image; // 0x398(0x08)
	struct UImage* Img_RadarTargetRadius; // 0x3a0(0x08)
	struct UOverlay* Tutorial; // 0x3a8(0x08)
	struct UUW-Radar_tutorial_C* UW-Radar_tutorial; // 0x3b0(0x08)
	struct FVector2D MapBackGroundPosition; // 0x3b8(0x08)
	struct FVector2D RadarDummyPosition; // 0x3c0(0x08)
	bool bIsScenarioMode; // 0x3c8(0x01)
	struct FVector2D PosOnViewport; // 0x3cc(0x08)
	struct UUW-Radar_Cursor_C* UW-RaderCursorWidget; // 0x3d8(0x08)

	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetMouseWidget(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.ResetMouseWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeMouseWidget(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.ChangeMouseWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideSkillMouseCursor(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.HideSkillMouseCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowSkillMouseCursor(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.ShowSkillMouseCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetZoom(float NewScaleFactor, bool bIsIn); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.SetZoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMapDragging(struct FVector2D DeltaOnViewport); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMapDragging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMapZoomOut(bool& IsChanged); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMapZoomOut // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMapZoomIn(bool& IsChanged); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMapZoomIn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UBravoHotelMapCompWidget* GetMapCompWidget(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.GetMapCompWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void MapClickEvent(struct FVector ClickLocation); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.MapClickEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CalcAllMapRatioByTargetRadius(float& Ratio); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.CalcAllMapRatioByTargetRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnMapLeftClick(struct FVector2D PosOnViewport); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMapLeftClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayRadarOpenSound(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.PlayRadarOpenSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.BndEvt__Button_Nuclear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void OnSkillMapEnd(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnSkillMapEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDoSkillBySkillMap(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnDoSkillBySkillMap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSkillMapStart(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnSkillMapStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetSkillMapRate(); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.SetSkillMapRate // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnWheelOnMap(float Delta, struct FVector2D PosOnViewport); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnWheelOnMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnDraggingOnMap(struct FVector2D Delta); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnDraggingOnMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnClickOnMap(struct FKey Button, struct FVector2D PosOnViewport); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.OnClickOnMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-SkillMapWidget(int32_t EntryPoint); // Function UW-SkillMapWidget.UW-SkillMapWidget_C.ExecuteUbergraph_UW-SkillMapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

