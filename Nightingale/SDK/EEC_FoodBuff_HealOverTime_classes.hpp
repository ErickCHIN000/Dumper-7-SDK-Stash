#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x60 - 0x40)
// BlueprintGeneratedClass EEC_FoodBuff_HealOverTime.EEC_FoodBuff_HealOverTime_C
class UEEC_FoodBuff_HealOverTime_C : public UNWXGameplayEffectExecutionCalculation
{
public:
	struct FGameplayTagContainer                 SlotTag;                                           // 0x40(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UEEC_FoodBuff_HealOverTime_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, double Period, float HealAmount, class UAbilitySystemComponent* LAbilitySystem, int32 Temp_int_Array_Index_Variable, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectCustomExecutionOutput& CallFunc_Execute_OutExecutionOutput, const struct FGameplayAttribute& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSourceAttributeMagnitude_Magnitude, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetGameplayEffectMagnitude_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_DamageActorOverTime_Duration_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_HealAmount_ImplicitCast);
};

}


