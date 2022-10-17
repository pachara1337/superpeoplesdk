// BlueprintGeneratedClass BP_GameSettings.BP_GameSettings_C
// Size: 0x2cff6b1d (Inherited: 0x2cff6ab0)
struct UBP_GameSettings_C : UBravoHotelLocalSavedSettings {
	float Look Horizontal Sensitivity; // 0x1b0(0x04)
	float Look Vertical Sensitivity; // 0x1b4(0x04)
	bool Look Horizontal Invert; // 0x1b8(0x01)
	bool Look Vertical Invert; // 0x1b9(0x01)
	struct TScriptInterface<IBPI_GameSettingsInterface_C> Game Settings Interface; // 0x1c0(0x10)
	struct FString Save File Name; // 0x1d0(0x10)
	int32_t Save File User Index; // 0x1e0(0x04)
	struct TArray<struct FSAudioUpdateStruct> AudioEmittors; // 0x1e8(0x10)
	float Audio Multiplier Master; // 0x1f8(0x04)
	float Audio Multiplier Music; // 0x1fc(0x04)
	float Audio Multiplier Voice; // 0x200(0x04)
	float Audio Multiplier Effect; // 0x204(0x04)
	float Audio Multiplier Ambient; // 0x208(0x04)
	float Audio Multiplier UI; // 0x20c(0x04)
	float Volume Master; // 0x210(0x04)
	float Volume Music; // 0x214(0x04)
	float Volume Voice; // 0x218(0x04)
	float Volume Effect; // 0x21c(0x04)
	float Volume Ambient; // 0x220(0x04)
	int32_t Video X Resolution; // 0x224(0x04)
	int32_t Video Y Resolution; // 0x228(0x04)
	struct TArray<struct UCameraComponent*> Camera List; // 0x230(0x10)
	enum class EWindowMode Screen Mode; // 0x240(0x01)
	int32_t Resolution Scale Quality; // 0x244(0x04)
	float View Distance Scale; // 0x248(0x04)
	int32_t Anti Aliasing Quality; // 0x24c(0x04)
	int32_t Post Processing Quality; // 0x250(0x04)
	int32_t Shadow Quality; // 0x254(0x04)
	int32_t Texture Quality; // 0x258(0x04)
	int32_t Effect Quality; // 0x25c(0x04)
	int32_t Foliage Quality; // 0x260(0x04)
	float Field Of View FOV; // 0x264(0x04)
	float Motion Blur Strength; // 0x268(0x04)
	bool VSync Enabled; // 0x26c(0x01)
	bool My Custom Checkbox; // 0x26d(0x01)
	int32_t My Custom RadioBox; // 0x270(0x04)
	float My Custom Slider; // 0x274(0x04)
	float Bloom Intensity; // 0x278(0x04)
	float Gamma Intensity; // 0x27c(0x04)
	float Gain Intensity; // 0x280(0x04)
	struct UBP_GameSettings_C* Previous Setting State; // 0x288(0x08)
	struct FString My Custom Combobox; // 0x290(0x10)
	float Current Frame Time; // 0x2a0(0x04)
	struct TArray<struct UBP_KeyAction_C*> Key Actions; // 0x2a8(0x10)
	struct TArray<struct UBP_KeyInput_C*> Input Float Axis List; // 0x2b8(0x10)
	struct TArray<struct FSKeyActionSave> Saved Key Inputs; // 0x2c8(0x10)
	float Volume UI; // 0x2d8(0x04)
	enum class EWindowMode Old ScreenMode State; // 0x2dc(0x01)
	float TemporalAAFilterSize; // 0x2e0(0x04)
	bool TemporalAACatmullRom; // 0x2e4(0x01)
	bool TemporalAAPauseCorrect; // 0x2e5(0x01)
	float TemporalAACurrentFrameWeight; // 0x2e8(0x04)
	int32_t TemporalAASamples; // 0x2ec(0x04)
	float TonemapperSharpen; // 0x2f0(0x04)
	float MinBrightness; // 0x2f4(0x04)
	float MaxBrightness; // 0x2f8(0x04)
	float Contrast; // 0x2fc(0x04)
	bool PostProcessVolume; // 0x300(0x01)
	bool ScreenModeChange; // 0x301(0x01)
	bool FilmToe; // 0x302(0x01)
	float ColorGrading Global Gamma; // 0x304(0x04)
	bool ClearFog; // 0x308(0x01)
	int32_t ViewDistanceQuality; // 0x30c(0x04)
	int32_t ScalabilityQuality; // 0x310(0x04)
	int32_t CurrentFileVersion; // 0x314(0x04)
	int32_t UpdateFileVersion; // 0x318(0x04)
	bool Smooth Frame Enabled; // 0x31c(0x01)

	void SetAutoReloadSetting(bool Value, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.SetAutoReloadSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetAutoReloadSetting(bool& autoReload); // Function BP_GameSettings.BP_GameSettings_C.GetAutoReloadSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ModifyAutoReloadSetting(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyAutoReloadSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Smooth Frame Rate(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Smooth Frame Rate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Smooth Frame Rate(bool Value, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Smooth Frame Rate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Smooth Frame Rate(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Smooth Frame Rate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyScalabilityQuality(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyScalabilityQuality // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetScalabilityQuality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.GetScalabilityQuality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetScalabilityQuality(int32_t Value, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetScalabilityQuality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetViewDistanceQuality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.GetViewDistanceQuality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetViewDistanceQuality(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetViewDistanceQuality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyViewDistanceQuality(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyViewDistanceQuality // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Clear Fog(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Clear Fog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Clear Fog(bool Value, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Clear Fog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Clear Fog(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Clear Fog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get ColorGrading Global Gamma(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get ColorGrading Global Gamma // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set ColorGrading Global Gamma(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set ColorGrading Global Gamma // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify ColorGrading Global Gamma(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify ColorGrading Global Gamma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Film Toe Intensity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Film Toe Intensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get Film Toe(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Film Toe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Film Toe(bool Value, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Film Toe // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Film Toe(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Film Toe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify All Game Settings(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Game Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetFireModeSetting(enum class EWeaponType WeaponType, enum class EWeaponFireMode NewWeaponFireMode, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.SetFireModeSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetFireModeSetting(struct TMap<enum class EWeaponType, enum class EWeaponFireMode>& FireModeSettings); // Function BP_GameSettings.BP_GameSettings_C.GetFireModeSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void ModifyFireModeSetting(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyFireModeSetting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Post Process Volume(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Post Process Volume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Post Process Volume(bool Value, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Post Process Volume // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Post Process Volume(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Post Process Volume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetContrast(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetContrast // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetContrast(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetContrast // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyContrast(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyContrast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMaxBrightness(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetMaxBrightness // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetMaxBrightness(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetMaxBrightness // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyMaxBrightness(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyMaxBrightness // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMinBrightness(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetMinBrightness // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetMinBrightness(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetMinBrightness // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyMinBrightness(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyMinBrightness // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyTemporalAACurrentFrameWeight(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACurrentFrameWeight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetTemporalAACurrentFrameWeight(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACurrentFrameWeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetTemporalAACurrentFrameWeight(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACurrentFrameWeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetTonemapperSharpen(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTonemapperSharpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetTemporalAASamples(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAASamples // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetTemporalAAPauseCorrect(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAPauseCorrect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetTemporalAACatmullRom(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAACatmullRom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetTonemapperSharpen(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTonemapperSharpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTemporalAASamples(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAASamples // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTemporalAAPauseCorrect(bool Value, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAPauseCorrect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTemporalAACatmullRom(bool Value, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAACatmullRom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyTonemapperSharpen(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTonemapperSharpen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyTemporalAASamples(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAASamples // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyTemporalAAPauseCorrect(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAPauseCorrect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyTemporalAACatmullRom(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAACatmullRom // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ModifyTemporalAAFilterSize(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.ModifyTemporalAAFilterSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetTemporalAAFilterSize(float& Value); // Function BP_GameSettings.BP_GameSettings_C.GetTemporalAAFilterSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetTemporalAAFilterSize(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.SetTemporalAAFilterSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetSensitivityValue(enum class EMouseSensitivityState MouseSensitivityType, int32_t& Sensitivity); // Function BP_GameSettings.BP_GameSettings_C.GetSensitivityValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetSensitivityValue(enum class EMouseSensitivityState MouseSensitivityType, int32_t Sensitivity); // Function BP_GameSettings.BP_GameSettings_C.SetSensitivityValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Foliage Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Foliage Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Foliage Quality(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Foliage Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Foliage Quality(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Foliage Quality // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Volume UI(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume UI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get Audio Multiplier UI(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier UI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Audio Multiplier UI(float Set Value, bool Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier UI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Audio Multiplier UI(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier UI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Save Ini Settings(); // Function BP_GameSettings.BP_GameSettings_C.Save Ini Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Load ini Settings(); // Function BP_GameSettings.BP_GameSettings_C.Load ini Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init Save Game Settings(struct TScriptInterface<IBPI_GameSettingsInterface_C> Game Settings Interface); // Function BP_GameSettings.BP_GameSettings_C.Init Save Game Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Saved Key Inputs(struct TArray<struct FSKeyActionSave>& Saved Key Inputs); // Function BP_GameSettings.BP_GameSettings_C.Get Saved Key Inputs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get All Key Actions(struct TArray<struct UBP_KeyAction_C*>& Key Actions); // Function BP_GameSettings.BP_GameSettings_C.Get All Key Actions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Save File User Index(int32_t Save File User Index); // Function BP_GameSettings.BP_GameSettings_C.Set Save File User Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Save File Name(struct FString Save File Name); // Function BP_GameSettings.BP_GameSettings_C.Set Save File Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Game Settings Interface(struct TScriptInterface<IBPI_GameSettingsInterface_C> Game Settings Interface); // Function BP_GameSettings.BP_GameSettings_C.Set Game Settings Interface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get All Combinations(struct TArray<struct UBP_KeyCombination_C*>& Combinations); // Function BP_GameSettings.BP_GameSettings_C.Get All Combinations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Generate Keybinding Conflicts(); // Function BP_GameSettings.BP_GameSettings_C.Generate Keybinding Conflicts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Keybindings(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Keybindings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Load Key Actions(); // Function BP_GameSettings.BP_GameSettings_C.Load Key Actions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Save Key Actions(); // Function BP_GameSettings.BP_GameSettings_C.Save Key Actions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Store Key Input(struct FSKeyActionSave& KeySave); // Function BP_GameSettings.BP_GameSettings_C.Store Key Input // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Key Action(struct FString Input Action Name, struct UBP_KeyAction_C*& Input Action, bool& SUCCESS); // Function BP_GameSettings.BP_GameSettings_C.Get Key Action // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Fill Float Axis Inputs List(); // Function BP_GameSettings.BP_GameSettings_C.Fill Float Axis Inputs List // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init Key Bindings(); // Function BP_GameSettings.BP_GameSettings_C.Init Key Bindings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Actions Input State(float Real Time Seconds, float World Delta Seconds, struct APlayerController* PlayerController); // Function BP_GameSettings.BP_GameSettings_C.Update Actions Input State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Delete Settings Save File(); // Function BP_GameSettings.BP_GameSettings_C.Delete Settings Save File // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Look Sensitivity Combined X(float Input Axis X, float World Delta, float& Horizontal X); // Function BP_GameSettings.BP_GameSettings_C.Get Look Sensitivity Combined X // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get My Custom Combobox(struct FString& Value); // Function BP_GameSettings.BP_GameSettings_C.Get My Custom Combobox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set My Custom Combobox(struct FString Value, bool Apply, struct FString& Result); // Function BP_GameSettings.BP_GameSettings_C.Set My Custom Combobox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify My Custom Combobox(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Combobox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get My Custom Radiobox(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.Get My Custom Radiobox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set My Custom Radiobox(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set My Custom Radiobox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify My Custom Radiobox(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Radiobox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get My Custom Slider(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get My Custom Slider // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set My Custom Slider(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set My Custom Slider // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify My Custom Slider(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Slider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get My Custom Checkbox(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.Get My Custom Checkbox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set My Custom Checkbox(bool Value, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.Set My Custom Checkbox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify My Custom Checkbox(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify My Custom Checkbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify All MyCustom Settings(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All MyCustom Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Resolution Scale(int32_t& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Resolution Scale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Resolution Scale(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Resolution Scale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Resolution Scale(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Resolution Scale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Prepeare Previus Settings State(); // Function BP_GameSettings.BP_GameSettings_C.Prepeare Previus Settings State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Save All Settings(); // Function BP_GameSettings.BP_GameSettings_C.Save All Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify All Settings(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify All Audio Settings(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Audio Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify All Look Settings(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Look Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Look Sensitivity Combined Y(float Input Axis Y, float World Delta, float& Vertical Y); // Function BP_GameSettings.BP_GameSettings_C.Get Look Sensitivity Combined Y // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get Volume Ambient(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Ambient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get Audio Multiplier Ambient(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Ambient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Audio Multiplier Ambient(float Set Value, bool Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Ambient // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Audio Multiplier Ambient(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Ambient // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Volume Effect(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Effect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get Audio Multiplier Effect(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Effect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Audio Multiplier Effect(float Set Value, bool Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Audio Multiplier Effect(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Volume Voice(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Voice // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get Audio Multiplier Voice(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Voice // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Audio Multiplier Voice(float Set Value, bool Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Voice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Audio Multiplier Voice(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Voice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Volume Music(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Music // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get Audio Multiplier Music(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Music // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Audio Multiplier Music(float Set Value, bool Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Music // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Audio Multiplier Music(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Music // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Volume Master(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Volume Master // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Add Volume Control(struct UAudioComponent* Audio Emittor, enum class EAudioType Audio Channel); // Function BP_GameSettings.BP_GameSettings_C.Add Volume Control // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Apply Audio Settings(enum class EAudioType Audio Channel, enum class EAudioSettingType Type); // Function BP_GameSettings.BP_GameSettings_C.Apply Audio Settings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Audio Multiplier Master(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Audio Multiplier Master // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Audio Multiplier Master(float Set Value, bool Apply); // Function BP_GameSettings.BP_GameSettings_C.Set Audio Multiplier Master // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Audio Multiplier Master(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Audio Multiplier Master // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Look Vertical Invert(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Look Vertical Invert // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Look Vertical Invert(bool Set Value); // Function BP_GameSettings.BP_GameSettings_C.Set Look Vertical Invert // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Look Vertical Invert(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Look Vertical Invert // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Look Horizontal Invert(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Look Horizontal Invert // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Look Horizontal Invert(bool Set Value); // Function BP_GameSettings.BP_GameSettings_C.Set Look Horizontal Invert // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Look Horizontal Invert(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Look Horizontal Invert // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Look Vertical Sensitivity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Look Vertical Sensitivity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Look Vertical Sensitivity(float Set Value); // Function BP_GameSettings.BP_GameSettings_C.Set Look Vertical Sensitivity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Look Vertical Sensitivity(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Look Vertical Sensitivity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Look Horizontal Sensitivity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Look Horizontal Sensitivity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Look Horizontal Sensitivity(float Set Value); // Function BP_GameSettings.BP_GameSettings_C.Set Look Horizontal Sensitivity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Look Horizontal Sensitivity(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Look Horizontal Sensitivity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Apply Screen Settings(); // Function BP_GameSettings.BP_GameSettings_C.Apply Screen Settings // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Screen Mode(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Screen Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Screen Mode(enum class EWindowMode& Screen Mode, struct FString& Command); // Function BP_GameSettings.BP_GameSettings_C.Get Screen Mode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get Screen Resolution(struct FSVideoResolution& Resolution); // Function BP_GameSettings.BP_GameSettings_C.Get Screen Resolution // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Screen Mode(enum class EWindowMode Screen Mode, bool Apply, enum class EWindowMode& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Screen Mode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Screen Resolution(struct FSVideoResolution Resolution, bool Apply, struct FSVideoResolution& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Screen Resolution // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Screen Resolution(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Screen Resolution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Motion Blur Strength(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Motion Blur Strength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Motion Blur Strength(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Motion Blur Strength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Motion Blur Strength(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Motion Blur Strength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Gain Intensity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Gain Intensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Gain Intensity(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Gain Intensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Gain Intensity(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Gain Intensity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Gamma Intensity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Gamma Intensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Gamma Intensity(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Gamma Intensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Gamma Intensity(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Gamma Intensity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Bloom Intensity(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Bloom Intensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Bloom Intensity(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Bloom Intensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Bloom Intensity(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Bloom Intensity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Vsync(bool& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Vsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Vsync(bool Value, bool Apply, bool& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Vsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Vsync(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Vsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Remove Field Of View Control From Camera(struct UCameraComponent* Camera); // Function BP_GameSettings.BP_GameSettings_C.Remove Field Of View Control From Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Add Field Of View Control To Camera(struct UCameraComponent* Camera); // Function BP_GameSettings.BP_GameSettings_C.Add Field Of View Control To Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Field Of View(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get Field Of View // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Field Of View(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Field Of View // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Field Of View(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Field Of View // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get View Distance(float& Value); // Function BP_GameSettings.BP_GameSettings_C.Get View Distance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set View Distance(float Value, bool Apply, float& Result); // Function BP_GameSettings.BP_GameSettings_C.Set View Distance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify View Distance(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify View Distance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Effect Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Effect Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Effect Quality(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Effect Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Effect Quality(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Effect Quality // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Texture Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Texture Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Texture Quality(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Texture Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Texture Quality(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Texture Quality // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Shadow Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Shadow Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Shadow Quality(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Shadow Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Shadow Quality(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Shadow Quality // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify All Video Settings(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify All Video Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Anti Aliasing Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Anti Aliasing Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Anti Aliasing Quality(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Anti Aliasing Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Anti Aliasing Quality(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Anti Aliasing Quality // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Get Text Format Quality Level(int32_t Quality Level, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Text Format Quality Level // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Get Post Process Quality(int32_t& Value, struct FString& Formatted); // Function BP_GameSettings.BP_GameSettings_C.Get Post Process Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Set Post Process Quality(int32_t Value, bool Apply, int32_t& Result); // Function BP_GameSettings.BP_GameSettings_C.Set Post Process Quality // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Modify Post Process Quality(enum class EModifySetting Modify); // Function BP_GameSettings.BP_GameSettings_C.Modify Post Process Quality // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Audio Emittor(struct FSAudioUpdateStruct Emittor, bool& Is Valid); // Function BP_GameSettings.BP_GameSettings_C.Update Audio Emittor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Create Clone(struct UBP_GameSettings_C*& Cloned Game Settings); // Function BP_GameSettings.BP_GameSettings_C.Create Clone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

