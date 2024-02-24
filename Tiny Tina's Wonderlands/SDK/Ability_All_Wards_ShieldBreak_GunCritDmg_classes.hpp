#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1C8 - 0x198)
// BlueprintGeneratedClass Ability_All_Wards_ShieldBreak_GunCritDmg.Ability_All_Wards_ShieldBreak_GunCritDmg_C
class UAbility_All_Wards_ShieldBreak_GunCritDmg_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_All_Wards_FullHealth_Gun_0; // 0x1A0(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_All_Wards_ShieldBreak_GunCritDmg_C* GetDefaultObj();

	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void Enchantment_Shield_NowDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void Enchantment_Shield_Filled(const struct FGameResourcePoolReference& ResourcePool);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_All_Wards_ShieldBreak_GunCritDmg(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, bool Temp_bool_IsClosed_Variable, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool1, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1);
};

}


