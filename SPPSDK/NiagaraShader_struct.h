// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8 {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x2cff6930 (Inherited: 0x00)
struct FNiagaraDataInterfaceGPUParamInfo {
	struct FString DataInterfaceHLSLSymbol; // 0x00(0x10)
	struct FString DIClassName; // 0x10(0x10)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20(0x10)
	char pad_30[0x2cff6900]; // 0x30(0x2cff6900)
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Size: 0x2cffe930 (Inherited: 0x00)
struct FNiagaraDataInterfaceGeneratedFunction {
	char pad_0[0x2cffe930]; // 0x00(0x2cffe930)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size: 0x2cff6948 (Inherited: 0x00)
struct FNiagaraCompileEvent {
	enum class FNiagaraCompileEventSeverity Severity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
	struct FGuid NodeGuid; // 0x18(0x10)
	struct FGuid PinGuid; // 0x28(0x10)
	struct TArray<struct FGuid> StackGuids; // 0x38(0x10)
	char pad_48[0x2cff6900]; // 0x48(0x2cff6900)
};

