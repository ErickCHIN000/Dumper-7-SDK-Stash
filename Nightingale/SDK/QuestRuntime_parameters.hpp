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

// 0x20 (0x20 - 0x0)
// Function QuestRuntime.AbstractQuestModuleComponent.Debug_CreateRowHandle
struct UAbstractQuestModuleComponent_Debug_CreateRowHandle_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   RowHandle;                                         // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function QuestRuntime.ConditionQuestAccepted.OnQuestAccepted
struct UConditionQuestAccepted_OnQuestAccepted_Params
{
public:
	struct FQuestAssetReference                  AcceptedQuest;                                     // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function QuestRuntime.ConditionQuestAccepted.OnQuestAbandoned
struct UConditionQuestAccepted_OnQuestAbandoned_Params
{
public:
	struct FQuestAssetReference                  AbandonedQuest;                                    // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function QuestRuntime.ConditionQuestAccepted.OnPersistenceAppliedHandler
struct UConditionQuestAccepted_OnPersistenceAppliedHandler_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.ConditionQuestAcceptedGlobal.HandlePlayerRemoved
struct UConditionQuestAcceptedGlobal_HandlePlayerRemoved_Params
{
public:
	class AGameModeBase*                         GameModeBase;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.ConditionQuestAcceptedGlobal.HandlePlayerAdded
struct UConditionQuestAcceptedGlobal_HandlePlayerAdded_Params
{
public:
	class AGameModeBase*                         GameModeBase;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function QuestRuntime.QuestGiverSession.OnTaskReadyToComplete
struct AQuestGiverSession_OnTaskReadyToComplete_Params
{
public:
	struct FOngoingTaskProgress                  QuestRowHandle;                                    // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function QuestRuntime.QuestGiverSession.OnTaskCompleted
struct AQuestGiverSession_OnTaskCompleted_Params
{
public:
	struct FOngoingTaskProgress                  QuestRowHandle;                                    // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function QuestRuntime.QuestGiverSession.OnQuestCompleted
struct AQuestGiverSession_OnQuestCompleted_Params
{
public:
	struct FQuestAssetReference                  QuestRowHandle;                                    // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function QuestRuntime.QuestGiverSession.OnQuestAccepted
struct AQuestGiverSession_OnQuestAccepted_Params
{
public:
	struct FQuestAssetReference                  QuestRowHandle;                                    // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestGiverSession.GetTasksToComplete
struct AQuestGiverSession_GetTasksToComplete_Params
{
public:
	TArray<struct FOngoingTaskProgress>          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestGiverSession.GetAvailableQuests
struct AQuestGiverSession_GetAvailableQuests_Params
{
public:
	TArray<struct FQuestAssetReference>          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.MakeStartingOngoingTaskProgressFromQuestReference
struct UQuestAssetReferenceFunctionLibrary_MakeStartingOngoingTaskProgressFromQuestReference_Params
{
public:
	struct FQuestAssetReference                  Reference;                                         // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FOngoingTaskProgress                  ReturnValue;                                       // 0x70(0xB0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.MakeQuestAssetReferenceFromDataAsset
struct UQuestAssetReferenceFunctionLibrary_MakeQuestAssetReferenceFromDataAsset_Params
{
public:
	TSoftObjectPtr<class UQuestDataAsset>        DataAsset;                                         // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  ReturnValue;                                       // 0x30(0x70)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetUniqueNameFromQuestAssetReference
struct UQuestAssetReferenceFunctionLibrary_GetUniqueNameFromQuestAssetReference_Params
{
public:
	struct FQuestAssetReference                  Reference;                                         // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetUniqueIDFromQuestAssetReference
struct UQuestAssetReferenceFunctionLibrary_GetUniqueIDFromQuestAssetReference_Params
{
public:
	struct FQuestAssetReference                  AssetReference;                                    // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x70(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetUniqueIDFromOngoingTask
struct UQuestAssetReferenceFunctionLibrary_GetUniqueIDFromOngoingTask_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetQuestReferenceFromPlayerTask
struct UQuestAssetReferenceFunctionLibrary_GetQuestReferenceFromPlayerTask_Params
{
public:
	struct FPlayerTask                           PlayerTask;                                        // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FQuestAssetReference                  ReturnValue;                                       // 0xA0(0x70)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetQuestReferenceFromOngoingTask
struct UQuestAssetReferenceFunctionLibrary_GetQuestReferenceFromOngoingTask_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FQuestAssetReference                  ReturnValue;                                       // 0xB0(0x70)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetQuestDataFromQuestAssetReference
struct UQuestAssetReferenceFunctionLibrary_GetQuestDataFromQuestAssetReference_Params
{
public:
	struct FQuestAssetReference                  Reference;                                         // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FQuest                                OutData;                                           // 0x70(0x98)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x108(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1029[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.GetDebugStringFromQuestAssetReference
struct UQuestAssetReferenceFunctionLibrary_GetDebugStringFromQuestAssetReference_Params
{
public:
	struct FQuestAssetReference                  Reference;                                         // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x70(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function QuestRuntime.QuestAssetReferenceFunctionLibrary.CheckQuestAssetReferencesAreEqual
struct UQuestAssetReferenceFunctionLibrary_CheckQuestAssetReferencesAreEqual_Params
{
public:
	struct FQuestAssetReference                  A;                                                 // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FQuestAssetReference                  B;                                                 // 0x70(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105E[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// Function QuestRuntime.QuestDataMigrationFunctionLibrary.MakeQuestTaskPresentationDataFromTaskProgress
struct UQuestDataMigrationFunctionLibrary_MakeQuestTaskPresentationDataFromTaskProgress_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FQuestTaskPresentationData            OutQuestTaskPresentationData;                      // 0xB0(0xB0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x160(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AA[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1F0 (0x1F0 - 0x0)
// Function QuestRuntime.QuestDataMigrationFunctionLibrary.MakeQuestTaskPresentationDataFromQuestTask
struct UQuestDataMigrationFunctionLibrary_MakeQuestTaskPresentationDataFromQuestTask_Params
{
public:
	struct FQuestTask                            TaskData;                                          // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x80(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FQuestTaskPresentationData            OutQuestTaskPresentationData;                      // 0x130(0xB0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1E0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E8[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function QuestRuntime.QuestDataMigrationFunctionLibrary.MakeQuestRewardPresentationDataFromQuestReward
struct UQuestDataMigrationFunctionLibrary_MakeQuestRewardPresentationDataFromQuestReward_Params
{
public:
	struct FQuestReward                          RewardData;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FQuestRewardPresentationData          OutQuestRewardPresentationData;                    // 0x10(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// Function QuestRuntime.QuestDataMigrationFunctionLibrary.MakeQuestPresentationDataFromTaskProgress
struct UQuestDataMigrationFunctionLibrary_MakeQuestPresentationDataFromTaskProgress_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FQuestPresentationData                OutQuestPresentationData;                          // 0xB0(0x48)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1124[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestFunctionLibrary.IsQuestGiverFactionExchange
struct UQuestFunctionLibrary_IsQuestGiverFactionExchange_Params
{
public:
	class AActor*                                QuestGiver;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function QuestRuntime.QuestFunctionLibrary.IsQuestFactionExchange
struct UQuestFunctionLibrary_IsQuestFactionExchange_Params
{
public:
	struct FQuest                                Quest;                                             // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x98(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1185[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function QuestRuntime.QuestFunctionLibrary.GetTaskItemConstraints
struct UQuestFunctionLibrary_GetTaskItemConstraints_Params
{
public:
	struct FPlayerTask                           PlayerTask;                                        // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FItemConstraint>               OutItemConstraints;                                // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function QuestRuntime.QuestFunctionLibrary.GetQuestGiverKey
struct UQuestFunctionLibrary_GetQuestGiverKey_Params
{
public:
	class AActor*                                QuestGiver;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuestGiverKey                        OutQuestGiverKey;                                  // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function QuestRuntime.QuestFunctionLibrary.DoesTaskNeedItemsToTurnIn
struct UQuestFunctionLibrary_DoesTaskNeedItemsToTurnIn_Params
{
public:
	struct FPlayerTask                           PlayerTask;                                        // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1210[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function QuestRuntime.QuestGenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsQuestAssetReference
struct UQuestGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsQuestAssetReference_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasQuestAssetReference;                           // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1248[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  QuestAssetReference;                               // 0x30(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function QuestRuntime.QuestGenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromQuestAssetReference
struct UQuestGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromQuestAssetReference_Params
{
public:
	struct FQuestAssetReference                  QuestAssetReference;                               // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x70(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_1270[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function QuestRuntime.QuestGiverComponent.GetQuestModuleTag
struct UQuestGiverComponent_GetQuestModuleTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function QuestRuntime.QuestGiverComponent.GetQuestGiverTag
struct UQuestGiverComponent_GetQuestGiverTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestGiverComponent.GetQuestGiverRowHandle
struct UQuestGiverComponent_GetQuestGiverRowHandle_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function QuestRuntime.QuestGiverComponent.GetQuestGiverData
struct UQuestGiverComponent_GetQuestGiverData_Params
{
public:
	struct FQuestGiverData                       ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function QuestRuntime.QuestGiverInterface.GetQuestModuleTag
struct IQuestGiverInterface_GetQuestModuleTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function QuestRuntime.QuestGiverInterface.GetQuestGiverTag
struct IQuestGiverInterface_GetQuestGiverTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestGiverInterface.GetQuestGiverRowHandle
struct IQuestGiverInterface_GetQuestGiverRowHandle_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function QuestRuntime.QuestGiverInterface.GetQuestGiverData
struct IQuestGiverInterface_GetQuestGiverData_Params
{
public:
	struct FQuestGiverData                       ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function QuestRuntime.QuestModuleInterface.Debug_CreateRowHandle
struct IQuestModuleInterface_Debug_CreateRowHandle_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   RowHandle;                                         // 0x8(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1385[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function QuestRuntime.QuestRewardPresentationDataBuilder.MakeQuestRewardPresentationData
struct UQuestRewardPresentationDataBuilder_MakeQuestRewardPresentationData_Params
{
public:
	class URewardBehaviour*                      RewardBehaviour;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuestRewardPresentationData          OutPresentationData;                               // 0x8(0x60)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1402[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// Function QuestRuntime.QuestTaskPresentationDataBuilder.MakeTaskPresentationData
struct UQuestTaskPresentationDataBuilder_MakeTaskPresentationData_Params
{
public:
	struct FTask                                 Task;                                              // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FConditionProgressDataList            TaskProgressList;                                  // 0x70(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FQuestTaskPresentationData            OutPresentationData;                               // 0x80(0xB0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1453[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function QuestRuntime.QuestTaskPresentationDataBuilder.FormatTaskName
struct UQuestTaskPresentationDataBuilder_FormatTaskName_Params
{
public:
	class FText                                  InsertText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function QuestRuntime.QuestTrackerDebugInterface.CheatSetQuestRequirementPolicy
struct IQuestTrackerDebugInterface_CheatSetQuestRequirementPolicy_Params
{
public:
	enum class EQuestRequirementsPolicy          Policy;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventTo_OnCurrentQuestCountChanged
struct IQuestTrackerInterface_UnbindEventTo_OnCurrentQuestCountChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnTaskReadyToComplete
struct IQuestTrackerInterface_UnbindEventFrom_OnTaskReadyToComplete_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnTaskProgressChanged
struct IQuestTrackerInterface_UnbindEventFrom_OnTaskProgressChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnTaskCompleted
struct IQuestTrackerInterface_UnbindEventFrom_OnTaskCompleted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnTaskAccepted
struct IQuestTrackerInterface_UnbindEventFrom_OnTaskAccepted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnRequestItemTurnIn
struct IQuestTrackerInterface_UnbindEventFrom_OnRequestItemTurnIn_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestGiverStatusChanged
struct IQuestTrackerInterface_UnbindEventFrom_OnQuestGiverStatusChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestGiverSessionChanged
struct IQuestTrackerInterface_UnbindEventFrom_OnQuestGiverSessionChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestCompleted
struct IQuestTrackerInterface_UnbindEventFrom_OnQuestCompleted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestAccepted
struct IQuestTrackerInterface_UnbindEventFrom_OnQuestAccepted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnQuestAbandoned
struct IQuestTrackerInterface_UnbindEventFrom_OnQuestAbandoned_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnOngoingTasksProgressChanged
struct IQuestTrackerInterface_UnbindEventFrom_OnOngoingTasksProgressChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.UnbindEventFrom_OnItemTurnInClosed
struct IQuestTrackerInterface_UnbindEventFrom_OnItemTurnInClosed_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.OpenQuestItemTurnIn
struct IQuestTrackerInterface_OpenQuestItemTurnIn_Params
{
public:
	struct FOngoingTaskProgress                  OngoingTask;                                       // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.NotifyQuestItemTurnInClosed
struct IQuestTrackerInterface_NotifyQuestItemTurnInClosed_Params
{
public:
	struct FOngoingTaskProgress                  OngoingTask;                                       // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.IsReadyToAcceptQuests
struct IQuestTrackerInterface_IsReadyToAcceptQuests_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.IsQuestOngoing
struct IQuestTrackerInterface_IsQuestOngoing_Params
{
public:
	struct FQuestAssetReference                  Quest;                                             // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1689[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.IsQuestCompleted
struct IQuestTrackerInterface_IsQuestCompleted_Params
{
public:
	struct FQuestAssetReference                  Quest;                                             // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AB[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.HandInTaskWithItems
struct IQuestTrackerInterface_HandInTaskWithItems_Params
{
public:
	struct FPlayerTask                           PlayerTask;                                        // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FInventoryEntryIdAndQuantity>  ItemInstanceIdsAndQuantities;                      // 0xA0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.HandInTask
struct IQuestTrackerInterface_HandInTask_Params
{
public:
	struct FPlayerTask                           PlayerTask;                                        // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetTaskTurnInItemsFromPlayerInventory
struct IQuestTrackerInterface_GetTaskTurnInItemsFromPlayerInventory_Params
{
public:
	struct FPlayerTask                           PlayerTask;                                        // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FInventoryEntry>               OutInventoryItems;                                 // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1703[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetTasksReadyToCompleteForGiver
struct IQuestTrackerInterface_GetTasksReadyToCompleteForGiver_Params
{
public:
	struct FQuestGiverKey                        GiverData;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOngoingTaskProgress>          OutTasksToComplete;                                // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetTasksReadyToComplete
struct IQuestTrackerInterface_GetTasksReadyToComplete_Params
{
public:
	TArray<struct FOngoingTaskProgress>          OutTasksReadyToComplete;                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetRerouteQuestModule
struct IQuestTrackerInterface_GetRerouteQuestModule_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetQuestGiverStatus
struct IQuestTrackerInterface_GetQuestGiverStatus_Params
{
public:
	struct FQuestGiverKey                        QuestGiverKey;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvailableQuests;                                  // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTasksToComplete;                                  // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFoundQuestGiver;                                  // 0x12(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1771[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetQuestGiverSession
struct IQuestTrackerInterface_GetQuestGiverSession_Params
{
public:
	class AQuestGiverSession*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetPlayerQuestProfile
struct IQuestTrackerInterface_GetPlayerQuestProfile_Params
{
public:
	struct FPlayerQuestProfile                   ReturnValue;                                       // 0x0(0x58)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetOngoingTasksProgress
struct IQuestTrackerInterface_GetOngoingTasksProgress_Params
{
public:
	TArray<struct FOngoingTaskProgress>          OutOngoingTasksProgress;                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetOngoingQuests
struct IQuestTrackerInterface_GetOngoingQuests_Params
{
public:
	TArray<struct FQuestAssetReference>          OutOngoingQuests;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetCurrentQuestCount
struct IQuestTrackerInterface_GetCurrentQuestCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetConditionHandleForQuestTask
struct IQuestTrackerInterface_GetConditionHandleForQuestTask_Params
{
public:
	struct FQuestAssetReference                  OwningQuest;                                       // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGuid                                 OutHandle;                                         // 0x70(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetAvailableQuestsForGiver
struct IQuestTrackerInterface_GetAvailableQuestsForGiver_Params
{
public:
	struct FQuestGiverKey                        GiverData;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQuestAssetReference>          OutAvailableQuests;                                // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.GetAllTaskProgress
struct IQuestTrackerInterface_GetAllTaskProgress_Params
{
public:
	TArray<struct FOngoingTaskProgress>          OngoingTasks;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FOngoingTaskProgress>          ReadyToCompleteTasks;                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.ExitQuestGiverInteraction
struct IQuestTrackerInterface_ExitQuestGiverInteraction_Params
{
public:
	class AActor*                                QuestGiver;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.EnterQuestGiverInteraction
struct IQuestTrackerInterface_EnterQuestGiverInteraction_Params
{
public:
	class AActor*                                QuestGiver;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.DoExchange
struct IQuestTrackerInterface_DoExchange_Params
{
public:
	struct FQuestAssetReference                  ExchangeReference;                                 // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FInventoryEntryIdAndQuantity>  ItemInstanceIdsAndQuantities;                      // 0x70(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.CanTaskBeHandedIn
struct IQuestTrackerInterface_CanTaskBeHandedIn_Params
{
public:
	struct FPlayerTask                           PlayerTask;                                        // 0x0(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1903[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.CanQuestBeStarted
struct IQuestTrackerInterface_CanQuestBeStarted_Params
{
public:
	struct FQuestAssetReference                  Quest;                                             // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192C[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnTaskReadyToComplete
struct IQuestTrackerInterface_BindEventTo_OnTaskReadyToComplete_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnTaskProgressChanged
struct IQuestTrackerInterface_BindEventTo_OnTaskProgressChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnTaskCompleted
struct IQuestTrackerInterface_BindEventTo_OnTaskCompleted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnTaskAccepted
struct IQuestTrackerInterface_BindEventTo_OnTaskAccepted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnRequestItemTurnIn
struct IQuestTrackerInterface_BindEventTo_OnRequestItemTurnIn_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestGiverStatusChanged
struct IQuestTrackerInterface_BindEventTo_OnQuestGiverStatusChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestGiverSessionChanged
struct IQuestTrackerInterface_BindEventTo_OnQuestGiverSessionChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestCompleted
struct IQuestTrackerInterface_BindEventTo_OnQuestCompleted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestAccepted
struct IQuestTrackerInterface_BindEventTo_OnQuestAccepted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnQuestAbandoned
struct IQuestTrackerInterface_BindEventTo_OnQuestAbandoned_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnOngoingTasksProgressChanged
struct IQuestTrackerInterface_BindEventTo_OnOngoingTasksProgressChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnItemTurnInClosed
struct IQuestTrackerInterface_BindEventTo_OnItemTurnInClosed_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.BindEventTo_OnCurrentQuestCountChanged
struct IQuestTrackerInterface_BindEventTo_OnCurrentQuestCountChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.AcceptQuest
struct IQuestTrackerInterface_AcceptQuest_Params
{
public:
	struct FQuestAssetReference                  QuestRowHandle;                                    // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function QuestRuntime.QuestTrackerInterface.AbandonQuest
struct IQuestTrackerInterface_AbandonQuest_Params
{
public:
	struct FQuestAssetReference                  QuestRowHandle;                                    // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function QuestRuntime.QuestTrackerProviderInterface.GetQuestTracker
struct IQuestTrackerProviderInterface_GetQuestTracker_Params
{
public:
	TScriptInterface<class IQuestTrackerInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function QuestRuntime.RandomQuestModuleComponent.SeedRandomGenerator
struct URandomQuestModuleComponent_SeedRandomGenerator_Params
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


