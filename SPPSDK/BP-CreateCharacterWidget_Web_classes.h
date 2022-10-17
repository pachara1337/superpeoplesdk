// WidgetBlueprintGeneratedClass BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C
// Size: 0x2cff6a81 (Inherited: 0x2cff6a68)
struct UBP-CreateCharacterWidget_Web_C : UBravoHotelCreateCharacterWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UCoherentUIGTWidget* CoherentUIGTWidget; // 0x370(0x08)
	struct UUW-CustomizedCharacter_C* UW-CustomizedCharacter; // 0x378(0x08)
	enum class ESceneType CurrentSceneType; // 0x380(0x01)

	void Construct(); // Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(enum class ESceneType SceneType); // Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-CreateCharacterWidget_Web(int32_t EntryPoint); // Function BP-CreateCharacterWidget_Web.BP-CreateCharacterWidget_Web_C.ExecuteUbergraph_BP-CreateCharacterWidget_Web // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

