// Class DLSS.DLSSOverrideSettings
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UDLSSOverrideSettings : UObject {
	enum class EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x30(0x01)
	enum class EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x31(0x01)
	enum class EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x32(0x01)
	bool bShowDLSSIncompatiblePluginsToolsWarnings; // 0x33(0x01)
	enum class EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; // 0x34(0x01)
	char pad_2CFF6935[0x103]; // 0x2cff6935(0x103)
};

// Class DLSS.DLSSSettings
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct UDLSSSettings : UObject {
	bool bEnableDLSSD3D12; // 0x30(0x01)
	bool bEnableDLSSD3D11; // 0x31(0x01)
	bool bEnableDLSSVulkan; // 0x32(0x01)
	bool bEnableDLSSInEditorViewports; // 0x33(0x01)
	bool bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x34(0x01)
	bool bEnableDLSSInPlayInEditorViewports; // 0x35(0x01)
	bool bShowDLSSSDebugOnScreenMessages; // 0x36(0x01)
	struct FString GenericDLSSBinaryPath; // 0x38(0x10)
	bool bGenericDLSSBinaryExists; // 0x48(0x01)
	uint32_t NVIDIANGXApplicationId; // 0x4c(0x04)
	struct FString CustomDLSSBinaryPath; // 0x50(0x10)
	bool bCustomDLSSBinaryExists; // 0x60(0x01)
	char pad_2CFF695D[0x10b]; // 0x2cff695d(0x10b)
};

