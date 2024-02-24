#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x15E2 - 0x15D0)
// BlueprintGeneratedClass BP_Creature_Wildlife.BP_Creature_Wildlife_C
class ABP_Creature_Wildlife_C : public ABP_CreatureBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                WildlifeAICClass;                                  // 0x15D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Interactable;                                      // 0x15E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         ResetText;                                         // 0x15E1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Wildlife_C* GetDefaultObj();

	void OnDamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_OnDamageActor_AggregatedDamageTags, bool CallFunc_IsFriend_bIsFriend, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawner_Wildlife_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Wildlife, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_FMax_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsTargetReachableOnNavMesh_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_ActorHasTag_ReturnValue_1, float CallFunc_AddTimedState_TimePeriod_ImplicitCast);
	void OnRep_ResetText();
	void OnRep_Interactable();
	void InteractPressed(bool* Success, bool bFoundItem, const struct FInventoryEntry& ItemToDrop, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetEntriesForCurrentItemReward_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, int32 Temp_int_Loop_Counter_Variable, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetClosestPlayer_ClosestEnemyActor, double CallFunc_GetClosestPlayer_Distance, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_GetEnabled_Enabled, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_InteractPressed_Success);
	void HandleTagCountChanged(struct FGameplayTag& Tag, int32 Count);
	void ServerDeathLogic(class ABP_Creature_Wildlife_C* LCreature, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetMeleeCombatRangeMax_self_CastInput, float CallFunc_GetMeleeCombatRangeMax_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class AAIC_Spawner_Wildlife_C* K2Node_DynamicCast_AsAIC_Spawner_Wildlife, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetClosestAlly_ClosestEnemyActor, double CallFunc_GetClosestAlly_Distance, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsActorPrey_IsPrey, class ABP_Creature_Wildlife_C* K2Node_DynamicCast_AsBP_Creature_Wildlife, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Greater_DoubleDouble_B_ImplicitCast);
	void IsAfraidOf(class AActor* ActorInQuestion, bool* bIsAfraidOf, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsAfraidOf_bIsAfraidOf, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveAuthorityGained();
	void ExecuteUbergraph_BP_Creature_Wildlife(int32 EntryPoint, bool CallFunc_IsMinHealth_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AAIC_Creature_Wildlife_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AAIC_Creature_Wildlife_C* CallFunc_FinishSpawningActor_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
};

}


