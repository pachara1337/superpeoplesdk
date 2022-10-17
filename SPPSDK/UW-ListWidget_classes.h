// WidgetBlueprintGeneratedClass UW-ListWidget.UW-ListWidget_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a98)
struct UUW-ListWidget_C : UBravoHotelListWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UUniformGridPanel* UniformGridPanelList; // 0x2a0(0x08)
	struct UUserWidget* WidgetClass; // 0x2a8(0x08)
	int32_t MaxWidgetCount; // 0x2b0(0x04)
	enum class EHorizontalAlignment Alignment; // 0x2b4(0x01)
	struct FMargin SlotPadding; // 0x2b8(0x10)
	char pad_2CFF6AC5[0x3]; // 0x2cff6ac5(0x03)

	void AddCoreInfoRichText(struct FText Message); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoRichText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddKillMessage(struct FKillBroadcastUIInfo BroadCastKillInfo); // Function UW-ListWidget.UW-ListWidget_C.AddKillMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeMaxCount(int32_t NewMaxCount); // Function UW-ListWidget.UW-ListWidget_C.ChangeMaxCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckCanStackDamageLog(struct FHitDamageLogInfo& DamageLogInfo, bool& CanStack); // Function UW-ListWidget.UW-ListWidget_C.CheckCanStackDamageLog // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoDamageLog(struct FHitDamageLogInfo& DamageLogInfo); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoDamageLog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddMyKillMessage(struct FText Message); // Function UW-ListWidget.UW-ListWidget_C.AddMyKillMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddRequestMessage(struct FText Message, struct ABravoHotelPlayerState* PlayerState); // Function UW-ListWidget.UW-ListWidget_C.AddRequestMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoRequestResuscitation(struct ABravoHotelPlayerState* PlayerState); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoRequestResuscitation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoRouteping(struct ABravoHotelPlayerState* PlayerState); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoRouteping // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoSmartping(struct ABravoHotelPlayerState* PlayerState); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoSmartping // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddCoreInfoMessage(struct FText Message, struct FString Type); // Function UW-ListWidget.UW-ListWidget_C.AddCoreInfoMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddGainPerk(struct FPerkUIInfo& PerkUIInfo, int32_t CurrentLevel, int32_t LastLevel, bool IsPlayingUltimateSound); // Function UW-ListWidget.UW-ListWidget_C.AddGainPerk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowNewWidgetImpl(float RemainTime, struct UWidget*& OutWidget); // Function UW-ListWidget.UW-ListWidget_C.ShowNewWidgetImpl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitChildListWidget(); // Function UW-ListWidget.UW-ListWidget_C.InitChildListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PreConstruct(bool IsDesignTime); // Function UW-ListWidget.UW-ListWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ListWidget(int32_t EntryPoint); // Function UW-ListWidget.UW-ListWidget_C.ExecuteUbergraph_UW-ListWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

