// WidgetBlueprintGeneratedClass UW-CompassWidget.UW-CompassWidget_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6ad8)
struct UUW-CompassWidget_C : UBravoHotelCompassWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UImage* Arrow; // 0x3e0(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x3e8(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x3f0(0x08)
	struct UCanvasPanel* grid; // 0x3f8(0x08)
	struct UImage* Image; // 0x400(0x08)
	struct UImage* Image; // 0x408(0x08)
	struct UImage* Image; // 0x410(0x08)
	struct UImage* Image; // 0x418(0x08)
	struct UImage* Image; // 0x420(0x08)
	struct UInvalidationBox* InvalidationBox; // 0x428(0x08)
	struct UTextBlock* North; // 0x430(0x08)
	struct URetainerBox* RetainerBox; // 0x438(0x08)
	struct UUW-PlayerMarkerWidget_C* SupplyBoxMarker; // 0x440(0x08)
	struct UCanvasPanel* tournament; // 0x448(0x08)
	struct UImage* TournamentLeft; // 0x450(0x08)
	struct UImage* TournamentRight; // 0x458(0x08)
	struct UTextBlock* TournamentStep; // 0x460(0x08)
	struct UCanvasPanel* UnitParent; // 0x468(0x08)
	struct UUW-PlayerMarkerWidget_C* UW-PlayerMarkerWidget_C; // 0x470(0x08)
	struct UTextBlock* ViewAngle; // 0x478(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x480(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x488(0x08)
	float ScaleForAngleToDistance; // 0x490(0x04)
	float PositionCurveOffset; // 0x494(0x04)
	struct UCurveFloat* PositionCurve; // 0x498(0x08)
	float PositionCurveWeight; // 0x4a0(0x04)
	float ScaleCurveWeight; // 0x4a4(0x04)
	float ScaleCurveOffset; // 0x4a8(0x04)
	struct FLinearColor NorthColor; // 0x4ac(0x10)
	int32_t Angle0To360; // 0x4bc(0x04)
	float TempMarkerPosition; // 0x4c0(0x04)
	float ArrangedAngle; // 0x4c4(0x04)
	struct TArray<struct UUW-PlayerMarkerWidget_C*> MarkerWidgetList; // 0x4c8(0x10)
	int32_t PreAngle; // 0x4d8(0x04)
	int32_t Count; // 0x4dc(0x04)

	struct UWidget* CreateNewMarkerWidget(); // Function UW-CompassWidget.UW-CompassWidget_C.CreateNewMarkerWidget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWidgetPosition(struct FVector2D Pos, struct UWidget* Widget, struct UCanvasPanelSlot* Slot); // Function UW-CompassWidget.UW-CompassWidget_C.SetWidgetPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UUW-CompassRulerWidget_C* CreateRuler(struct FVector2D Position, float Angle); // Function UW-CompassWidget.UW-CompassWidget_C.CreateRuler // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	float GetDirectionAngle(float TargetAngle, float CurrentAngle, struct UCurveFloat* Curve); // Function UW-CompassWidget.UW-CompassWidget_C.GetDirectionAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	float GetCurvedFactor(float TargetAngle, float CurrentAngle, float Weight, float Offeset, struct UCurveFloat* Curve); // Function UW-CompassWidget.UW-CompassWidget_C.GetCurvedFactor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct UUW-CompassUnitWidget_C* CreateUnit(struct FVector2D Position, float Angle); // Function UW-CompassWidget.UW-CompassWidget_C.CreateUnit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	float ConvertAngleToDistance(float Angle); // Function UW-CompassWidget.UW-CompassWidget_C.ConvertAngleToDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Construct(); // Function UW-CompassWidget.UW-CompassWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateMarkerPosition(int32_t WidgetIdx); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateMarkerPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnResetUnit(struct UWidget* Widget, float UnitAngle); // Function UW-CompassWidget.UW-CompassWidget_C.OnResetUnit // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateViewAngle(float Value, int32_t RealAngle); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateViewAngle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSetMarkerInfo(struct FMarkerInfo& MarkerPingInfo, bool UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetMarkerInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdatePersonalSupplyBoxMarkerPosition(); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdatePersonalSupplyBoxMarkerPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSetPersonalSupplyBoxMarkerInfo(struct FMarkerInfo& MarkerPingInfo, enum class EPersonalSupplyBoxPingType SupplyType, bool UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetPersonalSupplyBoxMarkerInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateMaterialItemMarkerPosition(int32_t PingIndex); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateMaterialItemMarkerPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSetMaterialItemMarkerInfo(struct FMaterialItemMarkerInfo& MaterialMarker, bool UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetMaterialItemMarkerInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateResuscitationMarkerPosition(struct UWidget* MarkerWidget, struct UCanvasPanelSlot* SlotWidget, struct FVector2D Pos); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateResuscitationMarkerPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSetResuscitationMarkerInfo(struct UWidget* MarkerWidget, struct ABravoHotelPlayerState* PlayerState); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetResuscitationMarkerInfo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSetLocalPingMarkerInfo(struct FLocalPingMarkerInfo& LocalPingMarker, bool UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetLocalPingMarkerInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateLocalPingMarkerPosition(int32_t PingIndex); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateLocalPingMarkerPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateExpertWeaponItemMarkerPosition(); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateExpertWeaponItemMarkerPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSetExpertWeaponItemMarkerInfo(struct FExpertWeaponItemMarkerInfo& ExpertWeaponMarker, bool UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetExpertWeaponItemMarkerInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateMarker(); // Function UW-CompassWidget.UW-CompassWidget_C.CreateMarker // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSetFirePingMarkerInfo(struct FFirePingMarkerInfo& PingInfo, bool UsingSpawnAnimation); // Function UW-CompassWidget.UW-CompassWidget_C.OnSetFirePingMarkerInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnUpdateFirePingMarkerPosition(int32_t UID); // Function UW-CompassWidget.UW-CompassWidget_C.OnUpdateFirePingMarkerPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-CompassWidget.UW-CompassWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-CompassWidget.UW-CompassWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-CompassWidget.UW-CompassWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-CompassWidget.UW-CompassWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CheckTournament(); // Function UW-CompassWidget.UW-CompassWidget_C.CheckTournament // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-CompassWidget(int32_t EntryPoint); // Function UW-CompassWidget.UW-CompassWidget_C.ExecuteUbergraph_UW-CompassWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

