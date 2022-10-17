// WidgetBlueprintGeneratedClass UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a88)
struct UUW-ReplayFreeCamSpeedWidget_C : UUserWidget {
	struct UImage* Image; // 0x288(0x08)
	struct USlider* Slider_Speed; // 0x290(0x08)
	struct UTextBlock* T_CamSpeed; // 0x298(0x08)
	struct FTimerHandle Handle_HideFreeCamSpeed; // 0x2a0(0x08)

	void HideFreeCamSpeed(); // Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.HideFreeCamSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowFreeCamSpeed(); // Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.ShowFreeCamSpeed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedFreeCamSpeedLevel(float SpeedLevel); // Function UW-ReplayFreeCamSpeedWidget.UW-ReplayFreeCamSpeedWidget_C.OnChangedFreeCamSpeedLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

