#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass Init_EnchantmentWeight.Init_EnchantmentWeight_C
class UInit_EnchantmentWeight_C : public UAttributeInitializer
{
public:

	static class UClass* StaticClass();
	static class UInit_EnchantmentWeight_C* GetDefaultObj();

	void IsReRollingEnchantment(class UInventoryBalanceStateComponent* InventoryBalanceState, bool* IsReRollingEnchantment, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsBeingReRolled_ReturnValue);
	void GetInventoryBalanceState(class UObject* Context, class UInventoryBalanceStateComponent** InventoryBalanceState, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UInventoryBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue);
	void GetRarityWeightScalar(class UInventoryBalanceStateComponent* InventoryBalanceState, float* RarityWeightScale, class UOakInventoryRarityData* NewInventoryRarityData, float WeightToUse, class UInventoryRarityData* CallFunc_GetInventoryRarityData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOakInventoryRarityData* K2Node_DynamicCast_AsOak_Inventory_Rarity_Data, bool K2Node_DynamicCast_bSuccess, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue2, bool CallFunc_GetDataTableValue_ReturnValue2);
	float CalculateAttributeInitialValue(class UObject* Context, float BaseDropWeight, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_InventoryBalanceState, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_GetRarityWeightScalar_RarityWeightScale, bool CallFunc_IsReRollingEnchantment_IsReRollingEnchantment, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}


