#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_PlayerStats.BPFL_PlayerStats_C
class UBPFL_PlayerStats_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_PlayerStats_C* GetDefaultObj();

	void CalculateSwimmingStaminaDrain(class UObject* __WorldContext, double* Cost);
	void CalculateClothingDurabilityCost(class AActor* Actor, double Damage, const struct FGameplayTagContainer& EffectTags, class UObject* __WorldContext, double* Cost, double LCost, bool CallFunc_HasTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, double CallFunc_GetCurrentHealth_CurrentHealth, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue);
	void CalculateMeleeBlockStaminaCost(double Damage, class UObject* __WorldContext, double* Cost, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	int32 CalculateNumberOfDigLoops(class AActor* Actor, class UObject* __WorldContext);
	double CalculateDeconstructionReturnPercent(class AActor* Actor, class UObject* __WorldContext);
	void CalculateConstructionEffectiveness(class AActor* Actor, class UObject* __WorldContext, int32* Effectiveness);
	double CalculateMechanicalHealing(class AActor* Actor, class UObject* __WorldContext);
	double CalculateSpreadPercent(double Spread, class UObject* __WorldContext, class UCurveFloat* SpreadCurve, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_FunctionResult_ReturnValue_ImplicitCast);
	double GetSpreadPercentForActor(class AActor* Actor, class UObject* __WorldContext, class UCurveFloat* SpreadCurve, class USpreadComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetSpread_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_CalculateSpreadPercent_ReturnValue, double CallFunc_CalculateSpreadPercent_Spread_ImplicitCast);
	double CalculateSpreadDegrees(class AActor* Actor, class UObject* __WorldContext, class UCurveFloat* SpreadCurve, double CallFunc_GetSpreadPercentForActor_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue);
};

}


