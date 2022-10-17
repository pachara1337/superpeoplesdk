// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8 {
	LeftMouseButton = 0,
	RightMouseButton = 1,
	MiddleMouseButton = 2,
	ThumbMouseButton = 3,
	ThumbMouseButton2 = 4,
	BackSpace = 5,
	Tab = 6,
	Enter = 7,
	Pause = 8,
	CapsLock = 9,
	Escape = 10,
	SpaceBar = 11,
	PageUp = 12,
	PageDown = 13,
	End = 14,
	Home = 15,
	Left = 16,
	Up = 17,
	Right = 18,
	Down = 19,
	Insert = 20,
	Delete = 21,
	Zero = 22,
	One = 23,
	Two = 24,
	Three = 25,
	Four = 26,
	Five = 27,
	Six = 28,
	Seven = 29,
	Eight = 30,
	Nine = 31,
	A = 32,
	B = 33,
	C = 34,
	D = 35,
	E = 36,
	F = 37,
	G = 38,
	H = 39,
	I = 40,
	J = 41,
	K = 42,
	L = 43,
	M = 44,
	N = 45,
	O = 46,
	P = 47,
	Q = 48,
	R = 49,
	S = 50,
	T = 51,
	U = 52,
	V = 53,
	W = 54,
	X = 55,
	Y = 56,
	Z = 57,
	NumPadZero = 58,
	NumPadOne = 59,
	NumPadTwo = 60,
	NumPadThree = 61,
	NumPadFour = 62,
	NumPadFive = 63,
	NumPadSix = 64,
	NumPadSeven = 65,
	NumPadEight = 66,
	NumPadNine = 67,
	Multiply = 68,
	Add = 69,
	Subtract = 70,
	Decimal = 71,
	Divide = 72,
	F1 = 73,
	F2 = 74,
	F3 = 75,
	F4 = 76,
	F5 = 77,
	F6 = 78,
	F7 = 79,
	F8 = 80,
	F9 = 81,
	F10 = 82,
	F11 = 83,
	F12 = 84,
	NumLock = 85,
	ScrollLock = 86,
	LeftShift = 87,
	RightShift = 88,
	LeftControl = 89,
	RightControl = 90,
	LeftAlt = 91,
	RightAlt = 92,
	LeftCommand = 93,
	RightCommand = 94,
	Semicolon = 95,
	Equals = 96,
	Comma = 97,
	Underscore = 98,
	Period = 99,
	Slash = 100,
	Tilde = 101,
	LeftBracket = 102,
	Backslash = 103,
	RightBracket = 104,
	Quote = 105,
	Unknown = 106,
	ECoherentUIGTKeys_MAX = 107
};

// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8 {
	None = 0,
	Keyboard = 1,
	Joystick = 2,
	KeyboardAndJoystick = 3,
	ECoherentUIGTInputPropagationBehaviour_MAX = 4
};

// Enum CoherentUIGTPlugin.ECoh_MouseButton
enum class ECoh_MouseButton : uint8 {
	ButtonNone = 0,
	ButtonLeft = 1,
	ButtonMiddle = 2,
	ButtonRight = 3,
	ECoh_MAX = 4
};

// Enum CoherentUIGTPlugin.ECoh_EventType
enum class ECoh_EventType : uint8 {
	MouseMove = 0,
	MouseDown = 1,
	MouseUp = 2,
	MouseWheel = 3,
	ECoh_MAX = 4
};

// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8 {
	MSAA_1x = 0,
	MSAA_2x = 1,
	MSAA_4x = 2,
	MSAA_MAX = 3
};

// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8 {
	Trace = 0,
	Debug = 1,
	Info = 2,
	Warning = 3,
	AssertFailure = 4,
	Error = 5,
	ECoherentUIGTSettingsSeverity_MAX = 6
};

// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8 {
	ResetState = 0,
	UseCurrentState = 1,
	UseStateBeforeReset = 2,
	EGamepadBehaviourOnFocusLost_MAX = 3
};

// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8 {
	GTInputLineTrace_Single = 0,
	GTInputLineTrace_Multi = 1,
	GTInputLineTrace_MAX = 2
};

// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8 {
	RaycastQuality_Fast = 0,
	RaycastQuality_Balanced = 1,
	RaycastQuality_Accurate = 2,
	RaycastQuality_MAX = 3
};

// ScriptStruct CoherentUIGTPlugin.Coh_MouseEventData
// Size: 0x2cffb030 (Inherited: 0x00)
struct FCoh_MouseEventData {
	enum class ECoh_EventType Type; // 0x00(0x01)
	enum class ECoh_MouseButton Button; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t X; // 0x04(0x04)
	int32_t Y; // 0x08(0x04)
	float WheelX; // 0x0c(0x04)
	float WheelY; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString InputGroupName; // 0x18(0x10)
	bool bDoubleClick; // 0x28(0x01)
	char pad_29[0x2cffb007]; // 0x29(0x2cffb007)
};

// ScriptStruct CoherentUIGTPlugin.CoherentSound
// Size: 0x2cffea10 (Inherited: 0x00)
struct FCoherentSound {
	struct UAudioComponent* Component; // 0x00(0x08)
	struct USoundWaveProcedural* Stream; // 0x08(0x08)
	char pad_10[0x2cffea00]; // 0x10(0x2cffea00)
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTLoadingScreenSettings
// Size: 0x2cff6d18 (Inherited: 0x00)
struct FCoherentUIGTLoadingScreenSettings {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bWaitForManualStop; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString URL; // 0x08(0x10)
	char pad_18[0x2cff6d00]; // 0x18(0x2cff6d00)
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTViewInfo
// Size: 0x2cff6a14 (Inherited: 0x00)
struct FCoherentUIGTViewInfo {
	int32_t Width; // 0x00(0x04)
	int32_t Height; // 0x04(0x04)
	bool IsTransparent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ClickThroughAlphaThreshold; // 0x0c(0x04)
	float AnimationFrameDefer; // 0x10(0x04)
	char pad_14[0x2cff6a00]; // 0x14(0x2cff6a00)
};

// ScriptStruct CoherentUIGTPlugin.Coh_PrivateInfo
// Size: 0x2cffe970 (Inherited: 0x00)
struct FCoh_PrivateInfo {
	struct FString SessionID; // 0x00(0x10)
	struct FString AuthToken; // 0x10(0x10)
	struct FString ApiGameUrl; // 0x20(0x10)
	struct FString CoherentUrl; // 0x30(0x10)
	struct FString TournamentBaseUrl; // 0x40(0x10)
	struct FString ApiPhase; // 0x50(0x10)
	struct FString BannerVersion; // 0x60(0x10)
	char pad_70[0x2cffe900]; // 0x70(0x2cffe900)
};

