#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_Spell_CoP_DamageScale.Init_Spell_CoP_DamageScale_C
class UInit_Spell_CoP_DamageScale_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_Spell_CoP_DamageScale_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, int32 RarityMultiplier, float CallFunc_GetValueOfAttribute_ReturnValue, class ABPClass_Spell_C* K2Node_DynamicCast_AsBPClass_Spell, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSpellHavePart_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_DoesSpellHavePart_ReturnValue1, bool CallFunc_DoesSpellHavePart_ReturnValue2, bool CallFunc_DoesSpellHavePart_ReturnValue3, bool CallFunc_DoesSpellHavePart_ReturnValue4);
};

}

