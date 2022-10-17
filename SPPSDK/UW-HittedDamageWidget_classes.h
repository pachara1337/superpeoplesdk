// WidgetBlueprintGeneratedClass UW-HittedDamageWidget.UW-HittedDamageWidget_C
// Size: 0x2cff6b18 (Inherited: 0x2cff6ae0)
struct UUW-HittedDamageWidget_C : UBravoHotelHittedDamageWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct FVector InstigatorLocation; // 0x300(0x0c)
	struct ABravoHotelCharacter* InstigatorCharacter; // 0x310(0x08)
	char pad_2CFF6B14[0x4]; // 0x2cff6b14(0x04)

	void Hide(); // Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-HittedDamageWidget(int32_t EntryPoint); // Function UW-HittedDamageWidget.UW-HittedDamageWidget_C.ExecuteUbergraph_UW-HittedDamageWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

