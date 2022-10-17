// BlueprintGeneratedClass BP-TitleHUD.BP-TitleHUD_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6aa8)
struct ABP-TitleHUD_C : ABravoHotelTitleHUD {
	struct USceneComponent* DefaultSceneRoot; // 0x4a8(0x08)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x4b0(0x08)
	struct FMulticastInlineDelegate EventDispatcher_PlayLobbySound; // 0x4b8(0x10)
	struct FMulticastInlineDelegate EventDispatcher_StopLobbySound; // 0x4c8(0x10)

	void EventDispatcher_StopLobbySound__DelegateSignature(); // Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_StopLobbySound__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventDispatcher_PlayLobbySound__DelegateSignature(); // Function BP-TitleHUD.BP-TitleHUD_C.EventDispatcher_PlayLobbySound__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

