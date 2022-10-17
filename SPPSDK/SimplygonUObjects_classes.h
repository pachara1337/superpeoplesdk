// Class SimplygonUObjects.SimplygonStandinPipeline
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct USimplygonStandinPipeline : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class SimplygonUObjects.StandinNearPipeline
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a30)
struct UStandinNearPipeline : USimplygonStandinPipeline {
	struct FAggregationPipelineSettings Settings; // 0x30(0x1b0)
};

// Class SimplygonUObjects.StandinFarPipeline
// Size: 0x2cff6af0 (Inherited: 0x2cff6a30)
struct UStandinFarPipeline : USimplygonStandinPipeline {
	struct FRemeshingPipelineSettings Settings; // 0x30(0x1c0)
};

// Class SimplygonUObjects.SimplygonMaterialCaster
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct USimplygonMaterialCaster : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class SimplygonUObjects.SimplygonColorCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a30)
struct USimplygonColorCaster : USimplygonMaterialCaster {
	struct FColorCasterSettings ColorCasterSettings; // 0x30(0x50)
};

// Class SimplygonUObjects.BaseColorCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UBaseColorCaster : USimplygonColorCaster {
};

// Class SimplygonUObjects.MetallicCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UMetallicCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.SpecualarCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct USpecualarCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.RoughnessCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct URoughnessCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.SimplygonNormalCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a30)
struct USimplygonNormalCaster : USimplygonMaterialCaster {
	struct FNormalCasterSettings NormalCasterSettings; // 0x30(0x50)
};

// Class SimplygonUObjects.NormalCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UNormalCaster : USimplygonNormalCaster {
};

// Class SimplygonUObjects.OpacityCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UOpacityCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.EmissiveCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UEmissiveCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.OpacityMaskCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UOpacityMaskCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.AmbientOcclusionMaskCaster
// Size: 0x2cff6a80 (Inherited: 0x2cff6a80)
struct UAmbientOcclusionMaskCaster : UBaseColorCaster {
};

// Class SimplygonUObjects.SimplygonPipeline
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct USimplygonPipeline : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class SimplygonUObjects.ReductionPipeline
// Size: 0x2cff6a60 (Inherited: 0x2cff6a30)
struct UReductionPipeline : USimplygonPipeline {
	struct FReductionPipelineSettings Settings; // 0x30(0x230)
};

// Class SimplygonUObjects.RemeshingPipeline
// Size: 0x2cff6af0 (Inherited: 0x2cff6a30)
struct URemeshingPipeline : USimplygonPipeline {
	struct FRemeshingPipelineSettings Settings; // 0x30(0x1c0)
};

// Class SimplygonUObjects.AggregationPipeline
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a30)
struct UAggregationPipeline : USimplygonPipeline {
	struct FAggregationPipelineSettings Settings; // 0x30(0x1b0)
};

// Class SimplygonUObjects.SimplygonOpacityCaster
// Size: 0x2cff6a78 (Inherited: 0x2cff6a30)
struct USimplygonOpacityCaster : USimplygonMaterialCaster {
	struct FOpacityCasterSettings OpacityCasterSettings; // 0x30(0x48)
};

// Class SimplygonUObjects.SimplygonDisplacementCaster
// Size: 0x2cff6a88 (Inherited: 0x2cff6a30)
struct USimplygonDisplacementCaster : USimplygonMaterialCaster {
	struct FDisplacementCasterSettings DisplacementCasterSettings; // 0x30(0x58)
};

// Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
// Size: 0x2cff6a88 (Inherited: 0x2cff6a30)
struct USimplygonAmbientOcclusionCaster : USimplygonMaterialCaster {
	struct FAmbientOcclusionCasterSettings AmbientOcclusionCasterSettings; // 0x30(0x58)
};

// Class SimplygonUObjects.SimplygonGeometryDataCaster
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a30)
struct USimplygonGeometryDataCaster : USimplygonMaterialCaster {
	struct FGeometryDataCasterSettings GeometryDataCasterSettings; // 0x30(0x90)
};

// Class SimplygonUObjects.SimplygonVertexColorCaster
// Size: 0x2cff6a90 (Inherited: 0x2cff6a30)
struct USimplygonVertexColorCaster : USimplygonMaterialCaster {
	struct FVertexColorCasterSettings VertexColorCasterSettings; // 0x30(0x60)
};

