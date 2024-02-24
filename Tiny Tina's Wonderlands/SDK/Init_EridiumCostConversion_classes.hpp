#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_EridiumCostConversion.Init_EridiumCostConversion_C
class UInit_EridiumCostConversion_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_EridiumCostConversion_C* GetDefaultObj();

	void MoneyMultiplier(class AActor* GearItem, float GearTypeMult, float* GearMoneyMult, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void GearTypeMultiplier(class AActor* GearItem, float* GearTypeMult, float MyReturn, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, float CallFunc_GetDataTableValue_OutValue2, bool CallFunc_GetDataTableValue_ReturnValue2, float CallFunc_GetDataTableValue_OutValue3, bool CallFunc_GetDataTableValue_ReturnValue3, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, class AShield* K2Node_DynamicCast_AsShield, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetDataTableValue_OutValue4, bool CallFunc_GetDataTableValue_ReturnValue4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_GetDataTableValue_OutValue5, bool CallFunc_GetDataTableValue_ReturnValue5, float CallFunc_GetDataTableValue_OutValue6, bool CallFunc_GetDataTableValue_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_GetDataTableValue_OutValue7, bool CallFunc_GetDataTableValue_ReturnValue7);
	float CalculateAttributeInitialValue(class UObject* Context, class AActor* MyGear, float MyValue, const struct FDataTableValueHandle& ValueMultiplier, const struct FDataTableValueHandle& ValueBase, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, float CallFunc_GearTypeMultiplier_GearTypeMult, float CallFunc_MoneyMultiplier_GearMoneyMult, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetExperienceLevel_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


