#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_Companion_Owner_CritChance_Base.Init_Companion_Owner_CritChance_Base_C
class UInit_Companion_Owner_CritChance_Base_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_Companion_Owner_CritChance_Base_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCritModifierTotals_ModifierTotal, const struct FCritSourceModifiers& CallFunc_GetCritModifierTotals_ReturnValue);
};

}


