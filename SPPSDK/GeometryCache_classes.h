// Class GeometryCache.GeometryCache
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct UGeometryCache : UObject {
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x48(0x10)
	int32_t StartFrame; // 0x68(0x04)
	int32_t EndFrame; // 0x6c(0x04)
	char pad_2CFF6958[0x118]; // 0x2cff6958(0x118)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x2cff6b10 (Inherited: 0x2cff6b08)
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x308(0x08)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d230
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UGeometryCacheCodecBase : UObject {
	struct TArray<int32_t> TopologyRanges; // 0x30(0x10)
	char pad_2CFF6940[0x100]; // 0x2cff6940(0x100)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x2cff6a48 (Inherited: 0x2cff6a40)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x40(0x04)
	char pad_2CFF6A44[0x4]; // 0x2cff6a44(0x04)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x2cff6a48 (Inherited: 0x2cff6a40)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
	char pad_2CFF6A40[0x8]; // 0x2cff6a40(0x08)
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x2cff6a50 (Inherited: 0x2cff6af0)
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0x4f0(0x08)
	bool bRunning; // 0x4f8(0x01)
	bool bLooping; // 0x4f9(0x01)
	float StartTimeOffset; // 0x4fc(0x04)
	float PlaybackSpeed; // 0x500(0x04)
	int32_t NumTracks; // 0x504(0x04)
	float ElapsedTime; // 0x508(0x04)
	float Duration; // 0x53c(0x04)
	bool bManualTick; // 0x540(0x01)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime // (Final|Native|Public|BlueprintCallable) // @ game+0x197d8a0
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x197d880
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x197d800
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x197d780
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x197d4e0
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache // (Final|Native|Public|BlueprintCallable) // @ game+0x197d450
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x197d430
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed // (Final|Native|Public|BlueprintCallable) // @ game+0x197d410
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // @ game+0x197d3f0
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x197d3d0
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x197d3b0
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d380
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d350
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d320
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d2f0
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d2c0
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d290
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d260
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d200
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x197d1d0
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UGeometryCacheTrack : UObject {
	float Duration; // 0x30(0x04)
	char pad_2CFF6934[0x12c]; // 0x2cff6934(0x12c)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x2cff6a88 (Inherited: 0x2cff6a60)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x60(0x04)
	char pad_2CFF6A64[0x24]; // 0x2cff6a64(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample // (Final|Native|Public|HasOutParms) // @ game+0x197cf70
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a60)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; // 0x60(0x08)
	float StartSampleTime; // 0xd0(0x04)
	char pad_2CFF6A6C[0x6c]; // 0x2cff6a6c(0x6c)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x2cff6b08 (Inherited: 0x2cff6a60)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {
	char pad_2CFF6A60[0xa8]; // 0x2cff6a60(0xa8)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x197d570
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x2cff6b08 (Inherited: 0x2cff6a60)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {
	char pad_2CFF6A60[0xa8]; // 0x2cff6a60(0xa8)

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh // (Final|Native|Public|HasOutParms) // @ game+0x197d570
};

