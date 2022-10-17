// WidgetBlueprintGeneratedClass BP-TitleWidget.BP-TitleWidget_C
// Size: 0x2cff6b08 (Inherited: 0x2cff6a88)
struct UBP-TitleWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UUW-Title_Login_OrbIsland_C* UW-Title_Login; // 0x290(0x08)
	struct FMulticastInlineDelegate OnTriedToLogin; // 0x298(0x10)
	struct FMulticastInlineDelegate OnTriedToTestLogin; // 0x2a8(0x10)
	bool bEnableDevServer; // 0x2b8(0x01)
	struct FMulticastInlineDelegate OnMoveLobby; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnPlayBGM; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnSaveUserData; // 0x2e0(0x10)
	bool bPlayBGM; // 0x2f0(0x01)
	bool bRememberMe; // 0x2f1(0x01)
	struct FMulticastInlineDelegate OnSkipTitle; // 0x2f8(0x10)
	char pad_2CFF6AFB[0xd]; // 0x2cff6afb(0x0d)

	void HideExitPopup(); // Function BP-TitleWidget.BP-TitleWidget_C.HideExitPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Login(); // Function BP-TitleWidget.BP-TitleWidget_C.Login // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ValidateUserName(struct FText InputUserName, bool& ret, struct FName& UserName); // Function BP-TitleWidget.BP-TitleWidget_C.ValidateUserName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2bad3b0
	void Construct(); // Function BP-TitleWidget.BP-TitleWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnLogin(); // Function BP-TitleWidget.BP-TitleWidget_C.OnLogin // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowMouseCursor(); // Function BP-TitleWidget.BP-TitleWidget_C.ShowMouseCursor // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnLoginSucceeded(); // Function BP-TitleWidget.BP-TitleWidget_C.OnLoginSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-TitleWidget(int32_t EntryPoint); // Function BP-TitleWidget.BP-TitleWidget_C.ExecuteUbergraph_BP-TitleWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void OnSkipTitle__DelegateSignature(); // Function BP-TitleWidget.BP-TitleWidget_C.OnSkipTitle__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSaveUserData__DelegateSignature(); // Function BP-TitleWidget.BP-TitleWidget_C.OnSaveUserData__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPlayBGM__DelegateSignature(); // Function BP-TitleWidget.BP-TitleWidget_C.OnPlayBGM__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMoveLobby__DelegateSignature(); // Function BP-TitleWidget.BP-TitleWidget_C.OnMoveLobby__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnTriedToTestLogin__DelegateSignature(struct FName UserName, struct FString TestIP); // Function BP-TitleWidget.BP-TitleWidget_C.OnTriedToTestLogin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnTriedToLogin__DelegateSignature(struct FName UserName, struct FString Password); // Function BP-TitleWidget.BP-TitleWidget_C.OnTriedToLogin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

