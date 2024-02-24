#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A0 - 0x198)
// BlueprintGeneratedClass Ability_All_Wards_ShieldBreak_SpellCritChance.Ability_All_Wards_ShieldBreak_SpellCritChance_C
class UAbility_All_Wards_ShieldBreak_SpellCritChance_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAbility_All_Wards_ShieldBreak_SpellCritChance_C* GetDefaultObj();

	void Enchantment_Shield_NowDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void Enchantment_Shield_Filled(const struct FGameResourcePoolReference& ResourcePool);
	void ExecuteUbergraph_Ability_All_Wards_ShieldBreak_SpellCritChance(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool1, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


