// WidgetBlueprintGeneratedClass UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a88)
struct UUW-VehicleSubInfo_Base_C : UUserWidget {
	struct FLinearColor MySeatColor; // 0x288(0x10)
	struct UCanvasPanel* WheelGroup; // 0x298(0x08)
	struct UCanvasPanel* SeatGroup; // 0x2a0(0x08)

	void Setup(struct ABravoHotelVehicle* VehicleInstance); // Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowSeatIcon(int32_t SeatIndex, bool bShow, bool bIsMine); // Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.ShowSeatIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowWreckedWheelIcon(int32_t WheelIndex, bool bShow); // Function UW-VehicleSubInfo_Base.UW-VehicleSubInfo_Base_C.ShowWreckedWheelIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

