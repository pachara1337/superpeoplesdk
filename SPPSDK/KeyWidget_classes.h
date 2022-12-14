// WidgetBlueprintGeneratedClass KeyWidget.KeyWidget_C
// Size: 0x2cff6af1 (Inherited: 0x2cff6ae8)
struct UKeyWidget_C : UBravoHotelSettingSubWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UButtomButtonWidget_C* ButtomButtonWidget; // 0x2f0(0x08)
	struct UVerticalBox* ClassSkill; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UOverlay* Overlay; // 0x308(0x08)
	struct UScrollBox* ScrollBox; // 0x310(0x08)
	struct USlotItemWidget_C* ShowPerkSlot; // 0x318(0x08)
	struct UUniformGridPanel* UniformGridPanel; // 0x320(0x08)
	struct UVerticalBox* VerticalBox; // 0x328(0x08)
	enum class EKeySettingType Begin; // 0x330(0x01)
	enum class EKeySettingType End; // 0x331(0x01)
	enum class EKeySettingSubType PreSubType; // 0x332(0x01)
	struct FMulticastInlineDelegate EventDispatcher_KeyNotiMessage; // 0x338(0x10)
	struct FTimerHandle ScrollBarTimer; // 0x348(0x08)
	struct TMap<enum class EKeySettingSubType, struct FSettingInfo> List; // 0x350(0x50)
	struct TArray<enum class EKeySettingSubType> SubTypeSort; // 0x3a0(0x10)
	int32_t TempCount; // 0x3b0(0x04)
	struct TMap<struct UButtomButtonWidget_C*, struct USubTitleSlotWidget_C*> Hot; // 0x3b8(0x50)
	float Size; // 0x408(0x04)
	struct TMap<struct USubTitleSlotWidget_C*, float> Offset; // 0x410(0x50)
	struct FPerkDeckData LocalPerkDeckData; // 0x460(0x570)
	struct FPerkDeckSelectInfo CurrentPerkDeckSelectInfo; // 0x9d0(0x18)
	struct FPerkDeckClassInfo LocalDeck; // 0x9e8(0x30)
	struct FSettingInfo LocalSettingData; // 0xa18(0xa0)
	bool bFindSkill; // 0xab8(0x01)
	struct FMulticastInlineDelegate EventDispatcher_BlackListKeyNotiMessage; // 0xac0(0x10)
	float TopPadding; // 0xad0(0x04)
	struct UClassSKillSlotWidget_C* SkillSlot; // 0xad8(0x08)
	struct TArray<struct UClassSKillSlotWidget_C*> NewVar; // 0xae0(0x10)
	bool Complete; // 0xaf0(0x01)

	void EnableShowReplayType(bool& bRet); // Function KeyWidget.KeyWidget_C.EnableShowReplayType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function KeyWidget.KeyWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void CreateSlotList(); // Function KeyWidget.KeyWidget_C.CreateSlotList // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetScrollLock(bool Lock); // Function KeyWidget.KeyWidget_C.SetScrollLock // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function KeyWidget.KeyWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct FInputChord InKey, struct UBravoHotelSettingSlotWidget* Slot); // Function KeyWidget.KeyWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(bool bIsDuplicate, struct FInputChord InKey, struct FText KeyName); // Function KeyWidget.KeyWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function KeyWidget.KeyWidget_C.BndEvt__ScrollBox_54_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(); // Function KeyWidget.KeyWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct UButtomButtonWidget_C* Widget); // Function KeyWidget.KeyWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature(struct UButtomButtonWidget_C* Widget); // Function KeyWidget.KeyWidget_C.BndEvt__ButtomButtonWidget_K2Node_ComponentBoundEvent_2_OnClickEventDispatcher__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void  ?????(struct FInputChord InKey, struct UBravoHotelSettingSlotWidget* Slot); // Function KeyWidget.KeyWidget_C. ????? // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetBinding(); // Function KeyWidget.KeyWidget_C.SetBinding // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DelegateChangeValue_Event(struct UBravoHotelSettingSlotWidget* Value); // Function KeyWidget.KeyWidget_C.DelegateChangeValue_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UnBinding(); // Function KeyWidget.KeyWidget_C.UnBinding // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_KeyWidget(int32_t EntryPoint); // Function KeyWidget.KeyWidget_C.ExecuteUbergraph_KeyWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void EventDispatcher_BlackListKeyNotiMessage__DelegateSignature(struct FInputChord Key); // Function KeyWidget.KeyWidget_C.EventDispatcher_BlackListKeyNotiMessage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_KeyNotiMessage__DelegateSignature(bool IsDuplicate, struct FInputChord Key, struct FText KeyName); // Function KeyWidget.KeyWidget_C.EventDispatcher_KeyNotiMessage__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

