// WidgetBlueprintGeneratedClass UW-Route.UW-Route_C
// Size: 0x2cff6a28 (Inherited: 0x2cff6af0)
struct UUW-Route_C : UBravoHotelAircraftRouteWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* Propeller1; // 0x2f8(0x08)
	struct UCanvasPanel* Aircraft; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UUW-MapComp_C* MapCompRef; // 0x320(0x08)

	void StopAirCraftAnimation(); // Function UW-Route.UW-Route_C.StopAirCraftAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateAirCraftScaleByMouseWheel(float Delta); // Function UW-Route.UW-Route_C.UpdateAirCraftScaleByMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartAirCraftAnimation(); // Function UW-Route.UW-Route_C.StartAirCraftAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateAircraftAngle(float Angle); // Function UW-Route.UW-Route_C.UpdateAircraftAngle // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Route(int32_t EntryPoint); // Function UW-Route.UW-Route_C.ExecuteUbergraph_UW-Route // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

