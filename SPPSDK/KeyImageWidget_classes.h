// WidgetBlueprintGeneratedClass KeyImageWidget.KeyImageWidget_C
// Size: 0x2cff6a28 (Inherited: 0x2cff6a88)
struct UKeyImageWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UUW-KeyControl_C* Alt; // 0x290(0x08)
	struct UTextBlock* Alt+; // 0x298(0x08)
	struct UUW-KeyControl_C* Ctrl; // 0x2a0(0x08)
	struct UTextBlock* Ctrl+; // 0x2a8(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2b0(0x08)
	struct UUW-KeyControl_C* Key; // 0x2b8(0x08)
	struct UScaleBox* ScaleBox; // 0x2c0(0x08)
	struct UUW-KeyControl_C* Shift; // 0x2c8(0x08)
	struct UTextBlock* Shift+; // 0x2d0(0x08)
	enum class EHorizontalAlignment Horizontal Alignment; // 0x2d8(0x01)
	enum class EVerticalAlignment vertical Alignment; // 0x2d9(0x01)
	bool UsingAlphaBg; // 0x2da(0x01)
	enum class EKeySettingType PreKeyType; // 0x2db(0x01)
	struct FInputActionKeyMapping PreKeyMappingData; // 0x2e0(0x30)
	bool UsingKeyMappingData; // 0x310(0x01)
	float DefaultScale; // 0x314(0x04)
	bool OverrideFontSize; // 0x318(0x01)
	int32_t FontSize; // 0x31c(0x04)
	enum class EKeySettingType LastKeyType; // 0x320(0x01)
	int32_t LastClassIndex; // 0x324(0x04)

	void OnGameUserSettingsApply_Key_Event(struct TArray<enum class EKeySettingType>& KeyTypeList); // Function KeyImageWidget.KeyImageWidget_C.OnGameUserSettingsApply_Key_Event // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RefreshKeyType(); // Function KeyImageWidget.KeyImageWidget_C.RefreshKeyType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCustomKeyType(enum class EKeySettingType KeyType, bool& IsCustom); // Function KeyImageWidget.KeyImageWidget_C.IsCustomKeyType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnGameUserSettingsApply_Controll_Event(struct TArray<enum class ESettingType>& List); // Function KeyImageWidget.KeyImageWidget_C.OnGameUserSettingsApply_Controll_Event // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsHold(enum class EKeySettingType InKeyType, bool& bFlag); // Function KeyImageWidget.KeyImageWidget_C.IsHold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void SetFontSize(bool Override); // Function KeyImageWidget.KeyImageWidget_C.SetFontSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetKeyNameFromKey(struct FKey Key, struct FString& Name, bool& bRet); // Function KeyImageWidget.KeyImageWidget_C.GetKeyNameFromKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function KeyImageWidget.KeyImageWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function KeyImageWidget.KeyImageWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetKeyType(enum class EKeySettingType KeyType); // Function KeyImageWidget.KeyImageWidget_C.SetKeyType // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Key(struct FInputActionKeyMapping Key); // Function KeyImageWidget.KeyImageWidget_C.Set Key // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set AxistKey(struct FInputAxisKeyMapping AxisKey); // Function KeyImageWidget.KeyImageWidget_C.Set AxistKey // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfo(struct FKey Key, bool Shift, bool Alt, bool Ctrl, bool IsHold); // Function KeyImageWidget.KeyImageWidget_C.SetInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEmpty(); // Function KeyImageWidget.KeyImageWidget_C.SetEmpty // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetInfoFromActionKeyMap(struct FInputActionKeyMapping ActionKeyMap); // Function KeyImageWidget.KeyImageWidget_C.SetInfoFromActionKeyMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function KeyImageWidget.KeyImageWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void SetClassIndex(int32_t ClassIndex); // Function KeyImageWidget.KeyImageWidget_C.SetClassIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_KeyImageWidget(int32_t EntryPoint); // Function KeyImageWidget.KeyImageWidget_C.ExecuteUbergraph_KeyImageWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

