// BlueprintGeneratedClass LV-Title_Alternative.LV-Title_Alternative_C
// Size: 0x2cff6b08 (Inherited: 0x2cff6b10)
struct ALV-Title_Alternative_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UBP-TitleWidget_C* TitleWidgetRef; // 0x318(0x08)
	struct UBP-LobbyWidget_Web_C* LobbyWidgetRef; // 0x320(0x08)
	struct TArray<struct ACharacter*> LobbyPawns; // 0x328(0x10)
	struct TSoftClassPtr<UObject> LobbyPawnClass; // 0x338(0x30)
	struct FKey SkipKey; // 0x368(0x20)
	bool bSkip; // 0x388(0x01)
	bool bNotFirstTime; // 0x389(0x01)
	struct ACharacter* LobbyCustomizePawn; // 0x390(0x08)
	bool IsCharacterAppearance; // 0x398(0x01)
	struct ACineCameraActor* TargetWearableCamera; // 0x3a0(0x08)
	struct FString CurrentArmorySceneState; // 0x3a8(0x10)
	float SurveyUPanValue; // 0x3b8(0x04)
	float GunSurveyMovingValue; // 0x3bc(0x04)
	struct UMaterialInstanceDynamic* SurveyUPan; // 0x3c0(0x08)
	struct UMaterialInstanceDynamic* GunSurveyMoving; // 0x3c8(0x08)
	struct FTimerHandle IdentifiedTimer; // 0x3d0(0x08)
	struct FString MainTab; // 0x3d8(0x10)
	struct UMaterialInstanceDynamic* PP-OutlineGlow; // 0x3e8(0x08)
	struct FAudioPlayingHandle AudioIndex_Ambience; // 0x3f0(0x04)
	struct FAudioPlayingHandle AudioIndex_Analyze; // 0x3f4(0x04)
	bool PendingPartyInfoChange; // 0x3f8(0x01)
	struct FTimerHandle EnhanceTimerHandle; // 0x400(0x08)
	struct FTimerHandle ProceedingTimerHandle; // 0x408(0x08)
	struct UBP-CreateCharacterWidget_Web_C* CreateCharacterRef; // 0x410(0x08)
	struct UUW-IntroBackground_C* IntroBGWidget; // 0x418(0x08)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x420(0x08)
	bool bPlaySoloSequencePlayer; // 0x428(0x01)
	struct FString CurrentArmoryTab; // 0x430(0x10)
	struct UUW-LoginWidget_C* LoginWidget; // 0x440(0x08)
	bool bFinished_SequencePlayer_Endgame; // 0x448(0x01)
	struct FString SubTab; // 0x450(0x10)
	int32_t LocalLeagueSequenceStartPlay; // 0x460(0x04)
	struct ALevelSequenceActor* CurrentLeagueSequence; // 0x468(0x08)
	struct FString TournamentLeagueState; // 0x470(0x10)
	bool bPlayTournamentSound; // 0x480(0x01)
	struct UAkAudioEvent* StopAudioBGMEvent; // 0x488(0x08)
	struct ASkeletalMeshActor* ANIM-Lobby01_5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x490(0x08)
	struct ASkeletalMeshActor* ANIM-Lobby02_8_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x498(0x08)
	struct ASkeletalMeshActor* ANIM-Lobby03_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4a0(0x08)
	struct ASkeletalMeshActor* ANIM-Lobby04_11_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4a8(0x08)
	struct ASkeletalMeshActor* SK-Body_Female_5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4b0(0x08)
	struct ASkeletalMeshActor* SK-Body_Female_Ranking_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4b8(0x08)
	struct ASkeletalMeshActor* ANIM-Tourna_Lobby04_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4c0(0x08)
	struct ASkeletalMeshActor* ANIM-Tourna_Lobby03_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4c8(0x08)
	struct ASkeletalMeshActor* ANIM-Tourna_Lobby01_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4d0(0x08)
	struct ASkeletalMeshActor* ANIM-Tourna_Lobby02_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4d8(0x08)
	struct ASkeletalMeshActor* ANIM-AI_Lobby04_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4e0(0x08)
	struct ASkeletalMeshActor* ANIM-AI_Lobby03_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4e8(0x08)
	struct ASkeletalMeshActor* ANIM-AI_Lobby02_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4f0(0x08)
	struct ASkeletalMeshActor* ANIM-AI_Lobby01_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x4f8(0x08)
	struct ASkeletalMeshActor* ANIM-Training-Lobby01_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x500(0x08)
	struct ALevelSequenceActor* Title_TowerBridge_Squard_5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x508(0x08)
	struct ALevelSequenceActor* Title_AI_Squard_4_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x510(0x08)
	struct ABravoHotelAmbientSound* Ak-LobbySound_1_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x518(0x08)
	struct ALevelSequenceActor* Title_TowerBridge_Endgame_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x520(0x08)
	struct ALevelSequenceActor* Title_TowerBridge_Readyshot_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x528(0x08)
	struct ALevelSequenceActor* Character_Creation_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x530(0x08)
	struct AExponentialHeightFog* ExponentialHeightFog3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x538(0x08)
	struct AExponentialHeightFog* ExponentialHeightFog_1_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x540(0x08)
	struct AExponentialHeightFog* ExponentialHeightFog2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x548(0x08)
	struct ACineCameraActor* CineCameraActor_1_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x550(0x08)
	struct ACineCameraActor* CineCamera_Supplybox_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x558(0x08)
	struct ACineCameraActor* CineCamera_All_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x560(0x08)
	struct ALevelSequenceActor* Character_Customization_Face_3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x568(0x08)
	struct ALevelSequenceActor* Supplybox_Lobby_02_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x570(0x08)
	struct ALevelSequenceActor* Supplybox_Lobby_01_0_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x578(0x08)
	struct ACineCameraActor* CineCamera_Target_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x580(0x08)
	struct ACineCameraActor* CineCamera_Rank_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x588(0x08)
	struct ALevelSequenceActor* Title_Rank_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x590(0x08)
	struct AStaticMeshActor* Gun_Survey_Plane_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x598(0x08)
	struct ALevelSequenceActor* Weapon_Lobby_01_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5a0(0x08)
	struct ACineCameraActor* CineCamera_Face3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5a8(0x08)
	struct ALevelSequenceActor* Screen_Transition_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5b0(0x08)
	struct ALevelSequenceActor* Character_Fade_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5b8(0x08)
	struct AEmitter* PS-LobbyRay1_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5c0(0x08)
	struct AEmitter* PS-LobbyRay2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5c8(0x08)
	struct AEmitter* PS-LobbyRay3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5d0(0x08)
	struct AEmitter* PS-LobbyRay4_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5d8(0x08)
	struct AEmitter* PS-LobbyRay5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5e0(0x08)
	struct AEmitter* PS-LobbyRay6_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5e8(0x08)
	struct AEmitter* PS-LobbyRay7_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5f0(0x08)
	struct AEmitter* PS-LobbyRay8_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x5f8(0x08)
	struct ALevelSequenceActor* Weapon_Lobby_Disassemble_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x600(0x08)
	struct ALevelSequenceActor* Weapon_Lobby_Repair_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x608(0x08)
	struct ACineCameraActor* CineCamera_Weapon_Customization_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x610(0x08)
	struct ALevelSequenceActor* Weapon_Lobby_Custom_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x618(0x08)
	struct ACineCameraActor* Tournament_CineCamera_01_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x620(0x08)
	struct ACineCameraActor* CineCamera_Training_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x628(0x08)
	struct ALevelSequenceActor* Title_Training_Readyshot_3_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x630(0x08)
	struct ACineCameraActor* CineCameraActor_AI_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x638(0x08)
	struct ACineCameraActor* CineCamera_Weapon_Customization03_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x640(0x08)
	struct ALevelSequenceActor* Title_Tournament_Advance_5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x648(0x08)
	struct ALevelSequenceActor* Title_Tournament_Fail_11_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x650(0x08)
	struct ALevelSequenceActor* Title_Tournament_End_8_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x658(0x08)
	struct ALevelSequenceActor* Title_Tournament_Shot_2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x660(0x08)
	struct ALevelSequenceActor* Title_Tournament_End_OnlyCamera_5_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x668(0x08)
	struct ACineCameraActor* CineCamera_Exploration_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x670(0x08)
	struct ACineCameraActor* CineCamera_Weapon_Customization2_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x678(0x08)
	struct ASkeletalMeshActor* SK-Body_Female_Creation_ExecuteUbergraph_LV-Title_Alternative_RefProperty; // 0x680(0x08)
	struct ACineCameraActor* CineCameraActor_1_EdGraph_4_RefProperty; // 0x688(0x08)
	struct AStaticMeshActor* Gun_Survey_Plane_EdGraph_11_RefProperty; // 0x690(0x08)
	struct AStaticMeshActor* Gun_Survey_Plane_EdGraph_12_RefProperty; // 0x698(0x08)
	struct AStaticMeshActor* Gun_Survey_Plane_EdGraph_13_RefProperty; // 0x6a0(0x08)
	struct APostProcessVolume* PostProcessVolume2_EdGraph_14_RefProperty; // 0x6a8(0x08)
	struct APostProcessVolume* PostProcessVolume2_EdGraph_15_RefProperty; // 0x6b0(0x08)
	struct ALevelSequenceActor* Title_Training_Readyshot_3_EdGraph_16_RefProperty; // 0x6b8(0x08)
	struct ALevelSequenceActor* Supplybox_Lobby_02_EdGraph_16_RefProperty; // 0x6c0(0x08)
	struct ALevelSequenceActor* Title_Rank_2_EdGraph_16_RefProperty; // 0x6c8(0x08)
	struct ALevelSequenceActor* Character_Customization_Face_3_EdGraph_16_RefProperty; // 0x6d0(0x08)
	struct ALevelSequenceActor* Supplybox_Lobby_01_0_EdGraph_16_RefProperty; // 0x6d8(0x08)
	struct AStaticMeshActor* Plane_3_EdGraph_27_RefProperty; // 0x6e0(0x08)
	struct AStaticMeshActor* Plane_2_EdGraph_27_RefProperty; // 0x6e8(0x08)
	struct AStaticMeshActor* Plane_4_EdGraph_27_RefProperty; // 0x6f0(0x08)
	struct ALevelSequenceActor* Title_AI_Squard_4_EdGraph_28_RefProperty; // 0x6f8(0x08)
	struct ALevelSequenceActor* Title_TowerBridge_Squard_5_EdGraph_28_RefProperty; // 0x700(0x08)

	void SetTournamentResultAnim(bool bIsWIn); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetTournamentResultAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateEquipWeaponAndScenePage(); // Function LV-Title_Alternative.LV-Title_Alternative_C.UpdateEquipWeaponAndScenePage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopPartyCameraSequence(); // Function LV-Title_Alternative.LV-Title_Alternative_C.StopPartyCameraSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetSequencePanelColor(int32_t WeaponRarity); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetSequencePanelColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeMenu(struct FString Menu); // Function LV-Title_Alternative.LV-Title_Alternative_C.ChangeMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTutorial(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayLobbySound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayLobbySound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdatePartyInfo(); // Function LV-Title_Alternative.LV-Title_Alternative_C.UpdatePartyInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetGammaSettings(struct UUW-StartGammaSetting_C*& GammaWidget); // Function LV-Title_Alternative.LV-Title_Alternative_C.GetGammaSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void GetTitleWdiget(struct UBP-TitleWidget_C*& HUD); // Function LV-Title_Alternative.LV-Title_Alternative_C.GetTitleWdiget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopArmoryAnalyzeSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.StopArmoryAnalyzeSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayArmoryAnalyzeSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayArmoryAnalyzeSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopArmoryAmbienceSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.StopArmoryAmbienceSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayArmoryAmbienceSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayArmoryAmbienceSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopSequence(); // Function LV-Title_Alternative.LV-Title_Alternative_C.StopSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOutlineGlow(float Value); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetOutlineGlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitPostProcess(); // Function LV-Title_Alternative.LV-Title_Alternative_C.InitPostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void FinishIdentified(); // Function LV-Title_Alternative.LV-Title_Alternative_C.FinishIdentified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetIdentified(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ResetIdentified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void UpdateIdentifiedEffect(float DeltaTime); // Function LV-Title_Alternative.LV-Title_Alternative_C.UpdateIdentifiedEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SequencePlay(struct UMovieSceneSequencePlayer* Sequence, int32_t StartFrame, int32_t Duration, bool Revers); // Function LV-Title_Alternative.LV-Title_Alternative_C.SequencePlay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void StopLobbySound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.StopLobbySound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayMoveLobbySound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayMoveLobbySound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayAmbienceSound(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayAmbienceSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void PlayBGM(); // Function LV-Title_Alternative.LV-Title_Alternative_C.PlayBGM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ShowLobbyWidget(bool IsConnectedLoginServer); // Function LV-Title_Alternative.LV-Title_Alternative_C.ShowLobbyWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCamera(bool bLogin); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void LoadSavedData(); // Function LV-Title_Alternative.LV-Title_Alternative_C.LoadSavedData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SaveUserData(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SaveUserData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTitleWidget(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetTitleWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitData(); // Function LV-Title_Alternative.LV-Title_Alternative_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindPartyEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.BindPartyEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnPartyInfoChanged(struct FBravoHotelPartyInfo& PartyInfo); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnPartyInfoChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPartyView(bool bIsParty); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetPartyView // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindPartyInfo(); // Function LV-Title_Alternative.LV-Title_Alternative_C.BindPartyInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnMatchingSucceeded(); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnMatchingSucceeded // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangeLobbyPawnTransform(struct FString Main, struct FString Sub); // Function LV-Title_Alternative.LV-Title_Alternative_C.ChangeLobbyPawnTransform // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindLoginProcess(); // Function LV-Title_Alternative.LV-Title_Alternative_C.BindLoginProcess // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnTriedToLogin(struct FName UserName, struct FString Password); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnTriedToLogin // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetLobbyAkComponent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetLobbyAkComponent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitFlow(bool IsConnectedLoginServer); // Function LV-Title_Alternative.LV-Title_Alternative_C.InitFlow // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneNotice(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneNotice // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneGammaSettings(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneGammaSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneCompanyLogo(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneCompanyLogo // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneSupportProgram(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneSupportProgram // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneLogin(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneLogin // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneOpeningMovie(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneOpeningMovie // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneTermsConditions(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneTermsConditions // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneCreateCharacter(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneCreateCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneTutorialMovie(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneTutorialMovie // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangedSceneDelegate_Event(enum class ESceneType SceneType); // Function LV-Title_Alternative.LV-Title_Alternative_C.ChangedSceneDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangedLoginDelegate_Event(enum class ELoginFlow LoginFlow); // Function LV-Title_Alternative.LV-Title_Alternative_C.ChangedLoginDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveLoginFlowServicePlatform(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowServicePlatform // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneLobby(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveLoginFlowWaitingTicket(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowWaitingTicket // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveNextScene(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveNextScene // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveSceneStartScenarioMode(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveSceneStartScenarioMode // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveScenePlayTutorial(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveScenePlayTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnFinished_Event(); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveLoginFlowCatalogue(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLoginFlowCatalogue // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Lobby(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Lobby // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Armory(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Armory // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event SupplyBox(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event SupplyBox // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Character(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Character // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Rank(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Rank // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnFinished_Event(); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Identified(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Identified // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Replay(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Replay // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BindLobbyCharacterMenu(); // Function LV-Title_Alternative.LV-Title_Alternative_C.BindLobbyCharacterMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventMoveLobbyCharacterWearable(struct FString WearableMenu); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventMoveLobbyCharacterWearable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventMoveLobbyCharacterAppearance(); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventMoveLobbyCharacterAppearance // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventChangeTab(struct FString MainTabName, struct FString SubTabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventChangeTab // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event_Enhance(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Enhance // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event_Proceeding(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Proceeding // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event_EnhanceResult(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_EnhanceResult // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventChangeArmmyScene(struct FString SceneName); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventChangeArmmyScene // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event_ArmoryEx(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_ArmoryEx // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void EventSeasonChangedSubTab(struct FString TabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.EventSeasonChangedSubTab // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ArmoryUI(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ArmoryUI // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(struct FString Menu); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(struct FString TabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ApplyChangeTab(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ApplyChangeTab // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(struct FString SceneName); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(struct FString Menu); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveLobbyCharacterAppearanceDelegate_Event(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveLobbyCharacterAppearanceDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveCreateCharacterAppearance(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveCreateCharacterAppearance // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void MoveCreateCharacterWearable(); // Function LV-Title_Alternative.LV-Title_Alternative_C.MoveCreateCharacterWearable // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedArmoryTab(struct FString TabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnChangedArmoryTab // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event_Craft(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_Craft // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event_CraftResult(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event_CraftResult // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCurrentArmoryCamera(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetCurrentArmoryCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetArmorySequenceCamera(); // Function LV-Title_Alternative.LV-Title_Alternative_C.SetArmorySequenceCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitArmoryTab(struct FString SubTabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.InitArmoryTab // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Tournament(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Tournament // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event TrainingGround(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event TrainingGround // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnFinished_Event(); // Function LV-Title_Alternative.LV-Title_Alternative_C.OnFinished_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event AI(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event AI // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CustomEvent(struct FString MainTabName, struct FString SubTabName); // Function LV-Title_Alternative.LV-Title_Alternative_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ChangedLeagueState(struct FString State); // Function LV-Title_Alternative.LV-Title_Alternative_C.ChangedLeagueState // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InternalLeagueState(struct FString State); // Function LV-Title_Alternative.LV-Title_Alternative_C.InternalLeagueState // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Event Shop(); // Function LV-Title_Alternative.LV-Title_Alternative_C.Event Shop // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(float DeltaSeconds); // Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveDestroyed(); // Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function LV-Title_Alternative.LV-Title_Alternative_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void EqueipWeapon(struct TArray<struct FName>& WeaponNames, struct TArray<int32_t>& SlotIndexs, struct FString Page); // Function LV-Title_Alternative.LV-Title_Alternative_C.EqueipWeapon // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_LV-Title_Alternative(int32_t EntryPoint); // Function LV-Title_Alternative.LV-Title_Alternative_C.ExecuteUbergraph_LV-Title_Alternative // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

