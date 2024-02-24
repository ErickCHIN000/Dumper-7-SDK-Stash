#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_StatsUtility.BPFL_StatsUtility_C
class UBPFL_StatsUtility_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_StatsUtility_C* GetDefaultObj();

	double CalculateStaminaDrain(class UObject* __WorldContext, double CriticalStaminaDrain, double StaminaBonusMultiplier, double BaseStaminaDrain, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void StandardBonusFormulaClamped(double Base, TArray<double>& Bonus, double Min, double Max, class UObject* __WorldContext, double* Total, double BonusSum, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue);
	void StandardBonusFormulaInverted(double Base, TArray<double>& Bonus, class UObject* __WorldContext, double* Total, double BonusSum, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void StandardBonusFormula(double Base, TArray<double>& Bonus, class UObject* __WorldContext, double* Total, double BonusSum, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, double CallFunc_Array_Get_Item, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


