#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1B0 - 0x198)
// BlueprintGeneratedClass Ability_Shaman_Melee_Plaguestorm_Poison.Ability_Shaman_Melee_Plaguestorm_Poison_C
class UAbility_Shaman_Melee_Plaguestorm_Poison_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	TArray<struct FStatusEffectInstanceReference> InitialEnchantmentStatusEffect;                    // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UAbility_Shaman_Melee_Plaguestorm_Poison_C* GetDefaultObj();

	void Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void OnDeactivated();
	void CleanupEnchantment();
	void ExecuteUbergraph_Ability_Shaman_Melee_Plaguestorm_Poison(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, int32 Temp_int_Array_Index_Variable, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue2, bool CallFunc_GetDataTableValue_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, bool K2Node_SwitchEnum_CmpSuccess, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_RemoveStatusEffectInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


