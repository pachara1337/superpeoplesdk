// WidgetBlueprintGeneratedClass UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C
// Size: 0x2cff6a98 (Inherited: 0x2cff6a88)
struct UUW-Lobby_CharacterInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* Button; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel_Line; // 0x298(0x08)
	struct UCanvasPanel* CanvasPanel_Position; // 0x2a0(0x08)
	struct UCanvasPanel* CanvasPanel_Secu; // 0x2a8(0x08)
	struct UHorizontalBox* HorizontalBox; // 0x2b0(0x08)
	struct UImage* Image; // 0x2b8(0x08)
	struct UImage* Image_country; // 0x2c0(0x08)
	struct UImage* Image_country; // 0x2c8(0x08)
	struct UImage* Image_Leader; // 0x2d0(0x08)
	struct UImage* Image_Rank; // 0x2d8(0x08)
	struct UImage* Img_Cut; // 0x2e0(0x08)
	struct UImage* Img_MS; // 0x2e8(0x08)
	struct UImage* Img_MS; // 0x2f0(0x08)
	struct UImage* Img_MS; // 0x2f8(0x08)
	struct UImage* Img_PlayerLine; // 0x300(0x08)
	struct UImage* Img_PlayerPoint; // 0x308(0x08)
	struct UImage* Img_Voice; // 0x310(0x08)
	struct UImage* Img_VoiceElimination; // 0x318(0x08)
	struct UOverlay* Overlay_OnReady; // 0x320(0x08)
	struct UOverlay* Overlay_Position; // 0x328(0x08)
	struct UOverlay* Overlay_TeamOnReady; // 0x330(0x08)
	struct UProgressBar* ProgressBar_Exp; // 0x338(0x08)
	struct UTextBlock* T_PlayerName; // 0x340(0x08)
	struct UTextBlock* T_PlayerName; // 0x348(0x08)
	struct UTextBlock* TextBlock_Level; // 0x350(0x08)
	struct UTextBlock* TextBlock_Level; // 0x358(0x08)
	struct UTextBlock* TextBlock_Status; // 0x360(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x368(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_IsTeam; // 0x370(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_State; // 0x378(0x08)
	int32_t LastSeaponTierId; // 0x380(0x04)
	float WidgetHalfSizeX; // 0x384(0x04)
	struct FString PlayerName; // 0x388(0x10)

	void SetCountryMark(struct FString CountryCode); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.SetCountryMark // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Set Position(bool IsLeft, bool IsSoloMode, struct ABravoHotelCharacter* CharacterRef, struct FBravoHotelPartyMemberInfo MemberInfo); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Set Position // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Init(struct FBravoHotelPartyMemberInfo PartyInfo, bool bIsSoloMode, int32_t Index); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_53B5B77C4172B8F96BC2979B2702DE82(struct UObject* Loaded); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.OnLoaded_53B5B77C4172B8F96BC2979B2702DE82 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoaded_8FC44B3B464142DFFB1352B4089CAB78(struct UObject* Loaded); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.OnLoaded_8FC44B3B464142DFFB1352B4089CAB78 // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadTierIcon(struct TSoftObjectPtr<UObject> Asset); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.AsyncLoadTierIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void AsyncLoadCountryIcon(struct TSoftObjectPtr<UObject> Texture); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.AsyncLoadCountryIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_CharacterInfo(int32_t EntryPoint); // Function UW-Lobby_CharacterInfo.UW-Lobby_CharacterInfo_C.ExecuteUbergraph_UW-Lobby_CharacterInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

