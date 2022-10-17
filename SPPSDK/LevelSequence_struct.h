// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x2cff6b02 (Inherited: 0x00)
struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x00(0x01)
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x01(0x01)
	char pad_2[0x2cff6b00]; // 0x02(0x2cff6b00)
};

// ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x2cff6a01 (Inherited: 0x00)
struct FBoundActorProxy {
	char pad_0[0x2cff6a01]; // 0x00(0x2cff6a01)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0x2cff6ca0 (Inherited: 0x00)
struct FLevelSequenceBindingReferences {
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x00(0x50)
	struct TSet<struct FGuid> AnimSequenceInstances; // 0x50(0x50)
	char pad_A0[0x2cff6c00]; // 0xa0(0x2cff6c00)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x2cff6d10 (Inherited: 0x00)
struct FLevelSequenceBindingReferenceArray {
	struct TArray<struct FLevelSequenceBindingReference> References; // 0x00(0x10)
	char pad_10[0x2cff6d00]; // 0x10(0x2cff6d00)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x2cffdf40 (Inherited: 0x00)
struct FLevelSequenceBindingReference {
	struct FString PackageName; // 0x00(0x10)
	struct FSoftObjectPath ExternalObjectPath; // 0x10(0x20)
	struct FString ObjectPath; // 0x30(0x10)
	char pad_40[0x2cffdf00]; // 0x40(0x2cffdf00)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x2cff6950 (Inherited: 0x00)
struct FLevelSequenceObjectReferenceMap {
	char pad_0[0x2cff6950]; // 0x00(0x2cff6950)
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FLevelSequenceLegacyObjectReference {
	char pad_0[0x2cff6a20]; // 0x00(0x2cff6a20)
};

// ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x2cff6938 (Inherited: 0x00)
struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ComponentName; // 0x20(0x10)
	struct TWeakObjectPtr<struct UObject> CachedComponent; // 0x30(0x08)
	char pad_38[0x2cff6900]; // 0x38(0x2cff6900)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0x2cff69c0 (Inherited: 0x00)
struct FLevelSequencePlayerSnapshot {
	struct FString MasterName; // 0x00(0x10)
	struct FQualifiedFrameTime MasterTime; // 0x10(0x10)
	struct FQualifiedFrameTime SourceTime; // 0x20(0x10)
	struct FString CurrentShotName; // 0x30(0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
	struct FString SourceTimecode; // 0x60(0x10)
	struct TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70(0x30)
	struct FLevelSequenceSnapshotSettings Settings; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
	struct ULevelSequence* ActiveShot; // 0xb0(0x08)
	struct FMovieSceneSequenceID ShotID; // 0xb8(0x04)
	char pad_BC[0x2cff6904]; // 0xbc(0x2cff6904)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0x2cff6a0c (Inherited: 0x00)
struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FFrameRate FrameRate; // 0x04(0x08)
	char pad_C[0x2cff6a00]; // 0x0c(0x2cff6a00)
};

