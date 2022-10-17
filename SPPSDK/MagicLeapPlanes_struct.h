// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class EMagicLeapPlaneQueryFlags : uint8 {
	Vertical = 0,
	Horizontal = 1,
	Arbitrary = 2,
	OrientToGravity = 3,
	PreferInner = 4,
	Ceiling = 5,
	Floor = 6,
	Wall = 7,
	Polygons = 8,
	EMagicLeapPlaneQueryFlags_MAX = 9
};

// Enum MagicLeapPlanes.EMagicLeapPlaneQueryType
enum class EMagicLeapPlaneQueryType : uint8 {
	Bulk = 0,
	Delta = 1,
	EMagicLeapPlaneQueryType_MAX = 2
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
// Size: 0x2cff5620 (Inherited: 0x00)
struct FMagicLeapPlaneBoundaries {
	struct FGuid ID; // 0x00(0x10)
	struct TArray<struct FMagicLeapPlaneBoundary> Boundaries; // 0x10(0x10)
	char pad_20[0x2cff5600]; // 0x20(0x2cff5600)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
// Size: 0x2cffb120 (Inherited: 0x00)
struct FMagicLeapPlaneBoundary {
	struct FMagicLeapPolygon Polygon; // 0x00(0x10)
	struct TArray<struct FMagicLeapPolygon> Holes; // 0x10(0x10)
	char pad_20[0x2cffb100]; // 0x20(0x2cffb100)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
// Size: 0x2cffea10 (Inherited: 0x00)
struct FMagicLeapPolygon {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	char pad_10[0x2cffea00]; // 0x10(0x2cffea00)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
// Size: 0x2cff6960 (Inherited: 0x00)
struct FMagicLeapPlaneResult {
	struct FVector PlanePosition; // 0x00(0x0c)
	struct FRotator PlaneOrientation; // 0x0c(0x0c)
	struct FRotator ContentOrientation; // 0x18(0x0c)
	struct FVector2D PlaneDimensions; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<enum class EMagicLeapPlaneQueryFlags> PlaneFlags; // 0x30(0x10)
	struct FGuid ID; // 0x40(0x10)
	struct FGuid InnerID; // 0x50(0x10)
	char pad_60[0x2cff6900]; // 0x60(0x2cff6900)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
// Size: 0x2cffe960 (Inherited: 0x00)
struct FMagicLeapPlanesQuery {
	struct TArray<enum class EMagicLeapPlaneQueryFlags> Flags; // 0x00(0x10)
	struct UBoxComponent* SearchVolume; // 0x10(0x08)
	int32_t MaxResults; // 0x18(0x04)
	float MinHoleLength; // 0x1c(0x04)
	float MinPlaneArea; // 0x20(0x04)
	struct FVector SearchVolumePosition; // 0x24(0x0c)
	struct FQuat SearchVolumeOrientation; // 0x30(0x10)
	struct FVector SearchVolumeExtents; // 0x40(0x0c)
	float SimilarityThreshold; // 0x4c(0x04)
	bool bSearchVolumeTrackingSpace; // 0x50(0x01)
	bool bResultTrackingSpace; // 0x51(0x01)
	char pad_52[0x2cffe90e]; // 0x52(0x2cffe90e)
};

