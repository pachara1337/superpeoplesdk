// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UMovieSceneCaptureProtocolBase : UObject {
	enum class EMovieSceneCaptureProtocolState State; // 0x58(0x01)
	char pad_2CFF6931[0x12f]; // 0x2cff6931(0x12f)

	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d873f0
	enum class EMovieSceneCaptureProtocolState GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3748490
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x2cff6a98 (Inherited: 0x2cff6a60)
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	struct FString Filename; // 0x60(0x10)
	char pad_2CFF6A70[0x28]; // 0x2cff6a70(0x28)
};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x2cff6a60 (Inherited: 0x2cff6a60)
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a60)
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x60(0x10)
	bool bCaptureFramesInHDR; // 0x70(0x01)
	int32_t HDRCompressionQuality; // 0x74(0x04)
	enum class EHDRCaptureGamut CaptureGamut; // 0x78(0x01)
	struct FSoftObjectPath PostProcessingMaterial; // 0x80(0x20)
	bool bDisableScreenPercentage; // 0xa0(0x01)
	struct UMaterialInterface* PostProcessingMaterialPtr; // 0xa8(0x08)
	char pad_2CFF6A9F[0x31]; // 0x2cff6a9f(0x31)
};

// Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x2cff6a70 (Inherited: 0x2cff6a60)
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase {
	char pad_2CFF6A60[0x10]; // 0x2cff6a60(0x10)
};

// Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a70)
struct UImageSequenceProtocol : UFrameGrabberProtocol {
	char pad_2CFF6A70[0x70]; // 0x2cff6a70(0x70)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae0)
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xe0(0x04)
	char pad_2CFF6AE4[0x4]; // 0x2cff6ae4(0x04)
};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0x2cff6ae0 (Inherited: 0x2cff6ae0)
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae8)
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae8)
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0x2cff6af0 (Inherited: 0x2cff6ae0)
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xe0(0x01)
	enum class EHDRCaptureGamut CaptureGamut; // 0xe1(0x01)
	char pad_2CFF6AE2[0xe]; // 0x2cff6ae2(0x0e)
};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UMovieSceneCaptureInterface : UInterface {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UMovieSceneCapture : UObject {
	struct FSoftClassPath ImageCaptureProtocolType; // 0x40(0x20)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x60(0x20)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x80(0x08)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x88(0x08)
	struct FMovieSceneCaptureSettings Settings; // 0x90(0x70)
	bool bUseSeparateProcess; // 0x100(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0x101(0x01)
	struct FString AdditionalCommandLineArguments; // 0x108(0x10)
	struct FString InheritedCommandLineArguments; // 0x118(0x10)
	char pad_2CFF6A12[0x26]; // 0x2cff6a12(0x26)

	void SetImageCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType // (Final|Native|Public|BlueprintCallable) // @ game+0x3d876e0
	void SetAudioCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType // (Final|Native|Public|BlueprintCallable) // @ game+0x3d87660
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol // (Final|Native|Public|BlueprintCallable) // @ game+0x3d873a0
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol // (Final|Native|Public|BlueprintCallable) // @ game+0x3d87300
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x2cff6a58 (Inherited: 0x2cff6a38)
struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x238(0x01)
	struct FGuid PrerequisiteActorId; // 0x244(0x10)
	char pad_2CFF6A49[0xf]; // 0x2cff6a49(0x0f)
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UMovieSceneCaptureEnvironment : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)

	bool IsCaptureInProgress(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3d873c0
	int32_t GetCaptureFrameNumber(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d87350
	float GetCaptureElapsedTime(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d87320
	struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3d86f50
	struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3d86f20
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a60)
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct UWorld* World; // 0x60(0x08)
	char pad_2CFF6A68[0x78]; // 0x2cff6a68(0x78)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels // (Final|Native|Public|BlueprintCallable) // @ game+0x3d878f0
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d87760
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d87490
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	bool OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup // (Native|Event|Protected|BlueprintEvent) // @ game+0x3d87460
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	bool OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x3d87430
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d87380
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d86f80
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae0)
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	enum class EDesiredImageFormat Format; // 0xe0(0x01)
	bool bEnableCompression; // 0xe1(0x01)
	int32_t CompressionQuality; // 0xe4(0x04)
	char pad_2CFF6AE6[0x2]; // 0x2cff6ae6(0x02)

	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d87910
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x3d87280
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d87070
};

// Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x2cff6a88 (Inherited: 0x2cff6a70)
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x70(0x01)
	float CompressionQuality; // 0x74(0x04)
	char pad_2CFF6A75[0x13]; // 0x2cff6a75(0x13)
};

