// Class UMG.Visual
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UVisual : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class UMG.Widget
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UWidget : UVisual {
	struct UPanelSlot* Slot; // 0x30(0x08)
	struct FDelegate bIsEnabledDelegate; // 0x38(0x14)
	struct FText ToolTipText; // 0x50(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x68(0x14)
	struct UWidget* ToolTipWidget; // 0x80(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0x88(0x14)
	struct FDelegate VisibilityDelegate; // 0x9c(0x14)
	struct FWidgetTransform RenderTransform; // 0xb0(0x1c)
	struct FVector2D RenderTransformPivot; // 0xcc(0x08)
	char bIsVariable : 1; // 0xd4(0x01)
	char bCreatedByConstructionScript : 1; // 0xd4(0x01)
	char bIsEnabled : 1; // 0xd4(0x01)
	char bOverride_Cursor : 1; // 0xd4(0x01)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xd8(0x08)
	char bIsVolatile : 1; // 0xe0(0x01)
	bool bIgnoreCapFPS; // 0xe1(0x01)
	enum class EMouseCursor Cursor; // 0xe2(0x01)
	enum class EWidgetClipping Clipping; // 0xe3(0x01)
	enum class ESlateVisibility Visibility; // 0xe4(0x01)
	float RenderOpacity; // 0xe8(0x04)
	struct UWidgetNavigation* Navigation; // 0xf0(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xf8(0x01)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x120(0x10)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0x3bf17b0
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf1590
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bf14c0
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf1440
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bf1330
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bf12b0
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf1230
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf1150
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bf10d0
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bf1050
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0fd0
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0e80
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0d90
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0ca0
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0be0
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0ac0
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0aa0
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (Native|Public|BlueprintCallable) // @ game+0x3bf0a10
	void SetFocus(); // Function UMG.Widget.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0970
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf08f0
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0870
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0790
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0770
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (Native|Public|BlueprintCallable) // @ game+0x23cb090
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0740
	bool IsHovered(); // Function UMG.Widget.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3731b70
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0720
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0690
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0600
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0540
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0510
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf04e0
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf04b0
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0480
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0450
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0330
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0300
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf02d0
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf02a0
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0260
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0230
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0200
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0x2bad3b0
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf01d0
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf01a0
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0160
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0130
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf00f0
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0060
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0040
};

// Class UMG.PanelWidget
// Size: 0x2cff6a48 (Inherited: 0x2cff6a30)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x130(0x10)
	char pad_2CFF6A40[0x8]; // 0x2cff6a40(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbae0
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdba50
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb8b0
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb880
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb4d0
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb440
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb3b0
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb330
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (Native|Public|BlueprintCallable) // @ game+0x3bdb260
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdb140
};

// Class UMG.ContentWidget
// Size: 0x2cff6a48 (Inherited: 0x2cff6a48)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1ea0
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd1800
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd17d0
};

// Class UMG.UserWidget
// Size: 0x2cff6a88 (Inherited: 0x2cff6a30)
struct UUserWidget : UWidget {
	struct FLinearColor ColorAndOpacity; // 0x138(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x148(0x14)
	struct FSlateColor ForegroundColor; // 0x160(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x188(0x14)
	struct FMargin Padding; // 0x19c(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1b0(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1c0(0x10)
	char NoPixelSnapping : 1; // 0x1d0(0x01)
	struct FDelegate NoPixelSnappingDelegate; // 0x1d4(0x14)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1e8(0x10)
	struct UWidgetTree* WidgetTree; // 0x1f8(0x08)
	int32_t Priority; // 0x200(0x04)
	char bSupportsKeyboardFocus : 1; // 0x204(0x01)
	char bIsFocusable : 1; // 0x204(0x01)
	char bStopAction : 1; // 0x204(0x01)
	char bHasScriptImplementedTick : 1; // 0x204(0x01)
	char bHasScriptImplementedPaint : 1; // 0x204(0x01)
	char bHasViewportVisibilityUpdateIgnored : 1; // 0x204(0x01)
	char bCookedWidgetTree : 1; // 0x205(0x01)
	enum class EWidgetTickFrequency TickFrequency; // 0x210(0x01)
	struct UInputComponent* InputComponent; // 0x218(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x220(0x10)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0x3bee320
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x3bee230
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x3bee140
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x3bee0c0
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x3bee040
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x3bedf60
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (Final|Native|Public|BlueprintCallable) // @ game+0x3bedf40
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x3bedf20
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x3bedea0
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x3bede80
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bed780
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bed6b0
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bed620
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bed5a0
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bed3e0
	void SetNoPixelSnapping(bool InNoSnapping); // Function UMG.UserWidget.SetNoPixelSnapping // (Final|Native|Public|BlueprintCallable) // @ game+0x3bed350
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Final|Native|Protected|BlueprintCallable) // @ game+0x3bed000
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (Final|Native|Protected|BlueprintCallable) // @ game+0x3becf70
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bece00
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3becb60
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3beca60
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bec6a0
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bec620
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bec5a0
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bec580
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Final|Native|Protected|BlueprintCallable) // @ game+0x3bec560
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bec4e0
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bec2f0
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bec1e0
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bec0d0
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bebf10
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3bebe70
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x2bad3b0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x3bebde0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x3bebd50
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0x3bebbd0
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bebba0
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bebaf0
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb750
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // @ game+0x2bad3b0
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bebac0
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3beba30
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb9a0
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb780
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb750
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb650
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb610
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb5d0
	void Destruct(); // Function UMG.UserWidget.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UMG.UserWidget.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Final|Native|Public|BlueprintCallable) // @ game+0x3beb570
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x3beb480
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x3beb390
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x3beb220
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3beb1a0
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3beb110
};

// Class UMG.Border
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a48)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x148(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x149(0x01)
	char bShowEffectWhenDisabled : 1; // 0x14a(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x14c(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x15c(0x14)
	struct FMargin Padding; // 0x170(0x10)
	struct FSlateBrush Background; // 0x180(0x90)
	struct FDelegate BackgroundDelegate; // 0x210(0x14)
	struct FLinearColor BrushColor; // 0x224(0x10)
	struct FDelegate BrushColorDelegate; // 0x234(0x14)
	struct FVector2D DesiredSizeScale; // 0x248(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x250(0x01)
	struct FDelegate OnMouseButtonDownEvent; // 0x254(0x14)
	struct FDelegate OnMouseButtonUpEvent; // 0x268(0x14)
	struct FDelegate OnMouseMoveEvent; // 0x27c(0x14)
	struct FDelegate OnMouseDoubleClickEvent; // 0x290(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcedb0
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce820
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce140
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bcdfc0
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bcdf40
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcdd40
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcdd40
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcdcc0
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bcdc40
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bcdac0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcd430
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x2cff6a58 (Inherited: 0x2cff6a38)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x48(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bcd260
};

// Class UMG.BackgroundBlur
// Size: 0x2cff6b08 (Inherited: 0x2cff6a48)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x148(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x158(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x159(0x01)
	bool bApplyAlphaToBlur; // 0x15a(0x01)
	float BlurStrength; // 0x15c(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x160(0x01)
	int32_t BlurRadius; // 0x164(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x168(0x90)
	char pad_2CFF6AF4[0x14]; // 0x2cff6af4(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcecb0
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce700
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bce3f0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce040
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (Native|Public|BlueprintCallable) // @ game+0x3bcda40
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcd9c0
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcd820
};

// Class UMG.PanelSlot
// Size: 0x2cff6a40 (Inherited: 0x2cff6a30)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.BackgroundBlurSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_2CFF6A52[0x16]; // 0x2cff6a52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bced30
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce790
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce0c0
};

// Class UMG.PropertyBinding
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x30(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x38(0x28)
	struct FName DestinationProperty; // 0x60(0x0c)
	char pad_2CFF696C[0x104]; // 0x2cff696c(0x104)
};

// Class UMG.BoolBinding
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|Native|Public|Const) // @ game+0x3bcd570
};

// Class UMG.BorderSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_2CFF6A52[0x16]; // 0x2cff6a52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcee30
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce8b0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce1c0
};

// Class UMG.BrushBinding
// Size: 0x2cff6a78 (Inherited: 0x2cff6a70)
struct UBrushBinding : UPropertyBinding {
	char pad_2CFF6A70[0x8]; // 0x2cff6a70(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|Native|Public|Const) // @ game+0x3bcd5a0
};

// Class UMG.Button
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a48)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x190(0x08)
	struct FButtonStyle WidgetStyle; // 0x198(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x440(0x10)
	struct FLinearColor BackgroundColor; // 0x450(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x460(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x461(0x01)
	enum class EButtonPressMethod PressMethod; // 0x462(0x01)
	bool IsFocusable; // 0x463(0x01)
	struct FMulticastInlineDelegate OnClicked; // 0x468(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x478(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x488(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x498(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x4a8(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcec30
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bceb50
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcea50
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bcdec0
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcde40
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bcd940
	bool IsPressed(); // Function UMG.Button.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd6b0
};

// Class UMG.ButtonSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_2CFF6A52[0x16]; // 0x2cff6a52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bceeb0
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce940
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce240
};

// Class UMG.CanvasPanel
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct UCanvasPanel : UPanelWidget {
	char pad_2CFF6A48[0x10]; // 0x2cff6a48(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcd1d0
};

// Class UMG.CanvasPanelSlot
// Size: 0x2cff6a78 (Inherited: 0x2cff6a40)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	int32_t ZOrder; // 0x6c(0x04)
	char pad_2CFF6A6D[0xb]; // 0x2cff6a6d(0x0b)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcef30
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bcead0
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bce9d0
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce670
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Final|Native|Public|HasDefaults) // @ game+0x3bce5f0
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Final|Native|Public|HasDefaults) // @ game+0x3bce570
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bce350
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcd8b0
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcd790
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bcd710
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd650
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd530
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd4f0
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd4b0
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd460
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd3d0
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd390
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd350
};

// Class UMG.CheckBox
// Size: 0x2cff6af8 (Inherited: 0x2cff6a48)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x148(0x01)
	struct FDelegate CheckedStateDelegate; // 0x14c(0x14)
	struct FCheckBoxStyle WidgetStyle; // 0x160(0x5e0)
	struct USlateWidgetStyleAsset* Style; // 0x740(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x748(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x750(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x758(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x760(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x768(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x770(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x778(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x780(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x788(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x790(0x01)
	struct FMargin Padding; // 0x794(0x10)
	struct FSlateColor BorderBackgroundColor; // 0x7a8(0x28)
	bool IsFocusable; // 0x7d0(0x01)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x7d8(0x10)

	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce2c0
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x3bcddc0
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd6e0
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd680
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bcd400
};

// Class UMG.CheckedStateBinding
// Size: 0x2cff6a78 (Inherited: 0x2cff6a70)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_2CFF6A70[0x8]; // 0x2cff6a70(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|Native|Public|Const) // @ game+0x3bd1c10
};

// Class UMG.CircularThrobber
// Size: 0x2cff6af0 (Inherited: 0x2cff6a30)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x130(0x04)
	float Period; // 0x134(0x04)
	float Radius; // 0x138(0x04)
	struct USlateBrushAsset* PieceImage; // 0x140(0x08)
	struct FSlateBrush Image; // 0x148(0x90)
	bool bEnableRadius; // 0x1d8(0x01)
	char pad_2CFF6AD5[0x1b]; // 0x2cff6ad5(0x1b)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd26a0
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd2620
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd25a0
};

// Class UMG.ColorBinding
// Size: 0x2cff6a78 (Inherited: 0x2cff6a70)
struct UColorBinding : UPropertyBinding {
	char pad_2CFF6A70[0x8]; // 0x2cff6a70(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|Native|Public|Const) // @ game+0x3bd1a60
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (Final|Native|Public|HasDefaults|Const) // @ game+0x3bd1830
};

// Class UMG.ComboBox
// Size: 0x2cff6a68 (Inherited: 0x2cff6a30)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x130(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x140(0x14)
	bool bIsFocusable; // 0x154(0x01)
	char pad_2CFF6A55[0x13]; // 0x2cff6a55(0x13)
};

// Class UMG.ComboBoxString
// Size: 0x2cff6ae8 (Inherited: 0x2cff6a30)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x130(0x10)
	struct FString SelectedOption; // 0x140(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x150(0x440)
	struct FTableRowStyle ItemStyle; // 0x590(0x838)
	struct FMargin ContentPadding; // 0xdc8(0x10)
	float MaxListHeight; // 0xdd8(0x04)
	bool HasDownArrow; // 0xddc(0x01)
	bool EnableGamepadNavigationMode; // 0xddd(0x01)
	struct FSlateFontInfo Font; // 0xde0(0x58)
	struct FSlateColor ForegroundColor; // 0xe38(0x28)
	bool bIsFocusable; // 0xe60(0x01)
	struct FDelegate OnGenerateWidgetEvent; // 0xe64(0x14)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xe78(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xe88(0x10)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd27a0
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd2720
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1d40
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1ca0
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd1c70
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd19e0
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd19b0
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd1980
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd18a0
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd1690
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd12b0
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1290
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1110
};

// Class UMG.DragDropOperation
// Size: 0x2cff6a90 (Inherited: 0x2cff6930)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x30(0x10)
	struct UObject* payload; // 0x40(0x08)
	struct UWidget* DefaultDragVisual; // 0x48(0x08)
	enum class EDragPivot Pivot; // 0x50(0x01)
	struct FVector2D Offset; // 0x54(0x08)
	bool bUseMoveAnimation; // 0x5c(0x01)
	struct FMulticastInlineDelegate OnDrop; // 0x60(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x70(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x80(0x10)
	char pad_2CFF698A[0x106]; // 0x2cff698a(0x106)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3bd1550
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3bd1410
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3bd12d0
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x2cff6af0 (Inherited: 0x2cff6a30)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x130(0x01)
	struct FVector2D EntrySpacing; // 0x134(0x08)
	struct TArray<struct FVector2D> SpacingPattern; // 0x140(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x150(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x158(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x159(0x01)
	int32_t MaxElementSize; // 0x15c(0x04)
	struct FUserWidgetPool EntryWidgetPool; // 0x170(0x80)
	char pad_2CFF6AD7[0x19]; // 0x2cff6ad7(0x19)

	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bd1f30
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd1870
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd1740
};

// Class UMG.DynamicEntryBox
// Size: 0x2cff6af8 (Inherited: 0x2cff6af0)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x1f0(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1df0
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1cc0
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Final|Native|Private|BlueprintCallable) // @ game+0x3bd11e0
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Final|Native|Private|BlueprintCallable) // @ game+0x3bd11b0
};

// Class UMG.EditableText
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a30)
struct UEditableText : UWidget {
	struct FText Text; // 0x130(0x18)
	struct FDelegate TextDelegate; // 0x148(0x14)
	struct FText HintText; // 0x160(0x18)
	struct FDelegate HintTextDelegate; // 0x178(0x14)
	struct FEditableTextStyle WidgetStyle; // 0x190(0x238)
	struct USlateWidgetStyleAsset* Style; // 0x3c8(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3d0(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3d8(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3e0(0x08)
	struct FSlateFontInfo Font; // 0x3e8(0x58)
	struct FSlateColor ColorAndOpacity; // 0x440(0x28)
	bool IsReadOnly; // 0x468(0x01)
	bool IsPassword; // 0x469(0x01)
	float MinimumDesiredWidth; // 0x46c(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x470(0x01)
	bool SelectAllTextWhenFocused; // 0x471(0x01)
	bool RevertTextOnEscape; // 0x472(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x473(0x01)
	bool SelectAllTextOnCommit; // 0x474(0x01)
	bool AllowContextMenu; // 0x475(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x476(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x477(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x478(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x479(0x01)
	enum class ETextJustify Justification; // 0x47a(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x47b(0x03)
	struct FMulticastInlineDelegate OnTextChanged; // 0x480(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x490(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd2890
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd24a0
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd2380
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd2260
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd20a0
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	struct FText GetText(); // Function UMG.EditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd1ad0
};

// Class UMG.EditableTextBox
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a30)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x130(0x18)
	struct FDelegate TextDelegate; // 0x148(0x14)
	struct FEditableTextBoxStyle WidgetStyle; // 0x160(0x860)
	struct USlateWidgetStyleAsset* Style; // 0x9c0(0x08)
	struct FText HintText; // 0x9c8(0x18)
	struct FDelegate HintTextDelegate; // 0x9e0(0x14)
	struct FSlateFontInfo Font; // 0x9f8(0x58)
	struct FLinearColor ForegroundColor; // 0xa50(0x10)
	struct FLinearColor BackgroundColor; // 0xa60(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xa70(0x10)
	bool IsReadOnly; // 0xa80(0x01)
	bool IsPassword; // 0xa81(0x01)
	float MinimumDesiredWidth; // 0xa84(0x04)
	struct FMargin Padding; // 0xa88(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xa98(0x01)
	bool SelectAllTextWhenFocused; // 0xa99(0x01)
	bool RevertTextOnEscape; // 0xa9a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xa9b(0x01)
	bool SelectAllTextOnCommit; // 0xa9c(0x01)
	bool AllowContextMenu; // 0xa9d(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xa9e(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xa9f(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xaa0(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xaa1(0x01)
	enum class ETextJustify Justification; // 0xaa2(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xaa3(0x03)
	struct FMulticastInlineDelegate OnTextChanged; // 0xaa8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xab8(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd2970
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd2520
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd2410
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd22f0
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd2180
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1fc0
	void SelectWordAt(); // Function UMG.EditableTextBox.SelectWordAt // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1e80
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	bool HasError(); // Function UMG.EditableTextBox.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd1c40
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd1b70
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd1270
};

// Class UMG.ExpandableArea
// Size: 0x2cff6a78 (Inherited: 0x2cff6a30)
struct UExpandableArea : UWidget {
	struct FExpandableAreaStyle Style; // 0x138(0x130)
	struct FSlateBrush BorderBrush; // 0x268(0x90)
	struct FSlateColor BorderColor; // 0x2f8(0x28)
	bool bIsExpanded; // 0x320(0x01)
	float MaxHeight; // 0x324(0x04)
	struct FMargin HeaderPadding; // 0x328(0x10)
	struct FMargin AreaPadding; // 0x338(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x348(0x10)
	struct UWidget* HeaderContent; // 0x358(0x08)
	struct UWidget* BodyContent; // 0x360(0x08)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6d60
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6cd0
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd5720
};

// Class UMG.FloatBinding
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|Native|Public|Const) // @ game+0x3bd59b0
};

// Class UMG.GridPanel
// Size: 0x2cff6a78 (Inherited: 0x2cff6a48)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x148(0x10)
	struct TArray<float> RowFill; // 0x158(0x10)
	char pad_2CFF6A68[0x10]; // 0x2cff6a68(0x10)

	void SetRowFill(int32_t columnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd72d0
	void SetColumnFill(int32_t columnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6970
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd4f10
};

// Class UMG.GridSlot
// Size: 0x2cff6a78 (Inherited: 0x2cff6a40)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	int32_t Row; // 0x54(0x04)
	int32_t RowSpan; // 0x58(0x04)
	int32_t Column; // 0x5c(0x04)
	int32_t ColumnSpan; // 0x60(0x04)
	int32_t Layer; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x08)
	char pad_2CFF6A6E[0xa]; // 0x2cff6a6e(0x0a)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd7730
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd73a0
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd7250
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd7130
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bd7030
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6ed0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6bd0
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6a40
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd68f0
};

// Class UMG.HorizontalBox
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct UHorizontalBox : UPanelWidget {
	char pad_2CFF6A48[0x10]; // 0x2cff6a48(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd5010
};

// Class UMG.HorizontalBoxSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct UHorizontalBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x48(0x10)
	struct FSlateChildSize Size; // 0x58(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_2CFF6A5A[0xe]; // 0x2cff6a5a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd77b0
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd7620
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd71c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6c50
};

// Class UMG.Image
// Size: 0x2cff6a50 (Inherited: 0x2cff6a30)
struct UImage : UWidget {
	struct FSlateBrush Brush; // 0x130(0x90)
	struct FDelegate BrushDelegate; // 0x1c0(0x14)
	struct FLinearColor ColorAndOpacity; // 0x1d4(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1e4(0x14)
	bool bFlipForRightToLeftFlowDirection; // 0x1f8(0x01)
	struct FDelegate OnMouseButtonDownEvent; // 0x1fc(0x14)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd70b0
	void SetGammaCorrect(); // Function UMG.Image.SetGammaCorrect // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6bb0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bd6870
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd66f0
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bd6670
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd65f0
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (Native|Public|BlueprintCallable) // @ game+0x3bd6520
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (Native|Public|BlueprintCallable) // @ game+0x3bd6450
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (Native|Public|BlueprintCallable) // @ game+0x3bd62e0
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (Native|Public|BlueprintCallable) // @ game+0x3bd61b0
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (Native|Public|BlueprintCallable) // @ game+0x3bd6120
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (Native|Public|BlueprintCallable) // @ game+0x3bd6030
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (Native|Public|BlueprintCallable) // @ game+0x3bd5fa0
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bd5e20
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd5660
};

// Class UMG.InputKeySelector
// Size: 0x2cff6a78 (Inherited: 0x2cff6a30)
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; // 0x130(0x2a8)
	struct FTextBlockStyle TextStyle; // 0x3d8(0x288)
	struct FInputChord SelectedKey; // 0x660(0x28)
	struct FSlateFontInfo Font; // 0x688(0x58)
	struct FMargin Margin; // 0x6e0(0x10)
	struct FLinearColor ColorAndOpacity; // 0x6f0(0x10)
	struct FText KeySelectionText; // 0x700(0x18)
	struct FText NoKeySpecifiedText; // 0x718(0x18)
	bool bAllowModifierKeys; // 0x730(0x01)
	bool bAllowGamepadKeys; // 0x731(0x01)
	struct TArray<struct FKey> EscapeKeys; // 0x738(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x748(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x758(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd76b0
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bd74a0
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6f50
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd6df0
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bd6ac0
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd5d90
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd5d00
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd5750
};

// Class UMG.Int32Binding
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|Native|Public|Const) // @ game+0x3bd59e0
};

// Class UMG.InvalidationBox
// Size: 0x2cff6a60 (Inherited: 0x2cff6a48)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x148(0x01)
	bool CacheRelativeTransforms; // 0x149(0x01)
	char pad_2CFF6A4A[0x16]; // 0x2cff6a4a(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd67e0
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (Final|Native|Public|BlueprintCallable) // @ game+0x174cbb0
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd5630
};

// Class UMG.UserListEntry
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
};

// Class UMG.UserListEntryLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bd5ab0
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bd5a10
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bd5910
};

// Class UMG.UserObjectListEntry
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bd5810
};

// Class UMG.ListViewBase
// Size: 0x2cff6a40 (Inherited: 0x2cff6a30)
struct UListViewBase : UWidget {
	struct UUserWidget* EntryWidgetClass; // 0x130(0x08)
	float WheelScrollMultiplier; // 0x138(0x04)
	bool bEnableScrollAnimation; // 0x13c(0x01)
	bool bEnableFixedLineOffset; // 0x13d(0x01)
	float FixedLineScrollOffset; // 0x140(0x04)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x148(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x158(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x168(0x80)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc510
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc120
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc1a0
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbbb0
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbb90
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbb70
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdba30
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb500
};

// Class UMG.ListView
// Size: 0x2cff6a90 (Inherited: 0x2cff6a40)
struct UListView : UListViewBase {
	enum class EOrientation Orientation; // 0x300(0x01)
	enum class ESelectionMode SelectionMode; // 0x301(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x302(0x01)
	bool bClearSelectionOnClick; // 0x303(0x01)
	bool bIsFocusable; // 0x304(0x01)
	float EntrySpacing; // 0x308(0x04)
	bool bReturnFocusToSelection; // 0x30c(0x01)
	struct TArray<struct UObject*> ListItems; // 0x310(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x330(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x340(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x350(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x360(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x370(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x380(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd75a0
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd7420
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd5c80
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd5c00
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd5b80
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd5b50
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd58e0
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd58b0
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd5780
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd5690
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd5610
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (Final|Native|Private|BlueprintCallable) // @ game+0x3bd5590
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x3bd54e0
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x3bd5410
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x3bd5390
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Final|Native|Private|BlueprintCallable) // @ game+0x3bd5310
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd5280
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems // (Final|Native|Private|HasOutParms|BlueprintCallable|Const) // @ game+0x3bd51c0
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd5190
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bd5160
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (Final|Native|Private|BlueprintCallable) // @ game+0x3bd5140
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Final|Native|Private|BlueprintCallable) // @ game+0x3bd5120
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Final|Native|Public|BlueprintCallable) // @ game+0x3bd50a0
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UListViewDesignerPreviewItem : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class UMG.MenuAnchor
// Size: 0x2cff6a88 (Inherited: 0x2cff6a48)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x148(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x150(0x14)
	enum class EMenuPlacement Placement; // 0x164(0x01)
	bool bFitInWindow; // 0x165(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x166(0x01)
	bool UseApplicationMenuStack; // 0x167(0x01)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x168(0x10)
	char pad_2CFF6A78[0x10]; // 0x2cff6a78(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc670
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdc640
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc0a0
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdb9a0
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb970
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb940
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb6d0
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdb2a0
	void Close(); // Function UMG.MenuAnchor.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdb280
};

// Class UMG.MouseCursorBinding
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|Native|Public|Const) // @ game+0x3bdb850
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x2cff6a58 (Inherited: 0x2cff6ae8)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	struct FMovieScene2DTransformMask TransformMask; // 0xe8(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xf0(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x230(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2d0(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x410(0x140)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x2cff6a68 (Inherited: 0x2cff6ae8)
struct UMovieSceneMarginSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; // 0xe8(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x188(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x228(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2c8(0xa0)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0x2cff6a98 (Inherited: 0x2cff6c98)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x2cff6a90 (Inherited: 0x2cff6a70)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x70(0x10)
	struct FName TrackName; // 0x80(0x0c)
	char pad_2CFF6A8C[0x4]; // 0x2cff6a8c(0x04)
};

// Class UMG.TextLayoutWidget
// Size: 0x2cff6a50 (Inherited: 0x2cff6a30)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x130(0x03)
	enum class ETextJustify Justification; // 0x133(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x134(0x01)
	char AutoWrapText : 1; // 0x135(0x01)
	float WrapTextAt; // 0x138(0x04)
	struct FMargin Margin; // 0x13c(0x10)
	float LineHeightPercentage; // 0x14c(0x04)
	char pad_2CFF6A4D_1 : 7; // 0x2cff6a4d(0x01)
	char pad_2CFF6A4E[0x2]; // 0x2cff6a4e(0x02)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (Native|Public|BlueprintCallable) // @ game+0x3bed150
};

// Class UMG.MultiLineEditableText
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a50)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x150(0x18)
	struct FText HintText; // 0x168(0x18)
	struct FDelegate HintTextDelegate; // 0x180(0x14)
	struct FTextBlockStyle WidgetStyle; // 0x198(0x288)
	bool bIsReadOnly; // 0x420(0x01)
	struct FSlateFontInfo Font; // 0x428(0x58)
	bool SelectAllTextWhenFocused; // 0x480(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x481(0x01)
	bool RevertTextOnEscape; // 0x482(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x483(0x01)
	bool AllowContextMenu; // 0x484(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x485(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x486(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x488(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x498(0x10)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bdc590
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc220
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbef0
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbcb0
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb710
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb590
};

// Class UMG.MultiLineEditableTextBox
// Size: 0x2cff6a48 (Inherited: 0x2cff6a50)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x150(0x18)
	struct FText HintText; // 0x168(0x18)
	struct FDelegate HintTextDelegate; // 0x180(0x14)
	struct FEditableTextBoxStyle WidgetStyle; // 0x198(0x860)
	struct FTextBlockStyle TextStyle; // 0x9f8(0x288)
	bool bIsReadOnly; // 0xc80(0x01)
	bool AllowContextMenu; // 0xc81(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xc82(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xc83(0x01)
	struct USlateWidgetStyleAsset* Style; // 0xc88(0x08)
	struct FSlateFontInfo Font; // 0xc90(0x58)
	struct FLinearColor ForegroundColor; // 0xce8(0x10)
	struct FLinearColor BackgroundColor; // 0xcf8(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xd08(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xd18(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xd28(0x10)

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bdc3e0
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc300
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbf80
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbd90
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbbd0
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb7b0
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdb630
};

// Class UMG.NamedSlot
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct UNamedSlot : UContentWidget {
	char pad_2CFF6A48[0x10]; // 0x2cff6a48(0x10)
};

// Class UMG.NamedSlotInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x2cff6a40 (Inherited: 0x2cff6a30)
struct UNativeWidgetHost : UWidget {
	char pad_2CFF6A30[0x10]; // 0x2cff6a30(0x10)
};

// Class UMG.Overlay
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct UOverlay : UPanelWidget {
	char pad_2CFF6A48[0x10]; // 0x2cff6a48(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdb1d0
};

// Class UMG.OverlaySlot
// Size: 0x2cff6a60 (Inherited: 0x2cff6a40)
struct UOverlaySlot : UPanelSlot {
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_2CFF6A52[0xe]; // 0x2cff6a52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc490
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc010
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdbe70
};

// Class UMG.ProgressBar
// Size: 0x2cff6a60 (Inherited: 0x2cff6a30)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x130(0x1b8)
	struct USlateWidgetStyleAsset* Style; // 0x2e8(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x2f0(0x08)
	struct USlateBrushAsset* FillImage; // 0x2f8(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x300(0x08)
	float Percent; // 0x308(0x04)
	enum class EProgressBarFillType BarFillType; // 0x30c(0x01)
	bool bIsMarquee; // 0x30d(0x01)
	struct FVector2D BorderPadding; // 0x310(0x08)
	struct FDelegate PercentDelegate; // 0x318(0x14)
	struct FLinearColor FillColorAndOpacity; // 0x32c(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x33c(0x14)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdfa30
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf780
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bdf5f0
};

// Class UMG.RetainerBox
// Size: 0x2cff6a80 (Inherited: 0x2cff6a48)
struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x148(0x01)
	bool RenderOnInvalidation; // 0x149(0x01)
	bool RenderOnPhase; // 0x14a(0x01)
	int32_t Phase; // 0x14c(0x04)
	int32_t PhaseCount; // 0x150(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x158(0x08)
	struct FName TextureParameter; // 0x160(0x0c)
	char pad_2CFF6A67[0x19]; // 0x2cff6a67(0x19)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3be02c0
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdfb70
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdfab0
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf570
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdebc0
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdea60
};

// Class UMG.RichTextBlock
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a50)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x150(0x18)
	struct UDataTable* TextStyleSet; // 0x168(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x170(0x10)
	bool bOverrideDefaultStyle; // 0x180(0x01)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x188(0x288)
	float MinDesiredWidth; // 0x410(0x04)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x6a0(0x10)

	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Final|Native|Public|BlueprintCallable) // @ game+0x3be0240
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3be0160
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf810
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bdf4c0
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bdf340
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bdf2c0
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bdf240
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf120
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf030
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdef20
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdeaf0
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x3bde9d0
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Final|Native|Public) // @ game+0x3bde990
};

// Class UMG.RichTextBlockDecorator
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct URichTextBlockDecorator : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x2cff6a38 (Inherited: 0x2cff6a30)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x30(0x08)
};

// Class UMG.SafeZone
// Size: 0x2cff6a60 (Inherited: 0x2cff6a48)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x148(0x01)
	bool PadRight; // 0x149(0x01)
	bool PadTop; // 0x14a(0x01)
	bool PadBottom; // 0x14b(0x01)
	char pad_2CFF6A4C[0x14]; // 0x2cff6a4c(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdfe30
};

// Class UMG.SafeZoneSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	struct FMargin Padding; // 0x58(0x10)
	char pad_2CFF6A63[0x5]; // 0x2cff6a63(0x05)
};

// Class UMG.ScaleBox
// Size: 0x2cff6a68 (Inherited: 0x2cff6a48)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x148(0x01)
	enum class EStretchDirection StretchDirection; // 0x149(0x01)
	float UserSpecifiedScale; // 0x14c(0x04)
	bool IgnoreInheritedScale; // 0x150(0x01)
	char pad_2CFF6A4F[0x19]; // 0x2cff6a4f(0x19)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x3be0360
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x3be00e0
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (Final|Native|Public|BlueprintCallable) // @ game+0x3be0060
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf6f0
};

// Class UMG.ScaleBoxSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_2CFF6A52[0x16]; // 0x2cff6a52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bceeb0
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf910
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bce240
};

// Class UMG.ScrollBar
// Size: 0x2cff6a80 (Inherited: 0x2cff6a30)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x130(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x648(0x08)
	bool bAlwaysShowScrollbar; // 0x650(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x651(0x01)
	enum class EOrientation Orientation; // 0x652(0x01)
	struct FVector2D Thickness; // 0x654(0x08)
	struct FMargin Padding; // 0x65c(0x10)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdffa0
};

// Class UMG.ScrollBox
// Size: 0x2cff6b10 (Inherited: 0x2cff6a48)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x148(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x390(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8a8(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8b0(0x08)
	enum class EOrientation Orientation; // 0x8b8(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8b9(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8ba(0x01)
	struct FVector2D ScrollbarThickness; // 0x8bc(0x08)
	struct FMargin ScrollbarPadding; // 0x8c4(0x10)
	bool AlwaysShowScrollbar; // 0x8d4(0x01)
	bool AlwaysShowScrollbarTrack; // 0x8d5(0x01)
	bool AllowOverscroll; // 0x8d6(0x01)
	bool bAnimateWheelScrolling; // 0x8d7(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x8d8(0x01)
	float NavigationScrollPadding; // 0x8dc(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x8e0(0x01)
	bool bAllowRightClickDragScrolling; // 0x8e1(0x01)
	float WheelScrollMultiplier; // 0x8e4(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x8e8(0x10)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x3be0460
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdfc80
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdfc00
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bdfda0
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bdfd00
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf890
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdefb0
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdee90
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdee00
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (Final|Native|Public|BlueprintCallable) // @ game+0x3bded70
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdec20
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdec00
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdebe0
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdeb90
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdeac0
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bdea90
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x3bde9b0
};

// Class UMG.ScrollBoxSlot
// Size: 0x2cff6a60 (Inherited: 0x2cff6a40)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_2CFF6A52[0xe]; // 0x2cff6a52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3be03e0
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf9a0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdf670
};

// Class UMG.SizeBox
// Size: 0x2cff6a80 (Inherited: 0x2cff6a48)
struct USizeBox : UContentWidget {
	float WidthOverride; // 0x158(0x04)
	float HeightOverride; // 0x15c(0x04)
	float MinDesiredWidth; // 0x160(0x04)
	float MinDesiredHeight; // 0x164(0x04)
	float MaxDesiredWidth; // 0x168(0x04)
	float MaxDesiredHeight; // 0x16c(0x04)
	float MinAspectRatio; // 0x170(0x04)
	float MaxAspectRatio; // 0x174(0x04)
	char bOverride_WidthOverride : 1; // 0x178(0x01)
	char bOverride_HeightOverride : 1; // 0x178(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x178(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x178(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x178(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x178(0x01)
	char bOverride_MinAspectRatio : 1; // 0x178(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x178(0x01)
	char pad_2CFF6A69[0x17]; // 0x2cff6a69(0x17)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4e10
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4780
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4700
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4680
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4400
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4380
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4300
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x3be40e0
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2fb0
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2f50
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2f30
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2f10
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2eb0
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2e90
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2e70
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2e50
};

// Class UMG.SizeBoxSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_2CFF6A52[0x16]; // 0x2cff6a52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4d90
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4a00
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4160
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be5190
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be5090
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3be4f90
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3be4e90
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x3be3d10
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x3be3bc0
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults) // @ game+0x3be3ac0
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be38e0
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be37e0
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be36e0
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be3470
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be33b0
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be3290
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3be2fd0
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be2d00
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3be2c00
};

// Class UMG.SlateVectorArtData
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x30(0x10)
	struct TArray<uint32_t> IndexData; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D ExtentMin; // 0x58(0x08)
	struct FVector2D ExtentMax; // 0x60(0x08)
	char pad_2CFF6968[0x100]; // 0x2cff6968(0x100)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x2cff6a98 (Inherited: 0x2cff6930)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x30(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x31(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x32(0x01)
	struct FText AccessibleText; // 0x38(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x50(0x14)
	struct FText AccessibleSummaryText; // 0x68(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x80(0x14)
	char pad_2CFF698B[0x10d]; // 0x2cff698b(0x10d)
};

// Class UMG.Slider
// Size: 0x2cff6c50 (Inherited: 0x2cff6a30)
struct USlider : UWidget {
	float Value; // 0x130(0x04)
	struct FDelegate ValueDelegate; // 0x134(0x14)
	float MinValue; // 0x148(0x04)
	float MaxValue; // 0x14c(0x04)
	struct FSliderStyle WidgetStyle; // 0x150(0x370)
	enum class EOrientation Orientation; // 0x4c0(0x01)
	struct FLinearColor SliderBarColor; // 0x4c4(0x10)
	struct FLinearColor SliderHandleColor; // 0x4d4(0x10)
	bool IndentHandle; // 0x4e4(0x01)
	bool Locked; // 0x4e5(0x01)
	bool MouseUsesStep; // 0x4e6(0x01)
	bool RequiresControllerLock; // 0x4e7(0x01)
	float StepSize; // 0x4e8(0x04)
	bool IsFocusable; // 0x4ec(0x01)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x500(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x510(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x520(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x530(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4c90
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4c10
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3be4b90
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3be4b10
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4900
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4580
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4270
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x3be41e0
	float GetValue(); // Function UMG.Slider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be3680
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be3650
};

// Class UMG.Spacer
// Size: 0x2cff6a48 (Inherited: 0x2cff6a30)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x130(0x08)
	char pad_2CFF6A38[0x10]; // 0x2cff6a38(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3be4a90
};

// Class UMG.SpinBox
// Size: 0x2cff6a70 (Inherited: 0x2cff6a30)
struct USpinBox : UWidget {
	float Value; // 0x130(0x04)
	struct FDelegate ValueDelegate; // 0x134(0x14)
	struct FSpinBoxStyle WidgetStyle; // 0x148(0x310)
	struct USlateWidgetStyleAsset* Style; // 0x458(0x08)
	int32_t MinFractionalDigits; // 0x460(0x04)
	int32_t MaxFractionalDigits; // 0x464(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x468(0x01)
	float Delta; // 0x46c(0x04)
	float SliderExponent; // 0x470(0x04)
	struct FSlateFontInfo Font; // 0x478(0x58)
	enum class ETextJustify Justification; // 0x4d0(0x01)
	float MinDesiredWidth; // 0x4d4(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x4d8(0x01)
	bool SelectAllTextOnCommit; // 0x4d9(0x01)
	struct FSlateColor ForegroundColor; // 0x4e0(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x508(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x518(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x528(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x538(0x10)
	char bOverride_MinValue : 1; // 0x548(0x01)
	char bOverride_MaxValue : 1; // 0x548(0x01)
	char bOverride_MinSliderValue : 1; // 0x548(0x01)
	char bOverride_MaxSliderValue : 1; // 0x548(0x01)
	float MinValue; // 0x54c(0x04)
	float MaxValue; // 0x550(0x04)
	float MinSliderValue; // 0x554(0x04)
	float MaxSliderValue; // 0x558(0x04)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4d10
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4980
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4880
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4800
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4600
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4500
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable) // @ game+0x3be4480
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x3be3ff0
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x3be3f70
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable) // @ game+0x3be3ee0
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	float GetValue(); // Function UMG.SpinBox.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be36b0
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be3620
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be35f0
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be35c0
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be3590
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be3560
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be3530
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be3380
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3be3350
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2f90
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2f70
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2ef0
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3be2ed0
};

// Class UMG.TextBinding
// Size: 0x2cff6a78 (Inherited: 0x2cff6a70)
struct UTextBinding : UPropertyBinding {
	char pad_2CFF6A70[0x8]; // 0x2cff6a70(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|Native|Public|Const) // @ game+0x3beb8d0
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (Final|Native|Public|Const) // @ game+0x3beb7b0
};

// Class UMG.TextBlock
// Size: 0x2cff6af0 (Inherited: 0x2cff6a50)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x150(0x18)
	struct FDelegate TextDelegate; // 0x168(0x14)
	struct FSlateColor ColorAndOpacity; // 0x180(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x1a8(0x14)
	struct FSlateFontInfo Font; // 0x1c0(0x58)
	struct FSlateBrush StrikeBrush; // 0x218(0x90)
	struct FVector2D ShadowOffset; // 0x2a8(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x2b0(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x2c0(0x14)
	float MinDesiredWidth; // 0x2d4(0x04)
	bool bWrapWithInvalidationPanel; // 0x2d8(0x01)
	bool bAutoWrapText; // 0x2d9(0x01)
	bool bSimpleTextMode; // 0x2da(0x01)

	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (Native|Public|BlueprintCallable) // @ game+0x3bedc90
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Final|Native|Public|BlueprintCallable) // @ game+0x3beda50
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bed940
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bed8c0
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x3bed520
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3bed2d0
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Final|Native|Public|BlueprintCallable) // @ game+0x3becce0
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x3bec970
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // @ game+0x3bec8e0
	struct FText GetText(); // Function UMG.TextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb830
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x3beb720
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x3beb6f0
};

// Class UMG.Throbber
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a30)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x130(0x04)
	bool bAnimateHorizontally; // 0x134(0x01)
	bool bAnimateVertically; // 0x135(0x01)
	bool bAnimateOpacity; // 0x136(0x01)
	struct USlateBrushAsset* PieceImage; // 0x138(0x08)
	struct FSlateBrush Image; // 0x140(0x90)
	char pad_2CFF6ACF[0x11]; // 0x2cff6acf(0x11)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // @ game+0x3bed4a0
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Final|Native|Public|BlueprintCallable) // @ game+0x3bec850
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x3bec7c0
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (Final|Native|Public|BlueprintCallable) // @ game+0x3bec730
};

// Class UMG.TileView
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a90)
struct UTileView : UListView {
	float EntryHeight; // 0x390(0x04)
	float EntryWidth; // 0x394(0x04)
	enum class EListItemAlignment TileAlignment; // 0x398(0x01)
	bool bWrapHorizontalNavigation; // 0x399(0x01)
	char pad_2CFF6A9A[0x16]; // 0x2cff6a9a(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3becc60
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x3becbe0
};

// Class UMG.TreeView
// Size: 0x2cff6af0 (Inherited: 0x2cff6a90)
struct UTreeView : UListView {
	struct FDelegate BP_OnGetItemChildren; // 0x3a0(0x14)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x3b8(0x10)
	char pad_2CFF6AB4[0x3c]; // 0x2cff6ab4(0x3c)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|Native|Public|BlueprintCallable) // @ game+0x3bed080
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Final|Native|Public|BlueprintCallable) // @ game+0x3beb5b0
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Final|Native|Public|BlueprintCallable) // @ game+0x3beb590
};

// Class UMG.UMGSequencePlayer
// Size: 0x2cff6ab8 (Inherited: 0x2cff6930)
struct UUMGSequencePlayer : UObject {
	struct UWidgetAnimation* Animation; // 0x410(0x08)
	char pad_2CFF6938[0x180]; // 0x2cff6938(0x180)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // @ game+0x3bedd70
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb970
};

// Class UMG.UniformGridPanel
// Size: 0x2cff6a70 (Inherited: 0x2cff6a48)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x148(0x10)
	float MinDesiredSlotWidth; // 0x158(0x04)
	float MinDesiredSlotHeight; // 0x15c(0x04)
	char pad_2CFF6A60[0x10]; // 0x2cff6a60(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bed9c0
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3bed250
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x3bed1d0
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Final|Native|Public|BlueprintCallable) // @ game+0x3beb010
};

// Class UMG.UniformGridSlot
// Size: 0x2cff6a58 (Inherited: 0x2cff6a40)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	int32_t Row; // 0x44(0x04)
	int32_t Column; // 0x48(0x04)
	char pad_2CFF6A4A[0xe]; // 0x2cff6a4a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bede00
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // @ game+0x3bed840
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3becef0
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // @ game+0x3becae0
};

// Class UMG.VerticalBox
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct UVerticalBox : UPanelWidget {
	char pad_2CFF6A48[0x10]; // 0x2cff6a48(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (Final|Native|Public|BlueprintCallable) // @ game+0x3beffb0
};

// Class UMG.VerticalBoxSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_2CFF6A5A[0xe]; // 0x2cff6a5a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf1610
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf13b0
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0f40
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf0990
};

// Class UMG.Viewport
// Size: 0x2cff6a70 (Inherited: 0x2cff6a48)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x148(0x10)
	char pad_2CFF6A58[0x18]; // 0x2cff6a58(0x18)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf1830
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bf1720
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bf1690
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf03e0
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf0420
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf03a0
};

// Class UMG.VisibilityBinding
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|Native|Public|Const) // @ game+0x3bf0370
};

// Class UMG.WidgetAnimation
// Size: 0x2cff6a80 (Inherited: 0x2cff6a50)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x358(0x10)
	bool bLegacyFinishOnStop; // 0x368(0x01)
	struct FString DisplayLabel; // 0x370(0x10)
	char pad_2CFF6A79[0x7]; // 0x2cff6a79(0x07)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf7e40
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf7d50
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf7cd0
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf7c50
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf66f0
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf5e90
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf3c10
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x3bf3b20
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x2cff6a40 (Inherited: 0x2cff6a30)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x30(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x30(0x10)
	char pad_2CFF6940[0x110]; // 0x2cff6940(0x110)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bf4460
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bf4260
};

// Class UMG.WidgetBinding
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|Native|Public|Const) // @ game+0x3bf6720
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x2cff6a70 (Inherited: 0x2cff6af8)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x3f8(0x08)
	char bAllowTemplate : 1; // 0x400(0x01)
	char bAllowDynamicCreation : 1; // 0x400(0x01)
	char bValidTemplate : 1; // 0x400(0x01)
	char bTemplateInitialized : 1; // 0x400(0x01)
	char bCookedTemplate : 1; // 0x400(0x01)
	char bClassRequiresNativeTick : 1; // 0x400(0x01)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x408(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x418(0x10)
	struct TArray<struct FName> NamedSlots; // 0x428(0x10)
	struct TSoftObjectPtr<UUserWidget> TemplateAsset; // 0x438(0x30)
	struct UUserWidget* Template; // 0x468(0x08)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf7fa0
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bf7f30
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bf7ac0
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bf7a20
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bf79a0
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf3d20
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3bf7870
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bf7780
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bf7680
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bf7610
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bf74d0
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bf7390
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3bf7250
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bf7230
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bf70e0
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bf6f30
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bf6f30
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bf6f10
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf6e20
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf3fc0
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) // @ game+0x2bad3b0
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bf6d70
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bf6bd0
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bf6a30
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bf6920
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf67f0
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bf67c0
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bf6750
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bf6580
	void GetRenderTargetFromWidget(struct UTextureRenderTarget2D* DestRenderTarget2D, struct UUserWidget* Widget, struct FVector2D& DrawSize); // Function UMG.WidgetBlueprintLibrary.GetRenderTargetFromWidget // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bf6480
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf62f0
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf61a0
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf60c0
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf5fa0
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf5ec0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf5d10
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bf5ce0
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf5b60
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf59e0
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf5860
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bf56f0
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bf5580
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf5490
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bf5210
	void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bf5080
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bf4eb0
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bf4cb0
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bf4b00
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bf4ae0
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bf4880
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf46a0
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bf41e0
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bf40f0
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf3fc0
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf3e90
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bf3d20
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bf3d00
};

// Class UMG.WidgetComponent
// Size: 0x2cff6b20 (Inherited: 0x2cff6af0)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x4f0(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x4f1(0x01)
	struct UUserWidget* WidgetClass; // 0x4f8(0x08)
	struct FIntPoint DrawSize; // 0x500(0x08)
	bool bManuallyRedraw; // 0x508(0x01)
	bool bRedrawRequested; // 0x509(0x01)
	float RedrawTime; // 0x50c(0x04)
	struct FIntPoint CurrentDrawSize; // 0x518(0x08)
	bool bDrawAtDesiredSize; // 0x520(0x01)
	struct FVector2D Pivot; // 0x524(0x08)
	bool bReceiveHardwareInput; // 0x52c(0x01)
	bool bWindowFocusable; // 0x52d(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x52e(0x01)
	bool bApplyGammaCorrection; // 0x52f(0x01)
	struct ULocalPlayer* OwnerPlayer; // 0x530(0x08)
	struct FLinearColor BackgroundColor; // 0x538(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x548(0x10)
	float OpacityFromTexture; // 0x558(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x55c(0x01)
	bool bIsTwoSided; // 0x55d(0x01)
	bool TickWhenOffscreen; // 0x55e(0x01)
	struct UUserWidget* Widget; // 0x560(0x08)
	struct UBodySetup* BodySetup; // 0x588(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x590(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x598(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x5a0(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x5a8(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x5b0(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x5b8(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x5c0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x5c8(0x08)
	bool bAddedToScreen; // 0x5d0(0x01)
	bool bEditTimeUsable; // 0x5d1(0x01)
	struct FName SharedLayerName; // 0x5d4(0x0c)
	int32_t LayerZOrder; // 0x5e0(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x5e4(0x01)
	float CylinderArcAngle; // 0x5e8(0x04)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfbb00
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfba70
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb9f0
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x3bfb960
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb8d0
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bfb850
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb7d0
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb750
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3bfb6c0
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb640
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb5b0
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb530
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bfb430
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb3b0
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb330
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bfb1e0
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (Native|Public|BlueprintCallable) // @ game+0x3bfaff0
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa6c0
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa6a0
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa680
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa480
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa460
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa440
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa410
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa3f0
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa310
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa2e0
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa0c0
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3759240
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf9ff0
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf9fb0
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf9f90
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf9f70
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf9f30
};

// Class UMG.WidgetInteractionComponent
// Size: 0x2cff6a40 (Inherited: 0x2cff6a40)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x238(0x10)
	int32_t VirtualUserIndex; // 0x258(0x04)
	float PointerIndex; // 0x25c(0x04)
	enum class ECollisionChannel TraceChannel; // 0x260(0x01)
	float InteractionDistance; // 0x264(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x268(0x01)
	bool bEnableHitTesting; // 0x269(0x01)
	bool bShowDebug; // 0x26a(0x01)
	struct FLinearColor DebugColor; // 0x26c(0x10)
	struct FHitResult CustomHitResult; // 0x2f8(0x90)
	struct FVector2D LocalHitLocation; // 0x388(0x08)
	struct FVector2D LastLocalHitLocation; // 0x390(0x08)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x398(0x08)
	struct FHitResult LastHitResult; // 0x3a0(0x90)
	bool bIsHoveredWidgetInteractable; // 0x430(0x01)
	bool bIsHoveredWidgetFocusable; // 0x431(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x432(0x01)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfb4b0
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bfb260
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (Native|Public|BlueprintCallable) // @ game+0x3bfb090
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (Native|Public|BlueprintCallable) // @ game+0x3bfb010
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (Native|Public|BlueprintCallable) // @ game+0x3bfae80
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x3bfad80
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (Native|Public|BlueprintCallable) // @ game+0x3bfa9c0
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (Native|Public|BlueprintCallable) // @ game+0x3bfa870
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (Native|Public|BlueprintCallable) // @ game+0x3bfa770
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa740
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa710
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa6e0
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa040
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfa010
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf9ef0
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfc180
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfc100
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfc080
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfc000
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfbf80
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfbf00
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfbe80
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfbe00
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfbd80
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfbd00
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfbc80
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfbc00
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfbb80
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3bfaf80
	bool ProjectWorldLocationToWidgetPositionWithDistance(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPositionWithDistance // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3bfac20
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3bfaac0
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bfa5d0
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3bfa540
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3bfa4b0
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3bfa340
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3bfa1c0
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3bfa130
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3bfa0f0
};

// Class UMG.WidgetNavigation
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x30(0x2c)
	struct FWidgetNavigationData Down; // 0x5c(0x2c)
	struct FWidgetNavigationData Left; // 0x88(0x2c)
	struct FWidgetNavigationData Right; // 0xb4(0x2c)
	struct FWidgetNavigationData Next; // 0xe0(0x2c)
	struct FWidgetNavigationData Previous; // 0x10c(0x2c)
};

// Class UMG.WidgetSwitcher
// Size: 0x2cff6a60 (Inherited: 0x2cff6a48)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x148(0x04)
	char pad_2CFF6A4C[0x14]; // 0x2cff6a4c(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0x3bfd810
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0x3bd6120
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfd780
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfd750
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfd720
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bfd6f0
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x2cff6a60 (Inherited: 0x2cff6a40)
struct UWidgetSwitcherSlot : UPanelSlot {
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_2CFF6A52[0xe]; // 0x2cff6a52(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfde60
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bdc010
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfd9b0
};

// Class UMG.WidgetTree
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x30(0x08)
	char pad_2CFF6938[0x100]; // 0x2cff6938(0x100)
};

// Class UMG.WindowTitleBarArea
// Size: 0x2cff6a68 (Inherited: 0x2cff6a48)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x148(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x149(0x01)
	char pad_2CFF6A4A[0x1e]; // 0x2cff6a4a(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfdee0
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfdcb0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfda30
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_2CFF6A52[0x16]; // 0x2cff6a52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfdf60
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfdd40
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfdab0
};

// Class UMG.WrapBox
// Size: 0x2cff6a68 (Inherited: 0x2cff6a48)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x148(0x08)
	float WrapWidth; // 0x150(0x04)
	bool bExplicitWrapWidth; // 0x154(0x01)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x155(0x01)
	char pad_2CFF6A56[0x12]; // 0x2cff6a56(0x12)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3bfdc30
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBox.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfdb30
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfd660
};

// Class UMG.WrapBoxSlot
// Size: 0x2cff6a68 (Inherited: 0x2cff6a40)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_2CFF6A57[0x11]; // 0x2cff6a57(0x11)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfdfe0
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfddd0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfdbb0
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfd930
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Final|Native|Public|BlueprintCallable) // @ game+0x3bfd8a0
};

// WidgetBlueprintGeneratedClass UMG.Default__WidgetBlueprintGeneratedClass
// Size: 0x2cff6d00 (Inherited: 0x00)
struct Default__WidgetBlueprintGeneratedClass {
	char pad_0[0x2cff6d00]; // 0x00(0x2cff6d00)
};

