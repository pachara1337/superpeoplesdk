// BlueprintGeneratedClass BP-GameSettingManager.BP-GameSettingManager_C
// Size: 0x2cff6a50 (Inherited: 0x2cff6a40)
struct UBP-GameSettingManager_C : UBravoHotelGameSettingManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x40(0x08)
	struct UBP_GameSettingsWrapper_C* Game Settings Wrapper; // 0x48(0x08)

	void Get Settings Instance(struct UBP_GameSettingsWrapper_C*& SettingsWrapper); // Function BP-GameSettingManager.BP-GameSettingManager_C.Get Settings Instance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Run Console Command(struct FString Console Command, bool& -); // Function BP-GameSettingManager.BP-GameSettingManager_C.Run Console Command // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Update Audio Channel(enum class EAudioType Audio Channel, float Volume, bool& -); // Function BP-GameSettingManager.BP-GameSettingManager_C.Update Audio Channel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveInit(); // Function BP-GameSettingManager.BP-GameSettingManager_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-GameSettingManager(int32_t EntryPoint); // Function BP-GameSettingManager.BP-GameSettingManager_C.ExecuteUbergraph_BP-GameSettingManager // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

