// WidgetBlueprintGeneratedClass UW-Radar_tutorial.UW-Radar_tutorial_C
// Size: 0x2cff6a48 (Inherited: 0x2cff6a88)
struct UUW-Radar_tutorial_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Img_TypeIcon; // 0x290(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x298(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2a0(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2a8(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2b0(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2b8(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2c0(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2c8(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2d0(0x08)
	struct UKeyImageWidget_C* KeyImageWidget; // 0x2d8(0x08)
	struct UTextBlock* T_Context; // 0x2e0(0x08)
	struct UTextBlock* T_Context; // 0x2e8(0x08)
	struct UTextBlock* T_Context; // 0x2f0(0x08)
	struct UTextBlock* T_Context; // 0x2f8(0x08)
	struct UTextBlock* T_Context; // 0x300(0x08)
	struct UTextBlock* T_Context; // 0x308(0x08)
	struct UTextBlock* T_Context; // 0x310(0x08)
	struct UTextBlock* T_Context; // 0x318(0x08)
	struct UTextBlock* T_Context; // 0x320(0x08)
	struct UTextBlock* Text_SkillName; // 0x328(0x08)
	struct UHorizontalBox* VB_Nuclear; // 0x330(0x08)
	struct UHorizontalBox* VB_Retreat; // 0x338(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x340(0x08)

	void SetTutorialInfo(enum class EBuffEventType SkillType); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetTutorialInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_22BC0859447517E514C09EA47A9A913D(struct UObject* Loaded); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.OnLoaded_22BC0859447517E514C09EA47A9A913D // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetRadarTutorial(); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetRadarTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGuideIconAsyncLoad(struct TSoftObjectPtr<UObject> Image); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.SetGuideIconAsyncLoad // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Radar_tutorial(int32_t EntryPoint); // Function UW-Radar_tutorial.UW-Radar_tutorial_C.ExecuteUbergraph_UW-Radar_tutorial // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

