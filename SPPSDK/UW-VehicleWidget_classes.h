// WidgetBlueprintGeneratedClass UW-VehicleWidget.UW-VehicleWidget_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6b20)
struct UUW-VehicleWidget_C : UBravoHotelVehicleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UProgressBar* FuelGauge; // 0x328(0x08)
	struct UImage* FuelIcon; // 0x330(0x08)
	struct UProgressBar* HPFaint; // 0x338(0x08)
	struct UProgressBar* HPGauge; // 0x340(0x08)
	struct UImage* HPIcon; // 0x348(0x08)
	struct UTextBlock* SpeedText; // 0x350(0x08)
	struct UOverlay* SubInfoParent; // 0x358(0x08)
	struct UUW-VehicleSeatWidget_C* UW-VehicleSeatWidget; // 0x360(0x08)
	struct ABravoHotelVehicle* CachedVehicle; // 0x368(0x08)
	struct FLinearColor MySeatColor; // 0x370(0x10)
	struct FLinearColor EmptyFuelColor; // 0x380(0x10)
	float InterpTargetHpRate; // 0x390(0x04)
	float InterpCurrentHpRate; // 0x394(0x04)
	float InterpSpeed; // 0x398(0x04)
	struct UCurveFloat* HPFaintCurve; // 0x3a0(0x08)
	struct UCurveLinearColor* HPColorCurve; // 0x3a8(0x08)
	struct UUW-VehicleSubInfo_Base_C* SubInfoWidget; // 0x3b0(0x08)
	bool EnableBind; // 0x3b8(0x01)
	struct ABravoHotelVehicle* NewVar; // 0x3c0(0x08)

	void OnWheelWrecked(int32_t WheelIndex); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnWheelWrecked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSeatOccupantExited(struct UBravoHotelVehicleSeatComponent* Seat); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantExited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSeatOccupantEntered(struct UBravoHotelVehicleSeatComponent* Seat); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEntered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hide(); // Function UW-VehicleWidget.UW-VehicleWidget_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Show(struct UBravoHotelVehicleSeatComponent* VehicleSeat); // Function UW-VehicleWidget.UW-VehicleWidget_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowVehicle(); // Function UW-VehicleWidget.UW-VehicleWidget_C.ShowVehicle // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnSeatOccupantEnter(struct UBravoHotelVehicleSeatComponent* SeatComponent, struct ABravoHotelCharacter* Occupant); // Function UW-VehicleWidget.UW-VehicleWidget_C.OnSeatOccupantEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ????? (struct UBravoHotelVehicleSeatComponent* SeatComponent, struct ABravoHotelCharacter* Occupant); // Function UW-VehicleWidget.UW-VehicleWidget_C. ?????  // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HideVehicle(); // Function UW-VehicleWidget.UW-VehicleWidget_C.HideVehicle // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetSpeed(struct FText& NewSpeed); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetSpeed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void SetFuelGauge(float NewFuelGauge, bool bChangeColor); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetFuelGauge // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetHp(float NewHp, bool bChangeColor, struct FLinearColor NewColor); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetHp // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetFaintHp(float NewHp); // Function UW-VehicleWidget.UW-VehicleWidget_C.SetFaintHp // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-VehicleWidget(int32_t EntryPoint); // Function UW-VehicleWidget.UW-VehicleWidget_C.ExecuteUbergraph_UW-VehicleWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

