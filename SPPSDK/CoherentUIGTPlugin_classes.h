// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UCoherentUIGTAssetReferencer : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class CoherentUIGTPlugin.CoherentUIGTAudioWrapper
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UCoherentUIGTAudioWrapper : UObject {
	struct UObject* Owner; // 0x30(0x08)
	struct TMap<int32_t, struct FCoherentSound> Sounds; // 0x38(0x50)
	char pad_2CFF6988[0xa8]; // 0x2cff6988(0xa8)
};

// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// Size: 0x2cff6a40 (Inherited: 0x2cff6cb8)
struct UCoherentUIGTBaseComponent : UActorComponent {
	struct FMulticastInlineDelegate ReadyForBindings; // 0xb8(0x10)
	struct FMulticastInlineDelegate BindingsReleased; // 0xc8(0x10)
	struct FMulticastInlineDelegate FinishLoad; // 0xd8(0x10)
	struct FMulticastInlineDelegate FailLoad; // 0xe8(0x10)
	struct FMulticastInlineDelegate StartLoading; // 0xf8(0x10)
	struct FMulticastInlineDelegate NavigateTo; // 0x108(0x10)
	struct FMulticastInlineDelegate JavaScriptEvent; // 0x118(0x10)
	struct FMulticastInlineDelegate UIGTScriptingReady; // 0x128(0x10)
	struct FDelegate LiveViewSizeRequested; // 0x138(0x14)
	struct UTextureRenderTarget2D* Texture; // 0x168(0x08)
	enum class TextureFilter Filter; // 0x170(0x01)
	bool bReceiveInput; // 0x171(0x01)
	bool bReceiveInputWhenTransparent; // 0x172(0x01)
	bool AllowPerformanceWarnings; // 0x173(0x01)
	float ExecuteJSTimersThresholdMs; // 0x174(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x178(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x17c(0x04)
	float PaintWarningThresholdMs; // 0x180(0x04)
	int32_t LayersCountThreshold; // 0x184(0x04)
	int32_t LayerWidthThreshold; // 0x188(0x04)
	int32_t LayerHeightThreshold; // 0x18c(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x190(0x01)
	bool bDelayedUpdate; // 0x191(0x01)
	struct UCoherentUIGTAudioWrapper* AudioWrapper; // 0x208(0x08)

	void UpdateWholeDataModelFromStruct(struct TFieldPath<FStructProperty> Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x132cb60
	void UpdateWholeDataModelFromObject(struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x132fed0
	void TriggerJSEvent(struct FString Name, struct UCoherentUIGTJSEvent* eventData); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x132fbd0
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x132fb90
	void ShowPaintRects(bool Show); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects // (Final|Native|Public|BlueprintCallable) // @ game+0x132fb00
	void SetOffscreenCanvasRendering(bool State); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetOffscreenCanvasRendering // (Final|Native|Public|BlueprintCallable) // @ game+0x132f7e0
	void SetClickThroughAlphaThreshold(float threshold); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x132f550
	void Resize(int32_t Width, int32_t Height); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize // (Native|Public|BlueprintCallable) // @ game+0x132f490
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload // (Final|Native|Public|BlueprintCallable) // @ game+0x132f470
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x132f450
	void Load(struct FString Path); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load // (Final|Native|Public|BlueprintCallable) // @ game+0x132f3b0
	bool IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f380
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f350
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f320
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f2c0
	bool HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f0e0
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f080
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave // (Final|Native|Public|BlueprintCallable) // @ game+0x132f060
	void EnableDelayedUpdate(bool bEnabled); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x132efd0
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x132efb0
	struct UCoherentUIGTJSEvent* CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x132ef00
	void CreateDataModelFromStruct(struct FString Name, struct TFieldPath<FStructProperty> Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct // (Final|Native|Public|BlueprintCallable) // @ game+0x132c8f0
	void CreateDataModelFromObject(struct FString Name, struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject // (Final|Native|Public|BlueprintCallable) // @ game+0x132ee20
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave // (Final|Native|Public|BlueprintCallable) // @ game+0x132ee00
};

// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UCoherentUIGTBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void TriggerJSEvent_Widget(struct UCoherentUIGTWidget* Widget, struct FString EventName, struct UCoherentUIGTJSEvent* JSEvent); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent_Widget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132fdc0
	void TriggerJSEvent(struct UCoherentUIGTBaseComponent* Component, struct FString EventName, struct UCoherentUIGTJSEvent* JSEvent); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132fcb0
	void SetupLoadingScreen(struct UObject* WorldContextObject, struct FCoherentUIGTLoadingScreenSettings& Settings); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x132f870
	struct UCoherentUIGTJSEvent* CreateJSEvent(struct UObject* WorldContextObject); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132ef30
	void AddStructArg(struct UCoherentUIGTJSEvent* JSEvent, struct TFieldPath<FStructProperty> Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132c760
	void AddString(struct UCoherentUIGTJSEvent* JSEvent, struct FString Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132ec10
	void AddObject(struct UCoherentUIGTJSEvent* JSEvent, struct UObject* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132eb60
	void AddInt32(struct UCoherentUIGTJSEvent* JSEvent, int32_t Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132eab0
	void AddFloat(struct UCoherentUIGTJSEvent* JSEvent, float Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132e9f0
	void AddByte(struct UCoherentUIGTJSEvent* JSEvent, char Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132e940
	void AddBool(struct UCoherentUIGTJSEvent* JSEvent, bool Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x132e880
	void AddArrayOfStructs(struct UCoherentUIGTJSEvent* JSEvent, struct TArray<int32_t>& Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x132c540
	void AddArray(struct UCoherentUIGTJSEvent* JSEvent, struct TArray<int32_t>& Arg, int32_t ArrayType); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x132e750
};

// Class CoherentUIGTPlugin.CoherentUIGTComponent
// Size: 0x2cff6a78 (Inherited: 0x2cff6a40)
struct UCoherentUIGTComponent : UCoherentUIGTBaseComponent {
	struct FString URL; // 0x240(0x10)
	int32_t Width; // 0x250(0x04)
	int32_t Height; // 0x254(0x04)
	bool ManualTexture; // 0x258(0x01)
	float ClickThroughAlphaThreshold; // 0x25c(0x04)
	bool Transparent; // 0x260(0x01)
	char pad_2CFF6A5E[0x1a]; // 0x2cff6a5e(0x1a)
};

// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UCoherentUIGTEventHelpers : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x2cff6aa0 (Inherited: 0x2cff6af8)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x3f8(0x08)

	void SetupUIGTView(struct FString PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x132f950
	bool HasSetupUIGTView(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x132f110
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// Size: 0x2cff6a78 (Inherited: 0x2cff6a40)
struct UCoherentUIGTHUD : UCoherentUIGTBaseComponent {
	struct FSoftObjectPath HUDMaterialName; // 0x240(0x20)
	struct UMaterial* HUDMaterial; // 0x260(0x08)
	struct UMaterialInstanceDynamic* HUDMaterialInstance; // 0x268(0x08)
	char pad_2CFF6A70[0x8]; // 0x2cff6a70(0x08)
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x2cff6a60 (Inherited: 0x2cff6b08)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x308(0x10)
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x318(0x10)
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorKeyDown; // 0x328(0x10)
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorKeyUp; // 0x338(0x10)

	void ToggleCoherentUIGTInputFocus(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x132fbb0
	void SetLineTraceMode(enum class EGTInputWidgetLineTraceMode Mode); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode // (Final|Native|Public|BlueprintCallable) // @ game+0x132f760
	void SetInputPropagationBehaviour(enum class ECoherentUIGTInputPropagationBehaviour Propagation); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour // (Final|Native|Public|BlueprintCallable) // @ game+0x132f6e0
	void SetCoherentUIGTViewFocus(struct UCoherentUIGTBaseComponent* NewFocusedView); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x132f660
	void SetCoherentUIGTInputFocus(bool FocusUI); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x132f5d0
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f2f0
	bool IsCoherentUIGTFocused(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f290
	void Initialize(enum class ECollisionChannel CollisionChannel, enum class TextureAddress AddressMode, enum class EGTInputWidgetRaycastQuality RaycastQuality, int32_t UVChannel); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x132f140
	enum class ECoherentUIGTInputPropagationBehaviour GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f0b0
	void AlwaysAcceptMouseInput(bool bAccept); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput // (Final|Native|Public|BlueprintCallable) // @ game+0x132ed70
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // (Final|Native|Public|BlueprintCallable) // @ game+0x132ece0
};

// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// Size: 0x2cff6ac0 (Inherited: 0x2cff6930)
struct UCoherentUIGTJSEvent : UObject {
	struct TArray<struct UStruct*> StructTypes; // 0xb0(0x10)
	char pad_2CFF6940[0x180]; // 0x2cff6940(0x180)

	void AddText(struct FText& Text); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1332950
	void AddStructArg(struct TFieldPath<FStructProperty> Arg); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg // (Final|Native|Public|BlueprintCallable) // @ game+0x132c840
	void AddString(struct FString Str); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString // (Final|Native|Public|BlueprintCallable) // @ game+0x13328b0
	void AddObject(struct UObject* Object); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject // (Final|Native|Public|BlueprintCallable) // @ game+0x1332830
	void AddName(struct FName& Name); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1332790
	void AddInt32(int32_t integer); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32 // (Final|Native|Public|BlueprintCallable) // @ game+0x1332710
	void AddFloat(float fl); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x1332690
	void AddByte(char Byte); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte // (Final|Native|Public|BlueprintCallable) // @ game+0x1332610
	void AddBool(bool B); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool // (Final|Native|Public|BlueprintCallable) // @ game+0x1332580
	void AddArray(struct TArray<int32_t>& Array); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x132c490
};

// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UCoherentUIGTJSPayload : UObject {
	struct FString EventName; // 0x30(0x10)
	char pad_2CFF6940[0x108]; // 0x2cff6940(0x108)

	void ReadObject(int32_t Index, struct UObject* Object); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject // (Final|Native|Public|BlueprintCallable) // @ game+0x13332a0
	struct FString GetString(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString // (Final|Native|Public|BlueprintCallable) // @ game+0x1332ea0
	float GetNumber(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber // (Final|Native|Public|BlueprintCallable) // @ game+0x1332de0
	int32_t GetInt32(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32 // (Final|Native|Public|BlueprintCallable) // @ game+0x1332d50
	bool GetBool(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool // (Final|Native|Public|BlueprintCallable) // @ game+0x1332bf0
};

// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// Size: 0x2cff6ae8 (Inherited: 0x2cff6cb8)
struct UCoherentUIGTLiveView : UActorComponent {
	struct FString LinkName; // 0xb8(0x10)
	struct UTextureRenderTarget2D* Texture; // 0xc8(0x08)

	void OnLiveViewSizeRequest(struct UCoherentUIGTBaseComponent* baseComponent, struct FString Name, int32_t& Width, int32_t& Height); // Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1333110
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// Size: 0x2cff6a98 (Inherited: 0x2cff6930)
struct UCoherentUIGTSettings : UObject {
	bool EnableLiveReload; // 0x30(0x01)
	int32_t InspectorPort; // 0x34(0x04)
	int32_t WebdriverPort; // 0x38(0x04)
	bool EnableWebSecurity; // 0x3c(0x01)
	bool EnableLocalization; // 0x3d(0x01)
	bool RunAsynchronous; // 0x3e(0x01)
	bool AllowPerformanceWarningsInEditor; // 0x3f(0x01)
	bool ShowWarningsOnScreen; // 0x40(0x01)
	enum class ECoherentUIGTSettingsSeverity LogSeverity; // 0x41(0x01)
	bool bPaintToBackBuffer; // 0x42(0x01)
	bool bRespectTitleSafeZone; // 0x43(0x01)
	bool bRespectLetterboxing; // 0x44(0x01)
	struct FString HUDMaterialName; // 0x48(0x10)
	struct FString CoUIResourcesRoot; // 0x58(0x10)
	bool TickWhileGameIsPaused; // 0x68(0x01)
	bool bUseLowerCaseNamesForAutoExposedProperties; // 0x69(0x01)
	enum class ECoherentUIGTMSAA MSAA; // 0x6a(0x01)
	struct FString CookiesResource; // 0x70(0x10)
	struct FString LocalStorageFolder; // 0x80(0x10)
	bool UseCacheFile; // 0x90(0x01)
	bool UseReceivedFromServerUrl; // 0x91(0x01)
	char pad_2CFF6987[0x111]; // 0x2cff6987(0x111)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x2cff6a50 (Inherited: 0x2cff6b08)
struct ACoherentUIGTSystem : AActor {
};

// Class CoherentUIGTPlugin.CoherentUIGTWidget
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a30)
struct UCoherentUIGTWidget : UWidget {
	struct AActor* Owner; // 0x148(0x08)
	struct FMulticastInlineDelegate ReadyForBindings; // 0x150(0x10)
	struct FMulticastInlineDelegate BindingsReleased; // 0x160(0x10)
	struct FMulticastInlineDelegate FinishLoad; // 0x170(0x10)
	struct FMulticastInlineDelegate FailLoad; // 0x180(0x10)
	struct FMulticastInlineDelegate StartLoading; // 0x190(0x10)
	struct FMulticastInlineDelegate NavigateTo; // 0x1a0(0x10)
	struct FMulticastInlineDelegate JavaScriptEvent; // 0x1b0(0x10)
	struct FMulticastInlineDelegate UIGTScriptingReady; // 0x1c0(0x10)
	struct FMulticastInlineDelegate AkAudioEvent; // 0x1e8(0x10)
	struct FMulticastInlineDelegate KeyUpDelegate; // 0x1f8(0x10)
	struct FMulticastInlineDelegate KeyDownDelegate; // 0x208(0x10)
	struct FMulticastInlineDelegate MouseEventDelegate; // 0x218(0x10)
	enum class TextureFilter Filter; // 0x228(0x01)
	bool bReceiveInput; // 0x229(0x01)
	enum class ECoherentUIGTInputPropagationBehaviour InputPropagationBehaviour; // 0x22a(0x01)
	bool bReceiveInputWhenTransparent; // 0x22b(0x01)
	bool bGammaCorrectedMaterial; // 0x22c(0x01)
	float TickPeriodInMinimizedGame; // 0x230(0x04)
	bool AllowPerformanceWarnings; // 0x234(0x01)
	float ExecuteJSTimersThresholdMs; // 0x238(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x23c(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x240(0x04)
	float PaintWarningThresholdMs; // 0x244(0x04)
	int32_t LayersCountThreshold; // 0x248(0x04)
	int32_t LayerWidthThreshold; // 0x24c(0x04)
	int32_t LayerHeightThreshold; // 0x250(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x254(0x01)
	struct UCoherentUIGTAudioWrapper* AudioWrapper; // 0x308(0x08)
	struct FString URL; // 0x390(0x10)
	float ClickThroughAlphaThreshold; // 0x3a0(0x04)
	bool OffscreenCanvasRendering; // 0x3a4(0x01)
	bool Transparent; // 0x3a5(0x01)

	void UpdateWholeDataModelFromStruct(struct TFieldPath<FStructProperty> Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x132cc30
	void UpdateWholeDataModelFromObject(struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1333980
	void TriggerJSEvent(struct FString Name, struct UCoherentUIGTJSEvent* eventData); // Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x13338a0
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1333880
	void ShowPaintRects(bool Show); // Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects // (Final|Native|Public|BlueprintCallable) // @ game+0x13337f0
	void SetSkipHittestInputGroupEmpty(bool bState); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetSkipHittestInputGroupEmpty // (Final|Native|Public|BlueprintCallable) // @ game+0x1333760
	void SetRefreshTime(float Time); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetRefreshTime // (Final|Native|Public|BlueprintCallable) // @ game+0x13336e0
	void SetReceiveInput(bool Input); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetReceiveInput // (Final|Native|Public|BlueprintCallable) // @ game+0x1333650
	void SetPreviewKeyEventInherit(bool bState); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetPreviewKeyEventInherit // (Final|Native|Public|BlueprintCallable) // @ game+0x13335c0
	void SetOffscreenCanvasRendering(bool State); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetOffscreenCanvasRendering // (Final|Native|Public|BlueprintCallable) // @ game+0x1333530
	void SetInputPropagationBehaviour(enum class ECoherentUIGTInputPropagationBehaviour Propagation); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetInputPropagationBehaviour // (Final|Native|Public|BlueprintCallable) // @ game+0x13334b0
	void SetHideCursorDuringCapture(bool bState); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetHideCursorDuringCapture // (Final|Native|Public|BlueprintCallable) // @ game+0x1333420
	void SetClickThroughAlphaThreshold(float threshold); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x13333a0
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload // (Final|Native|Public|BlueprintCallable) // @ game+0x1333380
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1333360
	void MouseEventDelegate__DelegateSignature(struct FCoh_MouseEventData& MouseEvent); // DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.MouseEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void Load(struct FString Path); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Load // (Final|Native|Public|BlueprintCallable) // @ game+0x1333070
	void KeyUpDelegate__DelegateSignature(struct FKey& Key); // DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.KeyUpDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void KeyDownDelegate__DelegateSignature(struct FKey& Key); // DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.KeyDownDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	bool IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1333040
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x132f350
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1333010
	bool IsErrorPage(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsErrorPage // (Final|Native|Public|BlueprintCallable) // @ game+0x1332fe0
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1332fb0
	bool HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1332f80
	struct UTextureRenderTarget2D* GetRenderTexture(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1332e70
	enum class ECoherentUIGTInputPropagationBehaviour GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetInputPropagationBehaviour // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1332d20
	struct FIntPoint GetDPIScaleSize(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetDPIScaleSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x1332ce0
	float GetDPIScaleBasedOnSize(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetDPIScaleBasedOnSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1332cb0
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1332c80
	void FinishLoadSkip(bool bState); // Function CoherentUIGTPlugin.CoherentUIGTWidget.FinishLoadSkip // (Final|Native|Public|BlueprintCallable) // @ game+0x1332b60
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave // (Final|Native|Public|BlueprintCallable) // @ game+0x1332b40
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x1332b20
	struct UCoherentUIGTJSEvent* CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x132ef00
	void CreateDataModelFromStruct(struct FString Name, struct TFieldPath<FStructProperty> Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct // (Final|Native|Public|BlueprintCallable) // @ game+0x132ca10
	void CreateDataModelFromObject(struct FString Name, struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject // (Final|Native|Public|BlueprintCallable) // @ game+0x1332a40
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave // (Final|Native|Public|BlueprintCallable) // @ game+0x1332a20
	void AKAudioEventDelegate__DelegateSignature(struct FString EventName); // DelegateFunction CoherentUIGTPlugin.CoherentUIGTWidget.AKAudioEventDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
};

