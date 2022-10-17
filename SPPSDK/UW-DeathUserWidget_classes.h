// WidgetBlueprintGeneratedClass UW-DeathUserWidget.UW-DeathUserWidget_C
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a88)
struct UUW-DeathUserWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* EnemySkull; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct AActor* Pawn; // 0x2a0(0x08)

	void SetDiedPawnInfo(struct FKillBroadcastUIInfo BroadCastInfo); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.SetDiedPawnInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void StartAnim(); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StartSetPosition(); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.StartSetPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-DeathUserWidget(int32_t EntryPoint); // Function UW-DeathUserWidget.UW-DeathUserWidget_C.ExecuteUbergraph_UW-DeathUserWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

