// BlueprintGeneratedClass BP-Amplifier.BP-Amplifier_C
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a50)
struct ABP-Amplifier_C : ABravoHotelAmplifier {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e50(0x08)
	struct UPostProcessComponent* InternalPP; // 0x1e58(0x08)
	struct UMaterialInstanceDynamic* EffectMaterial; // 0x1e60(0x08)
	bool IsActive; // 0x1e68(0x01)
	struct UMaterial* mRadialBlur; // 0x1e70(0x08)
	struct UMaterialInstanceDynamic* iRadialBlur; // 0x1e78(0x08)
	struct FAdvancedEffectFeatures Radial Blur - Advanced; // 0x1e80(0x38)
	float Radial Blur Width; // 0x1eb8(0x04)
	int32_t Radial Blur Samples; // 0x1ebc(0x04)
	struct FVector2D Radial Blur Center; // 0x1ec0(0x08)
	struct FVector2D Radial Blur Sample Offset; // 0x1ec8(0x08)
	struct FPostProcessSettings Native Post Process; // 0x1ed0(0x5e0)
	struct UMaterial* mSelectiveColor; // 0x24b0(0x08)
	struct UMaterialInstanceDynamic* iSelectiveColor; // 0x24b8(0x08)
	struct FAdvancedEffectFeatures Selective Color - Advanced; // 0x24c0(0x38)
	struct FLinearColor Selective Color Mask Color; // 0x24f8(0x10)
	float Selective Color Hue Tolerance; // 0x2508(0x04)
	float Selective Color Saturation Tolerance; // 0x250c(0x04)
	float Selective Color Value Tolerance; // 0x2510(0x04)
	float CurrentBlur; // 0x2514(0x04)
	float CurrentSelective; // 0x2518(0x04)
	float FadeInSpeed; // 0x251c(0x04)
	float FadeOutSpeed; // 0x2520(0x04)
	struct UMaterial* mMonochrome; // 0x2528(0x08)
	struct UMaterialInstanceDynamic* iMonochrome; // 0x2530(0x08)
	struct FAdvancedEffectFeatures Monochrome - Advanced; // 0x2538(0x38)
	struct FLinearColor Monochrome Color; // 0x2570(0x10)
	struct UMaterial* MBlackColor; // 0x2580(0x08)
	struct UMaterialInstanceDynamic* IBlackColor; // 0x2588(0x08)
	struct FAdvancedEffectFeatures BlackColor - Advanced; // 0x2590(0x38)
	float ActiveDelayTime; // 0x25c8(0x04)
	struct UBravoHotelMainWidget* MainWidget; // 0x25d0(0x08)
	struct UBravoHotelTopInfoWidget* TopWidget; // 0x25d8(0x08)

	void GetTopWidget(struct UBravoHotelTopInfoWidget*& TopWidget); // Function BP-Amplifier.BP-Amplifier_C.GetTopWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetMainWidget(struct UBravoHotelMainWidget*& MainWidget); // Function BP-Amplifier.BP-Amplifier_C.GetMainWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsOwnerLocallyControlled(bool& bIsLocallyControlled); // Function BP-Amplifier.BP-Amplifier_C.IsOwnerLocallyControlled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void BlackColorFunc(bool IsEnabled); // Function BP-Amplifier.BP-Amplifier_C.BlackColorFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Monochrome Func(bool IsEnabled); // Function BP-Amplifier.BP-Amplifier_C.Monochrome Func // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Selective Color Func(bool IsEnabled); // Function BP-Amplifier.BP-Amplifier_C.Selective Color Func // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetEffectPriority(int32_t Priority, struct UMaterial* Material); // Function BP-Amplifier.BP-Amplifier_C.SetEffectPriority // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAdvancedEffectFeatures(struct FAdvancedEffectFeatures Features, struct UMaterial* Material, struct UMaterialInstanceDynamic* Dynamic Material Instance); // Function BP-Amplifier.BP-Amplifier_C.SetAdvancedEffectFeatures // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Radial Blur Func(bool IsEnabled); // Function BP-Amplifier.BP-Amplifier_C.Radial Blur Func // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateEffectMaterialInstance(struct UMaterial* Material, struct UMaterialInstanceDynamic*& Instance); // Function BP-Amplifier.BP-Amplifier_C.CreateEffectMaterialInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ScreenEffectEvent(bool RadialBlur, bool BlackColor); // Function BP-Amplifier.BP-Amplifier_C.ScreenEffectEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPostEventAtLocationEvent(struct FString EventKey, struct FVector& Location); // Function BP-Amplifier.BP-Amplifier_C.OnPostEventAtLocationEvent // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function BP-Amplifier.BP-Amplifier_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnEquip(); // Function BP-Amplifier.BP-Amplifier_C.K2_OnEquip // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveDestroyed(); // Function BP-Amplifier.BP-Amplifier_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnUnEquip(); // Function BP-Amplifier.BP-Amplifier_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnActiveSensor(); // Function BP-Amplifier.BP-Amplifier_C.OnActiveSensor // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnDeactiveSensor(); // Function BP-Amplifier.BP-Amplifier_C.OnDeactiveSensor // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-Amplifier(int32_t EntryPoint); // Function BP-Amplifier.BP-Amplifier_C.ExecuteUbergraph_BP-Amplifier // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

