// WidgetBlueprintGeneratedClass UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6a88)
struct UUW-ReplayListItemWidget02_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCanvasPanel* AdministratorPanel; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x298(0x08)
	struct UVerticalBox* Cheat; // 0x2a0(0x08)
	struct USizeBox* DetailInfo; // 0x2a8(0x08)
	struct UHorizontalBox* HorizontalBox_01; // 0x2b0(0x08)
	struct UHorizontalBox* HorizontalBox_02; // 0x2b8(0x08)
	struct UHorizontalBox* HorizontalBox_03; // 0x2c0(0x08)
	struct UHorizontalBox* HorizontalBox_04; // 0x2c8(0x08)
	struct UImage* Image; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image; // 0x2e0(0x08)
	struct UImage* Image; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image; // 0x2f8(0x08)
	struct UImage* Image; // 0x300(0x08)
	struct UImage* Image; // 0x308(0x08)
	struct UImage* Image; // 0x310(0x08)
	struct UImage* Image; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_Icon1; // 0x348(0x08)
	struct UImage* Image_Icon2; // 0x350(0x08)
	struct UImage* Image_Icon3; // 0x358(0x08)
	struct UImage* Image_Icon4; // 0x360(0x08)
	struct UImage* Image_Lock; // 0x368(0x08)
	struct UImage* Image_MapImage; // 0x370(0x08)
	struct UImage* Image_Version; // 0x378(0x08)
	struct UButton* ReplayListItemBtn; // 0x380(0x08)
	struct UTextBlock* TextBlock; // 0x388(0x08)
	struct UTextBlock* TextBlock; // 0x390(0x08)
	struct UTextBlock* TextBlock; // 0x398(0x08)
	struct UTextBlock* TextBlock; // 0x3a0(0x08)
	struct UTextBlock* TextBlock; // 0x3a8(0x08)
	struct UTextBlock* TextBlock; // 0x3b0(0x08)
	struct UTextBlock* TextBlock; // 0x3b8(0x08)
	struct UTextBlock* TextBlock_BattleMode; // 0x3c0(0x08)
	struct UTextBlock* TextBlock_BlueZoneTitle; // 0x3c8(0x08)
	struct UTextBlock* TextBlock_ClassLevel1; // 0x3d0(0x08)
	struct UTextBlock* TextBlock_ClassLevel2; // 0x3d8(0x08)
	struct UTextBlock* TextBlock_ClassLevel3; // 0x3e0(0x08)
	struct UTextBlock* TextBlock_ClassLevel4; // 0x3e8(0x08)
	struct UTextBlock* TextBlock_ClassName1; // 0x3f0(0x08)
	struct UTextBlock* TextBlock_ClassName2; // 0x3f8(0x08)
	struct UTextBlock* TextBlock_ClassName3; // 0x400(0x08)
	struct UTextBlock* TextBlock_ClassName4; // 0x408(0x08)
	struct UTextBlock* TextBlock_Damage; // 0x410(0x08)
	struct UTextBlock* TextBlock_Day; // 0x418(0x08)
	struct UTextBlock* TextBlock_FileSize; // 0x420(0x08)
	struct UTextBlock* TextBlock_FPP; // 0x428(0x08)
	struct UTextBlock* TextBlock_Kill; // 0x430(0x08)
	struct UTextBlock* TextBlock_League; // 0x438(0x08)
	struct UTextBlock* TextBlock_LifeTime; // 0x440(0x08)
	struct UTextBlock* TextBlock_MapName; // 0x448(0x08)
	struct UTextBlock* TextBlock_MapName; // 0x450(0x08)
	struct UTextBlock* TextBlock_MapName; // 0x458(0x08)
	struct UTextBlock* TextBlock_MapName; // 0x460(0x08)
	struct UTextBlock* TextBlock_MapName; // 0x468(0x08)
	struct UTextBlock* TextBlock_Month; // 0x470(0x08)
	struct UTextBlock* TextBlock_Name1; // 0x478(0x08)
	struct UTextBlock* TextBlock_Name2; // 0x480(0x08)
	struct UTextBlock* TextBlock_Name3; // 0x488(0x08)
	struct UTextBlock* TextBlock_Name4; // 0x490(0x08)
	struct UTextBlock* TextBlock_PlayerRank; // 0x498(0x08)
	struct UTextBlock* TextBlock_PlayTime; // 0x4a0(0x08)
	struct UTextBlock* TextBlock_Round; // 0x4a8(0x08)
	struct UTextBlock* TextBlock_Time; // 0x4b0(0x08)
	struct UTextBlock* TextBlock_TotalCount; // 0x4b8(0x08)
	struct UTextBlock* TextBlock_TotalPlayerCount; // 0x4c0(0x08)
	struct UTextBlock* TextBlock_TotalPlayerCount; // 0x4c8(0x08)
	struct UTextBlock* TextBlock_Weapon1; // 0x4d0(0x08)
	struct UTextBlock* TextBlock_Weapon2; // 0x4d8(0x08)
	struct UTextBlock* TextBlock_Weapon3; // 0x4e0(0x08)
	struct UTextBlock* TextBlock_Weapon4; // 0x4e8(0x08)
	struct UTextBlock* TextBlock_Year; // 0x4f0(0x08)
	struct FMulticastInlineDelegate Click; // 0x4f8(0x10)
	struct UBravoHotelReplayListWidget* ReplayListWidget; // 0x508(0x08)
	struct FMKReplayListItemInfo ReplayItemInfo; // 0x510(0x148)
	struct FButtonStyle Style; // 0x658(0x2a8)

	void SetBlueZoneTitle(); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.SetBlueZoneTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set TitleText Color(struct FSlateColor SlateColor); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.Set TitleText Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTournament(); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.SetTournament // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowDetailInfo(); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.ShowDetailInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetBattleModeString(int32_t Index, struct FText& Str); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.GetBattleModeString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetReportType(struct FText& Type); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.GetReportType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Clicked(); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.Clicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateKeep(bool State); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.UpdateKeep // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Revert Style(); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.Revert Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(struct FMKReplayListItemInfo ItemInfo, bool Supported, struct UBravoHotelReplayListWidget* ReplayListWidget); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_8F12FC784DF3C2E8F5F202A1F4894854(struct UObject* Loaded); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.OnLoaded_8F12FC784DF3C2E8F5F202A1F4894854 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_283BF7CA413BB59B18C3C5854B961256(struct UObject* Loaded); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.OnLoaded_283BF7CA413BB59B18C3C5854B961256 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_77D3AD304C178E180A3DB39B99B6B7E2(struct UObject* Loaded); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.OnLoaded_77D3AD304C178E180A3DB39B99B6B7E2 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_CB45360C44262ED9BD3597BA3F762939(struct UObject* Loaded); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.OnLoaded_CB45360C44262ED9BD3597BA3F762939 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_6A0FDE904F83CF03118A0BA148453360(struct UObject* Loaded); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.OnLoaded_6A0FDE904F83CF03118A0BA148453360 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.BndEvt__ReplayListItemBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void AsyncMapImage(struct TSoftObjectPtr<UObject> Image); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.AsyncMapImage // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncIcon1(struct TSoftObjectPtr<UObject> Image, struct UImage* Target); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.AsyncIcon1 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncIcon2(struct TSoftObjectPtr<UObject> Image, struct UImage* Target); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.AsyncIcon2 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncIcon3(struct TSoftObjectPtr<UObject> Image, struct UImage* Target); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.AsyncIcon3 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncIcon4(struct TSoftObjectPtr<UObject> Image, struct UImage* Target); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.AsyncIcon4 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-ReplayListItemWidget02(int32_t EntryPoint); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.ExecuteUbergraph_UW-ReplayListItemWidget02 // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void Click__DelegateSignature(struct FMKReplayListItemInfo ItemInfo); // Function UW-ReplayListItemWidget02.UW-ReplayListItemWidget02_C.Click__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

