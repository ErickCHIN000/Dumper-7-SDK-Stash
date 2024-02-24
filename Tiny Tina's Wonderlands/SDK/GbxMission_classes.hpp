#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class GbxMission.MissionRewardData
class UMissionRewardData : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UMissionRewardData* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class GbxMission.MissionGraph
class UMissionGraph : public UObject
{
public:
	int32                                        GraphPriorityID;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GraphDisplayName;                                  // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bShowReferencedMissionDummy;                       // 0x48(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UMission>>          ReferencedMissions;                                // 0x50(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UDownloadableContentData*              DLCExpansionData;                                  // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMissionGraph* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class GbxMission.GlobalMissionGraph
class UGlobalMissionGraph : public UMissionGraph
{
public:
	uint8                                        Pad_1F2[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGlobalMissionGraph* GetDefaultObj();

};

// 0x418 (0x440 - 0x28)
// Class GbxMission.Mission
class UMission : public UObject
{
public:
	class AMissionTrackerBase*                   MissionTrackerBase;                                // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowAutomaticDebugActivation;                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxUIFormattedText                   FormattedMissionName;                              // 0x38(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGbxUIFormattedText                   PreAcceptanceSummary;                              // 0xA0(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGbxUIFormattedText                   PostAcceptanceSummary;                             // 0x108(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bImmediatelyAdvanceToFirstSet;                     // 0x170(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImmediatelyAdvanceToFirstSetIfNotInMissionLevel;  // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoPlayKickoff;                                  // 0x172(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlotCritical;                                     // 0x173(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMajorMission;                                     // 0x174(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRepeatable;                                       // 0x175(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SecondsToComplete;                                 // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFailOnTimerExpiration;                            // 0x17C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyDisplayTimer;                                 // 0x17D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionRewardData*                    RewardData;                                        // 0x180(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDependencyViewDummy;                              // 0x188(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFirstPlotMission;                               // 0x189(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFastForwardDeclinedEligible;                      // 0x18A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UMission>>        MissionDependencies;                               // 0x190(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FMissionObjectiveDependency           ObjectiveDependency;                               // 0x1A0(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class UMissionObjectiveSet*>          ObjectiveSets;                                     // 0x1F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UMissionObjective*>             Objectives;                                        // 0x208(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FMissionObjectiveChain>        ObjectiveChains;                                   // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UMissionPhase*>                 MissionPhases;                                     // 0x228(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic)
	TSubclassOf<class UChallenge>                MissionChallenge;                                  // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFailOnTravel;                                     // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionObjectiveSet*                  StartCriticalSectionSet;                           // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  StopCriticalSectionSet;                            // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGlobalMissionBlocker;                             // 0x258(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UMission>>        BlockedMissions;                                   // 0x260(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  StartBlockingSet;                                  // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  StopBlockingSet;                                   // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UMission>                RequiredMission;                                   // 0x280(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  RequiredMissionObjectiveSet;                       // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogConversation                   KickoffConversation;                               // 0x2B0(0xC)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActivityPriority;                                  // 0x2BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHidden;                                         // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxUIFormattedText                   Description;                                       // 0x2C8(0x68)(Edit, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UTravelLocationData>    TravelStation;                                     // 0x330(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bActivateMissionDialogScriptInAnyMap;              // 0x358(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UDialogScriptData>      MissionActivationDialogScript;                     // 0x360(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDialogTimeSlotReference              KickoffDialog;                                     // 0x388(0x40)(Edit, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UMission>                NextMissionInChain;                                // 0x3C8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UMissionGraph>           AssociatedMissionGraph;                            // 0x3F0(0x28)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ActivityObjectIdOverride;                          // 0x418(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CookedActivityObjectId;                            // 0x428(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2FF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMission* GetDefaultObj();

	void UpdateObjective(class UMissionObjective* Objective, class UObject* Context, uint8 Amount);
	void UnpauseObjectiveChain(class UMissionObjective* Objective);
	void ThwartObjectiveAndAdvanceObjectiveSet(class UMissionObjective* ObjectiveToThwart, class UMissionObjectiveSet* ObjectiveSet, bool bJumpToSet);
	void StopMissionTimer();
	void StartMissionTimer();
	void MissionTimerExpired();
	bool MissionRemoteEvent(class FName EventName);
	void MissionNotStarted();
	void MissionKickoff();
	bool MissionGameModeEvent(class FName EventName);
	void MissionFailed();
	void MissionCompleteLoad();
	void MissionComplete();
	void MissionActiveLoad();
	void MissionActive();
	void JumpToObjectiveSet(class UMissionObjectiveSet* ObjectiveSet, bool bIsBranchingMission);
	void GetPausableChainedObjectivesList(TArray<class UMissionObjective*>* ObjectivesList);
	void GetObjectivesList(TArray<class UMissionObjective*>* ObjectivesList);
	void GetObjectiveSetsList(TArray<class UMissionObjectiveSet*>* ObjectiveSetsList);
	int32 GetMissionRemainingSeconds();
	void FailMission();
	void EndKickoff();
	void CompleteMission();
	void ClearObjective(class UMissionObjective* Objective);
	void AdvanceObjectiveSet(class UMissionObjectiveSet* ObjectiveSet);
	void AddTimeToMission(int32 SecondsToAdd);
	void ActivateMission(class UMissionObjectiveSet* InitialObjectiveSet);
};

// 0xE8 (0x3B8 - 0x2D0)
// Class GbxMission.MissionDirectorComponent
class UMissionDirectorComponent : public USceneComponent
{
public:
	uint8                                        Pad_353[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UMission>>        Missions;                                          // 0x2E8(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_356[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMissionObjectiveSetReference> MissionEntryPoints;                                // 0x300(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGbxCondition*                         MissionDirectorEnableCondition;                    // 0x310(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxUIFormattedText                   MissionDirectorName;                               // 0x318(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionDirectorEnabled;                          // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionDirectorDisabled;                         // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionsInitialized;                             // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionDirectorComponent* GetDefaultObj();

	void IsAnyMissionAvailable(enum class EMissionAvailableResult* OutResult);
	void IsAnyMissionActive(enum class EMissionActiveResult* OutResult);
	void GetAllMissions(TArray<TSubclassOf<class UMission>>* AllMissions);
	void ClearMissions();
	void AddMission(TSubclassOf<class UMission> InMission);
	void ActivateAvailableMission();
};

// 0xB8 (0x7A8 - 0x6F0)
// Class GbxMission.MissionIconComponent
class UMissionIconComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_3D6[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         IconEnabledCondition;                              // 0x710(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WaypointRadius;                                    // 0x718(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideAreaWaypoint;                                 // 0x71C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPrimitiveComponent>       AreaComponentClassOverride;                        // 0x720(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIconRadiusDrawStyle              DrawStyle;                                         // 0x728(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       AttractParticleTemplate;                           // 0x738(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            AttractParticleTransform;                          // 0x740(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSyncAttachedParticles;                            // 0x770(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToWaypointSocket;                           // 0x771(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnIconEnabled;                                     // 0x778(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnIconDisabled;                                    // 0x788(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x798(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EF[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionIconComponent* GetDefaultObj();

	void SetIconState(enum class EMissionIconState InState);
	bool SetIconEnabledCondition(class UGbxCondition* EnabledCondition);
	void SetDisabledState(bool bDisabled);
	void OnRep_Enabled(bool bPreviouslyEnabled);
	bool IsIconEnabled();
	class UClass* GetRequiredInterface();
	bool EnabledConditionRequiresNativeClass();
};

// 0x58 (0x4B0 - 0x458)
// Class GbxMission.MissionTrackerBase
class AMissionTrackerBase : public AActor
{
public:
	UMulticastDelegateProperty_                  OnMissionStateInitialized;                         // 0x458(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FMissionProgress>              MissionList;                                       // 0x468(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UMission>                  TrackedMission;                                    // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_403[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDataValidated;                                    // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_404[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGlobalMissionGraph*                   GlobalMissionGraph;                                // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMissionTrackerBase* GetDefaultObj();

};

// 0x230 (0x6E0 - 0x4B0)
// Class GbxMission.MissionTracker
class AMissionTracker : public AMissionTrackerBase
{
public:
	class UMission*                              DebugActivatedMission;                             // 0x4B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  JumpedTooObjectiveSet;                             // 0x4B8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_430[0xD0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDefendMissionTargetData              DefendTarget;                                      // 0x590(0x10)(Net, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_433[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLevelLoadEventsIssued;                            // 0x5A1(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_436[0x7E];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IMissionObserverInterface>> AllMissionsObservers;                              // 0x620(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_439[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IMissionIconObserverInterface>> MissionIconObservers;                              // 0x638(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43D[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveMissionIconData>        ActiveIcons;                                       // 0x698(0x10)(Net, ZeroConstructor, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43F[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMissionTracker* GetDefaultObj();

	void OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int32 Amount);
	void OnRep_LevelLoadEventsIssued();
	void OnRep_ActiveIcons();
};

// 0x28 (0x1A0 - 0x178)
// Class GbxMission.PlayerMissionComponent
class UPlayerMissionComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnMissionDataChanged;                              // 0x178(0x10)(ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FMissionPlaythroughData>       MissionPlaythroughs;                               // 0x188(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class AMissionTracker*                       CachedMissionTracker;                              // 0x198(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayerMissionComponent* GetDefaultObj();

	void ServerTrackPreviousActiveMissionInList();
	void ServerTrackNextActiveMissionInList();
	void ServerSetTrackedMission(TSubclassOf<class UMission> MissionClass);
	void ClientUpdateMissionStatus(TSubclassOf<class UMission> MissionClass, enum class EMissionStatus Status);
	void ClientUpdateActiveObjectiveSet(TSubclassOf<class UMission> MissionClass, class UMissionObjectiveSet* ActiveObjectiveSet, TArray<class UMissionObjective*>& DormantObjectives);
	void ClientTrackedMissionChanged(TSubclassOf<class UMission> MissionClass);
	void ClientObjectiveUpdated(TSubclassOf<class UMission> MissionClass, class UMissionObjective* UpdatedObjective, uint32 ObjectiveBit, uint8 Amount);
	void ClientObjectiveSetCompleted(TSubclassOf<class UMission> MissionClass, class UMissionObjectiveSet* CompletedObjectiveSet);
	void ClientObjectiveCleared(TSubclassOf<class UMission> MissionClass, class UMissionObjective* ClearedObjective);
	void ClientObjectiveChainUnpaused(TSubclassOf<class UMission> MissionClass, class UMissionObjective* Objective);
	void ClientMissionTimerStopped(TSubclassOf<class UMission> MissionClass);
	void ClientMissionTimerStarted(TSubclassOf<class UMission> MissionClass);
	void ClientMissionTimerChanged(TSubclassOf<class UMission> MissionClass, float SecondsToAdd);
	void ClientMissionRegistered(TSubclassOf<class UMission> MissionClass);
	void ClientDormantObjectiveRemoved(TSubclassOf<class UMission> MissionClass, class UMissionObjective* Objective, bool bIssueActiveEvent);
	void ClientDormantObjectiveAdded(TSubclassOf<class UMission> MissionClass, class UMissionObjective* Objective);
};

// 0x8 (0x30 - 0x28)
// Class GbxMission.MissionAttributeValueResolver
class UMissionAttributeValueResolver : public UAttributeValueResolver
{
public:
	enum class EMissionValueType                 ValueToResolve;                                    // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_500[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionAttributeValueResolver* GetDefaultObj();

};

// 0x18 (0xB8 - 0xA0)
// Class GbxMission.MissionCondition_List
class UMissionCondition_List : public UGbxCondition_List
{
public:
	uint8                                        Pad_50C[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionCondition_List* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GbxMission.MissionConditionAttributeValueResolver
class UMissionConditionAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FMissionObjectiveReferenceWeak        Objective;                                         // 0x28(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	enum class EMissionObjectiveStatus           ObjectiveStatus;                                   // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIgnoreObjectiveBit;                               // 0x79(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_519[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionConditionAttributeValueResolver* GetDefaultObj();

};

// 0x20 (0x318 - 0x2F8)
// Class GbxMission.MissionDebugMenu
class UMissionDebugMenu : public UGbxDebugMenuSubmenu
{
public:
	class UMissionGraph*                         MissionGraphToUse;                                 // 0x2F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayObjectName;                                // 0x300(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_587[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMission*>                      Missions;                                          // 0x308(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMissionDebugMenu* GetDefaultObj();

	void SelectMissionGraph(class FName& MissionGraphId);
	void NotifyMissionActivationCheatStart();
	void GetObjectiveSetItemsForMission(class FName& MissionId, TArray<struct FGbxCascadingListItemData>* OutItems);
	class UMission* GetMissionWithId(class FName& MissionId);
	enum class EMissionStatus GetMissionStatus(class FName& MissionId);
	void GetItemsForMissionStatus(enum class EMissionDebugStatus Status, TArray<struct FGbxCascadingListItemData>* OutItems);
	void GetItemsForMissionGraph(TArray<struct FGbxCascadingListItemData>* OutItems);
	void CompleteMission(class FName& MissionId);
	void AdvanceToObjectiveSet(class FName& MissionId, class FName& ObjectiveSetId);
	void AdvanceMission(class FName& MissionId);
};

// 0x18 (0xA0 - 0x88)
// Class GbxMission.MissionEnableCondition
class UMissionEnableCondition : public UGbxCondition
{
public:
	uint8                                        Pad_590[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionEnableCondition* GetDefaultObj();

};

// 0x50 (0xF0 - 0xA0)
// Class GbxMission.MissionEnableConditionBreadcrumbLinkedObjective
class UMissionEnableConditionBreadcrumbLinkedObjective : public UMissionEnableCondition
{
public:
	struct FMissionObjectiveReferenceWeak        ObjectiveRef;                                      // 0xA0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMissionEnableConditionBreadcrumbLinkedObjective* GetDefaultObj();

};

// 0x28 (0xC8 - 0xA0)
// Class GbxMission.MissionEnableConditionKickoff
class UMissionEnableConditionKickoff : public UMissionEnableCondition
{
public:
	TSoftClassPtr<class UMission>                MissionClass;                                      // 0xA0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMissionEnableConditionKickoff* GetDefaultObj();

};

// 0x30 (0xD0 - 0xA0)
// Class GbxMission.MissionEnableConditionMission
class UMissionEnableConditionMission : public UMissionEnableCondition
{
public:
	TSoftClassPtr<class UMission>                MissionClass;                                      // 0xA0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionStatus                    MissionStatus;                                     // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionEnableConditionMission* GetDefaultObj();

};

// 0x28 (0xC8 - 0xA0)
// Class GbxMission.MissionEnableConditionMissionAvailable
class UMissionEnableConditionMissionAvailable : public UMissionEnableCondition
{
public:
	TSoftClassPtr<class UMission>                MissionClass;                                      // 0xA0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMissionEnableConditionMissionAvailable* GetDefaultObj();

};

// 0x58 (0xF8 - 0xA0)
// Class GbxMission.MissionEnableConditionObjective
class UMissionEnableConditionObjective : public UMissionEnableCondition
{
public:
	struct FMissionObjectiveReferenceWeak        ObjectiveRef;                                      // 0xA0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EMissionObjectiveStatus           ObjectiveStatus;                                   // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreObjectiveBit;                               // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C2[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionEnableConditionObjective* GetDefaultObj();

};

// 0x60 (0x100 - 0xA0)
// Class GbxMission.MissionEnableConditionObjectiveCount
class UMissionEnableConditionObjectiveCount : public UMissionEnableCondition
{
public:
	struct FMissionObjectiveReferenceWeak        ObjectiveRef;                                      // 0xA0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EObjectiveCountComparisonOperatorType ComparisonOperator;                                // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveProgress;                                 // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireActiveObjective;                           // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionEnableConditionObjectiveCount* GetDefaultObj();

};

// 0x50 (0xF0 - 0xA0)
// Class GbxMission.MissionEnableConditionObjectiveSet
class UMissionEnableConditionObjectiveSet : public UMissionEnableCondition
{
public:
	struct FMissionObjectiveSetReference         ObjectiveSetRef;                                   // 0xA0(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EMissionObjectiveSetStatus        ObjectiveSetStatus;                                // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionEnableConditionObjectiveSetObjectiveStatus ObjectivesStatus;                                  // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DC[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionEnableConditionObjectiveSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxMission.MissionFunctionLibrary
class UMissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMissionFunctionLibrary* GetDefaultObj();

	void UpdateMissionObjectiveRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef);
	void TrackPreviousActiveMissionInList(class UObject* WorldContextObject);
	void TrackNextActiveMissionInList(class UObject* WorldContextObject);
	void TrackActiveMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass);
	void SendMissionEventWithContext(const struct FMissionEventReference& EventRef, class UObject* WorldContextObject, class UObject* OptionalContext);
	void SendMissionEvent(class UObject* WorldContextObject, const struct FMissionEventReference& EventRef, class UObject* OptionalContext);
	TSubclassOf<class UMission> ResolveMissionSoftClassReference(TSoftClassPtr<class UMission> Mission);
	void ResetRepeatableMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass);
	void JumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission);
	class FString GetSummary_MissionObjectiveReference(struct FMissionObjectiveReference& ObjectiveReference);
	void GetSoftObjectiveSetListForMission(TSoftClassPtr<class UMission> MissionClass, TArray<TSoftObjectPtr<class UMissionObjectiveSet>>* SoftObjectiveSetList);
	int32 GetPlotMissionIndex(class UMission* MissionObj);
	void GetObjectiveSetNameListForMissionFromAssetSubclass(TSoftClassPtr<class UMission> MissionClass, TArray<class FName>* NamesList);
	void GetObjectiveSetNameListForMission(TSubclassOf<class UMission> MissionClass, TArray<class FName>* NamesList);
	void GetObjectiveSetListForMission(TSubclassOf<class UMission> MissionClass, TArray<class UMissionObjectiveSet*>* ObjectiveSetList);
	void GetObjectiveNameListForMissionFromAssetSubclass(TSoftClassPtr<class UMission> Mission, TArray<class FName>* NamesList);
	void GetObjectiveNameListForMission(TSubclassOf<class UMission> MissionClass, TArray<class FName>* NamesList);
	enum class EMissionStatus GetMissionStatus(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass);
	enum class EMissionObjectiveStatus GetMissionObjectiveStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, class UObject* OptionalContext);
	enum class EMissionObjectiveSetStatus GetMissionObjectiveSetStatusRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef);
	void GetMissionObjectiveCount(class UObject* WorldContextObject, const struct FMissionObjectiveReference& ObjectiveRef, int32* CurrentObjectiveCount, int32* TotalObjectiveCount);
	int32 GetMissionLevel(class UMission* MissionObj);
	TSubclassOf<class UMission> GetMissionClassFromObjectiveReferenceWeak(const struct FMissionObjectiveReferenceWeak& ObjectiveReference);
	TSubclassOf<class UMission> GetMissionClassFromObjectiveReference(const struct FMissionObjectiveReference& ObjectiveReference);
	class UMission* GetMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass);
	void GetEventNameListForMission(TSubclassOf<class UMission> MissionClass, TArray<class FName>* NamesList);
	TSubclassOf<class UMission> GetCurrentlyTrackedMission(class UObject* WorldContextObject);
	TSubclassOf<class UMission> GetActivePlotMission(class UObject* WorldContextObject);
	TArray<class UMission*> GetActiveMissions(class UObject* WorldContextObject);
	void FillMissionObjectiveSetRef(struct FMissionObjectiveSetReference& MissionObjectiveSetRef, TSubclassOf<class UMission>& MissionClass, class FName ObjectiveSet);
	void FillMissionObjectiveRefWeak(struct FMissionObjectiveReferenceWeak& MissionObjectiveRef, TSubclassOf<class UMission>& MissionClass, class FName Objective);
	void FillMissionObjectiveRef(struct FMissionObjectiveReference& MissionObjectiveRef, TSubclassOf<class UMission>& MissionClass, class FName Objective);
	void FillMissionEventRef(struct FMissionEventReference& MissionEventRef, TSubclassOf<class UMission>& MissionClass, class FName EventName);
	bool EqualEqual_MissionObjectiveSetReference(const struct FMissionObjectiveSetReference& A, const struct FMissionObjectiveSetReference& B);
	bool EqualEqual_MissionObjectiveReference(const struct FMissionObjectiveReference& A, const struct FMissionObjectiveReference& B);
	void DebugJumpToMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef, bool bIsBranchingMission);
	class UMission* CreateMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass);
	void CompleteMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass);
	void AdvanceToBreadcrumbObjective(class UObject* WorldContextObject, const struct FMissionObjectiveReference& BreadcrumbObjectiveRef);
	void AdvanceMissionObjectiveSetRef(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef);
	void ActivateMissionAtObjectiveSet(class UObject* WorldContextObject, const struct FMissionObjectiveSetReference& ObjectiveSetRef);
	void ActivateMission(class UObject* WorldContextObject, TSubclassOf<class UMission> MissionClass);
};

// 0x0 (0x28 - 0x28)
// Class GbxMission.MissionIconInterface
class IMissionIconInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMissionIconInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxMission.MissionIconObserverInterface
class IMissionIconObserverInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMissionIconObserverInterface* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class GbxMission.MissionLocationData
class UMissionLocationData : public UTravelLocationData
{
public:
	TSoftObjectPtr<class UTravelStationData>     DefaultStation;                                    // 0x30(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMissionLocation>              MissionLocations;                                  // 0x58(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMissionLocationData* GetDefaultObj();

	class UClass* GetRequiredInterface();
	bool EnabledConditionRequiresNativeClass();
};

// 0xB0 (0xD8 - 0x28)
// Class GbxMission.MissionObjective
class UMissionObjective : public UObject
{
public:
	uint8                                        ObjectiveCount;                                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameStatData*                         GameStat;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxUIFormattedText                   FormattedProgressMessage;                          // 0x38(0x68)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bRememberIndividualState;                          // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllOrNothing;                                     // 0xA1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearIfActiveSetNotComplete;                      // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoUpdateIfActivatedInMissionLevel;              // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvisible;                                        // 0xA4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBreadcrumb;                                       // 0xA5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBreadcrumbNoClear;                                // 0xA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBreadcrumbLinked;                                 // 0xA7(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptional;                                         // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPauseObjectiveChain;                              // 0xA9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdvanceChainOnLevelLoad;                          // 0xAA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWantsPlanetTravel;                                // 0xAB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGrantsStarterGear;                                // 0xAC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveIfAnyPlayerInVehicle;                   // 0xAD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveIfNoPlayersInVehicle;                   // 0xAE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveIfMissionVehicleNotSpawned;             // 0xAF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveIfTravelIdActive;                       // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveIfTravelIdNotActive;                    // 0xB1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveIfMissionWeaponWielded;                 // 0xB2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveIfMissionWeaponNotWielded;              // 0xB3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveIfStateStable;                          // 0xB4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActiveIfStateTransitioning;                   // 0xB5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoClearWhenNoLongerDormant;                     // 0xB6(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bObjectiveChainHead;                               // 0xB7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bObjectiveChainMember;                             // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiredForObjectiveSetAdvance;                   // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressEmptyCheckbox;                            // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideTotalObjectiveCount;                          // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_862[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionRewardData*                    OptionalRewardData;                                // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ObjectiveGuid;                                     // 0xC8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMissionObjective* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxMission.MissionObjectiveReferenceInterface
class IMissionObjectiveReferenceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMissionObjectiveReferenceInterface* GetDefaultObj();

	void GetMissionObjectiveReferences(TArray<struct FMissionObjectiveReference>* OutMissionObjectives);
};

// 0x148 (0x170 - 0x28)
// Class GbxMission.MissionObjectiveSet
class UMissionObjectiveSet : public UObject
{
public:
	TArray<class UMissionObjective*>             Objectives;                                        // 0x28(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UTravelLocationData>    StationOverride;                                   // 0x38(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMissionObjective*                     BreadcrumbLinkedObjective;                         // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjective*                     DisplayedBreadcrumbLinkedObjective;                // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  NextSet;                                           // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanCompleteMission;                               // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAdvanceToNextSet;                             // 0x79(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutOfMapWaypoints;                                // 0x7A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bContainsRequiredObjectives;                       // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bContainsClearIfNotCompleteObjectives;             // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_888[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxUIFormattedText                   DescriptionOverride;                               // 0x80(0x68)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGbxUIFormattedText                   PreAcceptanceSummaryOverride;                      // 0xE8(0x68)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGuid                                 ObjectiveSetGuid;                                  // 0x150(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ObjOrderPos;                                       // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMissionObjectiveSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxMission.MissionObjectiveSetReferenceInterface
class IMissionObjectiveSetReferenceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMissionObjectiveSetReferenceInterface* GetDefaultObj();

	void GetMissionObjectiveSetReferences(TArray<struct FMissionObjectiveSetReference>* OutMissionObjectiveSets);
};

// 0x90 (0x208 - 0x178)
// Class GbxMission.MissionObserverComponent
class UMissionObserverComponent : public UActorComponent
{
public:
	uint8                                        Pad_8C2[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UMission>>          Missions;                                          // 0x188(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bAllMissionsObserver;                              // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveBit;                                      // 0x19C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfObjectiveBits;                             // 0x1A0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableObjectiveBit;                               // 0x1A4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMissionUpdate;                                   // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionObjectiveUpdate;                          // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionObjectiveSetUpdate;                       // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionsInitialized;                             // 0x1D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FMissionObserverEvent>         ObserverEventList;                                 // 0x1E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FMissionEnableConditionEvent>  OnLoadEventList;                                   // 0x1F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMissionObserverComponent* GetDefaultObj();

	void ObserverMission(TSubclassOf<class UMission> MissionClass);
	bool GetUpdateEventObject(TArray<class UObject*>* OutMissionInitialized, TArray<class UObject*>* OutMissionUpdate, TArray<class UObject*>* OutMissionObjectiveUpdate, TArray<class UObject*>* OutMissionObjectiveSetUpdate);
};

// 0x0 (0x28 - 0x28)
// Class GbxMission.MissionObserverInterface
class IMissionObserverInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMissionObserverInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxMission.MissionObserverPlayerInterface
class IMissionObserverPlayerInterface : public IMissionObserverInterface
{
public:

	static class UClass* StaticClass();
	static class IMissionObserverPlayerInterface* GetDefaultObj();

	void ClientReceiveMissionData(struct FReplicatedMissionData& MissionData);
};

// 0x18 (0x40 - 0x28)
// Class GbxMission.MissionPhase
class UMissionPhase : public UObject
{
public:
	TArray<class UMissionObjectiveSet*>          ObjectiveSets;                                     // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, NativeAccessSpecifierPublic)
	int32                                        PhaseIndex;                                        // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ED[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMissionPhase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxMission.MissionReferenceInterface
class IMissionReferenceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMissionReferenceInterface* GetDefaultObj();

	void GetMissionClassReferences(TArray<TSubclassOf<class UMission>>* OutMissions);
	bool CheckForMissionReferenceErrors();
};

}


