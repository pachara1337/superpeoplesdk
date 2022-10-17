// BlueprintGeneratedClass BP-HUDInteractionComponent.BP-HUDInteractionComponent_C
// Size: 0x2cff6a58 (Inherited: 0x2cff6a49)
struct UBP-HUDInteractionComponent_C : UBP-HUDInteractionComponentBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	char pad_2CFF6A51[0x7]; // 0x2cff6a51(0x07)

	void CheckAnyAction(bool& AnyAction); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.CheckAnyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void CheckAnyCloseUI(bool& AnyClosed); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.CheckAnyCloseUI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct UUserWidget* GetSightInfoWidget(); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetSightInfoWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetReplayWidget(bool WantsToCreateIfNull, struct UUW-ReplayMainWidget_C*& Widget); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetReplayWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetSpectatorWidget(bool WantsToCreateIfNull, struct UUserWidget*& Widget); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetSpectatorWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetInventoryWidget(bool WantsToCreateIfNull, struct UUserWidget*& Widget); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetInventoryWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetPlayerSpectatorHUD(struct ABravoHotelPlayerHUD*& RefSpectatorHUD); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetPlayerSpectatorHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsReplay(bool& IsReplay); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsReplay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsOpenSystemPopup(bool& bResult); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsOpenSystemPopup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void GetPlayerMainWidget(bool WantsToCreateIfNull, struct UBravoHotelMainWidget*& Widget); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.GetPlayerMainWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void IsMatchEnd(bool& State); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.IsMatchEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void InputWorldMap(); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputWorldMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InputMiniMap(); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputMiniMap // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InputToggleIngameHUD(); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.InputToggleIngameHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-HUDInteractionComponent(int32_t EntryPoint); // Function BP-HUDInteractionComponent.BP-HUDInteractionComponent_C.ExecuteUbergraph_BP-HUDInteractionComponent // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

