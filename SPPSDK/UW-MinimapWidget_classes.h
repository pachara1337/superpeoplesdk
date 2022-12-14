// WidgetBlueprintGeneratedClass UW-MinimapWidget.UW-MinimapWidget_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6b20)
struct UUW-MinimapWidget_C : UBravoHotelMiniMapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* PlayerIconOnDamagingAnimation; // 0x328(0x08)
	struct UWidgetAnimation* ShirinkingAnimation; // 0x330(0x08)
	struct UImage* AlertIcon; // 0x338(0x08)
	struct UBP-CheckWeightMap_C* BP-CheckWeightMap; // 0x340(0x08)
	struct UUW-MapComp_C* BP-MapComp; // 0x348(0x08)
	struct UImage* Image; // 0x350(0x08)
	struct UCanvasPanel* LulledGroup; // 0x358(0x08)
	struct UCanvasPanel* PlayerIconGroup; // 0x360(0x08)
	struct USizeBox* SB-MapComp; // 0x368(0x08)
	struct USizeBox* SB_CircleInfo; // 0x370(0x08)
	struct UCanvasPanel* ShrinkingGroup; // 0x378(0x08)
	struct UUW-Inventory_Recipe_C* UW-Inventory_Recipe; // 0x380(0x08)
	struct UUW-SearchingMaterial_C* UW-SearchingMaterial; // 0x388(0x08)
	int32_t State; // 0x390(0x04)
	struct FVector2D MapSize_Default; // 0x394(0x08)
	struct FVector2D MapSize_Extend; // 0x39c(0x08)
	int32_t InitializeCount; // 0x3a4(0x04)
	bool bExtendMode; // 0x3a8(0x01)
	int32_t RecipeCount; // 0x3ac(0x04)
	struct ABravoHotelCharacter* TargetCharacter; // 0x3b0(0x08)
	struct TArray<struct UUW-Inventory_RecipeSlot_C*> RecipeSlotPool; // 0x3b8(0x10)
	int32_t Index; // 0x3c8(0x04)
	bool bLocalCheckIfPlayAssistQuestCanStart; // 0x3cc(0x01)
	struct FLinearColor AlertColor; // 0x3d0(0x10)
	struct FLinearColor NormalColor; // 0x3e0(0x10)
	struct FMulticastInlineDelegate EventDispatcher_ForceUpdateCache; // 0x3f0(0x10)

	void ToggleMapSize_NoParam(); // Function UW-MinimapWidget.UW-MinimapWidget_C.ToggleMapSize_NoParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct UBravoHotelMapCompWidget* GetMapCompWidget(); // Function UW-MinimapWidget.UW-MinimapWidget_C.GetMapCompWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x2bad3b0
	void SetRecipeList(); // Function UW-MinimapWidget.UW-MinimapWidget_C.SetRecipeList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Check Recipe Visibility(); // Function UW-MinimapWidget.UW-MinimapWidget_C.Check Recipe Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnBlueZoneStateChanged(enum class EBluseZoneState Pre, enum class EBluseZoneState Cur); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnBlueZoneStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSurvivalCirclePhaseChanged(int32_t PrevPhase, int32_t CurrentPhase); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnSurvivalCirclePhaseChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ToggleMapSize(struct FVector2D WidgetSize); // Function UW-MinimapWidget.UW-MinimapWidget_C.ToggleMapSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FVector2D GetVectorCurrentTo(struct FVector Position); // Function UW-MinimapWidget.UW-MinimapWidget_C.GetVectorCurrentTo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	float CalcLengthOnWave(float Distance); // Function UW-MinimapWidget.UW-MinimapWidget_C.CalcLengthOnWave // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	float CalcDistanceRelatedToTarget(struct FVector Vector, float Distance); // Function UW-MinimapWidget.UW-MinimapWidget_C.CalcDistanceRelatedToTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FVector2D GetTargetTo(struct FVector Position); // Function UW-MinimapWidget.UW-MinimapWidget_C.GetTargetTo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct FVector2D GetTargetToPlayer(); // Function UW-MinimapWidget.UW-MinimapWidget_C.GetTargetToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Update Circle Info Groups(float DeltaSeconds); // Function UW-MinimapWidget.UW-MinimapWidget_C.Update Circle Info Groups // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update on Shrinkings(float DeltaSeconds); // Function UW-MinimapWidget.UW-MinimapWidget_C.Update on Shrinkings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateActiveIcon(); // Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateActiveIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateTimeToActivate(); // Function UW-MinimapWidget.UW-MinimapWidget_C.UpdateTimeToActivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetToggleMinimap(bool bToggle); // Function UW-MinimapWidget.UW-MinimapWidget_C.SetToggleMinimap // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAttackedWidget(int32_t UniquePlayerId); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnAttackedWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnFireWidget(int32_t UniquePlayerId, struct FRotator Rotation, float Length); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnFireWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-MinimapWidget.UW-MinimapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(bool IsShow); // Function UW-MinimapWidget.UW-MinimapWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateRecipeSlotPool(int32_t Count); // Function UW-MinimapWidget.UW-MinimapWidget_C.CreateRecipeSlotPool // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Clear RecipeSlotPool(); // Function UW-MinimapWidget.UW-MinimapWidget_C.Clear RecipeSlotPool // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeRecipeList_BP(); // Function UW-MinimapWidget.UW-MinimapWidget_C.ChangeRecipeList_BP // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function UW-MinimapWidget.UW-MinimapWidget_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(enum class EPlayerState PlayerState); // Function UW-MinimapWidget.UW-MinimapWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AllHideSlots(); // Function UW-MinimapWidget.UW-MinimapWidget_C.AllHideSlots // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function UW-MinimapWidget.UW-MinimapWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckPlayerIconAnimation(bool bOutofPlayZone); // Function UW-MinimapWidget.UW-MinimapWidget_C.CheckPlayerIconAnimation // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Event OnChangedMinimapSize(bool bChanged); // Function UW-MinimapWidget.UW-MinimapWidget_C.Event OnChangedMinimapSize // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-MinimapWidget.UW-MinimapWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangeSearchingMaterialList_Event(); // Function UW-MinimapWidget.UW-MinimapWidget_C.OnChangeSearchingMaterialList_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ForceUpdateCache(); // Function UW-MinimapWidget.UW-MinimapWidget_C.ForceUpdateCache // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-MinimapWidget(int32_t EntryPoint); // Function UW-MinimapWidget.UW-MinimapWidget_C.ExecuteUbergraph_UW-MinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_ForceUpdateCache__DelegateSignature(); // Function UW-MinimapWidget.UW-MinimapWidget_C.EventDispatcher_ForceUpdateCache__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

