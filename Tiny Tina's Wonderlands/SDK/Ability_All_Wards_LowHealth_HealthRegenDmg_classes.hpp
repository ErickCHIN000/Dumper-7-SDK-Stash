#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1C8 - 0x198)
// BlueprintGeneratedClass Ability_All_Wards_LowHealth_HealthRegenDmg.Ability_All_Wards_LowHealth_HealthRegenDmg_C
class UAbility_All_Wards_LowHealth_HealthRegenDmg_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Wards_LowHealth_HealthRegenDmg; // 0x1A0(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_All_Wards_LowHealth_HealthRegenDmg_C* GetDefaultObj();

	void OnActivated();
	void HealthState(enum class EHealthState HealthState);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_All_Wards_LowHealth_HealthRegenDmg(int32 EntryPoint, enum class EHealthState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, enum class EHealthState K2Node_CustomEvent_HealthState, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Select_Default, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1);
};

}


