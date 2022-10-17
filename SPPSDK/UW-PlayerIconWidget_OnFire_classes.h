// WidgetBlueprintGeneratedClass UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a88)
struct UUW-PlayerIconWidget_OnFire_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Anim_OnFire; // 0x290(0x08)
	struct UImage* FireLine; // 0x298(0x08)

	void SetLineInfo(float Angle, float Length); // Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.SetLineInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-PlayerIconWidget_OnFire(int32_t EntryPoint); // Function UW-PlayerIconWidget_OnFire.UW-PlayerIconWidget_OnFire_C.ExecuteUbergraph_UW-PlayerIconWidget_OnFire // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

