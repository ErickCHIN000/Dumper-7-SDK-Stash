#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Barbarian_05_DamageTaken.Init_Barbarian_05_DamageTaken_C
class UInit_Barbarian_05_DamageTaken_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 DamageTakenHandle;                                 // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Barbarian_05_DamageTaken_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UOakPassiveAbility* K2Node_DynamicCast_AsOak_Passive_Ability, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}

