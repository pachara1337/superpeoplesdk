// WidgetBlueprintGeneratedClass UW-ShieldTimer.UW-ShieldTimer_C
// Size: 0x2cff6af0 (Inherited: 0x2cff6ab0)
struct UUW-ShieldTimer_C : UBravoHotelTimerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2d8(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2e0(0x08)
	struct UTextBlock* TextBlock; // 0x2e8(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-ShieldTimer.UW-ShieldTimer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void StopTimer(); // Function UW-ShieldTimer.UW-ShieldTimer_C.StopTimer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Reset(); // Function UW-ShieldTimer.UW-ShieldTimer_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ShieldTimer(int32_t EntryPoint); // Function UW-ShieldTimer.UW-ShieldTimer_C.ExecuteUbergraph_UW-ShieldTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

