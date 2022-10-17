// WidgetBlueprintGeneratedClass UW-JetpackWidget.UW-JetpackWidget_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6aa8)
struct UUW-JetpackWidget_C : UBravoHotelJetpackWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UProgressBar* FuelGauge; // 0x2b0(0x08)
	struct UImage* FuelIcon; // 0x2b8(0x08)
	struct UTextBlock* FuelText; // 0x2c0(0x08)

	void SetNativeValues(); // Function UW-JetpackWidget.UW-JetpackWidget_C.SetNativeValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-JetpackWidget.UW-JetpackWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-JetpackWidget(int32_t EntryPoint); // Function UW-JetpackWidget.UW-JetpackWidget_C.ExecuteUbergraph_UW-JetpackWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

