// ScriptStruct AudioExtensions.SoundModulationParameter
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FSoundModulationParameter {
	struct FName Control; // 0x00(0x0c)
	float Value; // 0x0c(0x04)
	char pad_10[0x2cff6a08]; // 0x10(0x2cff6a08)
};

// ScriptStruct AudioExtensions.SoundModulation
// Size: 0x2cffea10 (Inherited: 0x00)
struct FSoundModulation {
	struct TArray<struct USoundModulationPluginSourceSettingsBase*> Settings; // 0x00(0x10)
	char pad_10[0x2cffea00]; // 0x10(0x2cffea00)
};

