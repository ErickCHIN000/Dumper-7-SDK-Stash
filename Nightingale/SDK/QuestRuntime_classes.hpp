#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// Class QuestRuntime.QuestAssetReferenceTable
class UQuestAssetReferenceTable : public UDataAsset
{
public:
	TArray<struct FQuestAssetReference>          Quests;                                            // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UQuestAssetReferenceTable* GetDefaultObj();

};

// 0x20 (0xC0 - 0xA0)
// Class QuestRuntime.AbstractQuestModuleComponent
class UAbstractQuestModuleComponent : public UActorComponent
{
public:
	uint8                                        Pad_DD0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ModuleTag;                                         // 0xA8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AQuestGiverSession>        QuestGiverSessionClass;                            // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxReturnedQuestCount;                             // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbstractQuestModuleComponent* GetDefaultObj();

	bool Debug_CreateRowHandle(class FName& RowName, struct FDataTableRowHandle* RowHandle);
};

// 0xA0 (0x110 - 0x70)
// Class QuestRuntime.ConditionQuestAccepted
class UConditionQuestAccepted : public UConditionBehaviour
{
public:
	struct FQuestAssetReference                  Quest;                                             // 0x70(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	uint8                                        Pad_E39[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConditionQuestAccepted* GetDefaultObj();

	void OnQuestAccepted(struct FQuestAssetReference& AcceptedQuest);
	void OnQuestAbandoned(struct FQuestAssetReference& AbandonedQuest);
	void OnPersistenceAppliedHandler(class UObject* Object);
};

// 0xB0 (0x120 - 0x70)
// Class QuestRuntime.ConditionQuestAcceptedGlobal
class UConditionQuestAcceptedGlobal : public UConditionBehaviour
{
public:
	uint8                                        Pad_E90[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  Quest;                                             // 0x80(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	uint8                                        Pad_E91[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConditionQuestAcceptedGlobal* GetDefaultObj();

	void HandlePlayerRemoved(class AGameModeBase* GameModeBase, class AController* PlayerController);
	void HandlePlayerAdded(class AGameModeBase* GameModeBase, class APlayerController* PlayerController);
};

// 0xD0 (0x370 - 0x2A0)
// Class QuestRuntime.QuestGiverSession
class AQuestGiverSession : public AInfo
{
public:
	FMulticastInlineDelegateProperty_            OnAvailableQuestsChanged;                          // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTasksToCompleteChanged;                          // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                InteractionInstigator;                             // 0x2C0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F4D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                QuestGiver;                                        // 0x2D0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F52[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestAssetReference>          AvailableQuests;                                   // 0x348(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<struct FOngoingTaskProgress>          TasksToComplete;                                   // 0x358(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F58[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AQuestGiverSession* GetDefaultObj();

	void OnTaskReadyToComplete(struct FOngoingTaskProgress& QuestRowHandle);
	void OnTaskCompleted(struct FOngoingTaskProgress& QuestRowHandle);
	void OnRep_TasksToComplete();
	void OnRep_AvailableQuests();
	void OnQuestCompleted(struct FQuestAssetReference& QuestRowHandle);
	void OnQuestAccepted(struct FQuestAssetReference& QuestRowHandle);
	TArray<struct FOngoingTaskProgress> GetTasksToComplete();
	TArray<struct FQuestAssetReference> GetAvailableQuests();
};

// 0x0 (0x370 - 0x370)
// Class QuestRuntime.DynamicQuestGiverSession
class ADynamicQuestGiverSession : public AQuestGiverSession
{
public:

	static class UClass* StaticClass();
	static class ADynamicQuestGiverSession* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestAssetReferenceFunctionLibrary
class UQuestAssetReferenceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UQuestAssetReferenceFunctionLibrary* GetDefaultObj();

	struct FOngoingTaskProgress MakeStartingOngoingTaskProgressFromQuestReference(struct FQuestAssetReference& Reference);
	struct FQuestAssetReference MakeQuestAssetReferenceFromDataAsset(TSoftObjectPtr<class UQuestDataAsset> DataAsset);
	class FName GetUniqueNameFromQuestAssetReference(struct FQuestAssetReference& Reference);
	struct FGuid GetUniqueIDFromQuestAssetReference(struct FQuestAssetReference& AssetReference);
	struct FGuid GetUniqueIDFromOngoingTask(struct FOngoingTaskProgress& TaskProgress);
	struct FQuestAssetReference GetQuestReferenceFromPlayerTask(struct FPlayerTask& PlayerTask);
	struct FQuestAssetReference GetQuestReferenceFromOngoingTask(struct FOngoingTaskProgress& TaskProgress);
	bool GetQuestDataFromQuestAssetReference(struct FQuestAssetReference& Reference, struct FQuest* OutData);
	class FString GetDebugStringFromQuestAssetReference(struct FQuestAssetReference& Reference);
	bool CheckQuestAssetReferencesAreEqual(struct FQuestAssetReference& A, struct FQuestAssetReference& B);
};

// 0xA0 (0xE8 - 0x48)
// Class QuestRuntime.QuestDataAsset
class UQuestDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	uint8                                        Pad_108A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuest                                Quest;                                             // 0x50(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UQuestDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestDataMigrationFunctionLibrary
class UQuestDataMigrationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UQuestDataMigrationFunctionLibrary* GetDefaultObj();

	bool MakeQuestTaskPresentationDataFromTaskProgress(struct FOngoingTaskProgress& TaskProgress, struct FQuestTaskPresentationData* OutQuestTaskPresentationData);
	bool MakeQuestTaskPresentationDataFromQuestTask(struct FQuestTask& TaskData, struct FOngoingTaskProgress& TaskProgress, struct FQuestTaskPresentationData* OutQuestTaskPresentationData);
	bool MakeQuestRewardPresentationDataFromQuestReward(struct FQuestReward& RewardData, struct FQuestRewardPresentationData* OutQuestRewardPresentationData);
	bool MakeQuestPresentationDataFromTaskProgress(struct FOngoingTaskProgress& TaskProgress, struct FQuestPresentationData* OutQuestPresentationData);
};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestFunctionLibrary
class UQuestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UQuestFunctionLibrary* GetDefaultObj();

	bool IsQuestGiverFactionExchange(class AActor* QuestGiver);
	bool IsQuestFactionExchange(struct FQuest& Quest);
	void GetTaskItemConstraints(struct FPlayerTask& PlayerTask, TArray<struct FItemConstraint>* OutItemConstraints);
	bool GetQuestGiverKey(class AActor* QuestGiver, struct FQuestGiverKey* OutQuestGiverKey);
	bool DoesTaskNeedItemsToTurnIn(struct FPlayerTask& PlayerTask);
};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestGenericReplicatedDataFunctionLibrary
class UQuestGenericReplicatedDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UQuestGenericReplicatedDataFunctionLibrary* GetDefaultObj();

	void GetGenericReplicatedDataAsQuestAssetReference(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* bHasQuestAssetReference, struct FQuestAssetReference* QuestAssetReference);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromQuestAssetReference(struct FQuestAssetReference& QuestAssetReference);
};

// 0x28 (0xC8 - 0xA0)
// Class QuestRuntime.QuestGiverComponent
class UQuestGiverComponent : public UActorComponent
{
public:
	uint8                                        Pad_12F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   QuestGiverHandle;                                  // 0xA8(0x10)(Edit, BlueprintVisible, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 QuestGiverID;                                      // 0xB8(0x10)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UQuestGiverComponent* GetDefaultObj();

	struct FGameplayTag GetQuestModuleTag();
	struct FGameplayTag GetQuestGiverTag();
	struct FDataTableRowHandle GetQuestGiverRowHandle();
	struct FQuestGiverData GetQuestGiverData();
};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestGiverInterface
class IQuestGiverInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQuestGiverInterface* GetDefaultObj();

	struct FGameplayTag GetQuestModuleTag();
	struct FGameplayTag GetQuestGiverTag();
	struct FDataTableRowHandle GetQuestGiverRowHandle();
	struct FQuestGiverData GetQuestGiverData();
};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestModuleInterface
class IQuestModuleInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQuestModuleInterface* GetDefaultObj();

	bool Debug_CreateRowHandle(class FName& RowName, struct FDataTableRowHandle* RowHandle);
};

// 0x28 (0x60 - 0x38)
// Class QuestRuntime.QuestPresentationSettings
class UQuestPresentationSettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UStringTable>           QuestTaskPresentationStringTable;                  // 0x38(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UQuestPresentationSettings* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class QuestRuntime.QuestOngoingRequirement
class UQuestOngoingRequirement : public URequirement
{
public:
	uint8                                        Pad_13AB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  QuestReference;                                    // 0x30(0x70)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UQuestOngoingRequirement* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class QuestRuntime.QuestTaskReadyToCompleteRequirement
class UQuestTaskReadyToCompleteRequirement : public URequirement
{
public:
	uint8                                        Pad_13B8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  QuestReference;                                    // 0x30(0x70)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                         bUseTaskIndex;                                     // 0xA0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TaskIndex;                                         // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQuestTaskReadyToCompleteRequirement* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class QuestRuntime.QuestTaskOngoingRequirement
class UQuestTaskOngoingRequirement : public URequirement
{
public:
	uint8                                        Pad_13CA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  QuestReference;                                    // 0x30(0x70)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	int32                                        TaskIndex;                                         // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CF[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQuestTaskOngoingRequirement* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class QuestRuntime.QuestIsAbleToAcceptRequirement
class UQuestIsAbleToAcceptRequirement : public URequirement
{
public:
	uint8                                        Pad_13E5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  QuestReference;                                    // 0x30(0x70)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UQuestIsAbleToAcceptRequirement* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestRewardPresentationDataBuilder
class UQuestRewardPresentationDataBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UQuestRewardPresentationDataBuilder* GetDefaultObj();

	bool MakeQuestRewardPresentationData(class URewardBehaviour* RewardBehaviour, struct FQuestRewardPresentationData* OutPresentationData);
};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.NullQuestRewardPresentationDataBuilder
class UNullQuestRewardPresentationDataBuilder : public UQuestRewardPresentationDataBuilder
{
public:

	static class UClass* StaticClass();
	static class UNullQuestRewardPresentationDataBuilder* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class QuestRuntime.QuestServerWorldSubsystem
class UQuestServerWorldSubsystem : public UNWXWorldSubsystem
{
public:
	uint8                                        Pad_141E[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UQuestGiverComponent>> QuestGiversArray;                                  // 0x60(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UQuestServerWorldSubsystem* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class QuestRuntime.QuestTaskPresentationDataBuilder
class UQuestTaskPresentationDataBuilder : public UObject
{
public:
	class FText                                  TaskNameFormat;                                    // 0x28(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UQuestTaskPresentationDataBuilder* GetDefaultObj();

	bool MakeTaskPresentationData(struct FTask& Task, struct FConditionProgressDataList& TaskProgressList, struct FQuestTaskPresentationData* OutPresentationData);
	class FText FormatTaskName(class FText& InsertText);
};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestTrackerDebugInterface
class IQuestTrackerDebugInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQuestTrackerDebugInterface* GetDefaultObj();

	void CheatSetQuestRequirementPolicy(enum class EQuestRequirementsPolicy Policy);
};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestTrackerInterface
class IQuestTrackerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQuestTrackerInterface* GetDefaultObj();

	void UnbindEventTo_OnCurrentQuestCountChanged(FDelegateProperty_& Event);
	void UnbindEventFrom_OnTaskReadyToComplete(FDelegateProperty_& Event);
	void UnbindEventFrom_OnTaskProgressChanged(FDelegateProperty_& Event);
	void UnbindEventFrom_OnTaskCompleted(FDelegateProperty_& Event);
	void UnbindEventFrom_OnTaskAccepted(FDelegateProperty_& Event);
	void UnbindEventFrom_OnRequestItemTurnIn(FDelegateProperty_& Event);
	void UnbindEventFrom_OnQuestGiverStatusChanged(FDelegateProperty_& Event);
	void UnbindEventFrom_OnQuestGiverSessionChanged(FDelegateProperty_& Event);
	void UnbindEventFrom_OnQuestCompleted(FDelegateProperty_& Event);
	void UnbindEventFrom_OnQuestAccepted(FDelegateProperty_& Event);
	void UnbindEventFrom_OnQuestAbandoned(FDelegateProperty_& Event);
	void UnbindEventFrom_OnOngoingTasksProgressChanged(FDelegateProperty_& Event);
	void UnbindEventFrom_OnItemTurnInClosed(FDelegateProperty_& Event);
	void OpenQuestItemTurnIn(struct FOngoingTaskProgress& OngoingTask);
	void NotifyQuestItemTurnInClosed(struct FOngoingTaskProgress& OngoingTask);
	void NotifyPreconditionMayHaveChanged();
	bool IsReadyToAcceptQuests();
	bool IsQuestOngoing(struct FQuestAssetReference& Quest);
	bool IsQuestCompleted(struct FQuestAssetReference& Quest);
	void HandInTaskWithItems(struct FPlayerTask& PlayerTask, TArray<struct FInventoryEntryIdAndQuantity>& ItemInstanceIdsAndQuantities);
	void HandInTask(struct FPlayerTask& PlayerTask);
	bool GetTaskTurnInItemsFromPlayerInventory(struct FPlayerTask& PlayerTask, TArray<struct FInventoryEntry>* OutInventoryItems);
	void GetTasksReadyToCompleteForGiver(struct FQuestGiverKey& GiverData, TArray<struct FOngoingTaskProgress>* OutTasksToComplete);
	void GetTasksReadyToComplete(TArray<struct FOngoingTaskProgress>* OutTasksReadyToComplete);
	int32 GetRerouteQuestModule();
	void GetQuestGiverStatus(struct FQuestGiverKey& QuestGiverKey, bool* bAvailableQuests, bool* bTasksToComplete, bool* bFoundQuestGiver);
	class AQuestGiverSession* GetQuestGiverSession();
	struct FPlayerQuestProfile GetPlayerQuestProfile();
	void GetOngoingTasksProgress(TArray<struct FOngoingTaskProgress>* OutOngoingTasksProgress);
	void GetOngoingQuests(TArray<struct FQuestAssetReference>* OutOngoingQuests);
	int32 GetCurrentQuestCount();
	void GetConditionHandleForQuestTask(struct FQuestAssetReference& OwningQuest, struct FGuid* OutHandle);
	void GetAvailableQuestsForGiver(struct FQuestGiverKey& GiverData, TArray<struct FQuestAssetReference>* OutAvailableQuests);
	void GetAllTaskProgress(TArray<struct FOngoingTaskProgress>* OngoingTasks, TArray<struct FOngoingTaskProgress>* ReadyToCompleteTasks);
	void ExitQuestGiverInteraction(class AActor* QuestGiver);
	void EnterQuestGiverInteraction(class AActor* QuestGiver);
	void DoExchange(struct FQuestAssetReference& ExchangeReference, TArray<struct FInventoryEntryIdAndQuantity>& ItemInstanceIdsAndQuantities);
	bool CanTaskBeHandedIn(struct FPlayerTask& PlayerTask);
	bool CanQuestBeStarted(struct FQuestAssetReference& Quest);
	void BindEventTo_OnTaskReadyToComplete(FDelegateProperty_& Event);
	void BindEventTo_OnTaskProgressChanged(FDelegateProperty_& Event);
	void BindEventTo_OnTaskCompleted(FDelegateProperty_& Event);
	void BindEventTo_OnTaskAccepted(FDelegateProperty_& Event);
	void BindEventTo_OnRequestItemTurnIn(FDelegateProperty_& Event);
	void BindEventTo_OnQuestGiverStatusChanged(FDelegateProperty_& Event);
	void BindEventTo_OnQuestGiverSessionChanged(FDelegateProperty_& Event);
	void BindEventTo_OnQuestCompleted(FDelegateProperty_& Event);
	void BindEventTo_OnQuestAccepted(FDelegateProperty_& Event);
	void BindEventTo_OnQuestAbandoned(FDelegateProperty_& Event);
	void BindEventTo_OnOngoingTasksProgressChanged(FDelegateProperty_& Event);
	void BindEventTo_OnItemTurnInClosed(FDelegateProperty_& Event);
	void BindEventTo_OnCurrentQuestCountChanged(FDelegateProperty_& Event);
	void AcceptQuest(struct FQuestAssetReference& QuestRowHandle);
	void AbandonQuest(struct FQuestAssetReference& QuestRowHandle);
};

// 0x0 (0x28 - 0x28)
// Class QuestRuntime.QuestTrackerProviderInterface
class IQuestTrackerProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IQuestTrackerProviderInterface* GetDefaultObj();

	TScriptInterface<class IQuestTrackerInterface> GetQuestTracker();
};

// 0x1398 (0x1458 - 0xC0)
// Class QuestRuntime.RandomQuestModuleComponent
class URandomQuestModuleComponent : public UAbstractQuestModuleComponent
{
public:
	TArray<class UQuestAssetReferenceTable*>     QuestTables;                                       // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1B[0x1388];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URandomQuestModuleComponent* GetDefaultObj();

	void SeedRandomGenerator(int32 Seed);
};

// 0x10 (0xD0 - 0xC0)
// Class QuestRuntime.ScriptedQuestModuleComponent
class UScriptedQuestModuleComponent : public UAbstractQuestModuleComponent
{
public:
	TArray<class UQuestAssetReferenceTable*>     QuestTables;                                       // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScriptedQuestModuleComponent* GetDefaultObj();

};

}


