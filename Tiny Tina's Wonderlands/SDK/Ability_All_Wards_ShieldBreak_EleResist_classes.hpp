#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1C8 - 0x198)
// BlueprintGeneratedClass Ability_All_Wards_ShieldBreak_EleResist.Ability_All_Wards_ShieldBreak_EleResist_C
class UAbility_All_Wards_ShieldBreak_EleResist_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_All_Wards_ShieldBreak_El_0; // 0x1A0(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_All_Wards_ShieldBreak_EleResist_C* GetDefaultObj();

	void Enchantment_Shield_NowDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void Enchantment_Shield_Filled(const struct FGameResourcePoolReference& ResourcePool);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_All_Wards_ShieldBreak_EleResist(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool1, const struct FGameResourcePoolReference& K2Node_Event_ResourcePool, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1);
};

}


