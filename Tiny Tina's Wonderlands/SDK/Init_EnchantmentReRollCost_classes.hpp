#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass Init_EnchantmentReRollCost.Init_EnchantmentReRollCost_C
class UInit_EnchantmentReRollCost_C : public UAttributeInitializer
{
public:
	float                                        One;                                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Min;                                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInit_EnchantmentReRollCost_C* GetDefaultObj();

	void ComputeReRollCost(class UInventoryBalanceStateComponent* InventoryBalanceState, float* ReRollCost, uint8 CallFunc_GetReRollCount_ReturnValue, class UInventoryRarityData* CallFunc_GetInventoryRarityData_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue, const class FString& CallFunc_GetRarityIdentifier_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	float CalculateAttributeInitialValue(class UObject* Context, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UInventoryBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_ComputeReRollCost_ReRollCost, bool CallFunc_IsValid_ReturnValue);
};

}


