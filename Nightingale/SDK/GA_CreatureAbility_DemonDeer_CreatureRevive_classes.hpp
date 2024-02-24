#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x618 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_DemonDeer_CreatureRevive.GA_CreatureAbility_DemonDeer_CreatureRevive_C
class UGA_CreatureAbility_DemonDeer_CreatureRevive_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Creature_Wildlife_DemonDeer_C*     DemonDeer;                                         // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_ResourceNode_IIM_C*                ResourceNode;                                      // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                ConsideredInstances;                               // 0x528(0x10)(Edit, BlueprintVisible)
	TArray<class ABP_CreatureBase_C*>            Targets;                                           // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class UClass*>                        TargetClass;                                       // 0x548(0x10)(Edit, BlueprintVisible)
	uint8                                        Pad_44F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TargetTransform;                                   // 0x560(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ReviveDistance;                                    // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, struct FTransform>       ClassTransform;                                    // 0x5C8(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_DemonDeer_CreatureRevive_C* GetDefaultObj();

	void OnCreatureSpawned(class ABP_CreatureBase_C* Creature);
	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void ReviveCreature(class UClass* CreatureClass, const struct FTransform& CreatureTransform, const struct FS_BPSpawnerData& NewLocalVar_0, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class ABP_CreatureSpawner_Wildlife_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftClassPtr<class ABP_CreatureBase_C> CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CorpseCleanup(class ABP_CreatureBase_C* Creature);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_CreatureAbility_DemonDeer_CreatureRevive(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, bool CallFunc_Not_PreBool_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_DeathDeadTag_ReturnValue, TArray<class AActor*>& CallFunc_GetCurrentlyPerceivedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
};

}


