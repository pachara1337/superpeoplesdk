// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8 {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8 {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8 {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8 {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3,
	EDynamicBoxType_MAX = 4
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	EWidgetDesignFlags_MAX = 5
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8 {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

// ScriptStruct UMG.EventReply
// Size: 0x2cff69c0 (Inherited: 0x00)
struct FEventReply {
	char pad_0[0x2cff69c0]; // 0x00(0x2cff69c0)
};

// ScriptStruct UMG.WidgetTransform
// Size: 0x2cff6a1c (Inherited: 0x00)
struct FWidgetTransform {
	struct FVector2D Translation; // 0x00(0x08)
	struct FVector2D Scale; // 0x08(0x08)
	struct FVector2D Shear; // 0x10(0x08)
	float Angle; // 0x18(0x04)
	char pad_1C[0x2cff6a00]; // 0x1c(0x2cff6a00)
};

// ScriptStruct UMG.PaintContext
// Size: 0x2cff6a30 (Inherited: 0x00)
struct FPaintContext {
	char pad_0[0x2cff6a30]; // 0x00(0x2cff6a30)
};

// ScriptStruct UMG.ShapedTextOptions
// Size: 0x2cff6a03 (Inherited: 0x00)
struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x00(0x01)
	char bOverride_TextFlowDirection : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	enum class ETextShapingMethod TextShapingMethod; // 0x01(0x01)
	enum class ETextFlowDirection TextFlowDirection; // 0x02(0x01)
	char pad_3[0x2cff6a00]; // 0x03(0x2cff6a00)
};

// ScriptStruct UMG.AnimationEventBinding
// Size: 0x2cff6c30 (Inherited: 0x00)
struct FAnimationEventBinding {
	struct UWidgetAnimation* Animation; // 0x00(0x08)
	struct FDelegate Delegate; // 0x08(0x14)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName UserTag; // 0x20(0x0c)
	char pad_2C[0x2cff6c04]; // 0x2c(0x2cff6c04)
};

// ScriptStruct UMG.NamedSlotBinding
// Size: 0x2cff7618 (Inherited: 0x00)
struct FNamedSlotBinding {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UWidget* Content; // 0x10(0x08)
	char pad_18[0x2cff7600]; // 0x18(0x2cff7600)
};

// ScriptStruct UMG.AnchorData
// Size: 0x2cffe928 (Inherited: 0x00)
struct FAnchorData {
	struct FMargin Offsets; // 0x00(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)
	char pad_28[0x2cffe900]; // 0x28(0x2cffe900)
};

// ScriptStruct UMG.DynamicPropertyPath
// Size: 0x2cff6c28 (Inherited: 0x2cff6928)
struct FDynamicPropertyPath : FCachedPropertyPath {
	char pad_2CFF6928[0x300]; // 0x2cff6928(0x300)
};

// ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x2cff6a04 (Inherited: 0x00)
struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x00(0x04)
	char pad_4[0x2cff6a00]; // 0x04(0x2cff6a00)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// Size: 0x2cff6cc0 (Inherited: 0x2cffd358)
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x58(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x198(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x238(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x378(0x140)
	enum class EMovieSceneBlendType BlendType; // 0x4b8(0x01)
	struct FMovieScene2DTransformMask Mask; // 0x4bc(0x04)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x2cff69e0 (Inherited: 0x2cffd358)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel TopCurve; // 0x58(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0xf8(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x198(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x238(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0x2d8(0x01)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x2cff6990 (Inherited: 0x2cffd680)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x80(0x10)
};

// ScriptStruct UMG.RichTextStyleRow
// Size: 0x2cff6c90 (Inherited: 0x2cff6b08)
struct FRichTextStyleRow : FTableRowBase {
	struct FTextBlockStyle TextStyle; // 0x08(0x288)
};

// ScriptStruct UMG.RichImageRow
// Size: 0x2cff6998 (Inherited: 0x2cff6b08)
struct FRichImageRow : FTableRowBase {
	struct FSlateBrush Brush; // 0x08(0x90)
};

// ScriptStruct UMG.SlateMeshVertex
// Size: 0x2cff693c (Inherited: 0x00)
struct FSlateMeshVertex {
	struct FVector2D Position; // 0x00(0x08)
	struct FColor Color; // 0x08(0x04)
	struct FVector2D UV0; // 0x0c(0x08)
	struct FVector2D UV1; // 0x14(0x08)
	struct FVector2D UV2; // 0x1c(0x08)
	struct FVector2D UV3; // 0x24(0x08)
	struct FVector2D UV4; // 0x2c(0x08)
	struct FVector2D UV5; // 0x34(0x08)
	char pad_3C[0x2cff6900]; // 0x3c(0x2cff6900)
};

// ScriptStruct UMG.SlateChildSize
// Size: 0x2cff6a08 (Inherited: 0x00)
struct FSlateChildSize {
	float Value; // 0x00(0x04)
	enum class ESlateSizeRule SizeRule; // 0x04(0x01)
	char pad_5[0x2cff6a03]; // 0x05(0x2cff6a03)
};

// ScriptStruct UMG.UserWidgetPool
// Size: 0x2cff6980 (Inherited: 0x00)
struct FUserWidgetPool {
	struct TArray<struct UUserWidget*> ActiveWidgets; // 0x00(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets; // 0x10(0x10)
	char pad_20[0x2cff6960]; // 0x20(0x2cff6960)
};

// ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x2cff692c (Inherited: 0x00)
struct FWidgetAnimationBinding {
	struct FName WidgetName; // 0x00(0x0c)
	struct FName SlotWidgetName; // 0x0c(0x0c)
	struct FGuid AnimationGuid; // 0x18(0x10)
	bool bIsRootWidget; // 0x28(0x01)
	char pad_29[0x2cff6903]; // 0x29(0x2cff6903)
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size: 0x2cff6c28 (Inherited: 0x00)
struct FBlueprintWidgetAnimationDelegateBinding {
	enum class EWidgetAnimationEvent Action; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName AnimationToBind; // 0x04(0x0c)
	struct FName FunctionNameToBind; // 0x10(0x0c)
	struct FName UserTag; // 0x1c(0x0c)
	char pad_28[0x2cff6c00]; // 0x28(0x2cff6c00)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x2cff6958 (Inherited: 0x00)
struct FDelegateRuntimeBinding {
	struct FString ObjectName; // 0x00(0x10)
	struct FName PropertyName; // 0x10(0x0c)
	struct FName FunctionName; // 0x1c(0x0c)
	struct FDynamicPropertyPath SourcePath; // 0x28(0x28)
	enum class EBindingKind Kind; // 0x50(0x01)
	char pad_51[0x2cff6907]; // 0x51(0x2cff6907)
};

// ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0x2cff69b8 (Inherited: 0x2cffcba8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData {
};

// ScriptStruct UMG.WidgetNavigationData
// Size: 0x2cffe92c (Inherited: 0x00)
struct FWidgetNavigationData {
	enum class EUINavigationRule Rule; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName WidgetToFocus; // 0x04(0x0c)
	struct TWeakObjectPtr<struct UWidget> Widget; // 0x10(0x08)
	struct FDelegate CustomDelegate; // 0x18(0x14)
	char pad_2C[0x2cffe900]; // 0x2c(0x2cffe900)
};

