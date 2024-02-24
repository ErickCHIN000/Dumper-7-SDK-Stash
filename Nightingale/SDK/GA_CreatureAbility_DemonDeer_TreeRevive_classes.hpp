#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x558 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_DemonDeer_TreeRevive.GA_CreatureAbility_DemonDeer_TreeRevive_C
class UGA_CreatureAbility_DemonDeer_TreeRevive_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Creature_Wildlife_DemonDeer_C*     DemonDeer;                                         // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_ResourceNode_IIM_C*                ResourceNode;                                      // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                ConsideredInstances;                               // 0x528(0x10)(Edit, BlueprintVisible)
	bool                                         FoundNearEoten;                                    // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HealDistance;                                      // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BPSpawnerData;                                     // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_DemonDeer_TreeRevive_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, double CallFunc_HealTrees_HealRadius_ImplicitCast);
	void Spawn_Eoten(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_Creature_Wildlife_Eoten_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Eoten, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class ABP_CreatureSpawner_Wildlife_C* CallFunc_FinishSpawningActor_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void HealTrees(double HealRadius, const TArray<struct FS_RegrowIMMActor>& ChaosTrees, const TArray<struct FGameplayTag>& RockTags, const TArray<int32>& LConsideredInstances, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, const struct FActorAndInstanceIds& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FS_RegrowIMMActor& K2Node_MakeStruct_S_RegrowIMMActor, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class ABP_IIMProxy_ChaosFallingTree_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_IIMProxy_ChaosFallingTree_C* CallFunc_Array_Get_Item_2, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FS_RegrowIMMActor& K2Node_MakeStruct_S_RegrowIMMActor_1, int32 CallFunc_Array_Add_ReturnValue, TScriptInterface<class IBPI_ResourceNode_C> CallFunc_GetGrantedResource_self_CastInput, bool CallFunc_GetGrantedResource_Success, const struct FItemData& CallFunc_GetGrantedResource_ResourceData, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_Creature_Wildlife_DemonDeer_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Demon_Deer, bool K2Node_DynamicCast_bSuccess_1);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_DemonDeer_TreeRevive(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool K2Node_Event_bWasCancelled);
};

}


