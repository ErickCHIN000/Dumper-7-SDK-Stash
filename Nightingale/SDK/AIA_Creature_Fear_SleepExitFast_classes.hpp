#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB8 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Fear_SleepExitFast.AIA_Creature_Fear_SleepExitFast_C
class UAIA_Creature_Fear_SleepExitFast_C : public UAIA_Creature_Ambient_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Fear_SleepExitFast_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_CheckStaticTargetRequirements_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemy_bIsEnemy, bool CallFunc_BooleanAND_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, double SleepModifier, double StealthModifier, class AActor* LTarget, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetFleeCombatRangeMin_self_CastInput, float CallFunc_GetFleeCombatRangeMin_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetFleeCombatRangeMax_self_CastInput, float CallFunc_GetFleeCombatRangeMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_GetStealthModifier_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_3, bool CallFunc_ActorHasTag_ReturnValue_4, bool CallFunc_ActorHasTag_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double K2Node_VariableSet_StealthModifier_ImplicitCast);
	float GetNormalizedScore(class AActor* Target);
	bool CheckOwnerRequirements(bool LNocturnal, bool LIsNight, class UBP_SimulationMonitorComponent_C* LMonitor, class AGameStateBase* LGameState, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
};

}


