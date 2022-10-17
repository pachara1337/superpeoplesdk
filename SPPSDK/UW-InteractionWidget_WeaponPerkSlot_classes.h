// WidgetBlueprintGeneratedClass UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a88)
struct UUW-InteractionWidget_WeaponPerkSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image; // 0x290(0x08)
	struct UImage* Image; // 0x298(0x08)
	struct UImage* Image_Grade_Color_Line; // 0x2a0(0x08)

	void SetBuffInfo(struct FText BuffName, struct FText Desc, struct TSoftObjectPtr<UObject> Icon, int32_t Rarity); // Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.SetBuffInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9(struct UObject* Loaded); // Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.OnLoaded_F9A8A8FB4318139B3972C6ACB5BBA1D9 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadIconTexture(struct TSoftObjectPtr<UObject> IconTexture); // Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.AsyncLoadIconTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-InteractionWidget_WeaponPerkSlot(int32_t EntryPoint); // Function UW-InteractionWidget_WeaponPerkSlot.UW-InteractionWidget_WeaponPerkSlot_C.ExecuteUbergraph_UW-InteractionWidget_WeaponPerkSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

