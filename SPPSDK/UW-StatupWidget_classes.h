// WidgetBlueprintGeneratedClass UW-StatupWidget.UW-StatupWidget_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a88)
struct UUW-StatupWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_MoveUp_HUD; // 0x290(0x08)
	struct UWidgetAnimation* Anim_MoveRight; // 0x298(0x08)
	struct UWidgetAnimation* Anim_MoveUp; // 0x2a0(0x08)
	struct UUW-StatupWidget_Item_C* UW-StatupWidget_Item_Attack; // 0x2a8(0x08)
	struct UUW-StatupWidget_Item_C* UW-StatupWidget_Item_Capacity; // 0x2b0(0x08)
	struct UUW-StatupWidget_Item_C* UW-StatupWidget_Item_Damage; // 0x2b8(0x08)
	struct UUW-StatupWidget_Item_C* UW-StatupWidget_Item_Decrement; // 0x2c0(0x08)
	struct UUW-StatupWidget_Item_C* UW-StatupWidget_Item_Health; // 0x2c8(0x08)
	struct UUW-StatupWidget_Item_C* UW-StatupWidget_Item_Speed; // 0x2d0(0x08)
	struct UVerticalBox* VerticalBox_Stats; // 0x2d8(0x08)

	void SetStatInfo(struct FStatupAnimParameters& StatupParams, bool IsUpAnim); // Function UW-StatupWidget.UW-StatupWidget_C.SetStatInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UW-StatupWidget.UW-StatupWidget_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-StatupWidget(int32_t EntryPoint); // Function UW-StatupWidget.UW-StatupWidget_C.ExecuteUbergraph_UW-StatupWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

