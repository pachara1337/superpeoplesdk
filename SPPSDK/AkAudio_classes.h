// Class AkAudio.AkAcousticPortal
// Size: 0x2cff6ad0 (Inherited: 0x2cff6a40)
struct AAkAcousticPortal : AVolume {
	enum class AkAcousticPortalState InitialState; // 0x340(0x01)
	float ObstructionRefreshInterval; // 0x344(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x348(0x01)
	char pad_2CFF6A46[0x8a]; // 0x2cff6a46(0x8a)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x1830490
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1830060
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x182ff50
};

// Class AkAudio.AkPortalComponent
// Size: 0x2cff6a40 (Inherited: 0x2cff6a40)
struct UAkPortalComponent : USceneComponent {
};

// Class AkAudio.AkAudioType
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x30(0x04)
	struct TArray<struct UObject*> UserData; // 0x38(0x10)
	char pad_2CFF6944[0x104]; // 0x2cff6944(0x104)
};

// Class AkAudio.AkAcousticTexture
// Size: 0x2cff6a48 (Inherited: 0x2cff6a48)
struct UAkAcousticTexture : UAkAudioType {
};

// Class AkAudio.AkAmbientSound
// Size: 0x2cff6a48 (Inherited: 0x2cff6b08)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x308(0x08)
	struct UAkComponent* AkComponent; // 0x310(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x318(0x01)
	bool AutoPost; // 0x319(0x01)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18316d0
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18316b0
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0x2cff6b00 (Inherited: 0x2cff6930)
struct UAkAndroidInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)
	char pad_2CFF6A00[0x100]; // 0x2cff6a00(0x100)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1830410
};

// Class AkAudio.AkPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6930)
struct UAkPlatformInfo : UObject {
	char pad_2CFF6930[0x148]; // 0x2cff6930(0x148)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAssetData
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x30(0x04)
	char pad_2CFF6934[0x134]; // 0x2cff6934(0x134)
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x2cff6a78 (Inherited: 0x2cff6a68)
struct UAkAssetDataWithMedia : UAkAssetData {
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x68(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x30(0x08)
	char pad_2CFF6938[0x100]; // 0x2cff6938(0x100)
};

// Class AkAudio.AkAssetBase
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct UAkAssetBase : UAkAudioType {
	struct UAkAssetPlatformData* PlatformAssetData; // 0x48(0x08)
	char pad_2CFF6A50[0x8]; // 0x2cff6a50(0x08)
};

// Class AkAudio.AkAudioBank
// Size: 0x2cff6a30 (Inherited: 0x2cff6a58)
struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x58(0x01)
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x60(0x50)
	struct TSet<struct TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xb0(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0x100(0x08)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x2cff6a88 (Inherited: 0x2cff6930)
struct UAkAssetDataSwitchContainerData : UObject {
	struct TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x30(0x30)
	struct UAkGroupValue* DefaultGroupValue; // 0x60(0x08)
	struct TArray<struct UAkMediaAsset*> MediaList; // 0x68(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x78(0x10)
	char pad_2CFF6988[0x100]; // 0x2cff6988(0x100)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0x2cff6a90 (Inherited: 0x2cff6a78)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x78(0x10)
	struct UAkGroupValue* DefaultGroupValue; // 0x88(0x08)
};

// Class AkAudio.AkAudioEventData
// Size: 0x2cff6a60 (Inherited: 0x2cff6a90)
struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0x90(0x04)
	bool IsInfinite; // 0x94(0x01)
	float MinimumDuration; // 0x98(0x04)
	float MaximumDuration; // 0x9c(0x04)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xa0(0x50)
	struct TSet<struct UAkAudioEvent*> PostedEvents; // 0xf0(0x50)
	struct TSet<struct UAkAuxBus*> UserDefinedSends; // 0x140(0x50)
	struct TSet<struct UAkTrigger*> PostedTriggers; // 0x190(0x50)
	struct TSet<struct UAkGroupValue*> GroupValues; // 0x1e0(0x50)
};

// Class AkAudio.AkAudioEvent
// Size: 0x2cff6af0 (Inherited: 0x2cff6a58)
struct UAkAudioEvent : UAkAssetBase {
	struct TMap<struct FString, struct TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	struct UAkAudioBank* RequiredBank; // 0xa8(0x08)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb8(0x08)
	float MaxAttenuationRadius; // 0xc0(0x04)
	bool IsInfinite; // 0xc4(0x01)
	float MinimumDuration; // 0xc8(0x04)
	float MaximumDuration; // 0xcc(0x04)
	char pad_2CFF6AC5[0x2b]; // 0x2cff6ac5(0x2b)

	float GetMinimumDuration(); // Function AkAudio.AkAudioEvent.GetMinimumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1830120
	float GetMaximumDuration(); // Function AkAudio.AkAudioEvent.GetMaximumDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18300f0
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18300c0
	bool GetIsInfinite(); // Function AkAudio.AkAudioEvent.GetIsInfinite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1830090
};

// Class AkAudio.AkGameObject
// Size: 0x2cff6a60 (Inherited: 0x2cff6a40)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x238(0x08)
	struct FString EventName; // 0x240(0x10)
	bool bAutoRegisterWithWwise; // 0x250(0x01)
	char pad_2CFF6A59[0x7]; // 0x2cff6a59(0x07)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1836850
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1834730
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1834580
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1833dd0
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1833b90
};

// Class AkAudio.AkComponent
// Size: 0x2cff6a40 (Inherited: 0x2cff6a60)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x258(0x01)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x260(0x01)
	char EnableSpotReflectors : 1; // 0x264(0x01)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x268(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x270(0x10)
	int32_t EarlyReflectionOrder; // 0x280(0x04)
	float EarlyReflectionBusSendGain; // 0x284(0x04)
	float EarlyReflectionMaxPathLength; // 0x288(0x04)
	float roomReverbAuxBusGain; // 0x28c(0x04)
	int32_t diffractionMaxEdges; // 0x290(0x04)
	int32_t diffractionMaxPaths; // 0x294(0x04)
	float diffractionMaxPathLength; // 0x298(0x04)
	char DrawFirstOrderReflections : 1; // 0x29c(0x01)
	char DrawSecondOrderReflections : 1; // 0x29c(0x01)
	char DrawHigherOrderReflections : 1; // 0x29c(0x01)
	char DrawDiffraction : 1; // 0x29c(0x01)
	bool StopWhenOwnerDestroyed; // 0x2a0(0x01)
	float RoomIterationInterval; // 0x2a4(0x04)
	float AttenuationScalingFactor; // 0x2a8(0x04)
	float OcclusionRefreshInterval; // 0x2ac(0x04)
	bool bUseReverbVolumes; // 0x2b0(0x01)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18318d0
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // @ game+0x18316f0
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18314e0
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1831450
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkComponent.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x18312a0
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1831220
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1831170
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1831060
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1830fc0
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1830ec0
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1830c50
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1830a80
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1830920
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1830870
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18306a0
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x18304b0
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkComponent.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1830150
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1830000
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x2cff6a50 (Inherited: 0x2cff6a40)
struct UAkAudioInputComponent : UAkComponent {
	char pad_2CFF6A40[0x10]; // 0x2cff6a40(0x10)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1830c20
};

// Class AkAudio.AkAuxBus
// Size: 0x2cff6a60 (Inherited: 0x2cff6a58)
struct UAkAuxBus : UAkAssetBase {
	struct UAkAudioBank* RequiredBank; // 0x58(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0x2cff6ae8 (Inherited: 0x2cff6a48)
struct UAkCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x518(0x01)
	struct FDelegate CheckedStateDelegate; // 0x51c(0x14)
	struct FCheckBoxStyle WidgetStyle; // 0x530(0x5e0)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xb10(0x01)
	bool IsFocusable; // 0xb11(0x01)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xb18(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xb28(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xb68(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xb78(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xb88(0x10)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x18310e0
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x1830f40
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1830e20
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1830d80
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18303e0
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18303b0
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1830030
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x182ffb0
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x182ff70
};

// Class AkAudio.AkFolder
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a48)
struct UAkFolder : UAkAudioType {
	struct FString UnrealFolderPath; // 0x48(0x10)
	struct FString WwiseFolderPath; // 0x58(0x10)
	char pad_2CFF6A68[0x58]; // 0x2cff6a68(0x58)
};

// Class AkAudio.AkGameplayStatics
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UseReverbVolumes(bool inUseReverbVolumes, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1836eb0
	void UseEarlyReflections(struct AActor* Actor, struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkGameplayStatics.UseEarlyReflections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1836ca0
	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1836c10
	void UnloadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankUnloadedCallback); // Function AkAudio.AkGameplayStatics.UnloadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1836b20
	void UnloadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18369b0
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1836990
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1836970
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1836900
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x18368e0
	void StopActor(struct AActor* Actor); // Function AkAudio.AkGameplayStatics.StopActor // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1836870
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x18367c0
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1836730
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x18366c0
	struct UAkComponent* SpawnAkComponentAtLocation(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, bool AutoPost, struct FString EventName, bool AutoDestroy); // Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1836490
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct AActor* Actor, struct FName SwitchGroup, struct FName SwitchState); // Function AkAudio.AkGameplayStatics.SetSwitch // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1836330
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1836210
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18360c0
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1835e80
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths); // Function AkAudio.AkGameplayStatics.SetReflectionsOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1836010
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1835e10
	void SetOutputBusVolume(float BusVolume, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1835d50
	void SetOcclusionScalingFactor(float ScalingFactor); // Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1835ce0
	void SetOcclusionRefreshInterval(float RefreshInterval, struct AActor* Actor); // Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1835c20
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1835ad0
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18358f0
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1835710
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1835600
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18354d0
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1835400
	void PostTrigger(struct UAkTrigger* TriggerValue, struct AActor* Actor, struct FName Trigger); // Function AkAudio.AkGameplayStatics.PostTrigger // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x18352f0
	void PostEventByName(struct FString EventName, struct AActor* Actor, bool bStopWhenAttachedToDestroyed); // Function AkAudio.AkGameplayStatics.PostEventByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x18351d0
	int32_t PostEventAttached(struct UAkAudioEvent* AkEvent, struct AActor* Actor, struct FName AttachPointName, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEventAttached // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1834fd0
	void PostEventAtLocationByName(struct FString EventName, struct FVector Location, struct FRotator Orientation, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocationByName // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1834e60
	int32_t PostEventAtLocation(struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation, struct FString EventName, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.PostEventAtLocation // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1834cb0
	int32_t PostEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, struct FString EventName); // Function AkAudio.AkGameplayStatics.PostEvent // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18349b0
	void PostAndWaitForEndOfEventAsync(struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1834330
	int32_t PostAndWaitForEndOfEvent(struct UAkAudioEvent* AkEvent, struct AActor* Actor, bool bStopWhenAttachedToDestroyed, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, struct FString EventName, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1834090
	void LoadInitBank(); // Function AkAudio.AkGameplayStatics.LoadInitBank // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1833b70
	void LoadBanks(struct TArray<struct UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks); // Function AkAudio.AkGameplayStatics.LoadBanks // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1833a80
	void LoadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.LoadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x18339f0
	void LoadBankAsync(struct UAkAudioBank* Bank, struct FDelegate& BankLoadedCallback); // Function AkAudio.AkGameplayStatics.LoadBankAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1833900
	void LoadBank(struct UAkAudioBank* Bank, struct FString BankName, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1833790
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1833710
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1289b30
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareset); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18335b0
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1833380
	float GetOcclusionScalingFactor(); // Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1833350
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18332d0
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x18331f0
	struct UObject* GetAkMediaAssetUserData(struct UAkMediaAsset* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1832f90
	struct UAkComponent* GetAkComponent(struct USceneComponent* AttachToComponent, bool& ComponentCreated, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType); // Function AkAudio.AkGameplayStatics.GetAkComponent // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1833050
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1832f90
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1832e60
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1832cb0
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1832c90
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1832be0
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x1832b50
};

// Class AkAudio.AkCallbackInfo
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x30(0x08)
	char pad_2CFF6938[0x100]; // 0x2cff6938(0x100)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x2cff6a40 (Inherited: 0x2cff6a38)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	int32_t EventID; // 0x3c(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x2cff6a48 (Inherited: 0x2cff6a40)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_2CFF6A40[0x8]; // 0x2cff6a40(0x08)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0x183c000
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x183bf50
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x183bea0
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x183bdf0
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x183bd40
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x183bc90
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x183bbe0
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x183bb30
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x183bb00
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x183ba50
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x2cff6a58 (Inherited: 0x2cff6a40)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x40(0x04)
	int32_t Position; // 0x44(0x04)
	struct FString Label; // 0x48(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x2cff6a58 (Inherited: 0x2cff6a40)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x40(0x04)
	float EstimatedDuration; // 0x44(0x04)
	int32_t AudioNodeID; // 0x48(0x04)
	int32_t MediaID; // 0x4c(0x04)
	bool bStreaming; // 0x50(0x01)
	char pad_2CFF6A51[0x7]; // 0x2cff6a51(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a38)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x3c(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x60(0x01)
	struct FString UserCueName; // 0x68(0x10)
	char pad_2CFF6A71[0x7]; // 0x2cff6a71(0x07)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x2cff6a70 (Inherited: 0x2cff6a40)
struct UAkGeometryComponent : USceneComponent {
	enum class AkMeshType MeshType; // 0x238(0x01)
	int32_t LOD; // 0x23c(0x04)
	float WeldingThreshold; // 0x240(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x248(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x298(0x10)
	char bEnableDiffraction : 1; // 0x2a8(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x2a8(0x01)
	struct AActor* AssociatedRoom; // 0x2b0(0x08)
	struct FAkGeometryData GeometryData; // 0x2c8(0x50)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x183c050
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x183c030
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x183ba30
};

// Class AkAudio.AkGroupValue
// Size: 0x2cff6a70 (Inherited: 0x2cff6a48)
struct UAkGroupValue : UAkAudioType {
	struct TArray<struct TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x48(0x10)
	uint32_t GroupShortID; // 0x58(0x04)
	char pad_2CFF6A5C[0x14]; // 0x2cff6a5c(0x14)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0x2cff6b00 (Inherited: 0x2cff6930)
struct UAkHololensInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)
	char pad_2CFF6A00[0x100]; // 0x2cff6a00(0x100)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1830410
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBankAssetData
// Size: 0x2cff6a88 (Inherited: 0x2cff6a78)
struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x78(0x10)
};

// Class AkAudio.AkInitBank
// Size: 0x2cff6a78 (Inherited: 0x2cff6a58)
struct UAkInitBank : UAkAssetBase {
	struct TArray<struct FString> AvailableAudioCultures; // 0x58(0x10)
	struct FString DefaultLanguage; // 0x68(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x2cff6b08 (Inherited: 0x2cff6930)
struct UAkIOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x34)
	char pad_2CFF6A00[0x108]; // 0x2cff6a00(0x108)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1842980
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1842890
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x2cff6a70 (Inherited: 0x2cff6a30)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x140(0x10)
	char pad_2CFF6A50[0x20]; // 0x2cff6a50(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1842c90
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1842b10
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1842a90
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1842980
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1842890
};

// Class AkAudio.AkItemProperties
// Size: 0x2cff6a70 (Inherited: 0x2cff6a30)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x140(0x10)
	char pad_2CFF6A50[0x20]; // 0x2cff6a50(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1842c90
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1842b90
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1842a90
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x2cff6a80 (Inherited: 0x2cff6a40)
struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x238(0x01)
	struct UAkAuxBus* AuxBus; // 0x240(0x08)
	struct FString AuxBusName; // 0x248(0x10)
	float SendLevel; // 0x258(0x04)
	float FadeRate; // 0x25c(0x04)
	float Priority; // 0x260(0x04)
	struct UAkLateReverbComponent* NextLowerPriorityComponent; // 0x268(0x08)
	char pad_2CFF6A6C_1 : 7; // 0x2cff6a6c(0x01)
	char pad_2CFF6A6D[0x13]; // 0x2cff6a6d(0x13)
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0x2cff6af8 (Inherited: 0x2cff6930)
struct UAkLinuxInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
	char pad_2CFF69F8[0x100]; // 0x2cff69f8(0x100)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1830410
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkLuminInitializationSettings
// Size: 0x2cff6af8 (Inherited: 0x2cff6930)
struct UAkLuminInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
	char pad_2CFF69F8[0x100]; // 0x2cff69f8(0x100)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1830410
};

// Class AkAudio.AkLuminPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkLuminPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0x2cff6af8 (Inherited: 0x2cff6930)
struct UAkMacInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
	char pad_2CFF69F8[0x100]; // 0x2cff69f8(0x100)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1830410
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMediaAssetData
// Size: 0x2cff6a68 (Inherited: 0x2cff6930)
struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x30(0x01)
	bool UseDeviceMemory; // 0x31(0x01)
	char pad_2CFF6932[0x136]; // 0x2cff6932(0x136)
};

// Class AkAudio.AkMediaAsset
// Size: 0x2cff6a58 (Inherited: 0x2cff6930)
struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x30(0x04)
	bool AutoLoad; // 0x34(0x01)
	struct TArray<struct UObject*> UserData; // 0x38(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x48(0x08)
	char pad_2CFF694D[0x10b]; // 0x2cff694d(0x10b)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x2cff6a58 (Inherited: 0x2cff6a58)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a58)
struct UAkExternalMediaAsset : UAkMediaAsset {
	char pad_2CFF6A58[0x60]; // 0x2cff6a58(0x60)
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0x2cff6af8 (Inherited: 0x2cff6930)
struct UAkPS4InitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)
	char pad_2CFF69F8[0x100]; // 0x2cff69f8(0x100)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1842c10
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x2cff6a78 (Inherited: 0x2cff6a40)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x340(0x01)
	struct UAkAuxBus* AuxBus; // 0x348(0x08)
	struct FString AuxBusName; // 0x350(0x10)
	float SendLevel; // 0x360(0x04)
	float FadeRate; // 0x364(0x04)
	float Priority; // 0x368(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x370(0x08)
	char pad_2CFF6A6C_1 : 7; // 0x2cff6a6c(0x01)
	char pad_2CFF6A6D[0xb]; // 0x2cff6a6d(0x0b)
};

// Class AkAudio.AkRoomComponent
// Size: 0x2cff6a80 (Inherited: 0x2cff6a60)
struct UAkRoomComponent : UAkGameObject {
	char bEnable : 1; // 0x258(0x01)
	struct UAkRoomComponent* NextLowerPriorityComponent; // 0x260(0x08)
	float Priority; // 0x268(0x04)
	float WallOcclusion; // 0x26c(0x04)
	float AuxSendLevel; // 0x270(0x04)
	bool AutoPost; // 0x274(0x01)
	char pad_2CFF6A75_1 : 7; // 0x2cff6a75(0x01)
	char pad_2CFF6A76[0xa]; // 0x2cff6a76(0x0a)
};

// Class AkAudio.AkRtpc
// Size: 0x2cff6a48 (Inherited: 0x2cff6a48)
struct UAkRtpc : UAkAudioType {
};

// Class AkAudio.AkSettings
// Size: 0x2cff6c78 (Inherited: 0x2cff6930)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x30(0x01)
	struct FFilePath WwiseProjectPath; // 0x38(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x48(0x10)
	bool bAutoConnectToWAAPI; // 0x58(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x59(0x01)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x60(0x50)
	bool SplitSwitchContainerMedia; // 0xb0(0x01)
	bool SplitMediaPerFolder; // 0xb1(0x01)
	bool UseEventBasedPackaging; // 0xb2(0x01)
	bool EnableAutomaticAssetSynchronization; // 0xb3(0x01)
	struct TSoftClassPtr<UObject> ComponentClass; // 0xb8(0x30)
	struct FString CommandletCommitMessage; // 0xe8(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0xf8(0x50)
	bool AskedToUseNewAssetManagement; // 0x148(0x01)
	bool bEnableMultiCoreRendering; // 0x149(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x14a(0x01)
	bool FixupRedirectorsDuringMigration; // 0x14b(0x01)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x150(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x160(0x10)
	char pad_2CFF6A5B[0x21d]; // 0x2cff6a5b(0x21d)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x2cff6a98 (Inherited: 0x2cff6930)
struct UAkSettingsPerUser : UObject {
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x40(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x50(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x60(0x01)
	struct FString WaapiIPAddress; // 0x68(0x10)
	uint32_t WaapiPort; // 0x78(0x04)
	bool bAutoConnectToWAAPI; // 0x7c(0x01)
	bool AutoSyncSelection; // 0x7d(0x01)
	bool SuppressWwiseProjectPathWarnings; // 0x7e(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x7f(0x01)
	char pad_2CFF6979[0x11f]; // 0x2cff6979(0x11f)
};

// Class AkAudio.AkSlider
// Size: 0x2cff6a88 (Inherited: 0x2cff6a30)
struct UAkSlider : UWidget {
	float Value; // 0x130(0x04)
	struct FDelegate ValueDelegate; // 0x134(0x14)
	struct FSliderStyle WidgetStyle; // 0x148(0x370)
	enum class EOrientation Orientation; // 0x4b8(0x01)
	struct FLinearColor SliderBarColor; // 0x4bc(0x10)
	struct FLinearColor SliderHandleColor; // 0x4cc(0x10)
	bool IndentHandle; // 0x4dc(0x01)
	bool Locked; // 0x4dd(0x01)
	float StepSize; // 0x4e0(0x04)
	bool IsFocusable; // 0x4e4(0x01)
	struct FAkPropertyToControl ThePropertyToControl; // 0x4e8(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x4f8(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x538(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x548(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x558(0x10)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x1846e90
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x1846d40
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1846cc0
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1846c40
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x1846bb0
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x1846b20
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x1846a80
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x18469e0
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x18467f0
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1846710
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x18466d0
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x2cff6a58 (Inherited: 0x2cff6a40)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x340(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x348(0x08)
	struct UAkRoomComponent* Room; // 0x350(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x2cff6a30 (Inherited: 0x2cff6b08)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x308(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x310(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x320(0x08)
	float DistanceScalingFactor; // 0x328(0x04)
	float Level; // 0x32c(0x04)
};

// Class AkAudio.AkStateValue
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x2cff6a70 (Inherited: 0x2cff6a40)
struct UAkSurfaceReflectorSetComponent : USceneComponent {
	char bEnableSurfaceReflectors : 1; // 0x238(0x01)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x240(0x10)
	char bEnableDiffraction : 1; // 0x250(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x250(0x01)
	struct AActor* AssociatedRoom; // 0x258(0x08)
	char pad_2CFF6A58_3 : 5; // 0x2cff6a58(0x01)
	char pad_2CFF6A59[0x17]; // 0x2cff6a59(0x17)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x18472b0
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x18469c0
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x18469a0
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0x2cff6af8 (Inherited: 0x2cff6930)
struct UAkSwitchInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x98(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0(0x38)
	char pad_2CFF69F8[0x100]; // 0x2cff69f8(0x100)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1830410
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x2cff6a48 (Inherited: 0x2cff6a48)
struct UAkTrigger : UAkAudioType {
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x2cff6b08 (Inherited: 0x2cff6930)
struct UAkTVOSInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkAudioSession AudioSession; // 0x98(0x0c)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0(0x34)
	char pad_2CFF6A00[0x108]; // 0x2cff6a00(0x108)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1847190
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1846f10
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1846dc0
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x18468e0
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1846820
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1846760
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x18465e0
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1846500
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1846300
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1842980
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1842890
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184e500
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184e300
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184e130
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184df60
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184dd50
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184db30
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184d6f0
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184d3d0
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184d280
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184d130
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184cfe0
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184cd90
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x184cc60
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x184cb50
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1842980
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1842890
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x2cff6b00 (Inherited: 0x2cff6930)
struct UAkWindowsInitializationSettings : UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x30(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x40)
	char pad_2CFF6A00[0x100]; // 0x2cff6a00(0x100)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1830410
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x2cff6a70 (Inherited: 0x2cff6a30)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x140(0x10)
	char pad_2CFF6A50[0x20]; // 0x2cff6a50(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x1842c90
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x184d5d0
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x184d550
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x2cff6a90 (Inherited: 0x2cff6a30)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x140(0x10)
	char pad_2CFF6A50[0x40]; // 0x2cff6a50(0x40)
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0x2cff6b00 (Inherited: 0x2cff6930)
struct UAkXboxOneInitializationSettings : UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x30(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0(0x3c)
	char pad_2CFF69FC[0x104]; // 0x2cff69fc(0x104)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x1830410
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a98)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_2CFF6AA8_1 : 7; // 0x2cff6aa8(0x01)
	char pad_2CFF6AA9[0x7]; // 0x2cff6aa9(0x07)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a98)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	struct FString Param; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_2CFF6AA8_2 : 6; // 0x2cff6aa8(0x01)
	char pad_2CFF6AA9[0x7]; // 0x2cff6aa9(0x07)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x2cff6a38 (Inherited: 0x2cff6a30)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_2CFF6A34[0x4]; // 0x2cff6a34(0x04)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x2cff6a38 (Inherited: 0x2cff6a30)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x30(0x04)
	char pad_2CFF6A34[0x4]; // 0x2cff6a34(0x04)
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x2cff6ad0 (Inherited: 0x2cff6ae8)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	struct UAkAudioEvent* Event; // 0x128(0x08)
	bool RetriggerEvent; // 0x130(0x01)
	int32_t ScrubTailLengthMs; // 0x134(0x04)
	bool StopAtSectionEnd; // 0x138(0x01)
	struct FString EventName; // 0x140(0x10)
	float MaxSourceDuration; // 0x170(0x04)
	struct FString MaxDurationSourceID; // 0x178(0x10)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0x2cff6a78 (Inherited: 0x2d003d60)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
	char bIsAMasterTrack : 1; // 0x70(0x01)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x2cff6a50 (Inherited: 0x2cff6ae8)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xe8(0x08)
	struct FString Name; // 0xf0(0x10)
	struct FRichCurve FloatCurve; // 0x100(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x180(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1b0(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
};

// Class AkAudio.PostEventAsync
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a38)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x38(0x10)
	char pad_2CFF6A48[0x60]; // 0x2cff6a48(0x60)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x184d8a0
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x184d880
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x2cff6a88 (Inherited: 0x2cff6a38)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x38(0x10)
	char pad_2CFF6A48[0x40]; // 0x2cff6a48(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x184e9a0
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x184e980
};

