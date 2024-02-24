#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0x368 - 0x198)
// BlueprintGeneratedClass Ability_Knight_Spell_FRKill_ReviveHeal.Ability_Knight_Spell_FRKill_ReviveHeal_C
class UAbility_Knight_Spell_FRKill_ReviveHeal_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FAttributeEffectData                  AttEffect_BonusProjPerShot;                        // 0x1A0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAttributeModifierHandle           AttEffectHandle_BonusProjPerShot;                  // 0x1E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEnvQueryParams                       EQS_AlliesInRange_FFYL;                            // 0x1F8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       EQS_AlliesInRange_Heal;                            // 0x2B0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UAbility_Knight_Spell_FRKill_ReviveHeal_C* GetDefaultObj();

	void CE_Ench_ReviveAllies();
	void CE_Ench_HealAllies();
	void CE_Explosion();
	void Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void ExecuteUbergraph_Ability_Knight_Spell_FRKill_ReviveHeal(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors1, bool CallFunc_RunEnvQueryForAllActors_ReturnValue1, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item1, class AOakCharacter* K2Node_DynamicCast_AsOak_Character1, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, class UParticleSystemComponent* CallFunc_PlayExplosion_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FHitResult& Temp_struct_Variable);
};

}


