#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass MMC_GlidingCost.MMC_GlidingCost_C
class UMMC_GlidingCost_C : public UNWXGameplayModMagnitudeCalculation
{
public:

	static class UClass* StaticClass();
	static class UMMC_GlidingCost_C* GetDefaultObj();

	void BaseCost(const struct FGameplayEffectSpec& Spec, double* Cost, const struct FGameplayAttribute& Temp_struct_Variable, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AEquippableItem* Temp_object_Variable, float CallFunc_CalculateItemAttributeValue_ReturnValue, TArray<double>& K2Node_MakeArray_Array, double CallFunc_StandardBonusFormulaInverted_Total, double K2Node_MakeArray__1__ImplicitCast, double K2Node_MakeArray__0__ImplicitCast);
	float NWXCalculateBaseMagnitude(struct FGameplayEffectSpec& Spec, struct FTagValueContainer& MMCIntermediateOutputs, double CallFunc_BaseCost_Cost, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
};

}


