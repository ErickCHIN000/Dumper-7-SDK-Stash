#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMissionEvent : uint8
{
	NotStarted_Load                = 0,
	Active_Load                    = 1,
	Complete_Load                  = 2,
	Activated                      = 3,
	Completed                      = 4,
	Failed                         = 5,
	EMissionEvent_MAX              = 6,
};

enum class EMissionObjectiveEvent : uint8
{
	Inactive_Load                  = 0,
	Active_Load                    = 1,
	Dormant_Load                   = 2,
	Complete_Load                  = 3,
	Activated                      = 4,
	Deactivated                    = 5,
	Dormant                        = 6,
	Cleared                        = 7,
	Updated                        = 8,
	Thwarted                       = 9,
	Completed                      = 10,
	EMissionObjectiveEvent_MAX     = 11,
};

enum class EMissionObjectiveSetEvent : uint8
{
	NotStarted_Load                = 0,
	Active_Load                    = 1,
	Complete_Load                  = 2,
	Activated                      = 3,
	ObjectivesChanged              = 4,
	Completed                      = 5,
	Advanced                       = 6,
	EMissionObjectiveSetEvent_MAX  = 7,
};

enum class EMissionValueType : uint8
{
	Level                          = 0,
	EMissionValueType_MAX          = 1,
};

enum class EMissionDebugStatus : uint8
{
	MDS_Ineligible                 = 0,
	MDS_Eligible                   = 1,
	MDS_DevMission                 = 2,
	MDS_Active                     = 3,
	MDS_Complete                   = 4,
	MDS_Failed                     = 5,
	MDS_MAX                        = 6,
};

enum class EMissionActiveResult : uint8
{
	MissionActive                  = 0,
	NoMissionsActive               = 1,
	EMissionActiveResult_MAX       = 2,
};

enum class EMissionAvailableResult : uint8
{
	MissionAvailable               = 0,
	NoMissionsAvailable            = 1,
	EMissionAvailableResult_MAX    = 2,
};

enum class EObjectiveCountComparisonOperatorType : uint8
{
	EqualTo                        = 0,
	NotEqualTo                     = 1,
	LessThan                       = 2,
	LessThanOrEqualTo              = 3,
	GreaterThan                    = 4,
	GreaterThanOrEqualTo           = 5,
	EObjectiveCountComparisonOperatorType_MAX = 6,
};

enum class EMissionEnableConditionObjectiveSetObjectiveStatus : uint8
{
	MECOSOS_Ignored                = 0,
	MECOSOS_AllCompleteStatusMatters = 1,
	MECOSOS_AllCompleteStatusIgnored = 2,
	MECOSOS_MAX                    = 3,
};

enum class EIconRadiusDrawStyle : uint8
{
	None                           = 0,
	Wire                           = 1,
	Solid                          = 2,
	SolidAndWire                   = 3,
	EIconRadiusDrawStyle_MAX       = 4,
};

enum class EMissionIconState : uint8
{
	IconState_Default              = 0,
	IconState_ForceDisabled        = 1,
	IconState_ForceEnabled         = 2,
	IconState_MAX                  = 3,
};

enum class EMissionObjectiveDependencyStatus : uint8
{
	MODS_Active                    = 0,
	MODS_Complete                  = 1,
	MODS_MAX                       = 2,
};

enum class EMissionTimerEvent : uint8
{
	TimerStarted                   = 0,
	TimerStopped                   = 1,
	TimeAdded                      = 2,
	TimeExpired                    = 3,
	EMissionTimerEvent_MAX         = 4,
};

enum class EMissionObjectiveSetStatus : uint8
{
	MOSS_NotActive                 = 0,
	MOSS_Active                    = 1,
	MOSS_Unknown                   = 2,
	MOSS_MAX                       = 3,
};

enum class EMissionObjectiveStatus : uint8
{
	MOS_NotStarted                 = 0,
	MOS_Active                     = 1,
	MOS_Dormant                    = 2,
	MOS_Complete                   = 3,
	MOS_Unknown                    = 4,
	MOS_MAX                        = 5,
};

enum class EMissionStatus : uint8
{
	MS_NotStarted                  = 0,
	MS_Active                      = 1,
	MS_Complete                    = 2,
	MS_Failed                      = 3,
	MS_Unknown                     = 4,
	MS_MAX                         = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxMission.MissionObjectiveReferenceBase
struct FMissionObjectiveReferenceBase
{
public:
	uint8                                        Pad_903[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ObjectiveName;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ObjectiveGuid;                                     // 0x10(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMissionObjective>      Objective;                                         // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct GbxMission.MissionObjectiveReference
struct FMissionObjectiveReference : public FMissionObjectiveReferenceBase
{
public:
	TSubclassOf<class UMission>                  Mission;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxMission.MissionObjectiveSetReference
struct FMissionObjectiveSetReference
{
public:
	TSoftClassPtr<class UMission>                Mission;                                           // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ObjectiveSetName;                                  // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ObjectiveSetGuid;                                  // 0x30(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMissionObjectiveSet>   ObjectiveSet;                                      // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxMission.MissionEventReference
struct FMissionEventReference
{
public:
	TSubclassOf<class UMission>                  Mission;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct GbxMission.MissionObjectiveReferenceWeak
struct FMissionObjectiveReferenceWeak : public FMissionObjectiveReferenceBase
{
public:
	TSoftClassPtr<class UMission>                Mission;                                           // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxMission.ActiveMissionIconData
struct FActiveMissionIconData
{
public:
	TScriptInterface<class IMissionIconInterface> Icon;                                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGuid                                 IconGuid;                                          // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        IconLocationComponent;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               IconLocation;                                      // 0x28(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WaypointRadius;                                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataAsset*                            IconData;                                          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMissionObjective*>             MissionObjectives;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        VisibleDistanceOverride;                           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HiddenDistanceOverride;                            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideAreaWaypoint;                                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_923[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPrimitiveComponent>       AreaComponentClassOverride;                        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxMission.MissionEnableConditionEvent
struct FMissionEnableConditionEvent
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionEnableCondition*               EnableCondition;                                   // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLoad;                                            // 0x10(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxMission.MissionLocation
struct FMissionLocation
{
public:
	TSoftObjectPtr<class UTravelStationData>     TravelStation;                                     // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         StationCondition;                                  // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxMission.MissionObjectiveChain
struct FMissionObjectiveChain
{
public:
	TArray<class UMissionObjective*>             ObjectiveChain;                                    // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxMission.MissionObjectiveData
struct FMissionObjectiveData
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjective*                     Objective;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxMission.MissionObserverEvent
struct FMissionObserverEvent
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLastConditionValue;                               // 0x8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         EnabledCondition;                                  // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnConditionTrue;                                   // 0x18(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnConditionFalse;                                  // 0x28(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxMission.DefendMissionTargetData
struct FDefendMissionTargetData
{
public:
	class UMissionObjective*                     Objective;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PercentHealth;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_932[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxMission.DefendMissionData
struct FDefendMissionData
{
public:
	uint8                                        Pad_935[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GbxMission.MissionObjectiveDependency
struct FMissionObjectiveDependency
{
public:
	struct FMissionObjectiveReferenceWeak        ObjectiveRef;                                      // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
	enum class EMissionObjectiveDependencyStatus ObjectiveStatus;                                   // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_939[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxMission.MissionStatusPlayerData
struct FMissionStatusPlayerData
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionStatus                    Status;                                            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_941[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint32>                               ObjectivesProgress;                                // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  ActiveObjectiveSet;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenViewedInLog;                               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKickoffPlayed;                                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_943[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxMission.MissionPlaythroughData
struct FMissionPlaythroughData
{
public:
	TArray<struct FMissionStatusPlayerData>      MissionList;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  TrackedMission;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxMission.ReplicatedMissionProgress
struct FReplicatedMissionProgress
{
public:
	uint8                                        Pad_945[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxMission.TimedMissionData
struct FTimedMissionData
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsLeft;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartingSeconds;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTimerRunning;                                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFailOnTimerExpiration;                            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTimerExpired;                                     // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94B[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxMission.ReplicatedMissionData
struct FReplicatedMissionData
{
public:
	TArray<struct FReplicatedMissionProgress>    Progress;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  TrackedMission;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTimedMissionData>             ActiveTimedMissions;                               // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GbxMission.MissionProgress
struct FMissionProgress
{
public:
	class UMission*                              Mission;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionStatus                    Status;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint32>                               ObjectivesProgress;                                // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  ActiveObjectiveSet;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMissionObjective*>             DormantObjectives;                                 // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMissionObjective*>             PausedObjectiveChains;                             // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bActivateScriptWhenDependenciesMet;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_960[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogScriptPinnedRef                ActivatedDialogScript;                             // 0x58(0x10)(NativeAccessSpecifierPublic)
	bool                                         bKickoffPlayed;                                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMissionFailed;                                 // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicationError;                                 // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_965[0x15];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


