// WidgetBlueprintGeneratedClass UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C
// Size: 0x2cff6a44 (Inherited: 0x2cff6a88)
struct UUW-ArmoryResultListWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Armory_Repair_M; // 0x290(0x08)
	struct UWidgetAnimation* Armory_Strengthen_M; // 0x298(0x08)
	struct UWidgetAnimation* Armory_Failed_M; // 0x2a0(0x08)
	struct UWidgetAnimation* Armory_Break_M; // 0x2a8(0x08)
	struct UWidgetAnimation* Armory_Failed_Break_M; // 0x2b0(0x08)
	struct UWidgetAnimation* Armory_Failed_Down_M; // 0x2b8(0x08)
	struct UWidgetAnimation* Armory_Awesome_M; // 0x2c0(0x08)
	struct UWidgetAnimation* Armory_Success_M; // 0x2c8(0x08)
	struct UCanvasPanel* Armory_Awesome; // 0x2d0(0x08)
	struct UCanvasPanel* Armory_Break; // 0x2d8(0x08)
	struct UCanvasPanel* Armory_Failed; // 0x2e0(0x08)
	struct UCanvasPanel* Armory_Failed_Break; // 0x2e8(0x08)
	struct UCanvasPanel* Armory_Failed_Down; // 0x2f0(0x08)
	struct UCanvasPanel* Armory_Repair; // 0x2f8(0x08)
	struct UCanvasPanel* Armory_Strengthen; // 0x300(0x08)
	struct UCanvasPanel* Armory_Success; // 0x308(0x08)
	struct UTextBlock* Awesome_Damage1; // 0x310(0x08)
	struct UTextBlock* Awesome_Damage2; // 0x318(0x08)
	struct UTextBlock* Awesome_ItemName; // 0x320(0x08)
	struct UTextBlock* Awesome_Level1; // 0x328(0x08)
	struct UTextBlock* Awesome_Level2; // 0x330(0x08)
	struct UTextBlock* Awesome_MagSize1; // 0x338(0x08)
	struct UTextBlock* Awesome_MagSize2; // 0x340(0x08)
	struct UTextBlock* Awesome_Spread1; // 0x348(0x08)
	struct UTextBlock* Awesome_Spread2; // 0x350(0x08)
	struct UTextBlock* Awesome_UpLevel; // 0x358(0x08)
	struct UTextBlock* Break_Count; // 0x360(0x08)
	struct UTextBlock* Break_ItemName; // 0x368(0x08)
	struct UTextBlock* BreakTitle; // 0x370(0x08)
	struct UButton* Button; // 0x378(0x08)
	struct UButton* Button; // 0x380(0x08)
	struct UButton* Button; // 0x388(0x08)
	struct UButton* Button; // 0x390(0x08)
	struct UButton* Button; // 0x398(0x08)
	struct UButton* Button; // 0x3a0(0x08)
	struct UButton* Button_EnchanceCancle; // 0x3a8(0x08)
	struct UButton* Button_Enhance; // 0x3b0(0x08)
	struct UButton* Button_Fatigue; // 0x3b8(0x08)
	struct UCanvasPanel* Empty; // 0x3c0(0x08)
	struct UTextBlock* FB_Damage1; // 0x3c8(0x08)
	struct UTextBlock* FB_Damage2; // 0x3d0(0x08)
	struct UTextBlock* FB_Level1; // 0x3d8(0x08)
	struct UTextBlock* FB_Level2; // 0x3e0(0x08)
	struct UTextBlock* FB_MagSize1; // 0x3e8(0x08)
	struct UTextBlock* FB_MagSize2; // 0x3f0(0x08)
	struct UTextBlock* FB_Spread1; // 0x3f8(0x08)
	struct UTextBlock* FB_Spread2; // 0x400(0x08)
	struct UTextBlock* FD_Damage1; // 0x408(0x08)
	struct UTextBlock* FD_Damage2; // 0x410(0x08)
	struct UTextBlock* FD_DownLevel; // 0x418(0x08)
	struct UTextBlock* FD_Level1; // 0x420(0x08)
	struct UTextBlock* FD_Level2; // 0x428(0x08)
	struct UTextBlock* FD_MagSize1; // 0x430(0x08)
	struct UTextBlock* FD_MagSize2; // 0x438(0x08)
	struct UTextBlock* FD_Spread1; // 0x440(0x08)
	struct UTextBlock* FD_Spread2; // 0x448(0x08)
	struct UHorizontalBox* HorizontalBox_Awesome_Damage; // 0x450(0x08)
	struct UHorizontalBox* HorizontalBox_Awesome_MagSize; // 0x458(0x08)
	struct UHorizontalBox* HorizontalBox_Awesome_Spread; // 0x460(0x08)
	struct UHorizontalBox* HorizontalBox_FB_Damage; // 0x468(0x08)
	struct UHorizontalBox* HorizontalBox_FB_MagSize; // 0x470(0x08)
	struct UHorizontalBox* HorizontalBox_FB_Spread; // 0x478(0x08)
	struct UHorizontalBox* HorizontalBox_FD_Damage; // 0x480(0x08)
	struct UHorizontalBox* HorizontalBox_FD_MasSize; // 0x488(0x08)
	struct UHorizontalBox* HorizontalBox_FD_Spread; // 0x490(0x08)
	struct UHorizontalBox* HorizontalBox_Strengthen_Damage; // 0x498(0x08)
	struct UHorizontalBox* HorizontalBox_Strengthen_MagSize; // 0x4a0(0x08)
	struct UHorizontalBox* HorizontalBox_Strengthen_Spread; // 0x4a8(0x08)
	struct UHorizontalBox* HorizontalBox_Success_Damage; // 0x4b0(0x08)
	struct UHorizontalBox* HorizontalBox_Success_Durable; // 0x4b8(0x08)
	struct UHorizontalBox* HorizontalBox_Success_Fatigue; // 0x4c0(0x08)
	struct UHorizontalBox* HorizontalBox_Success_MagSize; // 0x4c8(0x08)
	struct UHorizontalBox* HorizontalBox_Success_Spread; // 0x4d0(0x08)
	struct UImage* Image; // 0x4d8(0x08)
	struct UImage* Image; // 0x4e0(0x08)
	struct UImage* Image; // 0x4e8(0x08)
	struct UImage* Image; // 0x4f0(0x08)
	struct UImage* Image; // 0x4f8(0x08)
	struct UImage* Image; // 0x500(0x08)
	struct UImage* Image; // 0x508(0x08)
	struct UImage* Image; // 0x510(0x08)
	struct UImage* Image; // 0x518(0x08)
	struct UImage* Image; // 0x520(0x08)
	struct UImage* Image; // 0x528(0x08)
	struct UImage* Image; // 0x530(0x08)
	struct UImage* Image; // 0x538(0x08)
	struct UImage* Image; // 0x540(0x08)
	struct UImage* Image; // 0x548(0x08)
	struct UImage* Image; // 0x550(0x08)
	struct UImage* Image; // 0x558(0x08)
	struct UImage* Image; // 0x560(0x08)
	struct UImage* Image; // 0x568(0x08)
	struct UImage* Image; // 0x570(0x08)
	struct UImage* Image; // 0x578(0x08)
	struct UImage* Image; // 0x580(0x08)
	struct UImage* Image; // 0x588(0x08)
	struct UImage* Image; // 0x590(0x08)
	struct UImage* Image; // 0x598(0x08)
	struct UImage* Image; // 0x5a0(0x08)
	struct UImage* Image; // 0x5a8(0x08)
	struct UImage* Image; // 0x5b0(0x08)
	struct UImage* Image; // 0x5b8(0x08)
	struct UImage* Image; // 0x5c0(0x08)
	struct UImage* Image; // 0x5c8(0x08)
	struct UImage* Image; // 0x5d0(0x08)
	struct UImage* Image; // 0x5d8(0x08)
	struct UImage* Image; // 0x5e0(0x08)
	struct UImage* Image; // 0x5e8(0x08)
	struct UImage* Image; // 0x5f0(0x08)
	struct UImage* Image; // 0x5f8(0x08)
	struct UImage* Image; // 0x600(0x08)
	struct UImage* Image; // 0x608(0x08)
	struct UImage* Image; // 0x610(0x08)
	struct UImage* Image; // 0x618(0x08)
	struct UImage* Image; // 0x620(0x08)
	struct UImage* Image; // 0x628(0x08)
	struct UImage* Image; // 0x630(0x08)
	struct UImage* Image; // 0x638(0x08)
	struct UImage* Image; // 0x640(0x08)
	struct UImage* Image; // 0x648(0x08)
	struct UImage* Image; // 0x650(0x08)
	struct UImage* Image; // 0x658(0x08)
	struct UImage* Image; // 0x660(0x08)
	struct UImage* Image; // 0x668(0x08)
	struct UImage* Image; // 0x670(0x08)
	struct UImage* Image; // 0x678(0x08)
	struct UImage* Image; // 0x680(0x08)
	struct UImage* Image; // 0x688(0x08)
	struct UImage* Image; // 0x690(0x08)
	struct UImage* Image; // 0x698(0x08)
	struct UImage* Image; // 0x6a0(0x08)
	struct UImage* Image; // 0x6a8(0x08)
	struct UImage* Image; // 0x6b0(0x08)
	struct UImage* Image; // 0x6b8(0x08)
	struct UImage* Image; // 0x6c0(0x08)
	struct UImage* Image; // 0x6c8(0x08)
	struct UImage* Image; // 0x6d0(0x08)
	struct UImage* Image; // 0x6d8(0x08)
	struct UImage* Image; // 0x6e0(0x08)
	struct UImage* Image; // 0x6e8(0x08)
	struct UImage* Image; // 0x6f0(0x08)
	struct UImage* Image; // 0x6f8(0x08)
	struct UImage* Image; // 0x700(0x08)
	struct UImage* Image; // 0x708(0x08)
	struct UImage* Image; // 0x710(0x08)
	struct UImage* Image; // 0x718(0x08)
	struct UImage* Image; // 0x720(0x08)
	struct UImage* Image; // 0x728(0x08)
	struct UImage* Image; // 0x730(0x08)
	struct UImage* Image; // 0x738(0x08)
	struct UImage* Image; // 0x740(0x08)
	struct UImage* Image; // 0x748(0x08)
	struct UImage* Image; // 0x750(0x08)
	struct UImage* Image; // 0x758(0x08)
	struct UImage* Image; // 0x760(0x08)
	struct UImage* Image; // 0x768(0x08)
	struct UImage* Image; // 0x770(0x08)
	struct UImage* Image; // 0x778(0x08)
	struct UImage* Image; // 0x780(0x08)
	struct UImage* Image; // 0x788(0x08)
	struct UImage* Image; // 0x790(0x08)
	struct UImage* Image; // 0x798(0x08)
	struct UImage* Image; // 0x7a0(0x08)
	struct UImage* Image; // 0x7a8(0x08)
	struct UImage* Image; // 0x7b0(0x08)
	struct UImage* Image; // 0x7b8(0x08)
	struct UImage* Image; // 0x7c0(0x08)
	struct UImage* Image; // 0x7c8(0x08)
	struct UImage* Image; // 0x7d0(0x08)
	struct UImage* Image; // 0x7d8(0x08)
	struct UImage* Image; // 0x7e0(0x08)
	struct UImage* Image; // 0x7e8(0x08)
	struct UImage* Image; // 0x7f0(0x08)
	struct UImage* Image; // 0x7f8(0x08)
	struct UImage* Image; // 0x800(0x08)
	struct UImage* Image; // 0x808(0x08)
	struct UImage* Image; // 0x810(0x08)
	struct UImage* Image; // 0x818(0x08)
	struct UImage* Image; // 0x820(0x08)
	struct UImage* Image; // 0x828(0x08)
	struct UImage* Image; // 0x830(0x08)
	struct UImage* Image; // 0x838(0x08)
	struct UImage* Image; // 0x840(0x08)
	struct UImage* Image; // 0x848(0x08)
	struct UImage* Image; // 0x850(0x08)
	struct UImage* Image; // 0x858(0x08)
	struct UImage* Image; // 0x860(0x08)
	struct UImage* Image; // 0x868(0x08)
	struct UImage* Image; // 0x870(0x08)
	struct UImage* Image; // 0x878(0x08)
	struct UImage* Image; // 0x880(0x08)
	struct UImage* Image; // 0x888(0x08)
	struct UImage* Image; // 0x890(0x08)
	struct UImage* Image; // 0x898(0x08)
	struct UImage* Image; // 0x8a0(0x08)
	struct UImage* Image; // 0x8a8(0x08)
	struct UImage* Image; // 0x8b0(0x08)
	struct UImage* Image; // 0x8b8(0x08)
	struct UImage* ImageTX_Complete_Fail; // 0x8c0(0x08)
	struct UOverlay* ItemList; // 0x8c8(0x08)
	struct UOverlay* Overlay_FB_ItemList; // 0x8d0(0x08)
	struct UTextBlock* Strengthen_Cost; // 0x8d8(0x08)
	struct UTextBlock* Strengthen_Count; // 0x8e0(0x08)
	struct UTextBlock* Strengthen_CurrentDamageText1; // 0x8e8(0x08)
	struct UTextBlock* Strengthen_CurrentDamageText2; // 0x8f0(0x08)
	struct UTextBlock* Strengthen_CurrentMagSizeText1; // 0x8f8(0x08)
	struct UTextBlock* Strengthen_CurrentMagSizeText2; // 0x900(0x08)
	struct UTextBlock* Strengthen_CurrentSpreadText1; // 0x908(0x08)
	struct UTextBlock* Strengthen_CurrentSpreadText2; // 0x910(0x08)
	struct UImage* Strengthen_Icon; // 0x918(0x08)
	struct UImage* Strengthen_IconType1; // 0x920(0x08)
	struct UImage* Strengthen_IconType2; // 0x928(0x08)
	struct UImage* Strengthen_IconType3; // 0x930(0x08)
	struct UTextBlock* Strengthen_Level1; // 0x938(0x08)
	struct UTextBlock* Strengthen_Level2; // 0x940(0x08)
	struct UTextBlock* Strengthen_Name; // 0x948(0x08)
	struct UTextBlock* Strengthen_TextType1; // 0x950(0x08)
	struct UTextBlock* Strengthen_TextType2; // 0x958(0x08)
	struct UTextBlock* Strengthen_TextType3; // 0x960(0x08)
	struct UTextBlock* Success_Damage1; // 0x968(0x08)
	struct UTextBlock* Success_Damage2; // 0x970(0x08)
	struct UTextBlock* Success_ItemName; // 0x978(0x08)
	struct UTextBlock* Success_ItemName; // 0x980(0x08)
	struct UTextBlock* Success_Level1; // 0x988(0x08)
	struct UTextBlock* Success_Level2; // 0x990(0x08)
	struct UTextBlock* Success_MagSize1; // 0x998(0x08)
	struct UTextBlock* Success_MagSize2; // 0x9a0(0x08)
	struct UTextBlock* Success_Spread1; // 0x9a8(0x08)
	struct UTextBlock* Success_Spread2; // 0x9b0(0x08)
	struct UTextBlock* Success_UpLevel; // 0x9b8(0x08)
	struct UTextBlock* T_Durability; // 0x9c0(0x08)
	struct UTextBlock* T_Fatigue; // 0x9c8(0x08)
	struct UTextBlock* T_PreFatigue; // 0x9d0(0x08)
	struct UProgressBar* TerrainHeight; // 0x9d8(0x08)
	struct UTextBlock* TextBlock; // 0x9e0(0x08)
	struct UTextBlock* TextBlock_FB_ItemCount; // 0x9e8(0x08)
	struct UTextBlock* TextBlock_FB_ItemName; // 0x9f0(0x08)
	struct UTextBlock* TextBlock_FB_Title; // 0x9f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0xa00(0x08)
	struct FCoh_ResultInfo ResultInfo; // 0xa08(0x38)
	float CurrentDurability; // 0xa40(0x04)

	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SequenceEvent__ENTRYPOINTUW-ArmoryResultListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateDurability(float DeltaSecond); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.UpdateDurability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetDurability(float NewDurability); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.SetDurability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RepairSuccess(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.RepairSuccess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayButtonClickSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayButtonClickSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayEnhanceClickSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayEnhanceClickSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlaySuccessMagSizeSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlaySuccessMagSizeSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlaySuccessSpreadSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlaySuccessSpreadSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlaySuccessDamageSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlaySuccessDamageSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlaySuccessSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlaySuccessSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayEnhanceSpreadResultSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayEnhanceSpreadResultSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayEnhanceMagSizeResultSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayEnhanceMagSizeResultSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayEnhanceSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayEnhanceSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayEnhanceDamageResultSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayEnhanceDamageResultSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayButtonHoverSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayButtonHoverSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayBreakRecipeSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayBreakRecipeSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayFailedSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayFailedSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayAwesomeMagSizeSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayAwesomeMagSizeSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayAwesomeSpreadSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayAwesomeSpreadSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayAwesomeSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayAwesomeSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayAwesomeDamageSound(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.PlayAwesomeDamageSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetGroupItem(struct FString ItemId, struct FGroupItem& GroupItem); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.GetGroupItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowResult(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.ShowResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetLobbyWidget(struct UBP-LobbyWidget_Web_C*& Widget); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.GetLobbyWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowSuccess(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.ShowSuccess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowEnhance(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.ShowEnhance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowFailed_Break(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.ShowFailed_Break // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowFailed_Down(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.ShowFailed_Down // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowFailed(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.ShowFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowBreak(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.ShowBreak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowAwesome(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.ShowAwesome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_6066722948EC3F93BD0CAD8D22CB4474(struct UObject* Loaded); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.OnLoaded_6066722948EC3F93BD0CAD8D22CB4474 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Enhancement_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_Enhancement_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_232_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_232_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_231_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_231_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_227_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_227_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_234_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_234_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_227_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_227_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_229_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_231_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_231_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_232_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_232_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_EnchanceCancle_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_EnchanceCancle_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_Enhance_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_Enhance_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadTexture(struct TSoftObjectPtr<UObject> Image); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.AsyncLoadTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature(); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ArmoryResultListWidget(int32_t EntryPoint); // Function UW-ArmoryResultListWidget.UW-ArmoryResultListWidget_C.ExecuteUbergraph_UW-ArmoryResultListWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

