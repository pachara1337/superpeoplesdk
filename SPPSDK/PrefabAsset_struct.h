// Enum PrefabAsset.EPrefabVariantRuleType
enum class EPrefabVariantRuleType : uint8 {
	SkipProp = 0,
	EPrefabVariantRuleType_MAX = 1
};

// Enum PrefabAsset.EPTUITheme
enum class EPTUITheme : uint8 {
	Default = 0,
	Dark = 1,
	EPTUITheme_MAX = 2
};

// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8 {
	WireBox = 0,
	WireSphere = 1,
	EPrefabVisualizerType_MAX = 2
};

// ScriptStruct PrefabAsset.PrefabVariantRule
// Size: 0x2cff6928 (Inherited: 0x00)
struct FPrefabVariantRule {
	struct FName Scope; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Rule; // 0x10(0x10)
	enum class EPrefabVariantRuleType RuleType; // 0x20(0x01)
	bool bEnable; // 0x21(0x01)
	char pad_22[0x2cff6906]; // 0x22(0x2cff6906)
};

