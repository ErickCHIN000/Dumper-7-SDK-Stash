#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function GbxMission.Mission.UpdateObjective
struct UMission_UpdateObjective_Params
{
public:
	class UMissionObjective*                     Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Amount;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.Mission.UnpauseObjectiveChain
struct UMission_UnpauseObjectiveChain_Params
{
public:
	class UMissionObjective*                     Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.Mission.ThwartObjectiveAndAdvanceObjectiveSet
struct UMission_ThwartObjectiveAndAdvanceObjectiveSet_Params
{
public:
	class UMissionObjective*                     ObjectiveToThwart;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  ObjectiveSet;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJumpToSet;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.Mission.MissionRemoteEvent
struct UMission_MissionRemoteEvent_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.Mission.MissionGameModeEvent
struct UMission_MissionGameModeEvent_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.Mission.JumpToObjectiveSet
struct UMission_JumpToObjectiveSet_Params
{
public:
	class UMissionObjectiveSet*                  ObjectiveSet;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBranchingMission;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.Mission.GetPausableChainedObjectivesList
struct UMission_GetPausableChainedObjectivesList_Params
{
public:
	TArray<class UMissionObjective*>             ObjectivesList;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.Mission.GetObjectivesList
struct UMission_GetObjectivesList_Params
{
public:
	TArray<class UMissionObjective*>             ObjectivesList;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.Mission.GetObjectiveSetsList
struct UMission_GetObjectiveSetsList_Params
{
public:
	TArray<class UMissionObjectiveSet*>          ObjectiveSetsList;                                 // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxMission.Mission.GetMissionRemainingSeconds
struct UMission_GetMissionRemainingSeconds_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.Mission.ClearObjective
struct UMission_ClearObjective_Params
{
public:
	class UMissionObjective*                     Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.Mission.AdvanceObjectiveSet
struct UMission_AdvanceObjectiveSet_Params
{
public:
	class UMissionObjectiveSet*                  ObjectiveSet;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxMission.Mission.AddTimeToMission
struct UMission_AddTimeToMission_Params
{
public:
	int32                                        SecondsToAdd;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.Mission.ActivateMission
struct UMission_ActivateMission_Params
{
public:
	class UMissionObjectiveSet*                  InitialObjectiveSet;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxMission.MissionDirectorComponent.IsAnyMissionAvailable
struct UMissionDirectorComponent_IsAnyMissionAvailable_Params
{
public:
	enum class EMissionAvailableResult           OutResult;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxMission.MissionDirectorComponent.IsAnyMissionActive
struct UMissionDirectorComponent_IsAnyMissionActive_Params
{
public:
	enum class EMissionActiveResult              OutResult;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionDirectorComponent.GetAllMissions
struct UMissionDirectorComponent_GetAllMissions_Params
{
public:
	TArray<TSubclassOf<class UMission>>          AllMissions;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.MissionDirectorComponent.AddMission
struct UMissionDirectorComponent_AddMission_Params
{
public:
	TSubclassOf<class UMission>                  InMission;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxMission.MissionIconComponent.SetIconState
struct UMissionIconComponent_SetIconState_Params
{
public:
	enum class EMissionIconState                 InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionIconComponent.SetIconEnabledCondition
struct UMissionIconComponent_SetIconEnabledCondition_Params
{
public:
	class UGbxCondition*                         EnabledCondition;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxMission.MissionIconComponent.SetDisabledState
struct UMissionIconComponent_SetDisabledState_Params
{
public:
	bool                                         bDisabled;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxMission.MissionIconComponent.OnRep_Enabled
struct UMissionIconComponent_OnRep_Enabled_Params
{
public:
	bool                                         bPreviouslyEnabled;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxMission.MissionIconComponent.IsIconEnabled
struct UMissionIconComponent_IsIconEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.MissionIconComponent.GetRequiredInterface
struct UMissionIconComponent_GetRequiredInterface_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxMission.MissionIconComponent.EnabledConditionRequiresNativeClass
struct UMissionIconComponent_EnabledConditionRequiresNativeClass_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionTracker.OnStatIncrement
struct AMissionTracker_OnStatIncrement_Params
{
public:
	class AActor*                                StatContext;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.PlayerMissionComponent.ServerSetTrackedMission
struct UPlayerMissionComponent_ServerSetTrackedMission_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientUpdateMissionStatus
struct UPlayerMissionComponent_ClientUpdateMissionStatus_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionStatus                    Status;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_475[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientUpdateActiveObjectiveSet
struct UPlayerMissionComponent_ClientUpdateActiveObjectiveSet_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  ActiveObjectiveSet;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMissionObjective*>             DormantObjectives;                                 // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientTrackedMissionChanged
struct UPlayerMissionComponent_ClientTrackedMissionChanged_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientObjectiveUpdated
struct UPlayerMissionComponent_ClientObjectiveUpdated_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjective*                     UpdatedObjective;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ObjectiveBit;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Amount;                                            // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientObjectiveSetCompleted
struct UPlayerMissionComponent_ClientObjectiveSetCompleted_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjectiveSet*                  CompletedObjectiveSet;                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientObjectiveCleared
struct UPlayerMissionComponent_ClientObjectiveCleared_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjective*                     ClearedObjective;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientObjectiveChainUnpaused
struct UPlayerMissionComponent_ClientObjectiveChainUnpaused_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjective*                     Objective;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientMissionTimerStopped
struct UPlayerMissionComponent_ClientMissionTimerStopped_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientMissionTimerStarted
struct UPlayerMissionComponent_ClientMissionTimerStarted_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientMissionTimerChanged
struct UPlayerMissionComponent_ClientMissionTimerChanged_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsToAdd;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientMissionRegistered
struct UPlayerMissionComponent_ClientMissionRegistered_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveRemoved
struct UPlayerMissionComponent_ClientDormantObjectiveRemoved_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjective*                     Objective;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIssueActiveEvent;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.PlayerMissionComponent.ClientDormantObjectiveAdded
struct UPlayerMissionComponent_ClientDormantObjectiveAdded_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMissionObjective*                     Objective;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.MissionDebugMenu.SelectMissionGraph
struct UMissionDebugMenu_SelectMissionGraph_Params
{
public:
	class FName                                  MissionGraphId;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionDebugMenu.GetObjectiveSetItemsForMission
struct UMissionDebugMenu_GetObjectiveSetItemsForMission_Params
{
public:
	class FName                                  MissionId;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGbxCascadingListItemData>     OutItems;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionDebugMenu.GetMissionWithId
struct UMissionDebugMenu_GetMissionWithId_Params
{
public:
	class FName                                  MissionId;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMission*                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionDebugMenu.GetMissionStatus
struct UMissionDebugMenu_GetMissionStatus_Params
{
public:
	class FName                                  MissionId;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionStatus                    ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_543[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionDebugMenu.GetItemsForMissionStatus
struct UMissionDebugMenu_GetItemsForMissionStatus_Params
{
public:
	enum class EMissionDebugStatus               Status;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_551[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxCascadingListItemData>     OutItems;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionDebugMenu.GetItemsForMissionGraph
struct UMissionDebugMenu_GetItemsForMissionGraph_Params
{
public:
	TArray<struct FGbxCascadingListItemData>     OutItems;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.MissionDebugMenu.CompleteMission
struct UMissionDebugMenu_CompleteMission_Params
{
public:
	class FName                                  MissionId;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionDebugMenu.AdvanceToObjectiveSet
struct UMissionDebugMenu_AdvanceToObjectiveSet_Params
{
public:
	class FName                                  MissionId;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ObjectiveSetId;                                    // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.MissionDebugMenu.AdvanceMission
struct UMissionDebugMenu_AdvanceMission_Params
{
public:
	class FName                                  MissionId;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxMission.MissionFunctionLibrary.UpdateMissionObjectiveRef
struct UMissionFunctionLibrary_UpdateMissionObjectiveRef_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionObjectiveReference            ObjectiveRef;                                      // 0x8(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.MissionFunctionLibrary.TrackPreviousActiveMissionInList
struct UMissionFunctionLibrary_TrackPreviousActiveMissionInList_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.MissionFunctionLibrary.TrackNextActiveMissionInList
struct UMissionFunctionLibrary_TrackNextActiveMissionInList_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionFunctionLibrary.TrackActiveMission
struct UMissionFunctionLibrary_TrackActiveMission_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxMission.MissionFunctionLibrary.SendMissionEventWithContext
struct UMissionFunctionLibrary_SendMissionEventWithContext_Params
{
public:
	struct FMissionEventReference                EventRef;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalContext;                                   // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxMission.MissionFunctionLibrary.SendMissionEvent
struct UMissionFunctionLibrary_SendMissionEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionEventReference                EventRef;                                          // 0x8(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               OptionalContext;                                   // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxMission.MissionFunctionLibrary.ResolveMissionSoftClassReference
struct UMissionFunctionLibrary_ResolveMissionSoftClassReference_Params
{
public:
	TSoftClassPtr<class UMission>                Mission;                                           // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionFunctionLibrary.ResetRepeatableMission
struct UMissionFunctionLibrary_ResetRepeatableMission_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxMission.MissionFunctionLibrary.JumpToMissionObjectiveSetRef
struct UMissionFunctionLibrary_JumpToMissionObjectiveSetRef_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionObjectiveSetReference         ObjectiveSetRef;                                   // 0x8(0x48)(Parm, NativeAccessSpecifierPublic)
	bool                                         bIsBranchingMission;                               // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetSummary_MissionObjectiveReference
struct UMissionFunctionLibrary_GetSummary_MissionObjectiveReference_Params
{
public:
	struct FMissionObjectiveReference            ObjectiveReference;                                // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetSoftObjectiveSetListForMission
struct UMissionFunctionLibrary_GetSoftObjectiveSetListForMission_Params
{
public:
	TSoftClassPtr<class UMission>                MissionClass;                                      // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMissionObjectiveSet>> SoftObjectiveSetList;                              // 0x28(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetPlotMissionIndex
struct UMissionFunctionLibrary_GetPlotMissionIndex_Params
{
public:
	class UMission*                              MissionObj;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_675[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMissionFromAssetSubclass
struct UMissionFunctionLibrary_GetObjectiveSetNameListForMissionFromAssetSubclass_Params
{
public:
	TSoftClassPtr<class UMission>                MissionClass;                                      // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          NamesList;                                         // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetNameListForMission
struct UMissionFunctionLibrary_GetObjectiveSetNameListForMission_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          NamesList;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetObjectiveSetListForMission
struct UMissionFunctionLibrary_GetObjectiveSetListForMission_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMissionObjectiveSet*>          ObjectiveSetList;                                  // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMissionFromAssetSubclass
struct UMissionFunctionLibrary_GetObjectiveNameListForMissionFromAssetSubclass_Params
{
public:
	TSoftClassPtr<class UMission>                Mission;                                           // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          NamesList;                                         // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetObjectiveNameListForMission
struct UMissionFunctionLibrary_GetObjectiveNameListForMission_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          NamesList;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetMissionStatus
struct UMissionFunctionLibrary_GetMissionStatus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionStatus                    ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveStatusRef
struct UMissionFunctionLibrary_GetMissionObjectiveStatusRef_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionObjectiveReference            ObjectiveRef;                                      // 0x8(0x30)(Parm, NativeAccessSpecifierPublic)
	class UObject*                               OptionalContext;                                   // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMissionObjectiveStatus           ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveSetStatusRef
struct UMissionFunctionLibrary_GetMissionObjectiveSetStatusRef_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionObjectiveSetReference         ObjectiveSetRef;                                   // 0x8(0x48)(Parm, NativeAccessSpecifierPublic)
	enum class EMissionObjectiveSetStatus        ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetMissionObjectiveCount
struct UMissionFunctionLibrary_GetMissionObjectiveCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionObjectiveReference            ObjectiveRef;                                      // 0x8(0x30)(Parm, NativeAccessSpecifierPublic)
	int32                                        CurrentObjectiveCount;                             // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalObjectiveCount;                               // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetMissionLevel
struct UMissionFunctionLibrary_GetMissionLevel_Params
{
public:
	class UMission*                              MissionObj;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_703[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReferenceWeak
struct UMissionFunctionLibrary_GetMissionClassFromObjectiveReferenceWeak_Params
{
public:
	struct FMissionObjectiveReferenceWeak        ObjectiveReference;                                // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetMissionClassFromObjectiveReference
struct UMissionFunctionLibrary_GetMissionClassFromObjectiveReference_Params
{
public:
	struct FMissionObjectiveReference            ObjectiveReference;                                // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetMission
struct UMissionFunctionLibrary_GetMission_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMission*                              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetEventNameListForMission
struct UMissionFunctionLibrary_GetEventNameListForMission_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          NamesList;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetCurrentlyTrackedMission
struct UMissionFunctionLibrary_GetCurrentlyTrackedMission_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetActivePlotMission
struct UMissionFunctionLibrary_GetActivePlotMission_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionFunctionLibrary.GetActiveMissions
struct UMissionFunctionLibrary_GetActiveMissions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMission*>                      ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveSetRef
struct UMissionFunctionLibrary_FillMissionObjectiveSetRef_Params
{
public:
	struct FMissionObjectiveSetReference         MissionObjectiveSetRef;                            // 0x0(0x48)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ObjectiveSet;                                      // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRefWeak
struct UMissionFunctionLibrary_FillMissionObjectiveRefWeak_Params
{
public:
	struct FMissionObjectiveReferenceWeak        MissionObjectiveRef;                               // 0x0(0x50)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Objective;                                         // 0x58(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxMission.MissionFunctionLibrary.FillMissionObjectiveRef
struct UMissionFunctionLibrary_FillMissionObjectiveRef_Params
{
public:
	struct FMissionObjectiveReference            MissionObjectiveRef;                               // 0x0(0x30)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Objective;                                         // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxMission.MissionFunctionLibrary.FillMissionEventRef
struct UMissionFunctionLibrary_FillMissionEventRef_Params
{
public:
	struct FMissionEventReference                MissionEventRef;                                   // 0x0(0x10)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventName;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveSetReference
struct UMissionFunctionLibrary_EqualEqual_MissionObjectiveSetReference_Params
{
public:
	struct FMissionObjectiveSetReference         A;                                                 // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
	struct FMissionObjectiveSetReference         B;                                                 // 0x48(0x48)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function GbxMission.MissionFunctionLibrary.EqualEqual_MissionObjectiveReference
struct UMissionFunctionLibrary_EqualEqual_MissionObjectiveReference_Params
{
public:
	struct FMissionObjectiveReference            A;                                                 // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
	struct FMissionObjectiveReference            B;                                                 // 0x30(0x30)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GbxMission.MissionFunctionLibrary.DebugJumpToMissionObjectiveSetRef
struct UMissionFunctionLibrary_DebugJumpToMissionObjectiveSetRef_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionObjectiveSetReference         ObjectiveSetRef;                                   // 0x8(0x48)(Parm, NativeAccessSpecifierPublic)
	bool                                         bIsBranchingMission;                               // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxMission.MissionFunctionLibrary.CreateMission
struct UMissionFunctionLibrary_CreateMission_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMission*                              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionFunctionLibrary.CompleteMission
struct UMissionFunctionLibrary_CompleteMission_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxMission.MissionFunctionLibrary.AdvanceToBreadcrumbObjective
struct UMissionFunctionLibrary_AdvanceToBreadcrumbObjective_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionObjectiveReference            BreadcrumbObjectiveRef;                            // 0x8(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxMission.MissionFunctionLibrary.AdvanceMissionObjectiveSetRef
struct UMissionFunctionLibrary_AdvanceMissionObjectiveSetRef_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionObjectiveSetReference         ObjectiveSetRef;                                   // 0x8(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxMission.MissionFunctionLibrary.ActivateMissionAtObjectiveSet
struct UMissionFunctionLibrary_ActivateMissionAtObjectiveSet_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMissionObjectiveSetReference         ObjectiveSetRef;                                   // 0x8(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionFunctionLibrary.ActivateMission
struct UMissionFunctionLibrary_ActivateMission_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.MissionLocationData.GetRequiredInterface
struct UMissionLocationData_GetRequiredInterface_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxMission.MissionLocationData.EnabledConditionRequiresNativeClass
struct UMissionLocationData_EnabledConditionRequiresNativeClass_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionObjectiveReferenceInterface.GetMissionObjectiveReferences
struct IMissionObjectiveReferenceInterface_GetMissionObjectiveReferences_Params
{
public:
	TArray<struct FMissionObjectiveReference>    OutMissionObjectives;                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionObjectiveSetReferenceInterface.GetMissionObjectiveSetReferences
struct IMissionObjectiveSetReferenceInterface_GetMissionObjectiveSetReferences_Params
{
public:
	TArray<struct FMissionObjectiveSetReference> OutMissionObjectiveSets;                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxMission.MissionObserverComponent.ObserverMission
struct UMissionObserverComponent_ObserverMission_Params
{
public:
	TSubclassOf<class UMission>                  MissionClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxMission.MissionObserverComponent.GetUpdateEventObject
struct UMissionObserverComponent_GetUpdateEventObject_Params
{
public:
	TArray<class UObject*>                       OutMissionInitialized;                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       OutMissionUpdate;                                  // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       OutMissionObjectiveUpdate;                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       OutMissionObjectiveSetUpdate;                      // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxMission.MissionObserverPlayerInterface.ClientReceiveMissionData
struct IMissionObserverPlayerInterface_ClientReceiveMissionData_Params
{
public:
	struct FReplicatedMissionData                MissionData;                                       // 0x0(0x28)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxMission.MissionReferenceInterface.GetMissionClassReferences
struct IMissionReferenceInterface_GetMissionClassReferences_Params
{
public:
	TArray<TSubclassOf<class UMission>>          OutMissions;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxMission.MissionReferenceInterface.CheckForMissionReferenceErrors
struct IMissionReferenceInterface_CheckForMissionReferenceErrors_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


