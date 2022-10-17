// WidgetBlueprintGeneratedClass ConfirmPopupWidget.ConfirmPopupWidget_C
// Size: 0x2cff6b04 (Inherited: 0x2cff6a90)
struct UConfirmPopupWidget_C : UBravoHotelConfirmPopupWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* Bg; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct USpacer* Spacer; // 0x2a8(0x08)
	struct UTextBlock* TextBlock; // 0x2b0(0x08)
	struct UTextBlock* TextBlock; // 0x2b8(0x08)
	struct UUW-ButtonCancle_C* UW-ButtonCancle; // 0x2c0(0x08)
	struct UUW-ButtonOk_C* UW-ButtonOk; // 0x2c8(0x08)
	enum class ConfirmPopupType PopupType; // 0x2d0(0x01)
	struct USettingMainWidget_C* SettingWidget; // 0x2d8(0x08)
	int32_t CurrentSelectIndex; // 0x2e0(0x04)
	enum class ESettingBigType CurrentSelectType; // 0x2e4(0x01)
	struct TArray<struct FBackupSlotData> BackupSlots; // 0x2e8(0x10)
	struct FTimerHandle Timer; // 0x2f8(0x08)
	int32_t TimerCount; // 0x300(0x04)
	char pad_2CFF6AFA[0xa]; // 0x2cff6afa(0x0a)

	void SetTimerCount(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.SetTimerCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(struct USettingMainWidget_C* SettingWidget, int32_t Index, enum class ESettingBigType SelectType, enum class ConfirmPopupType PopupType); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_OK_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void CancelImpl(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.CancelImpl // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__UW-ButtonOk_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.BndEvt__UW-ButtonCancle_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_ConfirmPopupWidget(int32_t EntryPoint); // Function ConfirmPopupWidget.ConfirmPopupWidget_C.ExecuteUbergraph_ConfirmPopupWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

