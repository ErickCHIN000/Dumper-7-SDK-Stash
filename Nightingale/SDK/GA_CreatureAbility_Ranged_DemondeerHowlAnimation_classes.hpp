#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x560 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Ranged_DemondeerHowlAnimation.GA_CreatureAbility_Ranged_DemondeerHowlAnimation_C
class UGA_CreatureAbility_Ranged_DemondeerHowlAnimation_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayAttribute                    DamageAttribute;                                   // 0x518(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_Creature_Wildlife_DemonDeer_C*     Demon_Deer;                                        // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    SpawnedWisps;                                      // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Ranged_DemondeerHowlAnimation_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, const struct FDataTableRowHandle& SpawnerData, const struct FGameplayTag& Temp_struct_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Creature_Wildlife_DemonDeer_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Demon_Deer, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawner_Wildlife_C* CallFunc_FinishSpawningActor_ReturnValue);
	void AddToSpawner(class ABP_CreatureBase_C* Creature);
	void ExecuteUbergraph_GA_CreatureAbility_Ranged_DemondeerHowlAnimation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_CreatureBase_C* K2Node_CustomEvent_Creature, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


