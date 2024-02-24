#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_PlayerStat_CritChance_Gun.Init_PlayerStat_CritChance_Gun_C
class UInit_PlayerStat_CritChance_Gun_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_PlayerStat_CritChance_Gun_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCritModifierTotals_ModifierTotal, const struct FCritSourceModifiers& CallFunc_GetCritModifierTotals_ReturnValue);
};

}


