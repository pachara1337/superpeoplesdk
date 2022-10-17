// Class AudioExtensions.SoundfieldEncodingSettingsBase
// Size: 0x2cff6930 (Inherited: 0x2cff6930)
struct USoundfieldEncodingSettingsBase : UObject {
};

// Class AudioExtensions.AudioEndpointSettingsBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UAudioEndpointSettingsBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct USpatializationPluginSourceSettingsBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UOcclusionPluginSourceSettingsBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AudioExtensions.SoundModulationPluginSourceSettingsBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct USoundModulationPluginSourceSettingsBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UReverbPluginSourceSettingsBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct USoundfieldEndpointSettingsBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AudioExtensions.SoundfieldEffectSettingsBase
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct USoundfieldEffectSettingsBase : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AudioExtensions.SoundfieldEffectBase
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct USoundfieldEffectBase : UObject {
	struct USoundfieldEffectSettingsBase* Settings; // 0x30(0x08)
	char pad_2CFF6938[0x100]; // 0x2cff6938(0x100)
};

