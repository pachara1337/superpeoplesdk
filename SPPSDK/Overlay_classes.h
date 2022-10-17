// Class Overlay.Overlays
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UOverlays : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class Overlay.BasicOverlays
// Size: 0x2cff6a40 (Inherited: 0x2cff6a30)
struct UBasicOverlays : UOverlays {
	struct TArray<struct FOverlayItem> Overlays; // 0x30(0x10)
};

// Class Overlay.LocalizedOverlays
// Size: 0x2cff6a88 (Inherited: 0x2cff6a30)
struct ULocalizedOverlays : UOverlays {
	struct UBasicOverlays* DefaultOverlays; // 0x30(0x08)
	struct TMap<struct FString, struct UBasicOverlays*> LocaleToOverlaysMap; // 0x38(0x50)
};

