#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x1950 - 0x1880)
// BlueprintGeneratedClass BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C
class ABP_Creature_NPC_Villager_C : public ABP_Creature_NPC_Human_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCompanionMapPinComponent*             CompanionMapPin;                                   // 0x1888(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAICompanionComponent*                 AICompanion;                                       // 0x1890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FacingTargetLocation;                              // 0x1898(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   EmployeeManagementMenuHandle;                      // 0x18B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FContainerCapacityData                NPCInventoryData;                                  // 0x18C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_1635[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              Death_Chest;                                       // 0x18D0(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_NPC_Villager_C* GetDefaultObj();

	bool ShouldOptOutOfPersistenceStore();
	TScriptInterface<class IItemContainer> GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle);
	TScriptInterface<class IItemContainer> GetDefaultContainer();
	bool HasContainer(TScriptInterface<class IItemContainer>& Container);
	bool HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle);
	class ANWXCharacter* GetLeader(class ANWXCharacter* CallFunc_GetLeader_ReturnValue);
	void FillPersistenceCache(struct FCompanionPersistenceData* PersistenceCache, const struct FGuid& CallFunc_GetCreatureUID_ReturnValue, const class FString& CallFunc_GetHomeRealmID_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FStringTableEntryHandle& CallFunc_GetNPCNameHandle_OutNameHandle, const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, const struct FCompanionPersistenceData& K2Node_MakeStruct_CompanionPersistenceData);
	void ReloadPersistenceCache(struct FCompanionPersistenceData& PersistenceCache, const struct FDataTableRowHandle& LSpawnerData, const TArray<struct FGuid>& LUpdatedInstanceIDs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_RemoveAllItems_self_CastInput, bool CallFunc_RemoveAllItems_ReturnValue);
	class FString GetAIFaction(const class FString& CallFunc_Conv_TextToString_ReturnValue);
	class AEquippableItem* GetEquippedItem(class AEquippableItem* CallFunc_GetItemConst_Weapon);
	bool GetLeaderName(class FString* LeaderName, const class FString& CallFunc_GetLeaderName_LeaderName, bool CallFunc_GetLeaderName_ReturnValue);
	bool CanBeDismissed(class AController* Recruiter, class AController* LLeaderController, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetLeaderController_ReturnValue);
	bool CanBeRecruited(class AActor* DesiredLeader, enum class ERecruitmentFailureReason* OutFailureReason, class UCompanionManagementComponent* LCompanionManagement, bool CallFunc_IsPreviousLeader_ReturnValue, bool CallFunc_IsInHomeRealm_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasCompanion_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UCompanionManagementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXCharacter* CallFunc_GetLeader_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetCanBeRecruited_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2);
	bool TryDismissCompanion(class AController* Recruiter, class ANWXCharacter* LLeaderCharacter, bool CallFunc_CanBeDismissed_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXCharacter* CallFunc_GetLeader_ReturnValue);
	bool TryRecruitCompanion(class AController* Recruiter, bool CallFunc_IsValid_ReturnValue, enum class ERecruitmentFailureReason CallFunc_CanBeRecruited_OutFailureReason, bool CallFunc_CanBeRecruited_ReturnValue);
	float AdjustMaxDistance(float DesiredDistance, bool CallFunc_HasLeader_ReturnValue);
	float GetDistanceToHome(struct FVector& Location, const struct FVector& CallFunc_GetHomeLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	bool HasLeader(bool CallFunc_IsCompanion_ReturnValue);
	struct FVector GetHomeLocation(class ANWXCharacter* LLeader, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXCharacter* CallFunc_GetLeader_ReturnValue);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_CanInteractWithActor_InteractAvailable, bool CallFunc_IsCompanionDisabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SpawnDeathChest(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ShouldSpawnDeathChest_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DeathChestSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_SetInterfacePropertyByName_Value_CastInput);
	void CheckAndSetNPCSpawner(bool* Success, const struct FDataTableRowHandle& LSpawnerData, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawner_NPCGroup_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnCompanionCanBeRecruitedHandler(bool CanBeRecruited);
	void SetEmployeeManagementMenuAvailable(bool Available, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void OnLinkedReferencesRestored();
	void DEBUG_TryRecruitAI(class ANWXCharacter* Recruiter);
	void DEBUG_TryDismissAI(class ANWXCharacter* Recruiter);
	void CrossServerSetAssociatedEncounter(class AEncounterBase* Associated_Encounter);
	void Associated_Encounter_Finished(class AEncounterBase* Encounter, bool bSuccess, bool bResetTriggers);
	void AssignOnCompanionRecruitedDelegate(FDelegateProperty_& InDelegate);
	void AssignOnCompanionDismissedDelegate(FDelegateProperty_& InDelegate);
	void ReceiveBeginPlay();
	void TryReviveCompanion();
	void PreReloadPersistenceCache(struct FCompanionPersistenceData& PersistenceCache);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void EmptyInventory();
	void ResetInventory();
	void OnPersistentDataRestored();
	void ExecuteUbergraph_BP_Creature_NPC_Villager(int32 EntryPoint, class ANWXCharacter* K2Node_Event_Recruiter_1, class ANWXCharacter* K2Node_Event_Recruiter, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_TryRecruitCompanion_ReturnValue, bool CallFunc_TryDismissCompanion_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class AEncounterBase* K2Node_Event_Associated_Encounter, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class AEncounterBase* K2Node_CustomEvent_Encounter, bool K2Node_CustomEvent_bSuccess, bool K2Node_CustomEvent_bResetTriggers, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_Event_InDelegate_1, FDelegateProperty_ K2Node_Event_InDelegate, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, const struct FCompanionPersistenceData& K2Node_Event_PersistenceCache, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_CheckAndSetNPCSpawner_Success, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_GetCanBeRecruited_ReturnValue, const struct FNWXNPCData& CallFunc_GetNPCDataFromDataTableRow_OutNPCData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCDataFromDataTableRow_Branches, bool CallFunc_GetNPCDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


