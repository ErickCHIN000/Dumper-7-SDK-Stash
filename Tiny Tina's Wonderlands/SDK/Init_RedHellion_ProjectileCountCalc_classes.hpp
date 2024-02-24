#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_RedHellion_ProjectileCountCalc.Init_RedHellion_ProjectileCountCalc_C
class UInit_RedHellion_ProjectileCountCalc_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 MoveSpeedMod;                                      // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_RedHellion_ProjectileCountCalc_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float PercentBonusSpeed, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, class UOakCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsSprinting_ReturnValue, float CallFunc_K2_GetModifiedMaxSpeed_ReturnValue, float CallFunc_K2_GetModifiedMaxSpeed_ReturnValue1, float CallFunc_BreakGbxAttributeFloat_Value, float CallFunc_BreakGbxAttributeFloat_BaseValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakGbxAttributeFloat_Value1, float CallFunc_BreakGbxAttributeFloat_BaseValue1, float CallFunc_Divide_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
};

}


