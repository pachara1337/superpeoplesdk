// Class InteractiveToolsFramework.InputBehavior
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UInputBehavior : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)
};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size: 0x2cff6a80 (Inherited: 0x2cff6a38)
struct UAnyButtonInputBehavior : UInputBehavior {
	char pad_2CFF6A38[0x48]; // 0x2cff6a38(0x48)
};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UInteractiveGizmoBuilder : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.InteractiveGizmo
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UInteractiveGizmo : UObject {
	struct UInputBehaviorSet* InputBehaviors; // 0x38(0x08)
	char pad_2CFF6938[0x108]; // 0x2cff6938(0x108)
};

// Class InteractiveToolsFramework.AxisAngleGizmo
// Size: 0x2cff6af8 (Inherited: 0x2cff6a40)
struct UAxisAngleGizmo : UInteractiveGizmo {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x60(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80(0x10)
	bool bInInteraction; // 0x90(0x01)
	struct FVector RotationOrigin; // 0x94(0x0c)
	struct FVector RotationAxis; // 0xa0(0x0c)
	struct FVector RotationPlaneX; // 0xac(0x0c)
	struct FVector RotationPlaneY; // 0xb8(0x0c)
	struct FVector InteractionStartPoint; // 0xc4(0x0c)
	struct FVector InteractionCurPoint; // 0xd0(0x0c)
	float InteractionStartAngle; // 0xdc(0x04)
	float InteractionCurAngle; // 0xe0(0x04)
	char pad_2CFF6AD1[0x27]; // 0x2cff6ad1(0x27)
};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.AxisPositionGizmo
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a40)
struct UAxisPositionGizmo : UInteractiveGizmo {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x60(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80(0x10)
	bool bEnableSignedAxis; // 0x90(0x01)
	bool bInInteraction; // 0x91(0x01)
	struct FVector InteractionOrigin; // 0x94(0x0c)
	struct FVector InteractionAxis; // 0xa0(0x0c)
	struct FVector InteractionStartPoint; // 0xac(0x0c)
	struct FVector InteractionCurPoint; // 0xb8(0x0c)
	float InteractionStartParameter; // 0xc4(0x04)
	float InteractionCurParameter; // 0xc8(0x04)
	float ParameterSign; // 0xcc(0x04)
	char pad_2CFF6ABE[0x22]; // 0x2cff6abe(0x22)
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UGizmoConstantAxisSource : UObject {
	struct FVector Origin; // 0x38(0x0c)
	struct FVector Direction; // 0x44(0x0c)
	char pad_2CFF6948[0x108]; // 0x2cff6948(0x108)
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct UGizmoConstantFrameAxisSource : UObject {
	struct FVector Origin; // 0x38(0x0c)
	struct FVector Direction; // 0x44(0x0c)
	struct FVector TangentX; // 0x50(0x0c)
	struct FVector TangentY; // 0x5c(0x0c)
	char pad_2CFF6960[0x108]; // 0x2cff6960(0x108)
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UGizmoWorldAxisSource : UObject {
	struct FVector Origin; // 0x38(0x0c)
	int32_t AxisIndex; // 0x44(0x04)
	char pad_2CFF6940[0x108]; // 0x2cff6940(0x108)
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size: 0x2cff6c48 (Inherited: 0x2cff6930)
struct UGizmoComponentAxisSource : UObject {
	struct USceneComponent* Component; // 0x38(0x08)
	int32_t AxisIndex; // 0x40(0x04)
	bool bLocalAxes; // 0x44(0x01)
	char pad_2CFF693D[0x30b]; // 0x2cff693d(0x30b)
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size: 0x2cff6a58 (Inherited: 0x2cff6930)
struct UInteractiveToolPropertySet : UObject {
	struct UObject* CachedProperties; // 0x48(0x08)
	bool bIsPropertySetEnabled; // 0x50(0x01)
	char pad_2CFF6939[0x11f]; // 0x2cff6939(0x11f)
};

// Class InteractiveToolsFramework.BrushBaseProperties
// Size: 0x2cff6a70 (Inherited: 0x2cff6a58)
struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; // 0x58(0x04)
	bool bSpecifyRadius; // 0x5c(0x01)
	float BrushRadius; // 0x60(0x04)
	float BrushStrength; // 0x64(0x04)
	float BrushFalloffAmount; // 0x68(0x04)
	bool bShowStrength; // 0x6c(0x01)
	bool bShowFalloff; // 0x6d(0x01)
	char pad_2CFF6A6B[0x5]; // 0x2cff6a6b(0x05)
};

// Class InteractiveToolsFramework.InteractiveTool
// Size: 0x2cffdb88 (Inherited: 0x2cff6930)
struct UInteractiveTool : UObject {
	struct UInputBehaviorSet* InputBehaviors; // 0x50(0x08)
	struct TArray<struct UObject*> ToolPropertyObjects; // 0x58(0x10)
	char pad_2CFF6948[0x7240]; // 0x2cff6948(0x7240)
};

// Class InteractiveToolsFramework.SingleSelectionTool
// Size: 0x2cff6a90 (Inherited: 0x2cffdb88)
struct USingleSelectionTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a90)
struct UMeshSurfacePointTool : USingleSelectionTool {
	char pad_2CFF6A90[0x38]; // 0x2cff6a90(0x38)
};

// Class InteractiveToolsFramework.BaseBrushTool
// Size: 0x2cff6ad0 (Inherited: 0x2cff6ac8)
struct UBaseBrushTool : UMeshSurfacePointTool {
	struct UBrushBaseProperties* BrushProperties; // 0xc8(0x08)
	bool bInBrushStroke; // 0xd0(0x01)
	struct FBrushStampData LastBrushStamp; // 0xd4(0xb0)
	struct TSoftClassPtr<UObject> PropertyClass; // 0x198(0x30)
	struct UBrushStampIndicator* BrushStampIndicator; // 0x1c8(0x08)
};

// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UBrushStampIndicatorBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.BrushStampIndicator
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a40)
struct UBrushStampIndicator : UInteractiveGizmo {
	float BrushRadius; // 0x40(0x04)
	float BrushFalloff; // 0x44(0x04)
	struct FVector BrushPosition; // 0x48(0x0c)
	struct FVector BrushNormal; // 0x54(0x0c)
	bool bDrawIndicatorLines; // 0x60(0x01)
	bool bDrawRadiusCircle; // 0x61(0x01)
	bool bDrawFalloffCircle; // 0x62(0x01)
	int32_t SampleStepCount; // 0x64(0x04)
	struct FLinearColor LineColor; // 0x68(0x10)
	float LineThickness; // 0x78(0x04)
	bool bDepthTested; // 0x7c(0x01)
	bool bDrawSecondaryLines; // 0x7d(0x01)
	float SecondaryLineThickness; // 0x80(0x04)
	struct FLinearColor SecondaryLineColor; // 0x84(0x10)
	struct UPrimitiveComponent* AttachedComponent; // 0x98(0x08)
	char pad_2CFF6A99[0x1f]; // 0x2cff6a99(0x1f)
};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// Size: 0x2cff6a40 (Inherited: 0x2cff6a80)
struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120(0x01)
};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size: 0x2cff6a80 (Inherited: 0x2cff6a40)
struct ULocalClickDragInputBehavior : UClickDragInputBehavior {
	char pad_2CFF6A40[0x40]; // 0x2cff6a40(0x40)
};

// Class InteractiveToolsFramework.InteractiveToolBuilder
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UInteractiveToolBuilder : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class InteractiveToolsFramework.ClickDragToolBuilder
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UClickDragToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.ClickDragTool
// Size: 0x2cff6a90 (Inherited: 0x2cffdb88)
struct UClickDragTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
// Size: 0x2cff6b08 (Inherited: 0x2cff6b08)
struct AInternalToolFrameworkActor : AActor {
};

// Class InteractiveToolsFramework.GizmoActor
// Size: 0x2cff6b08 (Inherited: 0x2cff6b08)
struct AGizmoActor : AInternalToolFrameworkActor {
};

// Class InteractiveToolsFramework.GizmoBaseComponent
// Size: 0x2cff6ae0 (Inherited: 0x2cffdfc0)
struct UGizmoBaseComponent : UPrimitiveComponent {
	struct FLinearColor Color; // 0x4c0(0x10)
	float HoverSizeMultiplier; // 0x4d0(0x04)
	float PixelHitDistanceThreshold; // 0x4d4(0x04)

	void UpdateWorldLocalState(bool bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState // (Final|Native|Public) // @ game+0x492ee40
	void UpdateHoverState(bool bHoveringIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState // (Final|Native|Public) // @ game+0x492edb0
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// Size: 0x2cff6b00 (Inherited: 0x2cff6ae0)
struct UGizmoArrowComponent : UGizmoBaseComponent {
	struct FVector Direction; // 0x4e0(0x0c)
	float Gap; // 0x4ec(0x04)
	float Length; // 0x4f0(0x04)
	float Thickness; // 0x4f4(0x04)
	char pad_2CFF6AF8[0x8]; // 0x2cff6af8(0x08)
};

// Class InteractiveToolsFramework.GizmoBoxComponent
// Size: 0x2cff6b20 (Inherited: 0x2cff6ae0)
struct UGizmoBoxComponent : UGizmoBaseComponent {
	struct FVector Origin; // 0x4e0(0x0c)
	struct FQuat Rotation; // 0x4f0(0x10)
	struct FVector Dimensions; // 0x500(0x0c)
	float LineThickness; // 0x50c(0x04)
	bool bRemoveHiddenLines; // 0x510(0x01)
	bool bEnableAxisFlip; // 0x511(0x01)
	char pad_2CFF6B0E[0x12]; // 0x2cff6b0e(0x12)
};

// Class InteractiveToolsFramework.GizmoCircleComponent
// Size: 0x2cff6b00 (Inherited: 0x2cff6ae0)
struct UGizmoCircleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x4e0(0x0c)
	float Radius; // 0x4ec(0x04)
	float Thickness; // 0x4f0(0x04)
	int32_t NumSides; // 0x4f4(0x04)
	bool bViewAligned; // 0x4f8(0x01)
	bool bOnlyAllowFrontFacingHits; // 0x4f9(0x01)
	char pad_2CFF6AFA[0x6]; // 0x2cff6afa(0x06)
};

// Class InteractiveToolsFramework.GizmoTransformSource
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UGizmoTransformSource : UInterface {

	void SetTransform(struct FTransform& NewTransform); // Function InteractiveToolsFramework.GizmoTransformSource.SetTransform // (Native|Public|HasOutParms|HasDefaults) // @ game+0x492ec40
	struct FTransform GetTransform(); // Function InteractiveToolsFramework.GizmoTransformSource.GetTransform // (Native|Public|HasDefaults|Const) // @ game+0x492ea90
};

// Class InteractiveToolsFramework.GizmoAxisSource
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UGizmoAxisSource : UInterface {

	bool HasTangentVectors(); // Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors // (Native|Public|Const) // @ game+0x492eb00
	void GetTangentVectors(struct FVector& TangentXOut, struct FVector& TangentYOut); // Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors // (Native|Public|HasOutParms|HasDefaults|Const) // @ game+0x492e9a0
	struct FVector GetOrigin(); // Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin // (Native|Public|HasDefaults|Const) // @ game+0x45870b0
	struct FVector GetDirection(); // Function InteractiveToolsFramework.GizmoAxisSource.GetDirection // (Native|Public|HasDefaults|Const) // @ game+0x492e8f0
};

// Class InteractiveToolsFramework.GizmoClickTarget
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UGizmoClickTarget : UInterface {

	void UpdateHoverState(bool bHovering); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState // (Native|Public|Const) // @ game+0x492ed20
};

// Class InteractiveToolsFramework.GizmoStateTarget
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UGizmoStateTarget : UInterface {

	void EndUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate // (Native|Public) // @ game+0x2263000
	void BeginUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate // (Native|Public) // @ game+0x2262fe0
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UGizmoFloatParameterSource : UInterface {

	void SetParameter(float NewValue); // Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter // (Native|Public) // @ game+0x492eb30
	float GetParameter(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter // (Native|Public|Const) // @ game+0x492e930
	void EndModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify // (Native|Public) // @ game+0x2315240
	void BeginModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify // (Native|Public) // @ game+0x2263000
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UGizmoVec2ParameterSource : UInterface {

	void SetParameter(struct FVector2D& NewValue); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter // (Native|Public|HasOutParms|HasDefaults) // @ game+0x492ebb0
	struct FVector2D GetParameter(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter // (Native|Public|HasDefaults|Const) // @ game+0x492e960
	void EndModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify // (Native|Public) // @ game+0x2315240
	void BeginModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify // (Native|Public) // @ game+0x2263000
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size: 0x2cff6b10 (Inherited: 0x2cff6ae0)
struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x4e0(0x0c)
	float HandleSize; // 0x4ec(0x04)
	float Thickness; // 0x4f0(0x04)
	struct FVector Direction; // 0x4f4(0x0c)
	float Length; // 0x500(0x04)
	bool bImageScale; // 0x504(0x01)
	char pad_2CFF6B05[0xb]; // 0x2cff6b05(0x0b)
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// Size: 0x2cff6b10 (Inherited: 0x2cff6ae0)
struct UGizmoRectangleComponent : UGizmoBaseComponent {
	struct FVector DirectionX; // 0x4e0(0x0c)
	struct FVector DirectionY; // 0x4ec(0x0c)
	float OffsetX; // 0x4f8(0x04)
	float OffsetY; // 0x4fc(0x04)
	float LengthX; // 0x500(0x04)
	float LengthY; // 0x504(0x04)
	float Thickness; // 0x508(0x04)
	char SegmentFlags; // 0x50c(0x01)
	char pad_2CFF6B0D[0x3]; // 0x2cff6b0d(0x03)
};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size: 0x2cff6ac0 (Inherited: 0x2cff6930)
struct UGizmoLambdaHitTarget : UObject {
	char pad_2CFF6930[0x190]; // 0x2cff6930(0x190)
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size: 0x2cff6a80 (Inherited: 0x2cff6930)
struct UGizmoComponentHitTarget : UObject {
	struct UPrimitiveComponent* Component; // 0x38(0x08)
	char pad_2CFF6938[0x148]; // 0x2cff6938(0x148)
};

// Class InteractiveToolsFramework.InputBehaviorSet
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UInputBehaviorSet : UObject {
	struct TArray<struct FBehaviorInfo> Behaviors; // 0x30(0x10)
	char pad_2CFF6940[0x100]; // 0x2cff6940(0x100)
};

// Class InteractiveToolsFramework.InputBehaviorSource
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UInputBehaviorSource : UInterface {
};

// Class InteractiveToolsFramework.InputRouter
// Size: 0x2cff6ab8 (Inherited: 0x2cff6930)
struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x30(0x01)
	bool bAutoInvalidateOnCapture; // 0x31(0x01)
	struct UInputBehaviorSet* ActiveInputBehaviors; // 0x40(0x08)
	char pad_2CFF693A[0x17e]; // 0x2cff693a(0x17e)
};

// Class InteractiveToolsFramework.InteractionMechanic
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UInteractionMechanic : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// Size: 0x2cff6ac0 (Inherited: 0x2cff6930)
struct UInteractiveGizmoManager : UObject {
	struct TArray<struct FActiveGizmo> ActiveGizmos; // 0x38(0x10)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders; // 0x60(0x50)
	char pad_2CFF6990[0x130]; // 0x2cff6990(0x130)
};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UToolContextTransactionProvider : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolManager
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UInteractiveToolManager : UObject {
	struct UInteractiveTool* ActiveLeftTool; // 0x38(0x08)
	struct UInteractiveTool* ActiveRightTool; // 0x40(0x08)
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders; // 0x98(0x50)
	char pad_2CFF6990[0xb0]; // 0x2cff6990(0xb0)
};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UToolFrameworkComponent : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolsContext
// Size: 0x2cff6aa8 (Inherited: 0x2cff6930)
struct UInteractiveToolsContext : UObject {
	struct UInputRouter* InputRouter; // 0x60(0x08)
	struct UInteractiveToolManager* ToolManager; // 0x68(0x08)
	struct UInteractiveGizmoManager* GizmoManager; // 0x70(0x08)
	struct TSoftClassPtr<UObject> ToolManagerClass; // 0x78(0x30)
	char pad_2CFF6978[0x130]; // 0x2cff6978(0x130)
};

// Class InteractiveToolsFramework.IntervalGizmoActor
// Size: 0x2cff6b20 (Inherited: 0x2cff6b08)
struct AIntervalGizmoActor : AGizmoActor {
	struct UGizmoLineHandleComponent* UpIntervalComponent; // 0x308(0x08)
	struct UGizmoLineHandleComponent* DownIntervalComponent; // 0x310(0x08)
	struct UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x318(0x08)
};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a30)
struct UIntervalGizmoBuilder : UInteractiveGizmoBuilder {
	char pad_2CFF6A30[0x90]; // 0x2cff6a30(0x90)
};

// Class InteractiveToolsFramework.IntervalGizmo
// Size: 0x2cff6a40 (Inherited: 0x2cff6a40)
struct UIntervalGizmo : UInteractiveGizmo {
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x40(0x08)
	struct UTransformProxy* TransformProxy; // 0x58(0x08)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0x60(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x70(0x10)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x98(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0xa0(0x08)
};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UGizmoBaseFloatParameterSource : UObject {
	char pad_2CFF6930[0x120]; // 0x2cff6930(0x120)
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size: 0x2cff6a68 (Inherited: 0x2cff6a50)
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x50(0x10)
	float MinParameter; // 0x60(0x04)
	float MaxParameter; // 0x64(0x04)
};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size: 0x2cff6a30 (Inherited: 0x2cff6a38)
struct UKeyAsModifierInputBehavior : UInputBehavior {
};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size: 0x2cff6a38 (Inherited: 0x2cff6a30)
struct UMeshSurfacePointToolBuilder : UInteractiveToolBuilder {
	char pad_2CFF6A30[0x8]; // 0x2cff6a30(0x08)
};

// Class InteractiveToolsFramework.MouseHoverBehavior
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a38)
struct UMouseHoverBehavior : UInputBehavior {
	char pad_2CFF6A38[0x68]; // 0x2cff6a38(0x68)
};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size: 0x2cff6a30 (Inherited: 0x2cff6a80)
struct UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior {
};

// Class InteractiveToolsFramework.MultiSelectionTool
// Size: 0x2cff6a98 (Inherited: 0x2cffdb88)
struct UMultiSelectionTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size: 0x2cff6a60 (Inherited: 0x2cff6a50)
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x50(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x54(0x08)
	char pad_2CFF6A5C[0x4]; // 0x2cff6a5c(0x04)
};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UGizmoBaseVec2ParameterSource : UObject {
	char pad_2CFF6930[0x120]; // 0x2cff6930(0x120)
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size: 0x2cff6a68 (Inherited: 0x2cff6a50)
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	struct FVector2D Value; // 0x50(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0x58(0x10)
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size: 0x2cff6b10 (Inherited: 0x2cff6a50)
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	float Parameter; // 0xb0(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0xb4(0x08)
	struct FVector CurTranslationAxis; // 0xbc(0x0c)
	struct FVector CurTranslationOrigin; // 0xc8(0x0c)
	struct FTransform InitialTransform; // 0xe0(0x30)
	char pad_2CFF6AC4[0x4c]; // 0x2cff6ac4(0x4c)
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size: 0x2cff6a30 (Inherited: 0x2cff6a50)
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	struct FVector2D Parameter; // 0xb0(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0xb8(0x10)
	struct FVector CurTranslationOrigin; // 0xc8(0x0c)
	struct FVector CurTranslationNormal; // 0xd4(0x0c)
	struct FVector CurTranslationAxisX; // 0xe0(0x0c)
	struct FVector CurTranslationAxisY; // 0xec(0x0c)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a50)
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x60(0x10)
	float Angle; // 0x70(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x74(0x08)
	struct FVector CurRotationAxis; // 0x7c(0x0c)
	struct FVector CurRotationOrigin; // 0x88(0x0c)
	struct FTransform InitialTransform; // 0xa0(0x30)
	char pad_2CFF6AC4[0xc]; // 0x2cff6ac4(0x0c)
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size: 0x2cff6af0 (Inherited: 0x2cff6a50)
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x60(0x10)
	float ScaleMultiplier; // 0x70(0x04)
	struct FVector2D Parameter; // 0x74(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0x7c(0x10)
	struct FVector CurScaleOrigin; // 0x8c(0x0c)
	struct FVector CurScaleNormal; // 0x98(0x0c)
	struct FVector CurScaleAxisX; // 0xa4(0x0c)
	struct FVector CurScaleAxisY; // 0xb0(0x0c)
	struct FTransform InitialTransform; // 0xc0(0x30)
	char pad_2CFF6AEC[0x4]; // 0x2cff6aec(0x04)
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a50)
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x60(0x10)
	float ScaleMultiplier; // 0x70(0x04)
	float Parameter; // 0x74(0x04)
	struct FGizmoFloatParameterChange LastChange; // 0x78(0x08)
	struct FVector CurScaleAxis; // 0x80(0x0c)
	struct FVector CurScaleOrigin; // 0x8c(0x0c)
	struct FTransform InitialTransform; // 0xa0(0x30)
	char pad_2CFF6AC8[0x8]; // 0x2cff6ac8(0x08)
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size: 0x2cff6a30 (Inherited: 0x2cff6a50)
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90(0x10)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0(0x10)
	float ScaleMultiplier; // 0xb0(0x04)
	struct FVector2D Parameter; // 0xb4(0x08)
	struct FGizmoVec2ParameterChange LastChange; // 0xbc(0x10)
	struct FVector CurScaleOrigin; // 0xcc(0x0c)
	struct FVector CurScaleNormal; // 0xd8(0x0c)
	struct FVector CurScaleAxisX; // 0xe4(0x0c)
	struct FVector CurScaleAxisY; // 0xf0(0x0c)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.PlanePositionGizmo
// Size: 0x2cff6b08 (Inherited: 0x2cff6a40)
struct UPlanePositionGizmo : UInteractiveGizmo {
	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x50(0x10)
	struct TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x60(0x10)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x70(0x10)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x80(0x10)
	bool bEnableSignedAxis; // 0x90(0x01)
	bool bFlipX; // 0x91(0x01)
	bool bFlipY; // 0x92(0x01)
	bool bInInteraction; // 0x93(0x01)
	struct FVector InteractionOrigin; // 0x94(0x0c)
	struct FVector InteractionNormal; // 0xa0(0x0c)
	struct FVector InteractionAxisX; // 0xac(0x0c)
	struct FVector InteractionAxisY; // 0xb8(0x0c)
	struct FVector InteractionStartPoint; // 0xc4(0x0c)
	struct FVector InteractionCurPoint; // 0xd0(0x0c)
	struct FVector2D InteractionStartParameter; // 0xdc(0x08)
	struct FVector2D InteractionCurParameter; // 0xe4(0x08)
	struct FVector2D ParameterSigns; // 0xec(0x08)
	char pad_2CFF6AE4[0x24]; // 0x2cff6ae4(0x24)
};

// Class InteractiveToolsFramework.SelectionSet
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct USelectionSet : UObject {
	char pad_2CFF6930[0x118]; // 0x2cff6930(0x118)
};

// Class InteractiveToolsFramework.MeshSelectionSet
// Size: 0x2cff6a88 (Inherited: 0x2cff6a48)
struct UMeshSelectionSet : USelectionSet {
	struct TArray<int32_t> Vertices; // 0x48(0x10)
	struct TArray<int32_t> Edges; // 0x58(0x10)
	struct TArray<int32_t> Faces; // 0x68(0x10)
	struct TArray<int32_t> Groups; // 0x78(0x10)
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// Size: 0x2cff6a30 (Inherited: 0x2cff6a80)
struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	bool HitTestOnRelease; // 0xc0(0x01)
};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct USingleClickToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.SingleClickTool
// Size: 0x2cff6a90 (Inherited: 0x2cffdb88)
struct USingleClickTool : UInteractiveTool {
};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UGizmoNilStateTarget : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)
};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size: 0x2cff6ac0 (Inherited: 0x2cff6930)
struct UGizmoLambdaStateTarget : UObject {
	char pad_2CFF6930[0x190]; // 0x2cff6930(0x190)
};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UGizmoObjectModifyStateTarget : UObject {
	char pad_2CFF6930[0x130]; // 0x2cff6930(0x130)
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size: 0x2cff6af0 (Inherited: 0x2cff6930)
struct UGizmoTransformChangeStateTarget : UObject {
	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x58(0x10)
	char pad_2CFF6940[0x1b0]; // 0x2cff6940(0x1b0)
};

// Class InteractiveToolsFramework.TransformGizmoActor
// Size: 0x2cff6a88 (Inherited: 0x2cff6b08)
struct ATransformGizmoActor : AGizmoActor {
	struct UPrimitiveComponent* TranslateX; // 0x308(0x08)
	struct UPrimitiveComponent* TranslateY; // 0x310(0x08)
	struct UPrimitiveComponent* TranslateZ; // 0x318(0x08)
	struct UPrimitiveComponent* TranslateYZ; // 0x320(0x08)
	struct UPrimitiveComponent* TranslateXZ; // 0x328(0x08)
	struct UPrimitiveComponent* TranslateXY; // 0x330(0x08)
	struct UPrimitiveComponent* RotateX; // 0x338(0x08)
	struct UPrimitiveComponent* RotateY; // 0x340(0x08)
	struct UPrimitiveComponent* RotateZ; // 0x348(0x08)
	struct UPrimitiveComponent* UniformScale; // 0x350(0x08)
	struct UPrimitiveComponent* AxisScaleX; // 0x358(0x08)
	struct UPrimitiveComponent* AxisScaleY; // 0x360(0x08)
	struct UPrimitiveComponent* AxisScaleZ; // 0x368(0x08)
	struct UPrimitiveComponent* PlaneScaleYZ; // 0x370(0x08)
	struct UPrimitiveComponent* PlaneScaleXZ; // 0x378(0x08)
	struct UPrimitiveComponent* PlaneScaleXY; // 0x380(0x08)
};

// Class InteractiveToolsFramework.TransformGizmoBuilder
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a30)
struct UTransformGizmoBuilder : UInteractiveGizmoBuilder {
	char pad_2CFF6A30[0x90]; // 0x2cff6a30(0x90)
};

// Class InteractiveToolsFramework.TransformGizmo
// Size: 0x2cff6a90 (Inherited: 0x2cff6a40)
struct UTransformGizmo : UInteractiveGizmo {
	struct UTransformProxy* ActiveTarget; // 0x48(0x08)
	bool bSnapToWorldGrid; // 0x50(0x01)
	bool bUseContextCoordinateSystem; // 0x51(0x01)
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x54(0x04)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0xf0(0x10)
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents; // 0x100(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x110(0x10)
	struct UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x130(0x08)
	struct UGizmoComponentAxisSource* AxisXSource; // 0x138(0x08)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x140(0x08)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x148(0x08)
	struct UGizmoComponentAxisSource* UnitAxisXSource; // 0x150(0x08)
	struct UGizmoComponentAxisSource* UnitAxisYSource; // 0x158(0x08)
	struct UGizmoComponentAxisSource* UnitAxisZSource; // 0x160(0x08)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x168(0x08)
	struct UGizmoScaledTransformSource* ScaledTransformSource; // 0x170(0x08)
};

// Class InteractiveToolsFramework.TransformProxy
// Size: 0x2cff6af0 (Inherited: 0x2cff6930)
struct UTransformProxy : UObject {
	bool bRotatePerObject; // 0x78(0x01)
	bool bSetPivotMode; // 0x79(0x01)
	struct FTransform SharedTransform; // 0x90(0x30)
	struct FTransform InitialSharedTransform; // 0xc0(0x30)
	char pad_2CFF6992[0x15e]; // 0x2cff6992(0x15e)
};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UGizmoBaseTransformSource : UObject {
	char pad_2CFF6930[0x120]; // 0x2cff6930(0x120)
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size: 0x2cff6a60 (Inherited: 0x2cff6a50)
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	struct USceneComponent* Component; // 0x50(0x08)
	bool bModifyComponentOnTransform; // 0x58(0x01)
	char pad_2CFF6A59[0x7]; // 0x2cff6a59(0x07)
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a50)
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	struct TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x50(0x10)
	char pad_2CFF6A60[0x80]; // 0x2cff6a60(0x80)
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size: 0x2cff6a58 (Inherited: 0x2cff6a50)
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	struct UTransformProxy* Proxy; // 0x50(0x08)
};

