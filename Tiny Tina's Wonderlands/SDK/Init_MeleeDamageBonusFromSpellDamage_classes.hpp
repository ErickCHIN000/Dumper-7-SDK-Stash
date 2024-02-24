#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_MeleeDamageBonusFromSpellDamage.Init_MeleeDamageBonusFromSpellDamage_C
class UInit_MeleeDamageBonusFromSpellDamage_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_MeleeDamageBonusFromSpellDamage_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


