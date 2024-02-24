#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_Perceiver_CritDamage.Init_Perceiver_CritDamage_C
class UInit_Perceiver_CritDamage_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_Perceiver_CritDamage_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class ABPWeap_PS_DAL_C* K2Node_DynamicCast_AsBPWeap_PS_DAL, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetCritModifierTotals_ModifierTotal, const struct FCritSourceModifiers& CallFunc_GetCritModifierTotals_ReturnValue);
};

}


