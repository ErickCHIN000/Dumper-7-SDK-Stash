#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x538 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Summon_ElderEoten.GA_CreatureAbility_Summon_ElderEoten_C
class UGA_CreatureAbility_Summon_ElderEoten_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                   Spawner_Data;                                      // 0x518(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_Wildlife_Eoten_Apex_C*    ElderEoten;                                        // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    Spawned_Wisps;                                     // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Summon_ElderEoten_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayTag& Temp_struct_Variable, class ABP_Creature_Wildlife_Eoten_Apex_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Eoten_Apex, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawner_Wildlife_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled);
	void AddToSpawner(class ABP_CreatureBase_C* Creature);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_CreatureAbility_Summon_ElderEoten(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class ABP_CreatureBase_C* K2Node_CustomEvent_Creature, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


