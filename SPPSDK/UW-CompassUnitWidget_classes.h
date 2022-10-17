// WidgetBlueprintGeneratedClass UW-CompassUnitWidget.UW-CompassUnitWidget_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a90)
struct UUW-CompassUnitWidget_C : UBravoHotelCompassUnitWidget {
	struct UTextBlock* North; // 0x290(0x08)
	struct UTextBlock* SpecialText; // 0x298(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x2a0(0x08)
	bool PreIsNorth; // 0x2a8(0x01)
	int32_t Angle0To360; // 0x2ac(0x04)
	char pad_2CFF6AAD[0x3]; // 0x2cff6aad(0x03)

	void Initialize(float Direction); // Function UW-CompassUnitWidget.UW-CompassUnitWidget_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

