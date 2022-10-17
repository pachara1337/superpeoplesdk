// Class AIModule.BTNode
// Size: 0x2cffd560 (Inherited: 0x2cff6930)
struct UBTNode : UObject {
	struct FString NodeName; // 0x38(0x10)
	struct UBehaviorTree* TreeAsset; // 0x48(0x08)
	struct UBTCompositeNode* ParentNode; // 0x50(0x08)
	char pad_2CFF6950[0x6c10]; // 0x2cff6950(0x6c10)
};

// Class AIModule.BTTaskNode
// Size: 0x2cff6a78 (Inherited: 0x2cffd560)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x60(0x10)
	char bIgnoreRestartSelf : 1; // 0x70(0x01)
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a78)
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x30)
};

// Class AIModule.AIController
// Size: 0x2cff6a38 (Inherited: 0x2d0036a8)
struct AAIController : AController {
	char bStartAILogicOnPossess : 1; // 0x3e0(0x01)
	char bStopAILogicOnUnposses : 1; // 0x3e0(0x01)
	char bLOSflag : 1; // 0x3e0(0x01)
	char bSkipExtraLOSChecks : 1; // 0x3e0(0x01)
	char bAllowStrafe : 1; // 0x3e0(0x01)
	char bWantsPlayerState : 1; // 0x3e0(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x3e0(0x01)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x3e8(0x08)
	struct UBrainComponent* BrainComponent; // 0x3f0(0x08)
	struct UAIPerceptionComponent* PerceptionComponent; // 0x3f8(0x08)
	struct UPawnActionsComponent* ActionsComp; // 0x400(0x08)
	struct UBlackboardComponent* Blackboard; // 0x408(0x08)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x410(0x08)
	struct UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x418(0x08)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x420(0x10)

	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent); // Function AIModule.AIController.UseBlackboard // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x48801d0
	void UnclaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource // (Final|Native|Public|BlueprintCallable) // @ game+0x4880040
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x487fb70
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection // (Final|Native|Public|BlueprintCallable) // @ game+0x487fae0
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree // (Native|Public|BlueprintCallable) // @ game+0x487f8f0
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // (Native|Public) // @ game+0x487f680
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x487f410
	enum class EPathFollowingRequestResult MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor // (Final|Native|Public|BlueprintCallable) // @ game+0x487f1f0
	void K2_SetFocus(struct AActor* NewFocus); // Function AIModule.AIController.K2_SetFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x487f060
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x487efd0
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x487efb0
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x487edd0
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x487ec10
	enum class EPathFollowingStatus GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x487ebe0
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x487eab0
	struct AActor* GetFocusActor(); // Function AIModule.AIController.GetFocusActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x487ea80
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Function AIModule.AIController.GetFocalPointOnActor // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x487e9d0
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x487e990
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x487e680
	void ClaimTaskResource(struct UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.ClaimTaskResource // (Final|Native|Public|BlueprintCallable) // @ game+0x487e3a0
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x2cff6a68 (Inherited: 0x2cffd560)
struct UBTAuxiliaryNode : UBTNode {
};

// Class AIModule.BTService
// Size: 0x2cff6a78 (Inherited: 0x2cff6a68)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x68(0x04)
	float RandomDeviation; // 0x6c(0x04)
	char bCallTickOnSearchStart : 1; // 0x70(0x01)
	char bRestartTimerOnEachActivation : 1; // 0x70(0x01)
	char pad_2CFF6A70_2 : 6; // 0x2cff6a70(0x01)
	char pad_2CFF6A71[0x7]; // 0x2cff6a71(0x07)
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_2CFF6950[0x120]; // 0x2cff6950(0x120)

	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // (Final|Native|Public) // @ game+0x487f750
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x48800c0
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x487fe30
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x487fd70
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x487fcc0
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x487f990
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x487f0e0
	bool IsValidAIRotation(struct FRotator Rotation); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x487ef20
	bool IsValidAILocation(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x487ee90
	bool IsValidAIDirection(struct FVector DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x487ee00
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x487e820
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x487e7a0
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.GetAIController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x487e600
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x487e420
};

// Class AIModule.AIDataProvider
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UAIDataProvider : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AIModule.AIDataProvider_QueryParams
// Size: 0x2cff6a48 (Inherited: 0x2cff6a30)
struct UAIDataProvider_QueryParams : UAIDataProvider {
	struct FName ParamName; // 0x30(0x0c)
	float FloatValue; // 0x3c(0x04)
	int32_t IntValue; // 0x40(0x04)
	bool BoolValue; // 0x44(0x01)
	char pad_2CFF6A45[0x3]; // 0x2cff6a45(0x03)
};

// Class AIModule.AIDataProvider_Random
// Size: 0x2cff6a58 (Inherited: 0x2cff6a48)
struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x48(0x04)
	float MAX; // 0x4c(0x04)
	char bInteger : 1; // 0x50(0x01)
	char pad_2CFF6A50_1 : 7; // 0x2cff6a50(0x01)
	char pad_2CFF6A51[0x7]; // 0x2cff6a51(0x07)
};

// Class AIModule.AIHotSpotManager
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UAIHotSpotManager : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AIModule.AIPerceptionComponent
// Size: 0x2cff6a88 (Inherited: 0x2cff6cb8)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct UAISenseConfig*> SensesConfig; // 0xb8(0x10)
	struct UAISense* DominantSense; // 0xc8(0x08)
	struct AAIController* AIOwner; // 0xe0(0x08)
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x168(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x178(0x10)

	void SetSenseEnabled(struct UAISense* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x487fbf0
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x487f8d0
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // (Final|Native|Public) // @ game+0x487f810
	void GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x487ed20
	void GetPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x487ec30
	void GetKnownPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x487eaf0
	void GetCurrentlyPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x487e8a0
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x487e6a0
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll // (Final|Native|Public|BlueprintCallable) // @ game+0x487e5e0
};

// Class AIModule.AIPerceptionListenerInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAIPerceptionListenerInterface : UInterface {
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x2cff6ad0 (Inherited: 0x2cff6cb8)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xb8(0x01)
	struct TArray<struct UAISense*> RegisterAsSourceForSenses; // 0xc0(0x10)

	void UnregisterFromSense(struct UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense // (Final|Native|Public|BlueprintCallable) // @ game+0x4884b60
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x4884b40
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x4884440
	void RegisterForSense(struct UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense // (Final|Native|Public|BlueprintCallable) // @ game+0x48842d0
};

// Class AIModule.AISubsystem
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UAISubsystem : UObject {
	struct UAISystem* AISystem; // 0x38(0x08)
	char pad_2CFF6938[0x108]; // 0x2cff6938(0x108)
};

// Class AIModule.AIPerceptionSystem
// Size: 0x2cff6a40 (Inherited: 0x2cff6a40)
struct UAIPerceptionSystem : UAISubsystem {
	struct TArray<struct UAISense*> Senses; // 0x90(0x10)
	float PerceptionAgingRate; // 0xa0(0x04)

	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4884890
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x4884630
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4884350
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // (Final|Native|Protected) // @ game+0x4884210
	struct UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus& Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x48840d0
};

// Class AIModule.AIResourceInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AIResource_Movement
// Size: 0x2cff6a40 (Inherited: 0x2cff6a40)
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
// Size: 0x2cff6a40 (Inherited: 0x2cff6a40)
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISense
// Size: 0x2cff6a90 (Inherited: 0x2cff6930)
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x30(0x04)
	enum class EAISenseNotifyType NotifyType; // 0x34(0x01)
	char bWantsNewPawnNotification : 1; // 0x38(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x38(0x01)
	struct UAIPerceptionSystem* PerceptionSystemInstance; // 0x40(0x08)
	char pad_2CFF693D_2 : 6; // 0x2cff693d(0x01)
	char pad_2CFF693E[0x152]; // 0x2cff693e(0x152)
};

// Class AIModule.AISense_Blueprint
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a90)
struct UAISense_Blueprint : UAISense {
	struct UUserDefinedStruct* ListenerDataType; // 0x90(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x98(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // 0xa8(0x10)

	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2bad3b0
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void K2_OnNewPawn(struct APawn* NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4884020
	void GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4883f70
};

// Class AIModule.AISense_Damage
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a90)
struct UAISense_Damage : UAISense {
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x90(0x10)

	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation); // Function AIModule.AISense_Damage.ReportDamageEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4884460
};

// Class AIModule.AISense_Hearing
// Size: 0x2cff6af8 (Inherited: 0x2cff6a90)
struct UAISense_Hearing : UAISense {
	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x90(0x10)
	float SpeedOfSoundSq; // 0xa0(0x04)
	char pad_2CFF6AA4[0x54]; // 0x2cff6aa4(0x54)

	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x48846b0
};

// Class AIModule.AISense_Prediction
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a90)
struct UAISense_Prediction : UAISense {
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x90(0x10)

	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4884a40
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4884940
};

// Class AIModule.AISense_Sight
// Size: 0x2cff6a80 (Inherited: 0x2cff6a90)
struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; // 0x158(0x04)
	int32_t MinQueriesPerTimeSliceCheck; // 0x15c(0x04)
	double MaxTimeSlicePerTick; // 0x160(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x168(0x04)
	float MaxQueryImportance; // 0x170(0x04)
	float SightLimitQueryImportance; // 0x174(0x04)
};

// Class AIModule.AISense_Team
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a90)
struct UAISense_Team : UAISense {
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x90(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a90)
struct UAISense_Touch : UAISense {
	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x90(0x10)
};

// Class AIModule.AISenseBlueprintListener
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAISenseBlueprintListener : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UAISenseConfig : UObject {
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
	char pad_2CFF6938_1 : 7; // 0x2cff6938(0x01)
	char pad_2CFF6939[0x117]; // 0x2cff6939(0x117)
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x2cff6a58 (Inherited: 0x2cff6a50)
struct UAISenseConfig_Blueprint : UAISenseConfig {
	struct UAISense_Blueprint* Implementation; // 0x50(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x2cff6a58 (Inherited: 0x2cff6a50)
struct UAISenseConfig_Damage : UAISenseConfig {
	struct UAISense_Damage* Implementation; // 0x50(0x08)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x2cff6a68 (Inherited: 0x2cff6a50)
struct UAISenseConfig_Hearing : UAISenseConfig {
	struct UAISense_Hearing* Implementation; // 0x50(0x08)
	float HearingRange; // 0x58(0x04)
	float LoSHearingRange; // 0x5c(0x04)
	char bUseLoSHearing : 1; // 0x60(0x01)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x64(0x04)
	char pad_2CFF6A64_1 : 7; // 0x2cff6a64(0x01)
	char pad_2CFF6A65[0x3]; // 0x2cff6a65(0x03)
};

// Class AIModule.AISenseConfig_Prediction
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UAISenseConfig_Prediction : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x2cff6a70 (Inherited: 0x2cff6a50)
struct UAISenseConfig_Sight : UAISenseConfig {
	struct UAISense_Sight* Implementation; // 0x50(0x08)
	float SightRadius; // 0x58(0x04)
	float LoseSightRadius; // 0x5c(0x04)
	float PeripheralVisionAngleDegrees; // 0x60(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x64(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x68(0x04)
	char pad_2CFF6A6C[0x4]; // 0x2cff6a6c(0x04)
};

// Class AIModule.AISenseConfig_Team
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UAISenseConfig_Team : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Touch
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UAISenseConfig_Touch : UAISenseConfig {
};

// Class AIModule.AISenseEvent
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UAISenseEvent : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AIModule.AISenseEvent_Damage
// Size: 0x2cff6a60 (Inherited: 0x2cff6a30)
struct UAISenseEvent_Damage : UAISenseEvent {
	struct FAIDamageEvent Event; // 0x30(0x30)
};

// Class AIModule.AISenseEvent_Hearing
// Size: 0x2cff6a60 (Inherited: 0x2cff6a30)
struct UAISenseEvent_Hearing : UAISenseEvent {
	struct FAINoiseEvent Event; // 0x30(0x30)
};

// Class AIModule.AISightTargetInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAISightTargetInterface : UInterface {
};

// Class AIModule.AISystem
// Size: 0x2cff6a58 (Inherited: 0x2cff6a70)
struct UAISystem : UAISystemBase {
	struct FSoftClassPath PerceptionSystemClassName; // 0x70(0x20)
	struct FSoftClassPath HotSpotManagerClassName; // 0x90(0x20)
	float AcceptanceRadius; // 0xb0(0x04)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0xb4(0x04)
	float PathfollowingNavLinkAcceptanceRadius; // 0xb8(0x04)
	bool bFinishMoveOnGoalOverlap; // 0xbc(0x01)
	bool bAcceptPartialPaths; // 0xbd(0x01)
	bool bAllowStrafing; // 0xbe(0x01)
	bool bEnableBTAITasks; // 0xbf(0x01)
	bool bAllowControllersAsEQSQuerier; // 0xc0(0x01)
	bool bEnableDebuggerPlugin; // 0xc1(0x01)
	bool bForgetStaleActors; // 0xc2(0x01)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0xc3(0x01)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0xc8(0x08)
	struct UEnvQueryManager* EnvironmentQueryManager; // 0xd0(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0xd8(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xe0(0x10)
	struct UAIHotSpotManager* HotSpotManager; // 0xf0(0x08)
	struct UNavLocalGridManager* NavLocalGrids; // 0xf8(0x08)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // (Exec|Native|Public) // @ game+0x3731a40
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // (Exec|Native|Public) // @ game+0x3d45240
};

// Class AIModule.AITask
// Size: 0x2cff6a78 (Inherited: 0x2cff6a70)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x70(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size: 0x2cff6b18 (Inherited: 0x2cff6a78)
struct UAITask_MoveTo : UAITask {
	struct FMulticastInlineDelegate OnRequestFailed; // 0x78(0x10)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x88(0x10)
	struct FAIMoveRequest MoveRequest; // 0x98(0x40)
	char pad_2CFF6AD8[0x40]; // 0x2cff6ad8(0x40)

	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4888850
};

// Class AIModule.AITask_RunEQS
// Size: 0x2cff6af8 (Inherited: 0x2cff6a78)
struct UAITask_RunEQS : UAITask {
	char pad_2CFF6A78[0x80]; // 0x2cff6a78(0x80)

	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Function AIModule.AITask_RunEQS.RunEQS // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4889790
};

// Class AIModule.BehaviorTree
// Size: 0x2cff6a70 (Inherited: 0x2cff6930)
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode; // 0x38(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x40(0x08)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x48(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x58(0x10)
	char pad_2CFF6960[0x110]; // 0x2cff6960(0x110)
};

// Class AIModule.BrainComponent
// Size: 0x2cff6d18 (Inherited: 0x2cff6cb8)
struct UBrainComponent : UActorComponent {
	struct UBlackboardComponent* BlackboardComp; // 0xc0(0x08)
	struct AAIController* AIOwner; // 0xc8(0x08)
	char pad_2CFF6CC8[0x50]; // 0x2cff6cc8(0x50)

	void StopLogic(struct FString reason); // Function AIModule.BrainComponent.StopLogic // (Native|Public|BlueprintCallable) // @ game+0x488f950
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic // (Native|Public|BlueprintCallable) // @ game+0x23100e0
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // (Native|Public|BlueprintCallable) // @ game+0x221cae0
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x488ec10
	bool IsPaused(); // Function AIModule.BrainComponent.IsPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x488ebe0
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x2cff6a78 (Inherited: 0x2cff6d18)
struct UBehaviorTreeComponent : UBrainComponent {
	struct TArray<struct UBTNode*> NodeInstances; // 0x138(0x10)
	struct UBehaviorTree* DefaultBehaviorTreeAsset; // 0x270(0x08)

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree // (Native|Public|BlueprintCallable) // @ game+0x4889850
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4888ee0
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x4888b20
};

// Class AIModule.BehaviorTreeManager
// Size: 0x2cff6a58 (Inherited: 0x2cff6930)
struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x30(0x04)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x38(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // 0x48(0x10)
	char pad_2CFF6954[0x104]; // 0x2cff6954(0x104)
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UBehaviorTreeTypes : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AIModule.BlackboardAssetProvider
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UBlackboardAssetProvider : UInterface {

	struct UBlackboardData* GetBlackboardAsset(); // Function AIModule.BlackboardAssetProvider.GetBlackboardAsset // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23a3e30
};

// Class AIModule.BlackboardComponent
// Size: 0x2cff6ab8 (Inherited: 0x2cff6cb8)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* BrainComp; // 0xb8(0x08)
	struct UBlackboardData* DefaultBlackboardAsset; // 0xc0(0x08)
	struct UBlackboardData* BlackboardAsset; // 0xc8(0x08)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0xf0(0x10)

	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x488a1d0
	void SetValueAsString(struct FName& KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x488a080
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4889f90
	void SetValueAsObject(struct FName& KeyName, struct UObject* ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4889eb0
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4889db0
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4889cd0
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4889be0
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4889b00
	void SetValueAsClass(struct FName& KeyName, struct UObject* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4889a20
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4889930
	bool IsVectorValueSet(struct FName& KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x48896e0
	struct FVector GetValueAsVector(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4889620
	struct FString GetValueAsString(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4889530
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4889470
	struct UObject* GetValueAsObject(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x48893c0
	struct FName GetValueAsName(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4889300
	int32_t GetValueAsInt(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4889250
	float GetValueAsFloat(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x48891a0
	char GetValueAsEnum(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x48890f0
	struct UObject* GetValueAsClass(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4889040
	bool GetValueAsBool(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4888f90
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4888de0
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4888ce0
	void ClearValue(struct FName& KeyName); // Function AIModule.BlackboardComponent.ClearValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4888c40
};

// Class AIModule.BlackboardData
// Size: 0x2cff6a58 (Inherited: 0x2cff6a38)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x38(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x40(0x10)
	char bHasSynchronizedKeys : 1; // 0x50(0x01)
	char pad_2CFF6A50_1 : 7; // 0x2cff6a50(0x01)
	char pad_2CFF6A51[0x7]; // 0x2cff6a51(0x07)
};

// Class AIModule.BlackboardKeyType
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UBlackboardKeyType : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x2cff6a40 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	struct UObject* BaseClass; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x2cff6a58 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x38(0x08)
	struct FString EnumName; // 0x40(0x10)
	char bIsEnumNameValid : 1; // 0x50(0x01)
	char pad_2CFF6A50_1 : 7; // 0x2cff6a50(0x01)
	char pad_2CFF6A51[0x7]; // 0x2cff6a51(0x07)
};

// Class AIModule.BlackboardKeyType_Float
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x2cff6a50 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	struct FString EnumName; // 0x38(0x10)
	struct UEnum* EnumType; // 0x48(0x08)
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x2cff6a40 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	struct UObject* BaseClass; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x2cff6c38 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
	char pad_2CFF6A38[0x200]; // 0x2cff6a38(0x200)
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; // 0x38(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTCompositeNode
// Size: 0x2cff6a98 (Inherited: 0x2cffd560)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct FBTCompositeChild> Children; // 0x60(0x10)
	struct TArray<struct UBTService*> Services; // 0x70(0x10)
	char bApplyDecoratorScope : 1; // 0x90(0x01)
};

// Class AIModule.BTComposite_Selector
// Size: 0x2cff6a98 (Inherited: 0x2cff6a98)
struct UBTComposite_Selector : UBTCompositeNode {
};

// Class AIModule.BTComposite_Sequence
// Size: 0x2cff6a98 (Inherited: 0x2cff6a98)
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Class AIModule.BTComposite_SimpleParallel
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a98)
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	enum class EBTParallelMode FinishMode; // 0x98(0x01)
	char pad_2CFF6A99[0x7]; // 0x2cff6a99(0x07)
};

// Class AIModule.BTDecorator
// Size: 0x2cff6a70 (Inherited: 0x2cff6a68)
struct UBTDecorator : UBTAuxiliaryNode {
	char pad_2CFF6A68_0 : 7; // 0x2cff6a68(0x01)
	char bInverseCondition : 1; // 0x68(0x01)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x6c(0x01)
	char pad_2CFF6A6A[0x6]; // 0x2cff6a6a(0x06)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a70)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x30)
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0x2cff6ad0 (Inherited: 0x2cff6aa0)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0xa0(0x04)
	float FloatValue; // 0xa4(0x04)
	struct FString StringValue; // 0xa8(0x10)
	struct FString CachedDescription; // 0xb8(0x10)
	char OperationType; // 0xc8(0x01)
	enum class EBTBlackboardRestart NotifyObserver; // 0xc9(0x01)
	char pad_2CFF6ACA[0x6]; // 0x2cff6aca(0x06)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a70)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* AIOwner; // 0x70(0x08)
	struct AActor* ActorOwner; // 0x78(0x08)
	struct TArray<struct FName> ObservedKeyNames; // 0x80(0x10)
	char bShowPropertyDetails : 1; // 0xa0(0x01)
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0xa0(0x01)
	char bIsObservingBB : 1; // 0xa0(0x01)
	char pad_2CFF6A90_3 : 5; // 0x2cff6a90(0x01)
	char pad_2CFF6A91[0x17]; // 0x2cff6a91(0x17)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x488ebb0
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x488eb80
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a70)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x70(0x30)
	enum class EGameplayContainerMatchType TagsToMatch; // 0xa0(0x01)
	struct FGameplayTagContainer GameplayTags; // 0xa8(0x20)
	struct FString CachedDescription; // 0xc8(0x10)
	char pad_2CFF6AD1[0x7]; // 0x2cff6ad1(0x07)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a70)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x70(0x01)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x78(0x30)
	struct FBlackboardKeySelector BlackboardKeyB; // 0xa8(0x30)
	char pad_2CFF6AD1[0x7]; // 0x2cff6ad1(0x07)
};

// Class AIModule.BTDecorator_ConditionalLoop
// Size: 0x2cff6ad0 (Inherited: 0x2cff6ad0)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x2cff6b10 (Inherited: 0x2cff6a70)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x70(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x78(0x30)
	struct FBlackboardKeySelector ConeDirection; // 0xa8(0x30)
	struct FBlackboardKeySelector Observed; // 0xd8(0x30)
	char pad_2CFF6B04[0xc]; // 0x2cff6b04(0x0c)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x2cff6a78 (Inherited: 0x2cff6a70)
struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x70(0x04)
	char pad_2CFF6A74[0x4]; // 0x2cff6a74(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a70)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x30)
	struct FBlackboardKeySelector BlackboardKeyB; // 0xa0(0x30)
	char bUseSelf : 1; // 0xd0(0x01)
	enum class EPathExistanceQueryType PathQueryType; // 0xd4(0x01)
	struct UNavigationQueryFilter* FilterClass; // 0xd8(0x08)
	char pad_2CFF6AD9_1 : 7; // 0x2cff6ad9(0x01)
	char pad_2CFF6ADA[0x6]; // 0x2cff6ada(0x06)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_IsAtLocation
// Size: 0x2cff6af0 (Inherited: 0x2cff6aa0)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0xa0(0x04)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0xa8(0x40)
	enum class FAIDistanceType GeometricDistanceType; // 0xe8(0x01)
	char bUseParametrizedRadius : 1; // 0xec(0x01)
	char bUseNavAgentGoalLocation : 1; // 0xec(0x01)
	char bPathFindingBasedTest : 1; // 0xec(0x01)
	char pad_2CFF6AE5_3 : 5; // 0x2cff6ae5(0x01)
	char pad_2CFF6AE6[0xa]; // 0x2cff6ae6(0x0a)
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0x2cff6aa8 (Inherited: 0x2cff6aa0)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	struct UObject* TestClass; // 0xa0(0x08)
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0x2cff6ae0 (Inherited: 0x2cff6a70)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x70(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x78(0x30)
	struct FBlackboardKeySelector Observed; // 0xa8(0x30)
	char bUseSelfAsOrigin : 1; // 0xd8(0x01)
	char bUseSelfAsObserved : 1; // 0xd8(0x01)
	char pad_2CFF6AD4_2 : 6; // 0x2cff6ad4(0x01)
	char pad_2CFF6AD5[0xb]; // 0x2cff6ad5(0x0b)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x2cff6a80 (Inherited: 0x2cff6a70)
struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x70(0x04)
	bool bInfiniteLoop; // 0x74(0x01)
	float InfiniteLoopTimeoutTime; // 0x78(0x04)
	char pad_2CFF6A79[0x7]; // 0x2cff6a79(0x07)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x2cff6a70 (Inherited: 0x2cff6a70)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x2cff6a88 (Inherited: 0x2cff6a70)
struct UBTDecorator_SetTagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x70(0x0c)
	float CooldownDuration; // 0x7c(0x04)
	bool bAddToExistingDuration; // 0x80(0x01)
	char pad_2CFF6A81[0x7]; // 0x2cff6a81(0x07)
};

// Class AIModule.BTDecorator_TagCooldown
// Size: 0x2cff6a88 (Inherited: 0x2cff6a70)
struct UBTDecorator_TagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x70(0x0c)
	float CooldownDuration; // 0x7c(0x04)
	bool bAddToExistingDuration; // 0x80(0x01)
	bool bActivatesCooldown; // 0x81(0x01)
	char pad_2CFF6A82[0x6]; // 0x2cff6a82(0x06)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x2cff6a78 (Inherited: 0x2cff6a70)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x70(0x04)
	char pad_2CFF6A74[0x4]; // 0x2cff6a74(0x04)
};

// Class AIModule.BTFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x461d590
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x46fa9f0
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FVector Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x488f800
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FString Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488f660
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FRotator Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x488f510
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488f3d0
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct FName Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488f280
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, int32_t Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488f140
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, float Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488f000
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, char Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488eec0
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488ed80
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key, bool Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488ec40
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x488eb00
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnerComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x488ea80
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x488e970
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x488e820
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x488e710
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x488e610
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x488e500
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x488e400
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x488e300
	char GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x488e200
	struct UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x488e100
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x488e000
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x488df00
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488de10
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector& Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x488de10
};

// Class AIModule.BTService_BlackboardBase
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a78)
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x30)
};

// Class AIModule.BTService_BlueprintBase
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a78)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* AIOwner; // 0x78(0x08)
	struct AActor* ActorOwner; // 0x80(0x08)
	char bShowPropertyDetails : 1; // 0x98(0x01)
	char bShowEventDetails : 1; // 0x98(0x01)
	char pad_2CFF6A88_2 : 6; // 0x2cff6a88(0x01)
	char pad_2CFF6A89[0x17]; // 0x2cff6a89(0x17)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveDeactivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveActivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4892750
};

// Class AIModule.BTService_DefaultFocus
// Size: 0x2cff6ab0 (Inherited: 0x2cff6aa8)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0xa8(0x01)
	char pad_2CFF6AA9[0x7]; // 0x2cff6aa9(0x07)
};

// Class AIModule.BTService_RunEQS
// Size: 0x2cff6b08 (Inherited: 0x2cff6aa8)
struct UBTService_RunEQS : UBTService_BlackboardBase {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xa8(0x50)
	char pad_2CFF6AF8[0x10]; // 0x2cff6af8(0x10)
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a78)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* AIOwner; // 0x78(0x08)
	struct AActor* ActorOwner; // 0x80(0x08)
	struct FIntervalCountdown TickInterval; // 0x88(0x08)
	char bShowPropertyDetails : 1; // 0xa8(0x01)
	char pad_2CFF6A90_1 : 7; // 0x2cff6a90(0x01)
	char pad_2CFF6A91[0x1f]; // 0x2cff6a91(0x1f)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId // (Final|Native|Protected|BlueprintCallable) // @ game+0x4892880
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage // (Final|Native|Protected|BlueprintCallable) // @ game+0x48927e0
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x48927b0
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x4892780
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute // (Final|Native|Protected|BlueprintCallable) // @ game+0x48926c0
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort // (Final|Native|Protected|BlueprintCallable) // @ game+0x48926a0
};

// Class AIModule.BTTask_FinishWithResult
// Size: 0x2cff6a80 (Inherited: 0x2cff6a78)
struct UBTTask_FinishWithResult : UBTTaskNode {
	enum class EBTNodeResult Result; // 0x78(0x01)
	char pad_2CFF6A79[0x7]; // 0x2cff6a79(0x07)
};

// Class AIModule.BTTask_GameplayTaskBase
// Size: 0x2cff6a80 (Inherited: 0x2cff6a78)
struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x78(0x01)
	char pad_2CFF6A78_1 : 7; // 0x2cff6a78(0x01)
	char pad_2CFF6A79[0x7]; // 0x2cff6a79(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x2cff6a80 (Inherited: 0x2cff6a78)
struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x78(0x04)
	char pad_2CFF6A7C[0x4]; // 0x2cff6a7c(0x04)
};

// Class AIModule.BTTask_MoveTo
// Size: 0x2cff6ac0 (Inherited: 0x2cff6aa8)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0xa8(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xb0(0x08)
	float ObservedBlackboardValueTolerance; // 0xb8(0x04)
	char bObserveBlackboardValue : 1; // 0xbc(0x01)
	char bAllowStrafe : 1; // 0xbc(0x01)
	char bAllowPartialPath : 1; // 0xbc(0x01)
	char bTrackMovingGoal : 1; // 0xbc(0x01)
	char bProjectGoalLocation : 1; // 0xbc(0x01)
	char bReachTestIncludesAgentRadius : 1; // 0xbc(0x01)
	char bReachTestIncludesGoalRadius : 1; // 0xbc(0x01)
	char bStopOnOverlap : 1; // 0xbc(0x01)
	char bStopOnOverlapNeedsUpdate : 1; // 0xbd(0x01)
	char pad_2CFF6AB9_1 : 7; // 0x2cff6ab9(0x01)
	char pad_2CFF6ABA[0x6]; // 0x2cff6aba(0x06)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0x2cff6ac8 (Inherited: 0x2cff6ac0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc0(0x01)
	char bProjectVectorGoalToNavigation : 1; // 0xc0(0x01)
	char bUpdatedDeprecatedProperties : 1; // 0xc0(0x01)
	char pad_2CFF6AC0_3 : 5; // 0x2cff6ac0(0x01)
	char pad_2CFF6AC1[0x7]; // 0x2cff6ac1(0x07)
};

// Class AIModule.BTTask_PawnActionBase
// Size: 0x2cff6a78 (Inherited: 0x2cff6a78)
struct UBTTask_PawnActionBase : UBTTaskNode {
};

// Class AIModule.BTTask_PlayAnimation
// Size: 0x2cff6ab8 (Inherited: 0x2cff6a78)
struct UBTTask_PlayAnimation : UBTTaskNode {
	struct UAnimationAsset* AnimationToPlay; // 0x78(0x08)
	char bLooping : 1; // 0x80(0x01)
	char bNonBlocking : 1; // 0x80(0x01)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x88(0x08)
	struct USkeletalMeshComponent* CachedSkelMesh; // 0x90(0x08)
	char pad_2CFF6A90_2 : 6; // 0x2cff6a90(0x01)
	char pad_2CFF6A91[0x27]; // 0x2cff6a91(0x27)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x2cff6a80 (Inherited: 0x2cff6a78)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* SoundToPlay; // 0x78(0x08)
};

// Class AIModule.BTTask_PushPawnAction
// Size: 0x2cff6a80 (Inherited: 0x2cff6a78)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	struct UPawnAction* Action; // 0x78(0x08)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0x2cff6ab0 (Inherited: 0x2cff6aa8)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0xa8(0x04)
	char pad_2CFF6AAC[0x4]; // 0x2cff6aac(0x04)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x2cff6a80 (Inherited: 0x2cff6a78)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x78(0x08)
};

// Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x2cff6a98 (Inherited: 0x2cff6a78)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	struct FGameplayTag InjectionTag; // 0x78(0x0c)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x88(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x90(0x08)
	char pad_2CFF6A94[0x4]; // 0x2cff6a94(0x04)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x2cff6a70 (Inherited: 0x2cff6aa8)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* QueryTemplate; // 0xa8(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xb0(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xc0(0x10)
	enum class EEnvQueryRunMode RunMode; // 0xd0(0x01)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xd8(0x30)
	bool bUseBBKey; // 0x108(0x01)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x110(0x50)
};

// Class AIModule.BTTask_SetTagCooldown
// Size: 0x2cff6a90 (Inherited: 0x2cff6a78)
struct UBTTask_SetTagCooldown : UBTTaskNode {
	struct FGameplayTag CooldownTag; // 0x78(0x0c)
	bool bAddToExistingDuration; // 0x84(0x01)
	float CooldownDuration; // 0x88(0x04)
	char pad_2CFF6A89[0x7]; // 0x2cff6a89(0x07)
};

// Class AIModule.BTTask_Wait
// Size: 0x2cff6a80 (Inherited: 0x2cff6a78)
struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x78(0x04)
	float RandomDeviation; // 0x7c(0x04)
};

// Class AIModule.BTTask_WaitBlackboardTime
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a80)
struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x30)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.PathFollowingComponent
// Size: 0x2cff6a60 (Inherited: 0x2cff6cb8)
struct UPathFollowingComponent : UActorComponent {
	struct UNavMovementComponent* MovementComp; // 0xf0(0x08)
	struct ANavigationData* MyNavData; // 0x100(0x08)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // (Final|Native|Protected) // @ game+0x489ddb0
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function AIModule.PathFollowingComponent.OnActorBump // (Native|Public|HasOutParms|HasDefaults) // @ game+0x489dc20
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x489d8b0
	enum class EPathFollowingAction GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x489d880
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a60)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	struct UCharacterMovementComponent* CharacterMovement; // 0x268(0x08)
	struct FVector CrowdAgentMoveDirection; // 0x270(0x0c)
	char pad_2CFF6A74[0x2c]; // 0x2cff6a74(0x2c)

	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering // (Native|Public|BlueprintCallable) // @ game+0x4892960
};

// Class AIModule.CrowdManager
// Size: 0x2cff6af8 (Inherited: 0x2cff6a30)
struct UCrowdManager : UCrowdManagerBase {
	struct ANavigationData* MyNavData; // 0x30(0x08)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x38(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x48(0x10)
	int32_t MaxAgents; // 0x58(0x04)
	float MaxAgentRadius; // 0x5c(0x04)
	int32_t MaxAvoidedAgents; // 0x60(0x04)
	int32_t MaxAvoidedWalls; // 0x64(0x04)
	float NavmeshCheckInterval; // 0x68(0x04)
	float PathOptimizationInterval; // 0x6c(0x04)
	float SeparationDirClamp; // 0x70(0x04)
	float PathOffsetRadiusMultiplier; // 0x74(0x04)
	char pad_2CFF6A78_0 : 4; // 0x2cff6a78(0x01)
	char bResolveCollisions : 1; // 0x78(0x01)
	char pad_2CFF6A78_5 : 3; // 0x2cff6a78(0x01)
	char pad_2CFF6A79[0x7f]; // 0x2cff6a79(0x7f)
};

// Class AIModule.DetourCrowdAIController
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.EnvQuery
// Size: 0x2cff6a58 (Inherited: 0x2cff6a38)
struct UEnvQuery : UDataAsset {
	struct FName QueryName; // 0x38(0x0c)
	struct TArray<struct UEnvQueryOption*> options; // 0x48(0x10)
	char pad_2CFF6A54[0x4]; // 0x2cff6a54(0x04)
};

// Class AIModule.EnvQueryContext
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UEnvQueryContext : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x2cff6a38 (Inherited: 0x2cff6a30)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_2CFF6A30[0x8]; // 0x2cff6a30(0x08)

	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x2bad3b0
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x2bad3b0
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x2bad3b0
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x2bad3b0
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.EnvQueryDebugHelpers
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UEnvQueryDebugHelpers : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AIModule.EnvQueryNode
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x30(0x04)
	char pad_2CFF6934[0x104]; // 0x2cff6934(0x104)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x2cff6a58 (Inherited: 0x2cff6a38)
struct UEnvQueryGenerator : UEnvQueryNode {
	struct FString OptionName; // 0x38(0x10)
	struct UEnvQueryItemType* ItemType; // 0x48(0x08)
	char bAutoSortTests : 1; // 0x50(0x01)
	char pad_2CFF6A50_1 : 7; // 0x2cff6a50(0x01)
	char pad_2CFF6A51[0x7]; // 0x2cff6a51(0x07)
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0x2cff6ae8 (Inherited: 0x2cff6a58)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	struct AActor* SearchedActorClass; // 0x58(0x08)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x60(0x40)
	struct FAIDataProviderFloatValue SearchRadius; // 0xa0(0x40)
	struct UEnvQueryContext* SearchCenter; // 0xe0(0x08)
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x2cff6a88 (Inherited: 0x2cff6a58)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	struct FText GeneratorsActionDescription; // 0x58(0x18)
	struct UEnvQueryContext* Context; // 0x70(0x08)
	struct UEnvQueryItemType* GeneratedItemType; // 0x78(0x08)
	char pad_2CFF6A80[0x8]; // 0x2cff6a80(0x08)

	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4895de0
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x2bad3b0
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector // (Final|Native|Public|HasDefaults|BlueprintCallable|Const) // @ game+0x4895cc0
	void AddGeneratedActor(struct AActor* GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4895c40
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x2cff6a78 (Inherited: 0x2cff6a58)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x58(0x10)
	char bAllowDifferentItemTypes : 1; // 0x68(0x01)
	char bHasMatchingItemType : 1; // 0x68(0x01)
	struct UEnvQueryItemType* ForcedItemType; // 0x70(0x08)
	char pad_2CFF6A70_2 : 6; // 0x2cff6a70(0x01)
	char pad_2CFF6A71[0x7]; // 0x2cff6a71(0x07)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x2cff6a88 (Inherited: 0x2cff6a58)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData ProjectionData; // 0x58(0x30)
};

// Class AIModule.EnvQueryGenerator_Cone
// Size: 0x2cff6a98 (Inherited: 0x2cff6a88)
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue AlignedPointsDistance; // 0x88(0x40)
	struct FAIDataProviderFloatValue ConeDegrees; // 0xc8(0x40)
	struct FAIDataProviderFloatValue AngleStep; // 0x108(0x40)
	struct FAIDataProviderFloatValue Range; // 0x148(0x40)
	struct UEnvQueryContext* CenterActor; // 0x188(0x08)
	char bIncludeContextLocation : 1; // 0x190(0x01)
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x2cff6a60 (Inherited: 0x2cff6a58)
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	struct UEnvQueryContext* QueryContext; // 0x58(0x08)
};

// Class AIModule.EnvQueryGenerator_Donut
// Size: 0x2cff6b00 (Inherited: 0x2cff6a88)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x88(0x40)
	struct FAIDataProviderFloatValue OuterRadius; // 0xc8(0x40)
	struct FAIDataProviderIntValue NumberOfRings; // 0x108(0x40)
	struct FAIDataProviderIntValue PointsPerRing; // 0x148(0x40)
	struct FEnvDirection ArcDirection; // 0x188(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x1a8(0x40)
	bool bUseSpiralPattern; // 0x1e8(0x01)
	struct UEnvQueryContext* Center; // 0x1f0(0x08)
	char bDefineArc : 1; // 0x1f8(0x01)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x2cff6a40 (Inherited: 0x2cff6a88)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue CircleRadius; // 0x88(0x40)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc8(0x40)
	struct FAIDataProviderIntValue NumberOfPoints; // 0x108(0x40)
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x148(0x01)
	struct FEnvDirection ArcDirection; // 0x150(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x170(0x40)
	float AngleRadians; // 0x1b0(0x04)
	struct UEnvQueryContext* CircleCenter; // 0x1b8(0x08)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x1c0(0x01)
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1c8(0x40)
	struct FEnvTraceData TraceData; // 0x208(0x30)
	char bDefineArc : 1; // 0x238(0x01)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0x2cff6b10 (Inherited: 0x2cff6a88)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x88(0x40)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc8(0x40)
	struct UEnvQueryContext* GenerateAround; // 0x108(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x2cff6a98 (Inherited: 0x2cff6b10)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue PathToItem; // 0x110(0x40)
	struct UNavigationQueryFilter* NavigationFilter; // 0x150(0x08)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x158(0x40)
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x2cff6a80 (Inherited: 0x2cff6930)
struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; // 0x38(0x04)
	struct UEnvQueryItemType* ItemType; // 0x60(0x08)
	int32_t OptionIndex; // 0x68(0x04)
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x70(0x10)
	char pad_2CFF6950[0x130]; // 0x2cff6950(0x130)

	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam // (Final|Native|Public|BlueprintCallable) // @ game+0x4896210
	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4896010
	struct TArray<struct AActor*> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4895f90
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x4895ed0
	bool GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x4895e10
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4895d50
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
};

// Class AIModule.EnvQueryItemType
// Size: 0x2cff6a38 (Inherited: 0x2cff6930)
struct UEnvQueryItemType : UObject {
	char pad_2CFF6930[0x108]; // 0x2cff6930(0x108)
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryManager
// Size: 0x2cff6a48 (Inherited: 0x2cff6a40)
struct UEnvQueryManager : UAISubsystem {
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xb0(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts; // 0xc0(0x10)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xd0(0x10)
	float MaxAllowedTestingTime; // 0x134(0x04)
	bool bTestQueriesUsingBreadth; // 0x138(0x01)
	int32_t QueryCountWarningThreshold; // 0x13c(0x04)
	double QueryCountWarningInterval; // 0x140(0x08)

	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4896090
};

// Class AIModule.EnvQueryOption
// Size: 0x2cff6a48 (Inherited: 0x2cff6930)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x30(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x38(0x10)
	char pad_2CFF6948[0x100]; // 0x2cff6948(0x100)
};

// Class AIModule.EnvQueryTest
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x38(0x04)
	enum class EEnvTestPurpose TestPurpose; // 0x3c(0x01)
	struct FString TestComment; // 0x40(0x10)
	enum class EEnvTestFilterOperator MultipleContextFilterOp; // 0x50(0x01)
	enum class EEnvTestScoreOperator MultipleContextScoreOp; // 0x51(0x01)
	enum class EEnvTestFilterType FilterType; // 0x52(0x01)
	struct FAIDataProviderBoolValue BoolValue; // 0x58(0x40)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x98(0x40)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xd8(0x40)
	enum class EEnvTestScoreEquation ScoringEquation; // 0x119(0x01)
	enum class EEnvQueryTestClamping ClampMinType; // 0x11a(0x01)
	enum class EEnvQueryTestClamping ClampMaxType; // 0x11b(0x01)
	enum class EEQSNormalizationType NormalizationType; // 0x11c(0x01)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x120(0x40)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x160(0x40)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x1a0(0x40)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1e0(0x40)
	bool bDefineReferenceValue; // 0x220(0x01)
	char bWorkOnFloatValues : 1; // 0x230(0x01)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x2cff6a48 (Inherited: 0x2cff6a38)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class EEnvTestDistance TestMode; // 0x238(0x01)
	struct UEnvQueryContext* DistanceTo; // 0x240(0x08)
	char pad_2CFF6A41[0x7]; // 0x2cff6a41(0x07)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x2cff6a80 (Inherited: 0x2cff6a38)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection LineA; // 0x238(0x20)
	struct FEnvDirection LineB; // 0x258(0x20)
	enum class EEnvTestDot TestMode; // 0x278(0x01)
	bool bAbsoluteValue; // 0x279(0x01)
	char pad_2CFF6A7A[0x6]; // 0x2cff6a7a(0x06)
};

// Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x2cff6aa8 (Inherited: 0x2cff6a38)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	struct FGameplayTagQuery TagQueryToMatch; // 0x238(0x48)
	bool bUpdatedToUseQuery; // 0x280(0x01)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x281(0x01)
	struct FGameplayTagContainer GameplayTags; // 0x288(0x20)
	char pad_2CFF6AA2[0x6]; // 0x2cff6aa2(0x06)
};

// Class AIModule.EnvQueryTest_Overlap
// Size: 0x2cff6a58 (Inherited: 0x2cff6a38)
struct UEnvQueryTest_Overlap : UEnvQueryTest {
	struct FEnvOverlapData OverlapData; // 0x238(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x2cff6cd0 (Inherited: 0x2cff6a38)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding TestMode; // 0x238(0x01)
	struct UEnvQueryContext* Context; // 0x240(0x08)
	struct FAIDataProviderBoolValue PathFromContext; // 0x248(0x40)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x288(0x40)
	struct UNavigationQueryFilter* FilterClass; // 0x2c8(0x08)
	char pad_2CFF6AC9[0x207]; // 0x2cff6ac9(0x207)
};

// Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x2cff6b10 (Inherited: 0x2cff6cd0)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x2d0(0x40)
};

// Class AIModule.EnvQueryTest_Project
// Size: 0x2cff6a68 (Inherited: 0x2cff6a38)
struct UEnvQueryTest_Project : UEnvQueryTest {
	struct FEnvTraceData ProjectionData; // 0x238(0x30)
};

// Class AIModule.EnvQueryTest_Random
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct UEnvQueryTest_Random : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x2cff6a30 (Inherited: 0x2cff6a38)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x238(0x30)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x268(0x40)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x2a8(0x40)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x2e8(0x40)
	struct UEnvQueryContext* Context; // 0x328(0x08)
};

// Class AIModule.EnvQueryTest_Volume
// Size: 0x2cff6a50 (Inherited: 0x2cff6a38)
struct UEnvQueryTest_Volume : UEnvQueryTest {
	struct UEnvQueryContext* VolumeContext; // 0x238(0x08)
	struct AVolume* VolumeClass; // 0x240(0x08)
	char bDoComplexVolumeTest : 1; // 0x248(0x01)
	char pad_2CFF6A48_1 : 7; // 0x2cff6a48(0x01)
	char pad_2CFF6A49[0x7]; // 0x2cff6a49(0x07)
};

// Class AIModule.EnvQueryTypes
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UEnvQueryTypes : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.EQSRenderingComponent
// Size: 0x2cff6b00 (Inherited: 0x2cffdfc0)
struct UEQSRenderingComponent : UPrimitiveComponent {
};

// Class AIModule.EQSTestingPawn
// Size: 0x2cff6a80 (Inherited: 0x2cff6ae0)
struct AEQSTestingPawn : ACharacter {
	struct UEnvQuery* QueryTemplate; // 0x5e0(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x5e8(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x5f8(0x10)
	float TimeLimitPerStep; // 0x608(0x04)
	int32_t StepToDebugDraw; // 0x60c(0x04)
	enum class EEnvQueryHightlightMode HighlightMode; // 0x610(0x01)
	char bDrawLabels : 1; // 0x614(0x01)
	char bDrawFailedItems : 1; // 0x614(0x01)
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x614(0x01)
	char bShouldBeVisibleInGame : 1; // 0x614(0x01)
	char bTickDuringGame : 1; // 0x614(0x01)
	enum class EEnvQueryRunMode QueryingMode; // 0x618(0x01)
	struct FNavAgentProperties NavAgentProperties; // 0x620(0x38)
};

// Class AIModule.GenericTeamAgentInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UGenericTeamAgentInterface : UInterface {
};

// Class AIModule.GridPathAIController
// Size: 0x2cff6a38 (Inherited: 0x2cff6a38)
struct AGridPathAIController : AAIController {
};

// Class AIModule.GridPathFollowingComponent
// Size: 0x2cff6a90 (Inherited: 0x2cff6a60)
struct UGridPathFollowingComponent : UPathFollowingComponent {
	struct UNavLocalGridManager* GridManager; // 0x260(0x08)
	char pad_2CFF6A68[0x28]; // 0x2cff6a68(0x28)
};

// Class AIModule.NavFilter_AIControllerDefault
// Size: 0x2cff6a50 (Inherited: 0x2cff6a50)
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter {
};

// Class AIModule.NavLinkProxy
// Size: 0x2cff6a58 (Inherited: 0x2cff6b08)
struct ANavLinkProxy : AActor {
	struct TArray<struct FNavigationLink> PointLinks; // 0x318(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x328(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x338(0x08)
	bool bSmartLinkIsRelevant; // 0x340(0x01)
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x348(0x10)

	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x489b7f0
	void ResumePathFollowing(struct AActor* Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing // (Final|Native|Public|BlueprintCallable) // @ game+0x489b6a0
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x2bad3b0
	bool IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x489b580
	bool HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x489b550
};

// Class AIModule.NavLocalGridManager
// Size: 0x2cff6a60 (Inherited: 0x2cff6930)
struct UNavLocalGridManager : UObject {
	char pad_2CFF6930[0x130]; // 0x2cff6930(0x130)

	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x489b720
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x489b5b0
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct FVector>& PathPoints); // Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x489b3c0
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x489b1f0
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x489b040
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x489ae40
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x489ac20
};

// Class AIModule.PathFollowingManager
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UPathFollowingManager : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

// Class AIModule.PawnAction
// Size: 0x2cff6aa0 (Inherited: 0x2cff6930)
struct UPawnAction : UObject {
	struct UPawnAction* ChildAction; // 0x30(0x08)
	struct UPawnAction* ParentAction; // 0x38(0x08)
	struct UPawnActionsComponent* OwnerComponent; // 0x40(0x08)
	struct UObject* Instigator; // 0x48(0x08)
	struct UBrainComponent* BrainComp; // 0x50(0x08)
	char bAllowNewSameClassInstance : 1; // 0x88(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0x88(0x01)
	char bShouldPauseMovement : 1; // 0x88(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0x88(0x01)
	char pad_2CFF6958_4 : 4; // 0x2cff6958(0x01)
	char pad_2CFF6959[0x147]; // 0x2cff6959(0x147)

	enum class EAIRequestPriority GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x489d860
	void Finish(enum class EPawnActionResult WithResult); // Function AIModule.PawnAction.Finish // (Native|Protected|BlueprintCallable) // @ game+0x3bf17b0
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, struct UPawnAction* ActionClass); // Function AIModule.PawnAction.CreateActionInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x489d7a0
};

// Class AIModule.PawnAction_BlueprintBase
// Size: 0x2cff6aa0 (Inherited: 0x2cff6aa0)
struct UPawnAction_BlueprintBase : UPawnAction {

	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ActionStart(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionStart // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ActionResume(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionResume // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ActionPause(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionPause // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ActionFinished(struct APawn* ControlledPawn, enum class EPawnActionResult WithResult); // Function AIModule.PawnAction_BlueprintBase.ActionFinished // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
};

// Class AIModule.PawnAction_Move
// Size: 0x2cff6af0 (Inherited: 0x2cff6aa0)
struct UPawnAction_Move : UPawnAction {
	struct AActor* GoalActor; // 0xa0(0x08)
	struct FVector GoalLocation; // 0xa8(0x0c)
	float AcceptableRadius; // 0xb4(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0xb8(0x08)
	char bAllowStrafe : 1; // 0xc0(0x01)
	char bFinishOnOverlap : 1; // 0xc0(0x01)
	char bUsePathfinding : 1; // 0xc0(0x01)
	char bAllowPartialPath : 1; // 0xc0(0x01)
	char bProjectGoalToNavigation : 1; // 0xc0(0x01)
	char bUpdatePathToGoal : 1; // 0xc0(0x01)
	char bAbortChildActionOnPathChange : 1; // 0xc0(0x01)
	char pad_2CFF6AC0_7 : 1; // 0x2cff6ac0(0x01)
	char pad_2CFF6AC1[0x2f]; // 0x2cff6ac1(0x2f)
};

// Class AIModule.PawnAction_Repeat
// Size: 0x2cff6ac0 (Inherited: 0x2cff6aa0)
struct UPawnAction_Repeat : UPawnAction {
	struct UPawnAction* ActionToRepeat; // 0xa0(0x08)
	struct UPawnAction* RecentActionCopy; // 0xa8(0x08)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0(0x01)
	char pad_2CFF6AB1[0xf]; // 0x2cff6ab1(0x0f)
};

// Class AIModule.PawnAction_Sequence
// Size: 0x2cff6ac8 (Inherited: 0x2cff6aa0)
struct UPawnAction_Sequence : UPawnAction {
	struct TArray<struct UPawnAction*> ActionSequence; // 0xa0(0x10)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0(0x01)
	struct UPawnAction* RecentActionCopy; // 0xb8(0x08)
	char pad_2CFF6AB9[0xf]; // 0x2cff6ab9(0x0f)
};

// Class AIModule.PawnAction_Wait
// Size: 0x2cff6ab0 (Inherited: 0x2cff6aa0)
struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0xa0(0x04)
	char pad_2CFF6AA4[0xc]; // 0x2cff6aa4(0x0c)
};

// Class AIModule.PawnActionsComponent
// Size: 0x2cff6af0 (Inherited: 0x2cff6cb8)
struct UPawnActionsComponent : UActorComponent {
	struct APawn* ControlledPawn; // 0xb8(0x08)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0xc0(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0xd0(0x10)
	struct UPawnAction* CurrentAction; // 0xe0(0x08)

	bool K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction // (Final|Native|Public|BlueprintCallable) // @ game+0x489db20
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, enum class EAIRequestPriority Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x489da30
	enum class EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction // (Final|Native|Public|BlueprintCallable) // @ game+0x489d9a0
	enum class EPawnActionAbortState K2_AbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction // (Final|Native|Public|BlueprintCallable) // @ game+0x489d910
};

// Class AIModule.PawnSensingComponent
// Size: 0x2cff6b00 (Inherited: 0x2cff6cb8)
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0xb8(0x04)
	float LOSHearingThreshold; // 0xbc(0x04)
	float SightRadius; // 0xc0(0x04)
	float SensingInterval; // 0xc4(0x04)
	float HearingMaxSoundAge; // 0xc8(0x04)
	char bEnableSensingUpdates : 1; // 0xcc(0x01)
	char bOnlySensePlayers : 1; // 0xcc(0x01)
	char bSeePawns : 1; // 0xcc(0x01)
	char bHearNoises : 1; // 0xcc(0x01)
	struct FMulticastInlineDelegate OnSeePawn; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnHearNoise; // 0xe8(0x10)
	float PeripheralVisionAngle; // 0xf8(0x04)
	float PeripheralVisionCosine; // 0xfc(0x04)

	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x489df30
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x489deb0
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x489de30
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2bad3b0
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector& Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // @ game+0x2bad3b0
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x489d8f0
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x453e580
};

// Class AIModule.VisualLoggerExtension
// Size: 0x2cff6a30 (Inherited: 0x2cff6930)
struct UVisualLoggerExtension : UObject {
	char pad_2CFF6930[0x100]; // 0x2cff6930(0x100)
};

