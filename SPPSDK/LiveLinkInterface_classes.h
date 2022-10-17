// Class LiveLinkInterface.LiveLinkSourceFactory
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct ULiveLinkSourceFactory : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class LiveLinkInterface.LiveLinkRole
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct ULiveLinkRole : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class LiveLinkInterface.LiveLinkBasicRole
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULiveLinkBasicRole : ULiveLinkRole {
};

// Class LiveLinkInterface.LiveLinkAnimationRole
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULiveLinkAnimationRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkTransformRole
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULiveLinkTransformRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkCameraRole
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULiveLinkCameraRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkController
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct ULiveLinkController : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class LiveLinkInterface.LiveLinkSourceSettings
// Size: 0x2cff6ca0 (Inherited: 0x2cff6930)
struct ULiveLinkSourceSettings : UObject {
	enum class ELiveLinkSourceMode Mode; // 0x30(0x01)
	struct FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x38(0x50)
	struct FString ConnectionString; // 0x88(0x10)
	struct ULiveLinkSourceFactory* Factory; // 0x98(0x08)
	char pad_2CFF6999[0x307]; // 0x2cff6999(0x307)
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// Size: 0x2cff6af0 (Inherited: 0x2cff6ca0)
struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	struct FLiveLinkCurveConversionSettings CurveConversionSettings; // 0xa0(0x50)
};

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct ULiveLinkFrameInterpolationProcessor : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class LiveLinkInterface.LiveLinkFramePreProcessor
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct ULiveLinkFramePreProcessor : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class LiveLinkInterface.LiveLinkFrameTranslator
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct ULiveLinkFrameTranslator : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class LiveLinkInterface.LiveLinkLightRole
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULiveLinkLightRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct ULiveLinkSubjectSettings : UObject {
	struct TArray<struct ULiveLinkFramePreProcessor*> PreProcessors; // 0x30(0x10)
	struct ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x40(0x08)
	struct TArray<struct ULiveLinkFrameTranslator*> Translators; // 0x48(0x10)
	struct ULiveLinkRole* Role; // 0x58(0x08)
	char pad_2CFF6960[0x100]; // 0x2cff6960(0x100)
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
// Size: 0x2cff6ae8 (Inherited: 0x2cff6930)
struct ULiveLinkVirtualSubject : UObject {
	struct ULiveLinkRole* Role; // 0x38(0x08)
	struct TArray<struct FLiveLinkSubjectName> Subjects; // 0x40(0x10)
	struct TArray<struct ULiveLinkFrameTranslator*> FrameTranslators; // 0x50(0x10)
	char pad_2CFF6958[0x190]; // 0x2cff6958(0x190)
};

