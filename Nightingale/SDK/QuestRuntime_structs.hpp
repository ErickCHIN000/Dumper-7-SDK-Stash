#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EQuestTaskNotificationPriority : uint8
{
	Silent                         = 0,
	Minor                          = 10,
	Vault_Minor                    = 15,
	Major                          = 20,
	Vault_Major                    = 25,
	EQuestTaskNotificationPriority_MAX = 26,
};

enum class EQuestAutoCompleteRewardBehaviour : uint8
{
	GiveJustQuestRewards           = 0,
	GiveAllRewards                 = 1,
	EQuestAutoCompleteRewardBehaviour_MAX = 2,
};

enum class EQuestTaskCompletionRequirements : uint8
{
	CompleteAll                    = 0,
	CompleteAny                    = 1,
	Null                           = 2,
	EQuestTaskCompletionRequirements_MAX = 3,
};

enum class EQuestRequirementsPolicy : uint8
{
	CheckRequirements              = 0,
	IgnoreRequirements             = 1,
	EQuestRequirementsPolicy_MAX   = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x70 - 0x48)
// ScriptStruct QuestRuntime.QuestAssetReference
struct FQuestAssetReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FSoftObjectPath                       DataAssetPath;                                     // 0x48(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuestDataAsset*                       DataAssetObject;                                   // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct QuestRuntime.PlayerTask
struct FPlayerTask
{
public:
	struct FGuid                                 QuestUID;                                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceUID;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TaskIndex;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldShowOnHUD;                                  // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5D[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  QuestReference;                                    // 0x30(0x70)(Transient, NativeAccessSpecifierPrivate)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct QuestRuntime.OngoingTaskProgress
struct FOngoingTaskProgress
{
public:
	struct FPlayerTask                           OngoingPlayerTask;                                 // 0x0(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FConditionProgressDataList            ProgressDataList;                                  // 0xA0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct QuestRuntime.QuestAcceptedData
struct FQuestAcceptedData
{
public:
	uint8                                        Pad_1C81[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct QuestRuntime.Task
struct FTask
{
public:
	class FText                                  TaskDescription;                                   // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TaskGameplayDescription;                           // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UConditionBehaviour*                   Condition;                                         // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URewardBehaviour*>              Rewards;                                           // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHasTaskCompleter;                                 // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   TaskCompleterRow;                                  // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemConstraint>               TaskCompletionTurnInItems;                         // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct QuestRuntime.QuestTask
struct FQuestTask
{
public:
	struct FTask                                 Task;                                              // 0x0(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EQuestTaskNotificationPriority    TaskNotificationPriority;                          // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestTaskPresentationDataBuilder*     PresentationDataBuilder;                           // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QuestRuntime.QuestReward
struct FQuestReward
{
public:
	class URewardBehaviour*                      RewardBehaviour;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UQuestRewardPresentationDataBuilder> PresentationDataBuilderClass;                      // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct QuestRuntime.Quest
struct FQuest
{
public:
	TArray<enum class EFeatureFlag>              RequiredFeatures;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  QuestName;                                         // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  QuestDescription;                                  // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class URequirement*                          Requirements;                                      // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConditionBehaviour*                   AutoCompleteCondition;                             // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestAutoCompleteRewardBehaviour AutoCompleteRewardBehaviour;                       // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   QuestGiverRow;                                     // 0x58(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestTaskNotificationPriority    QuestStartNotificationPriority;                    // 0x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestTaskNotificationPriority    QuestCompleteNotificationPriority;                 // 0x69(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestTask>                    Tasks;                                             // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FQuestReward>                  Rewards;                                           // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bIsRepeatable;                                     // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeAbandoned;                                   // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAddedToHUD;                                   // 0x92(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShownOnContractBoards;                            // 0x93(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPersisting;                                     // 0x94(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EActivityTask                     PS5ActivityToStart;                                // 0x95(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EActivityTask                     PS5ActivityToEnd;                                  // 0x96(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF1[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct QuestRuntime.QuestGiverTableRow
struct FQuestGiverTableRow : public FTableRowBase
{
public:
	struct FGameplayTag                          QuestGiverTag;                                     // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          QuestModuleTag;                                    // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsExchange;                                       // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UChallengeDataAsset>    GatingChallengeDataAsset;                          // 0x20(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowOnMap;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  QuestGiverMapName;                                 // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DefaultMapIcon;                                    // 0x68(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   QuestAvailableIcon;                                // 0x78(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   QuestReadyIcon;                                    // 0x88(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   QuestAvailableAndReadyIcon;                        // 0x98(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct QuestRuntime.GetQuestsRequest
struct FGetQuestsRequest
{
public:
	uint8                                        Pad_1D10[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QuestRuntime.GetQuestsResponse
struct FGetQuestsResponse
{
public:
	uint8                                        Pad_1D18[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct QuestRuntime.PlayerQuestProfile
struct FPlayerQuestProfile
{
public:
	uint64                                       Time;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PreviousKey;                                       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        JobArray;                                          // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                RewardArray;                                       // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               CountArray;                                        // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                QValueArray;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct QuestRuntime.GenericReplicatedData_QuestAssetReference
struct FGenericReplicatedData_QuestAssetReference : public FGenericReplicatedData
{
public:
	struct FSoftObjectPath                       AssetPath;                                         // 0x8(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct QuestRuntime.QuestGiverData
struct FQuestGiverData
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   QuestGiverRowHandle;                               // 0x10(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               QuestGiverPosition;                                // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              QuestGiverRotation;                                // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct QuestRuntime.QuestTaskConditionPresentationData
struct FQuestTaskConditionPresentationData
{
public:
	class FText                                  TaskConditionName;                                 // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TaskConditionTooltip;                              // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             TaskConditionIconTexture;                          // 0x30(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowProgressValues;                               // 0x58(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentValue;                                      // 0x5C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetValue;                                       // 0x60(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D55[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct QuestRuntime.QuestTaskPresentationData
struct FQuestTaskPresentationData
{
public:
	class FText                                  TaskName;                                          // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TaskDescription;                                   // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TaskTooltip;                                       // 0x30(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TaskGameplayDescription;                           // 0x48(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EQuestTaskCompletionRequirements  TaskCompletionRequirements;                        // 0x60(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             TaskIconTexture;                                   // 0x68(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowProgressValues;                               // 0x90(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentValue;                                      // 0x94(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetValue;                                       // 0x98(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestTaskConditionPresentationData> TaskConditionPresentationData;                     // 0xA0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct QuestRuntime.QuestRewardPresentationData
struct FQuestRewardPresentationData
{
public:
	int32                                        RewardQuantity;                                    // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RewardName;                                        // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             RewardPreviewIconTexture;                          // 0x38(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct QuestRuntime.QuestPresentationData
struct FQuestPresentationData
{
public:
	class FText                                  QuestName;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  QuestDescription;                                  // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FQuestRewardPresentationData>  Rewards;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCanBeAbandoned;                                   // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoTrackedOnHUD;                                 // 0x41(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D92[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct QuestRuntime.ItemTagQuestTaskPresentationData
struct FItemTagQuestTaskPresentationData : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 IdentifyingTags;                                   // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ItemName;                                          // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ItemDescription;                                   // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ItemIcon;                                          // 0x58(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct QuestRuntime.GiverTagAndQuests
struct FGiverTagAndQuests
{
public:
	struct FGameplayTag                          QuestGiverTag;                                     // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQuestAssetReference>          QuestsToAccept;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlayerTask>                   TasksToComplete;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct QuestRuntime.TrackedCondition
struct FTrackedCondition
{
public:
	struct FGuid                                 ConditionHandle;                                   // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerTask                           OngoingPlayerTask;                                 // 0x10(0xA0)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct QuestRuntime.QuestGiverKey
struct FQuestGiverKey
{
public:
	struct FDataTableRowHandle                   QuestGiverRowHandle;                               // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct QuestRuntime.QuestGiverStatus
struct FQuestGiverStatus
{
public:
	struct FQuestGiverKey                        QuestGiverKey;                                     // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvailableQuests;                                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTasksToComplete;                                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB1[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


