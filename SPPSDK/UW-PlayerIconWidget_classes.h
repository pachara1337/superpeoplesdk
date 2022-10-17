// WidgetBlueprintGeneratedClass UW-PlayerIconWidget.UW-PlayerIconWidget_C
// Size: 0x2cff6a90 (Inherited: 0x2cff6a50)
struct UUW-PlayerIconWidget_C : UBravoHotelPlayerIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* Anim_OnNotifyPos; // 0x358(0x08)
	struct UWidgetAnimation* Anim_OnAttacked; // 0x360(0x08)
	struct UCanvasPanel* Canvas_Attacked; // 0x368(0x08)
	struct UCanvasPanel* Canvas_Fire; // 0x370(0x08)
	struct UCanvasPanel* Canvas_NotifyPos; // 0x378(0x08)
	struct UImage* Img_FreeCam; // 0x380(0x08)
	struct ABravoHotelPlayerState* PlayerState; // 0x388(0x08)

	void OnClickPlayerNameButton(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnClickPlayerNameButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAttackedWidget(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnAttackedWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnFireWidget(struct UUW-MapComp_C* MapComp, struct FRotator Rotation, float Length); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnFireWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetFreeCam(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.SetFreeCam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Initialize(struct ABravoHotelPlayerState* PlayerState); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void Rotate(float Angle); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.Rotate // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.BndEvt__BT_UserName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void PlayTargetPosAnim(); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.PlayTargetPosAnim // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PlayerIconWidget(int32_t EntryPoint); // Function UW-PlayerIconWidget.UW-PlayerIconWidget_C.ExecuteUbergraph_UW-PlayerIconWidget // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

