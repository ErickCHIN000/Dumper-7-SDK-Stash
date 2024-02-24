#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass MMC_FishingCost.MMC_FishingCost_C
class UMMC_FishingCost_C : public UNWXGameplayModMagnitudeCalculation
{
public:

	static class UClass* StaticClass();
	static class UMMC_FishingCost_C* GetDefaultObj();

	void BaseCost(const struct FGameplayEffectSpec& Spec, double* Cost, class AEquippableItem* Temp_object_Variable, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class UBP_FishingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, double CallFunc_GetTensionCost_Tension, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, const struct FGameplayAttribute& Temp_struct_Variable, float CallFunc_CalculateItemAttributeValue_ReturnValue, TArray<double>& K2Node_MakeArray_Array, double CallFunc_StandardBonusFormulaInverted_Total, double K2Node_MakeArray__1__ImplicitCast, double K2Node_MakeArray__0__ImplicitCast);
	float NWXCalculateBaseMagnitude(struct FGameplayEffectSpec& Spec, struct FTagValueContainer& MMCIntermediateOutputs, double CallFunc_BaseCost_Cost, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
};

}


