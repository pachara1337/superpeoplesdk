// WidgetBlueprintGeneratedClass UW-Volume.UW-Volume_C
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a88)
struct UUW-Volume_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Img_Voice; // 0x290(0x08)
	struct UImage* Img_VoiceX; // 0x298(0x08)
	struct USizeBox* SizeBox; // 0x2a0(0x08)
	struct UTextBlock* TextBlock; // 0x2a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_LogOut; // 0x2b0(0x08)
	struct FTimerHandle Timer; // 0x2b8(0x08)

	void Construct(); // Function UW-Volume.UW-Volume_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(float VolumeOnOff, float Volume); // Function UW-Volume.UW-Volume_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Destruct(); // Function UW-Volume.UW-Volume_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void  ??스(); // Function UW-Volume.UW-Volume_C. ??스 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Volume(int32_t EntryPoint); // Function UW-Volume.UW-Volume_C.ExecuteUbergraph_UW-Volume // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

