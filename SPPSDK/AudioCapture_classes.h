// Class AudioCapture.AudioCapture
// Size: 0x2cff6ab8 (Inherited: 0x2cff6ab0)
struct UAudioCapture : UAudioGenerator {
	char pad_2CFF6AB0[0x8]; // 0x2cff6ab0(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x1b03ce0
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x1b03cc0
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x1b03c90
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b03be0
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b03bb0
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x2cff6ad0 (Inherited: 0x2cff6b10)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x710(0x04)
};

