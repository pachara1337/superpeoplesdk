// Enum MagicLeap.PurchaseType
enum class PurchaseType : uint8 {
	Consumable = 0,
	Nonconsumable = 1,
	Undefined = 2,
	PurchaseType_MAX = 3
};

// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8 {
	EFocusLostReason_Invalid = 0,
	EFocusLostReason_System = 1,
	EFocusLostReason_MAX = 2
};

// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8 {
	Minimum = 0,
	Medium = 1,
	Maximum = 2,
	EMagicLeapMeshLOD_MAX = 3
};

// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8 {
	New = 0,
	Updated = 1,
	Deleted = 2,
	Unchanged = 3,
	EMagicLeapMeshState_MAX = 4
};

// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8 {
	None = 0,
	Confidence = 1,
	Block = 2,
	LOD = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4
};

// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8 {
	Triangles = 0,
	PointCloud = 1,
	EMagicLeapMeshType_MAX = 2
};

// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8 {
	RequestFailed = 0,
	NoCollision = 1,
	HitUnobserved = 2,
	HitObserved = 3,
	EMagicLeapRaycastResultState_MAX = 4
};

// Enum MagicLeap.CloudStatus
enum class CloudStatus : uint8 {
	CloudStatus_NotDone = 0,
	CloudStatus_Done = 1,
	CloudStatus_MAX = 2
};

// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8 {
	Lost = 0,
	Recovered = 1,
	RecoveryFailed = 2,
	NewSession = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4
};

// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8 {
	PositionAndOrientation = 0,
	Unavailable = 1,
	Unknown = 2,
	EMagicLeapHeadTrackingMode_MAX = 3
};

// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8 {
	None = 0,
	NotEnoughFeatures = 1,
	LowLight = 2,
	Unknown = 3,
	EMagicLeapHeadTrackingError_MAX = 4
};

// ScriptStruct MagicLeap.PurchaseItemDetails
// Size: 0x2cff6a40 (Inherited: 0x00)
struct FPurchaseItemDetails {
	char pad_0[0x10]; // 0x00(0x10)
	struct FString Price; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	enum class PurchaseType Type; // 0x30(0x01)
	char pad_31[0x2cff6a0f]; // 0x31(0x2cff6a0f)
};

// ScriptStruct MagicLeap.PurchaseConfirmation
// Size: 0x2cff6950 (Inherited: 0x00)
struct FPurchaseConfirmation {
	char pad_0[0x10]; // 0x00(0x10)
	struct FString PackageName; // 0x10(0x10)
	char pad_20[0x28]; // 0x20(0x28)
	enum class PurchaseType Type; // 0x48(0x01)
	char pad_49[0x2cff6907]; // 0x49(0x2cff6907)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
// Size: 0x2cff6b14 (Inherited: 0x00)
struct FMagicLeapMeshBlockRequest {
	struct FGuid BlockID; // 0x00(0x10)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x10(0x01)
	char pad_11[0x2cff6b03]; // 0x11(0x2cff6b03)
};

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FMagicLeapTrackingMeshInfo {
	struct FTimespan Timestamp; // 0x00(0x08)
	struct TArray<struct FMagicLeapMeshBlockInfo> BlockData; // 0x08(0x10)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
// Size: 0x2cff6a48 (Inherited: 0x00)
struct FMagicLeapMeshBlockInfo {
	struct FGuid BlockID; // 0x00(0x10)
	struct FVector BlockPosition; // 0x10(0x0c)
	struct FRotator BlockOrientation; // 0x1c(0x0c)
	struct FVector BlockDimensions; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FTimespan Timestamp; // 0x38(0x08)
	enum class EMagicLeapMeshState BlockState; // 0x40(0x01)
	char pad_41[0x2cff6a07]; // 0x41(0x2cff6a07)
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
// Size: 0x2cff6a24 (Inherited: 0x00)
struct FMagicLeapRaycastHitResult {
	enum class EMagicLeapRaycastResultState HitState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector HitPoint; // 0x04(0x0c)
	struct FVector Normal; // 0x10(0x0c)
	float Confidence; // 0x1c(0x04)
	int32_t UserData; // 0x20(0x04)
	char pad_24[0x2cff6a00]; // 0x24(0x2cff6a00)
};

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
// Size: 0x2cff6938 (Inherited: 0x00)
struct FMagicLeapRaycastQueryParams {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector UpVector; // 0x18(0x0c)
	int32_t Width; // 0x24(0x04)
	int32_t Height; // 0x28(0x04)
	float HorizontalFovDegrees; // 0x2c(0x04)
	bool CollideWithUnobserved; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t UserData; // 0x34(0x04)
	char pad_38[0x2cff6900]; // 0x38(0x2cff6900)
};

// ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
// Size: 0x2cff6a1c (Inherited: 0x00)
struct FMagicLeapGraphicsClientPerformanceInfo {
	float FrameStartCPUCompAcquireCPUTimeMs; // 0x00(0x04)
	float FrameStartCPUFrameEndGPUTimeMs; // 0x04(0x04)
	float FrameStartCPUFrameStartCPUTimeMs; // 0x08(0x04)
	float FrameDurationCPUTimeMs; // 0x0c(0x04)
	float FrameDurationGPUTimeMs; // 0x10(0x04)
	float FrameInternalDurationCPUTimeMs; // 0x14(0x04)
	float FrameInternalDurationGPUTimeMs; // 0x18(0x04)
	char pad_1C[0x2cff6a00]; // 0x1c(0x2cff6a00)
};

// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FMagicLeapHeadTrackingState {
	enum class EMagicLeapHeadTrackingMode Mode; // 0x00(0x01)
	enum class EMagicLeapHeadTrackingError Error; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Confidence; // 0x04(0x04)
	char pad_8[0x2cff6a00]; // 0x08(0x2cff6a00)
};

