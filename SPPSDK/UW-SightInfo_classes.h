// WidgetBlueprintGeneratedClass UW-SightInfo.UW-SightInfo_C
// Size: 0x2cff6a38 (Inherited: 0x2cff6a88)
struct UUW-SightInfo_C : UBravoHotelSightInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCanvasPanel* Canvas_Charge; // 0x290(0x08)
	struct UImage* ChargeIndicator; // 0x298(0x08)
	struct UImage* Image_LeanDamageBg; // 0x2a0(0x08)
	struct UImage* IMG_Gauge1; // 0x2a8(0x08)
	struct UImage* IMG_Gauge2; // 0x2b0(0x08)
	struct UImage* IMG_Gauge3; // 0x2b8(0x08)
	struct UImage* IMG_Gauge4; // 0x2c0(0x08)
	struct UImage* IMG_Gauge5; // 0x2c8(0x08)
	struct UImage* IMG_Gauge6; // 0x2d0(0x08)
	struct UTextBlock* LeftTime; // 0x2d8(0x08)
	struct UOverlay* Overlay_Gauge; // 0x2e0(0x08)
	struct UTextBlock* T_BulletsPerShot; // 0x2e8(0x08)
	struct UTextBlock* T_Damage; // 0x2f0(0x08)
	struct UTextBlock* T_RPM; // 0x2f8(0x08)
	struct UVerticalBox* VerticalBox_Damage; // 0x300(0x08)
	struct ABravoHotelCharacter* BravoHotelCharacter; // 0x308(0x08)
	struct TArray<struct UImage*> GaugeIMGArray; // 0x310(0x10)
	int32_t LastGauge; // 0x320(0x04)
	bool Timer_; // 0x324(0x01)
	struct FTimerHandle Timer_UpdateInfos; // 0x328(0x08)
	struct UMaterialInstanceDynamic* ChargeIndicatorDynamicMaterial; // 0x330(0x08)

	void HideChargeInfo(); // Function UW-SightInfo.UW-SightInfo_C.HideChargeInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateChargeInfo(float MaxGaugeValue, float CurrentGaugeValue); // Function UW-SightInfo.UW-SightInfo_C.UpdateChargeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateBulletsPerShot(); // Function UW-SightInfo.UW-SightInfo_C.UpdateBulletsPerShot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateSnipeGauge(); // Function UW-SightInfo.UW-SightInfo_C.UpdateSnipeGauge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateDamage(); // Function UW-SightInfo.UW-SightInfo_C.UpdateDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateInfos(); // Function UW-SightInfo.UW-SightInfo_C.UpdateInfos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideSightInfo(); // Function UW-SightInfo.UW-SightInfo_C.HideSightInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowSightInfo(); // Function UW-SightInfo.UW-SightInfo_C.ShowSightInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(); // Function UW-SightInfo.UW-SightInfo_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-SightInfo.UW-SightInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-SightInfo(int32_t EntryPoint); // Function UW-SightInfo.UW-SightInfo_C.ExecuteUbergraph_UW-SightInfo // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

