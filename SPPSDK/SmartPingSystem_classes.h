// BlueprintGeneratedClass SmartPingSystem.SmartPingSystem_C
// Size: 0x2cff6a62 (Inherited: 0x2cff6a38)
struct USmartPingSystem_C : UBravoHotelSmartPingSystem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct FMulticastInlineDelegate RequestOnServer; // 0x140(0x10)
	enum class E_SPS_MenuSelectionType SelectionMode; // 0x150(0x01)
	float TimeoutBetweenPings; // 0x154(0x04)
	struct TArray<float> PingTimeouts; // 0x158(0x10)
	struct TArray<struct FName> ExecutingMenuIconIDs; // 0x168(0x10)
	struct TArray<struct FBravoHotelSmartPingIconSettings> ExecutingMenuIconSettings; // 0x178(0x10)
	struct APawn* OwningPawn; // 0x188(0x08)
	struct UWBP_SPS_SelectionMenu_C* SelectionMenu; // 0x190(0x08)
	struct FMulticastInlineDelegate ExecuteOwningClient; // 0x198(0x10)
	enum class E_SPS_TraceMethod TraceMethod; // 0x1a8(0x01)
	float TraceLength; // 0x1ac(0x04)
	float TraceRadius; // 0x1b0(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x1b4(0x01)
	bool TraceComplex; // 0x1b5(0x01)
	struct FMulticastInlineDelegate MenuActivated; // 0x1b8(0x10)
	struct FMulticastInlineDelegate MenuDeactivated; // 0x1c8(0x10)
	struct FMulticastInlineDelegate PingReceivedOnServer; // 0x1d8(0x10)
	struct FBravoHotelPingInfo ExecutingPingInfo2; // 0x1e8(0x38)
	bool NoneHitActor; // 0x220(0x01)
	bool IgnorInput; // 0x221(0x01)
	struct FName TempItemPingTableIndex; // 0x224(0x0c)
	bool Enable Show; // 0x230(0x01)
	struct FName NewVar; // 0x234(0x0c)
	struct UBravoHotelMainWidget* MainWidget; // 0x240(0x08)
	enum class EPingType EnableEndPingType; // 0x248(0x01)
	bool IsSelectionMenuOnMap; // 0x249(0x01)
	struct FVector TmpLocationByMap; // 0x24c(0x0c)
	struct FVector2D TmpMousePosition; // 0x258(0x08)
	bool IsVisibleSelectionMenu; // 0x260(0x01)
	bool FindPickUpItem; // 0x261(0x01)

	void Set Ping Tye(bool IsPingType); // Function SmartPingSystem.SmartPingSystem_C.Set Ping Tye // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPingInfoByIndex(int32_t Index, struct FBravoHotelPingInfo& PingInfo); // Function SmartPingSystem.SmartPingSystem_C.GetPingInfoByIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void OnMapRightClick(struct FVector ServerLocation, int32_t PingTypeIndex, bool IsAgree); // Function SmartPingSystem.SmartPingSystem_C.OnMapRightClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetMainWidget(struct UBravoHotelMainWidget*& MainWidget); // Function SmartPingSystem.SmartPingSystem_C.GetMainWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	struct ABravoHotelSmartPingActor* CreateSmartPingWidget(); // Function SmartPingSystem.SmartPingSystem_C.CreateSmartPingWidget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetIconType(struct AActor* Item, bool& IsItem, enum class EItemPingIconType& ItemPingType); // Function SmartPingSystem.SmartPingSystem_C.GetIconType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetActorIndex(struct ABravoHotelSmartPingActor* Actor, int32_t& Index); // Function SmartPingSystem.SmartPingSystem_C.GetActorIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DeletePing(struct AActor* Owner); // Function SmartPingSystem.SmartPingSystem_C.DeletePing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPingActorFromOwner(struct ABravoHotelPlayerState* OwnerState, struct ABP_SPS_WidgetActor_C*& PingActor); // Function SmartPingSystem.SmartPingSystem_C.GetPingActorFromOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetIconFromTableID(struct FName TableID, struct FBravoHotelSmartPingIconSettings& Settings, bool& bRet); // Function SmartPingSystem.SmartPingSystem_C.GetIconFromTableID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Check Agree(bool& IsAgree, struct AActor*& TargetActor, bool& MyPing); // Function SmartPingSystem.SmartPingSystem_C.Check Agree // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HandlePingOnClientFromWorldMap(struct FVector WorldLocation, struct ABravoHotelCharacter* Owner, bool HasMaker); // Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClientFromWorldMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsShowSelectMenu(bool& ret); // Function SmartPingSystem.SmartPingSystem_C.IsShowSelectMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetPingType(struct AActor* TargetActor, enum class EPingType& PingType, struct AActor*& RetTargetActor); // Function SmartPingSystem.SmartPingSystem_C.GetPingType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CancelSelectionInMenu(); // Function SmartPingSystem.SmartPingSystem_C.CancelSelectionInMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ConfirmSelectionInMenu(); // Function SmartPingSystem.SmartPingSystem_C.ConfirmSelectionInMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HandlePingOnClient(struct FName Icon, struct ABravoHotelCharacter* Owner); // Function SmartPingSystem.SmartPingSystem_C.HandlePingOnClient // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetHitUsingTraceSettings(struct FHitResult& Hit); // Function SmartPingSystem.SmartPingSystem_C.GetHitUsingTraceSettings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ToggleSelectionMenu(bool Visible, bool OnMap, bool Enable RequestMessage, struct UWBP_SPS_SelectionMenu_C*& SelectionMenu); // Function SmartPingSystem.SmartPingSystem_C.ToggleSelectionMenu // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function SmartPingSystem.SmartPingSystem_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnSelected(struct FBravoHotelSmartPingIconSettings Selected, struct FName ID, bool IsPingType, int32_t RequestMessageIndex); // Function SmartPingSystem.SmartPingSystem_C.OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CreateBindOnSelect(); // Function SmartPingSystem.SmartPingSystem_C.CreateBindOnSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RequestPingOnServer(); // Function SmartPingSystem.SmartPingSystem_C.RequestPingOnServer // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void HandleGamepadInput(float XAxis, float YAxis); // Function SmartPingSystem.SmartPingSystem_C.HandleGamepadInput // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Direct Ping(bool Force, struct FName ForcePingTable); // Function SmartPingSystem.SmartPingSystem_C.Direct Ping // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetSmartPing(struct TArray<struct ABravoHotelPlayerState*>& TeamStateList); // Function SmartPingSystem.SmartPingSystem_C.ResetSmartPing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RemovePing(struct ABravoHotelCharacter* OwnerCharacter); // Function SmartPingSystem.SmartPingSystem_C.RemovePing // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Hovered(struct FBravoHotelSmartPingIconSettings Settings, bool IsPingType); // Function SmartPingSystem.SmartPingSystem_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddPersonalSupplyBoxPing(struct FVector NewPersonalSupplyBoxPosition); // Function SmartPingSystem.SmartPingSystem_C.AddPersonalSupplyBoxPing // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPingByInputKey(int32_t KeyIndex); // Function SmartPingSystem.SmartPingSystem_C.SetPingByInputKey // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClearPing(); // Function SmartPingSystem.SmartPingSystem_C.ClearPing // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AddBookPing(struct FVector NewPersonalSupplyBoxPosition); // Function SmartPingSystem.SmartPingSystem_C.AddBookPing // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RemoveBookPing(); // Function SmartPingSystem.SmartPingSystem_C.RemoveBookPing // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RemovePersonalSupplyBoxPing(); // Function SmartPingSystem.SmartPingSystem_C.RemovePersonalSupplyBoxPing // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowSmartPingMessage(struct FString Message, struct FString Color, struct FString UserName, struct FString ImagePath, struct FString TierIcon); // Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMessage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowSmartPingMunu(bool bIsVisible, bool bIsOnMap, bool bIsEnableRequestMessage); // Function SmartPingSystem.SmartPingSystem_C.ShowSmartPingMunu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPingMenuType(bool bIsSmartPing); // Function SmartPingSystem.SmartPingSystem_C.SetPingMenuType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_SmartPingSystem(int32_t EntryPoint); // Function SmartPingSystem.SmartPingSystem_C.ExecuteUbergraph_SmartPingSystem // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void PingReceivedOnServer__DelegateSignature(); // Function SmartPingSystem.SmartPingSystem_C.PingReceivedOnServer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MenuDeactivated__DelegateSignature(); // Function SmartPingSystem.SmartPingSystem_C.MenuDeactivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MenuActivated__DelegateSignature(); // Function SmartPingSystem.SmartPingSystem_C.MenuActivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteOwningClient__DelegateSignature(struct FBravoHotelPingInfo PingInfo); // Function SmartPingSystem.SmartPingSystem_C.ExecuteOwningClient__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RequestOnServer__DelegateSignature(struct FBravoHotelPingInfo PingInfo); // Function SmartPingSystem.SmartPingSystem_C.RequestOnServer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

