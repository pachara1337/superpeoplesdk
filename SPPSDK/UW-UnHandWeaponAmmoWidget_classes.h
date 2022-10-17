// WidgetBlueprintGeneratedClass UW-UnHandWeaponAmmoWidget.UW-UnHandWeaponAmmoWidget_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6ab0)
struct UUW-UnHandWeaponAmmoWidget_C : UBravoHotelAmmoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UOverlay* Overlay_SlotIndex; // 0x2b8(0x08)
	struct UImage* progress; // 0x2c0(0x08)
	struct UImage* WeaponIcon; // 0x2c8(0x08)
	struct UMaterialInstanceDynamic* CoolTimeBrushMaterial; // 0x2d0(0x08)

	void SetCoolTime(float Percent); // Function UW-UnHandWeaponAmmoWidget.UW-UnHandWeaponAmmoWidget_C.SetCoolTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-UnHandWeaponAmmoWidget.UW-UnHandWeaponAmmoWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-UnHandWeaponAmmoWidget(int32_t EntryPoint); // Function UW-UnHandWeaponAmmoWidget.UW-UnHandWeaponAmmoWidget_C.ExecuteUbergraph_UW-UnHandWeaponAmmoWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

