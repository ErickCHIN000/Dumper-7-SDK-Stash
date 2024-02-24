#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x198 (0x650 - 0x4B8)
// BlueprintGeneratedClass AIC_CreatureBase.AIC_CreatureBase_C
class AAIC_CreatureBase_C : public ANWXAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlankerComponent*                     Flanker;                                           // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                AIPerception;                                      // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIActionComponent*                    AIAction;                                          // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         DisabledAIOverride;                                // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPathingBlocked;                                   // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F17[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LastValidTarget;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CreatureSetTarget;                                 // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class AActor*, double>                  ThreatMap;                                         // 0x4F8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       ThreatDecayRate;                                   // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TopThreat;                                         // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, double>                  AIActionBonusScores;                               // 0x558(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TempTagsToAllowActionStationInteraction;           // 0x5A8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   AICCreatureData;                                   // 0x5C8(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                        EnemyList;                                         // 0x5D8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        FearsList;                                         // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        PlayerList;                                        // 0x5F8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        AllyList;                                          // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TSoftObjectPtr<class ULiveServicesDataTable> PhaseMap;                                          // 0x618(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UTicketTakerComponent*                 TicketTaker;                                       // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       RunningAttackMinimumDistance;                      // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAIC_CreatureBase_C* GetDefaultObj();

	void GetThreat(class AActor* ThreateningActor, double* Threat, bool CallFunc_IsValid_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ModifyThreat(class AActor* ThreateningActor, double Threat, bool* Success, double HighestThreat, class AActor* CurrentThreat, int32 Temp_int_Array_Index_Variable, bool CallFunc_Map_Remove_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1);
	void GetEmployer(class AActor** Employer, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
	void GetAlertnessLevel(enum class EAlertnessLevelType* AlertnessLevel, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_AnimationStates_C> K2Node_DynamicCast_AsBPI_Animation_States, bool K2Node_DynamicCast_bSuccess, enum class EAlertnessLevelType CallFunc_GetAlertnessLevel_AlertnessLevel);
	void SetAlertnessLevel(enum class EAlertnessLevelType AlertnessLevel, bool* Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_AnimationStates_C> K2Node_DynamicCast_AsBPI_Animation_States, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetAlertnessLevel_Success);
	void ClearActionStationMode(bool* Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_ActionStationUser_C> K2Node_DynamicCast_AsBPI_Action_Station_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ClearActionStationMode_Success);
	void SetActionStationMode(bool* Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_ActionStationUser_C> K2Node_DynamicCast_AsBPI_Action_Station_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetActionStationMode_Success);
	void ClearBTreeActionStation(bool* Success, class FName CallFunc_GetBBVar_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1);
	void SetBTreeActionStation(class AActor* ActionStation, bool* Success, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
	void ServerStopMontage(bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_ActionStationUser_C> K2Node_DynamicCast_AsBPI_Action_Station_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ServerStopMontage_bSuccess);
	void ServerPlayMontage(class UAnimMontage* Montage, double PlayRate, class FName Section, bool bDisableBlendspace, bool bLooping, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_ActionStationUser_C> K2Node_DynamicCast_AsBPI_Action_Station_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ServerPlayMontage_bSuccess);
	void GrazeResourceNode(class AResourceNodeIIMBase* ResourceNode, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_Herbivore_C> K2Node_DynamicCast_AsBPI_Herbivore, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GrazeResourceNode_bSuccess);
	void GetIsHerbivore(bool* bIsHerbivore, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_Herbivore_C> K2Node_DynamicCast_AsBPI_Herbivore, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsHerbivore_bIsHerbivore);
	void GetSimulationStateManager(class ANWXSimStateManagerBase** Simulation_State_Manager, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_HasSimulationStateManager_C> K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager, bool K2Node_DynamicCast_bSuccess, class ANWXSimStateManagerBase* CallFunc_GetSimulationStateManager_Simulation_State_Manager);
	void ResolveSimulationRound(bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_HasSimulationStateManager_C> K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ResolveSimulationRound_bSuccess);
	void HasHungrySquadMember(bool* bHasHungrySquadMember, int32 Temp_int_Array_Index_Variable, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_Consumer_C> CallFunc_IsHungry_self_CastInput, bool CallFunc_IsHungry_bIsHungry, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IsHungry(bool* bIsHungry, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_Consumer_C> K2Node_DynamicCast_AsBPI_Consumer, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHungry_bIsHungry);
	void RemoveFromEnemies(const struct FGameplayTag& EnemyTag, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveFromEnemies_bSuccess);
	void AddToEnemies(const struct FGameplayTag& EnemyTag, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddToEnemies_bSuccess);
	void RemoveFromFriends(const struct FGameplayTag& FriendTag, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveFromFriends_bSuccess);
	void AddToFriends(const struct FGameplayTag& FriendTag, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddToFriends_bSuccess);
	void GetCreatureInfo(struct FS_CreatureInfo* Info, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, const struct FS_CreatureInfo& CallFunc_GetCreatureInfo_Info);
	void GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	void GetDamageEffect(class UClass** DamageEffect);
	void AllowEnemyTargeting(bool* Allowed);
	void AllowFriendlyTargeting(bool* Allowed);
	void IsAfraidOf(class AActor* ActorInQuestion, bool* bIsAfraidOf, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAfraidOf_bIsAfraidOf);
	void GetTargetPriorityOrder(TArray<struct FGameplayTag>* TargetPriorityOrder, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& CallFunc_GetTargetPriorityOrder_TargetPriorityOrder);
	void IsFriend(class AActor* ActorInQuestion, bool* bIsFriend, const struct FGameplayTagContainer& ActorHostilityTags, class AActor* PotentialFriend, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFriend_bIsFriend);
	void ClearTarget(bool* Success, class FName CallFunc_GetBBVar_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_GetBBVar_ReturnValue_2);
	void SetTarget(class AActor* NewTarget, class AActor** Target, class AActor* OldTarget, class AActor* CallFunc_GetTarget_Target, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetBBVar_ReturnValue);
	void IsEnemy(class AActor* ActorInQuestion, bool* bIsEnemy, const struct FGameplayTagContainer& ActorHostilityTags, class AActor* PotentialEnemy, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemy_bIsEnemy);
	void GetTarget(class AActor** Target, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void CanInteractWithActionStation_Giant_TEMP(class AActor* Actor, bool* CanInteractWithStructure, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAnyTags_ReturnValue);
	class UHitResponseComponent* GetHitResponseComponent(class UHitResponseComponent* Temp_object_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IHitResponseProviderInterface> K2Node_DynamicCast_AsHit_Response_Provider_Interface, bool K2Node_DynamicCast_bSuccess, class UHitResponseComponent* CallFunc_GetHitResponseComponent_ReturnValue);
	struct FVector GetVocalizationLocation(const struct FVector& Temp_struct_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IHitResponseProviderInterface> K2Node_DynamicCast_AsHit_Response_Provider_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetVocalizationLocation_ReturnValue);
	void GetSpawnerController(class ANWXAISpawnerController** Spawner_Controller, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXAISpawnerController* K2Node_DynamicCast_AsNWXAISpawner_Controller, bool K2Node_DynamicCast_bSuccess);
	void GetSpawner(class ANWXAISpawner** Spawner, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess);
	void RemoveFromAllLists(class AActor* Actor, bool* Branch, class AActor* LActor, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_3);
	void GetPerceivedPlayers(TArray<class AActor*>* PlayerList);
	void GetPerceivedFears(TArray<class AActor*>* FearList);
	void GetPerceivedAllies(TArray<class AActor*>* AllyList);
	void GetPerceivedEnemies(TArray<class AActor*>* EnemyList);
	void GetClosestAllyByTags(const struct FGameplayTagContainer& HasAnyTags, const struct FGameplayTagContainer& DoesNotHaveAnyTags, class AActor** ClosestEnemyActor, double* Distance, class AActor* LAlly, const TArray<class AActor*>& LFilteredAllies, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetAllyInRange(double Range, bool* PlayerInRange, class AActor** PlayerActor, double* Distance, bool CallFunc_GetActorInRangeInArray_ActorInRange, class AActor* CallFunc_GetActorInRangeInArray_FoundActor, double CallFunc_GetActorInRangeInArray_Distance);
	void GetClosestAlly(class AActor** ClosestEnemyActor, double* Distance, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance);
	void GetClosestPlayer(class AActor** ClosestEnemyActor, double* Distance, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance);
	void UpdateAllyList(class AActor* Actor, const struct FAIStimulus& Stimulus, bool* bIsAlly, class AActor* LActor, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_IsFriend_bIsFriend, int32 CallFunc_Array_AddUnique_ReturnValue);
	void GetPlayerInRange(double Range, bool* PlayerInRange, class AActor** PlayerActor, double* Distance, bool CallFunc_GetActorInRangeInArray_ActorInRange, class AActor* CallFunc_GetActorInRangeInArray_FoundActor, double CallFunc_GetActorInRangeInArray_Distance);
	void UpdatePlayerList(class AActor* Actor, const struct FAIStimulus& Stimulus, class AActor* LActor, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void GetFearInRange(double Range, bool* EnemyInRange, class AActor** EnemyActor, double* Distance, bool CallFunc_GetActorInRangeInArray_ActorInRange, class AActor* CallFunc_GetActorInRangeInArray_FoundActor, double CallFunc_GetActorInRangeInArray_Distance);
	void GetClosestFear(class AActor** ClosestEnemyActor, double* Distance, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance);
	void GetActorInRangeInArray(TArray<class AActor*>& TargetArray, double Range, bool* ActorInRange, class AActor** FoundActor, double* Distance, class APawn* LPawn, double LRange, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetActorInRange_DistanceToTarget, class AActor* CallFunc_GetActorInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetActorInRange_Distance_ImplicitCast, double K2Node_FunctionResult_Distance_ImplicitCast);
	void GetClosestActorInArray(TArray<class AActor*>& TargetArray, class AActor** ClosestEnemyActor, double* Distance, class AActor* ClosestActor, double ClosestDistance, class APawn* LPawn, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_ClosestDistance_ImplicitCast);
	void UpdateFearsList(class AActor* Actor, const struct FAIStimulus& Stimulus, class AActor* LActor, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsAfraidOf_bIsAfraidOf);
	void GetEnemyInRange(double Range, bool* EnemyInRange, class AActor** EnemyActor, double* Distance, bool CallFunc_GetActorInRangeInArray_ActorInRange, class AActor* CallFunc_GetActorInRangeInArray_FoundActor, double CallFunc_GetActorInRangeInArray_Distance);
	void GetClosestEnemy(class AActor** ClosestEnemyActor, double* Distance, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance);
	void UpdateEnemyList(class AActor* Actor, const struct FAIStimulus& Stimulus, class AActor* LActor, bool CallFunc_IsEnemy_bIsEnemy, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void InitializeBlackBoardVariables(bool* Success, class UBlackboardComponent* LBlackboard, float CallFunc_GetEvadeChance_ReturnValue, float CallFunc_GetRangedCombatDistance_ReturnValue, float CallFunc_GetRangedAttackCooldown_ReturnValue, float CallFunc_GetRunningMeleeAttackDistance_ReturnValue, float CallFunc_GetMeleeCombatDistance_ReturnValue, float CallFunc_GetMeleeAttackCooldown_ReturnValue, float CallFunc_GetCreatureRunDistance_ReturnValue, float CallFunc_GetCreatureDispersionRadius_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue_1, class FName CallFunc_GetBBVar_ReturnValue_2, class FName CallFunc_GetBBVar_ReturnValue_3, class FName CallFunc_GetBBVar_ReturnValue_4, class FName CallFunc_GetBBVar_ReturnValue_5, class FName CallFunc_GetBBVar_ReturnValue_6, class FName CallFunc_GetBBVar_ReturnValue_7, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CreaturePrint(enum class ENWXLogLevel NWXLogLevel, enum class ELogCategory LogCategory, const class FString& Message);
	void CanInteractWithActorTEMP(class AActor* Actor, bool* CanInteractWithStructure, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAnyTags_ReturnValue);
	void StopTreeAndAI(const class FString& Reason, bool Force_Stop, bool CallFunc_StopBehavior_ReturnValue);
	void ThreatDecay(class AActor* CurrentThreat, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnActionChanged(class UAIAction* OldAction, class UAIAction* NewAction, class AActor* OldTarget, class AActor* NewTarget, class ABP_CreatureBase_C* CreaturePawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_CreatureBase_C* CallFunc_GetCreaturePawn_CreaturePawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ForceDisableAI(bool Disable, bool* Success, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UpdateBlackBoardAIEnabled_bSuccess);
	void SetDisableBlendspace(bool bDisable, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
	void ReplicateTarget(class AActor* Target, class ABP_CreatureBase_C* CallFunc_GetCreaturePawn_CreaturePawn, bool CallFunc_IsValid_ReturnValue);
	void UpdateBlackBoardAIEnabled(bool* bSuccess, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAI_Enabled_AIEnabled);
	void GetCreaturePawn(class ABP_CreatureBase_C** CreaturePawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess);
	void IsPerceivedTarget(class AActor* TargetActor, bool* IsPerceivedTarget, int32 Temp_int_Array_Index_Variable, const struct FActorPerceptionBlueprintInfo& CallFunc_GetActorsPerception_Info, bool CallFunc_GetActorsPerception_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FAIStimulus& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UserConstructionScript(class UNWXPathFollowingComponent* LFollowComponent, class UPathFollowingComponent* CallFunc_GetPathFollowingComponent_ReturnValue, const struct FCarTurnData& CallFunc_GetCarTurnsData_ReturnValue, class UNWXPathFollowingComponent* K2Node_DynamicCast_AsNWXPath_Following_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FAICCreatureData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void ReceivePossess(class APawn* PossessedPawn);
	void UpdateAIEnabled();
	void ReceiveBeginPlay();
	void MoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult Result);
	void TargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void CreatureDeath(class ANWXAICharacter* Creature);
	void CreatureDestroyed(class AActor* DestroyedActor);
	void OnNavLinkStart(struct FVector& Left, struct FVector& Right, struct FVector& Destination, enum class ENavLinkDirection Direction, enum class ENavLinkType NavType);
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void CreatureTargetDestroyed(class AActor* DestroyedActor);
	void CreatureTargetDeath(class ANWXAICharacter* AICharacter);
	void ExecuteUbergraph_AIC_CreatureBase(int32 EntryPoint, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavFilter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_Actor, const struct FAIStimulus& K2Node_CustomEvent_Stimulus, bool CallFunc_RunBehaviorTree_ReturnValue, bool CallFunc_UpdateAllyList_bIsAlly, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FAIRequestID& K2Node_CustomEvent_RequestID, enum class EPathFollowingResult K2Node_CustomEvent_Result, bool K2Node_SwitchEnum_CmpSuccess, class ANWXAICharacter* K2Node_CustomEvent_Creature, class AActor* K2Node_CustomEvent_DestroyedActor_1, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_Event_Left, const struct FVector& K2Node_Event_Right, const struct FVector& K2Node_Event_Destination, enum class ENavLinkDirection K2Node_Event_Direction, enum class ENavLinkType K2Node_Event_NavType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_InitializeBlackBoardVariables_Success, bool CallFunc_IsServer_ReturnValue, bool CallFunc_UpdateBlackBoardAIEnabled_bSuccess, class APawn* K2Node_Event_PossessedPawn, class UTicketTakerComponent* CallFunc_GetComponentByClass_ReturnValue, class ABP_CreatureBase_C* CallFunc_GetCreaturePawn_CreaturePawn, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AActor* K2Node_ComponentBoundEvent_Actor, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus, class AActor* K2Node_CustomEvent_DestroyedActor, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_RemoveFromAllLists_Branch, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class ANWXAICharacter* K2Node_CustomEvent_AICharacter, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_RemoveFromAllLists_Branch_1, TArray<TSoftClassPtr<class UAIAction>>& CallFunc_GetAIActions_ReturnValue, TSoftClassPtr<class UAIAction> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsAIAction, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_AddActionClass_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void CreatureSetTarget__DelegateSignature(class AAIC_CreatureBase_C* AIC_CreatureBase, class ABP_CreatureBase_C* BP_CreatureBase, class AActor* OldTarget, class AActor* NewTarget);
};

}


