#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xC0 - 0x30)
// BlueprintGeneratedClass Init_Rogue_13_EvadeChance.Init_Rogue_13_EvadeChance_C
class UInit_Rogue_13_EvadeChance_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 EvadeChanceHandle;                                 // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FRuntimeFloatCurve                    Scalar;                                            // 0x48(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UInit_Rogue_13_EvadeChance_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess1, class UOakCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UOakPassiveAbility* K2Node_DynamicCast_AsOak_Passive_Ability, bool K2Node_DynamicCast_bSuccess2, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetCurveFloatValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}


