#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Shaman_06_DamageDealt.Init_Shaman_06_DamageDealt_C
class UInit_Shaman_06_DamageDealt_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 DamageDealtHandle;                                 // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Shaman_06_DamageDealt_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UOakPassiveAbility* K2Node_DynamicCast_AsOak_Passive_Ability, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}

