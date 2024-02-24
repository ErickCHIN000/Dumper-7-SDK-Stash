#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProgressBarLinear.ProgressBarLinear_C
// (None)

class UClass* UProgressBarLinear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressBarLinear_C");

	return Clss;
}


// ProgressBarLinear_C ProgressBarLinear.Default__ProgressBarLinear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProgressBarLinear_C* UProgressBarLinear_C::GetDefaultObj()
{
	static class UProgressBarLinear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressBarLinear_C*>(UProgressBarLinear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Count_TargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::Count_TargetPercent(double Time, double* Value, bool Temp_bool_Variable, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool Temp_bool_Variable_1, double Temp_real_Variable, bool Temp_bool_Variable_2, double K2Node_Select_Default, double Temp_real_Variable_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Count_TargetPercent");

	Params::UProgressBarLinear_C_Count_TargetPercent_Params Parms{};

	Parms.Time = Time;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ProgressBarLinear.ProgressBarLinear_C.RemoveEntryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IndexToRemove                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::RemoveEntryIndex(int32 IndexToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "RemoveEntryIndex");

	Params::UProgressBarLinear_C_RemoveEntryIndex_Params Parms{};

	Parms.IndexToRemove = IndexToRemove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.GetEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::GetEntryIndex(int32 Index, double* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "GetEntryIndex");

	Params::UProgressBarLinear_C_GetEntryIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ProgressBarLinear.ProgressBarLinear_C.IsValidEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              IndexToTest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UProgressBarLinear_C::IsValidEntryIndex(int32 IndexToTest, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "IsValidEntryIndex");

	Params::UProgressBarLinear_C_IsValidEntryIndex_Params Parms{};

	Parms.IndexToTest = IndexToTest;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetLocalVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::SetLocalVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetLocalVariables");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.HasEffectChanged
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasChanged                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Effects                  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqualColor_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UProgressBarLinear_C::HasEffectChanged(bool HasChanged, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FS_Effects& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_3, bool CallFunc_NotEqualColor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_4, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue_2, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue_3, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqual_BoolBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_17, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_3, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_4, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_5, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_1, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_2, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_3, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_4, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "HasEffectChanged");

	Params::UProgressBarLinear_C_HasEffectChanged_Params Parms{};

	Parms.HasChanged = HasChanged;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_1 = CallFunc_NotEqual_BoolBool_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_2 = CallFunc_NotEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_3 = CallFunc_NotEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_NotEqualColor_ReturnValue = CallFunc_NotEqualColor_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_4 = CallFunc_NotEqual_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1 = CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue_2 = CallFunc_NotEqual_Vector2DVector2D_ReturnValue_2;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue_3 = CallFunc_NotEqual_Vector2DVector2D_ReturnValue_3;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_5 = CallFunc_NotEqual_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_2 = CallFunc_NotEqual_BoolBool_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_BooleanOR_ReturnValue_17 = CallFunc_BooleanOR_ReturnValue_17;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2 = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_3 = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_4 = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_4;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_5 = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_5;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_1 = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_2 = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_2;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_3 = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_3;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_4 = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_4;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_5 = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.NotEqualColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                A                                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                B                                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UProgressBarLinear_C::NotEqualColor(const struct FLinearColor& A, const struct FLinearColor& B, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_3, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_1, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_2, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "NotEqualColor");

	Params::UProgressBarLinear_C_NotEqualColor_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_BreakColor_R_1 = CallFunc_BreakColor_R_1;
	Parms.CallFunc_BreakColor_G_1 = CallFunc_BreakColor_G_1;
	Parms.CallFunc_BreakColor_B_1 = CallFunc_BreakColor_B_1;
	Parms.CallFunc_BreakColor_A_1 = CallFunc_BreakColor_A_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_2 = CallFunc_NotEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_3 = CallFunc_NotEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2 = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_3 = CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_1 = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_2 = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_2;
	Parms.CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_3 = CallFunc_NotEqual_DoubleDouble_B_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.HasAnyValueChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEffectChanged_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqualColor_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqualColor_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqualColor_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqualColor_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqualColor_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqualColor_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UProgressBarLinear_C::HasAnyValueChanged(bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, bool CallFunc_HasEffectChanged_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqualColor_ReturnValue, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqualColor_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, bool CallFunc_NotEqual_BoolBool_ReturnValue_4, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, bool CallFunc_NotEqualColor_ReturnValue_2, bool CallFunc_NotEqualColor_ReturnValue_3, bool CallFunc_NotEqualColor_ReturnValue_4, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_4, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_5, bool CallFunc_NotEqual_BoolBool_ReturnValue_5, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_6, bool CallFunc_NotEqual_ByteByte_ReturnValue_6, bool CallFunc_NotEqual_BoolBool_ReturnValue_6, bool CallFunc_NotEqual_ByteByte_ReturnValue_7, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, bool CallFunc_NotEqualColor_ReturnValue_5, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_7, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_8, bool CallFunc_NotEqual_ObjectObject_ReturnValue_4, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_9, bool CallFunc_NotEqual_ByteByte_ReturnValue_8, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_10, bool CallFunc_NotEqual_ByteByte_ReturnValue_9, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "HasAnyValueChanged");

	Params::UProgressBarLinear_C_HasAnyValueChanged_Params Parms{};

	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_1 = CallFunc_NotEqual_BoolBool_ReturnValue_1;
	Parms.CallFunc_HasEffectChanged_ReturnValue = CallFunc_HasEffectChanged_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_2 = CallFunc_NotEqual_BoolBool_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqualColor_ReturnValue = CallFunc_NotEqualColor_ReturnValue;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_3 = CallFunc_NotEqual_BoolBool_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_NotEqualColor_ReturnValue_1 = CallFunc_NotEqualColor_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_4 = CallFunc_NotEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_4 = CallFunc_NotEqual_BoolBool_ReturnValue_4;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_2 = CallFunc_NotEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_3 = CallFunc_NotEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_5 = CallFunc_NotEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_2 = CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_NotEqualColor_ReturnValue_2 = CallFunc_NotEqualColor_ReturnValue_2;
	Parms.CallFunc_NotEqualColor_ReturnValue_3 = CallFunc_NotEqualColor_ReturnValue_3;
	Parms.CallFunc_NotEqualColor_ReturnValue_4 = CallFunc_NotEqualColor_ReturnValue_4;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_4 = CallFunc_NotEqual_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_5 = CallFunc_NotEqual_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_5 = CallFunc_NotEqual_BoolBool_ReturnValue_5;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_6 = CallFunc_NotEqual_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_6 = CallFunc_NotEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_6 = CallFunc_NotEqual_BoolBool_ReturnValue_6;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_7 = CallFunc_NotEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_3 = CallFunc_NotEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_NotEqualColor_ReturnValue_5 = CallFunc_NotEqualColor_ReturnValue_5;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_7 = CallFunc_NotEqual_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_8 = CallFunc_NotEqual_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_4 = CallFunc_NotEqual_ObjectObject_ReturnValue_4;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_9 = CallFunc_NotEqual_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_8 = CallFunc_NotEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_10 = CallFunc_NotEqual_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_9 = CallFunc_NotEqual_ByteByte_ReturnValue_9;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1 = CallFunc_NotEqual_Vector2DVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.IsEffectProgressChangeColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_Effects                  Effect                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UProgressBarLinear_C::IsEffectProgressChangeColor(struct FS_Effects& Effect, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "IsEffectProgressChangeColor");

	Params::UProgressBarLinear_C_IsEffectProgressChangeColor_Params Parms{};

	Parms.Effect = Effect;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetSeparationSteps
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Steps                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetSeparationSteps(int32* Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetSeparationSteps");

	Params::UProgressBarLinear_C_PB_GetSeparationSteps_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Steps != nullptr)
		*Steps = Parms.Steps;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_AddEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects                  Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_AddEffect(const struct FS_Effects& Effect, int32* Index, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_AddEffect");

	Params::UProgressBarLinear_C_PB_AddEffect_Params Parms{};

	Parms.Effect = Effect;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>          Effects                                                          (Parm, OutParm)

void UProgressBarLinear_C::PB_GetEffects(TArray<struct FS_Effects>* Effects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetEffects");

	Params::UProgressBarLinear_C_PB_GetEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effects != nullptr)
		*Effects = std::move(Parms.Effects);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetIsCustomMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetIsCustomMarquee(bool* IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetIsCustomMarquee");

	Params::UProgressBarLinear_C_PB_GetIsCustomMarquee_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMarquee != nullptr)
		*IsMarquee = Parms.IsMarquee;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetIsMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetIsMarquee(bool* IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetIsMarquee");

	Params::UProgressBarLinear_C_PB_GetIsMarquee_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMarquee != nullptr)
		*IsMarquee = Parms.IsMarquee;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetUseGradientFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradientFillColor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetUseGradientFillColor(bool* UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetUseGradientFillColor");

	Params::UProgressBarLinear_C_PB_GetUseGradientFillColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseGradientFillColor != nullptr)
		*UseGradientFillColor = Parms.UseGradientFillColor;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetFillColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetFillColor");

	Params::UProgressBarLinear_C_PB_GetFillColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetFillColor_Negative
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetTargetFillColor_Negative(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetTargetFillColor_Negative");

	Params::UProgressBarLinear_C_PB_GetTargetFillColor_Negative_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetFillColor_Positive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetTargetFillColor_Positive(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetTargetFillColor_Positive");

	Params::UProgressBarLinear_C_PB_GetTargetFillColor_Positive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetInterpTimeTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetInterpTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetInterpTimeTarget(double* TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetInterpTimeTarget");

	Params::UProgressBarLinear_C_PB_GetInterpTimeTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetInterpTime != nullptr)
		*TargetInterpTime = Parms.TargetInterpTime;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetInterpTimeCurrent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentInterpTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetInterpTimeCurrent(double* CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetInterpTimeCurrent");

	Params::UProgressBarLinear_C_PB_GetInterpTimeCurrent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentInterpTime != nullptr)
		*CurrentInterpTime = Parms.CurrentInterpTime;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetProgressMethod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         EProgressMethod                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetProgressMethod(enum class EProgressMethod* EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetProgressMethod");

	Params::UProgressBarLinear_C_PB_GetProgressMethod_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EProgressMethod != nullptr)
		*EProgressMethod = Parms.EProgressMethod;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetUseTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetUseTargetPercent(bool* UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetUseTargetPercent");

	Params::UProgressBarLinear_C_PB_GetUseTargetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UseTargetPercent != nullptr)
		*UseTargetPercent = Parms.UseTargetPercent;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetPercent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Linear_C*      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTargetPercent_Percent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetTargetPercent(double* TargetPercent, bool Temp_bool_Variable, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue, class UWB_Container_Linear_C* K2Node_Select_Default, double CallFunc_GetTargetPercent_Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetTargetPercent");

	Params::UProgressBarLinear_C_PB_GetTargetPercent_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue = CallFunc_IsFillTypeFillFromCenter_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTargetPercent_Percent = CallFunc_GetTargetPercent_Percent;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetPercent != nullptr)
		*TargetPercent = Parms.TargetPercent;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Linear_C*      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPercent_Percent                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetPercent(double* Percent, bool Temp_bool_Variable, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue, class UWB_Container_Linear_C* K2Node_Select_Default, double CallFunc_GetPercent_Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetPercent");

	Params::UProgressBarLinear_C_PB_GetPercent_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue = CallFunc_IsFillTypeFillFromCenter_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPercent_Percent = CallFunc_GetPercent_Percent;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_GetSize(struct FVector2D* Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_GetSize");

	Params::UProgressBarLinear_C_PB_GetSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function ProgressBarLinear.ProgressBarLinear_C.GetEffectOverlays
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UOverlay*>            Array                                                            (Parm, OutParm, ContainsInstancedReference)
// TArray<class UOverlay*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UProgressBarLinear_C::GetEffectOverlays(TArray<class UOverlay*>* Array, TArray<class UOverlay*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "GetEffectOverlays");

	Params::UProgressBarLinear_C_GetEffectOverlays_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function ProgressBarLinear.ProgressBarLinear_C.FindEffectOverlaysCentered
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEffectLayer            EffectLayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UOverlay*>            Overlays                                                         (Parm, OutParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UOverlay*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UOverlay*>            K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)

void UProgressBarLinear_C::FindEffectOverlaysCentered(enum class EEffectLayer EffectLayer, TArray<class UOverlay*>* Overlays, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UOverlay*>& K2Node_MakeArray_Array, TArray<class UOverlay*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "FindEffectOverlaysCentered");

	Params::UProgressBarLinear_C_FindEffectOverlaysCentered_Params Parms{};

	Parms.EffectLayer = EffectLayer;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Overlays != nullptr)
		*Overlays = std::move(Parms.Overlays);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing_Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PaddingValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Right_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Left_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetCenterSpacing_Effects(double PaddingValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3, const struct FMargin& K2Node_MakeStruct_Margin_2, const struct FMargin& K2Node_MakeStruct_Margin_3, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast_1, float K2Node_MakeStruct_Left_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetCenterSpacing_Effects");

	Params::UProgressBarLinear_C_SetCenterSpacing_Effects_Params Parms{};

	Parms.PaddingValue = PaddingValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.K2Node_MakeStruct_Margin_3 = K2Node_MakeStruct_Margin_3;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;
	Parms.K2Node_MakeStruct_Right_ImplicitCast_1 = K2Node_MakeStruct_Right_ImplicitCast_1;
	Parms.K2Node_MakeStruct_Left_ImplicitCast_1 = K2Node_MakeStruct_Left_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.ClearEffectLayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEffectLayer            EffectLayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    CallFunc_FindEffectOverlay_Overlay                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Effect_C*                K2Node_DynamicCast_AsWB_Effect                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::ClearEffectLayers(enum class EEffectLayer EffectLayer, class UOverlay* CallFunc_FindEffectOverlay_Overlay, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWB_Effect_C* K2Node_DynamicCast_AsWB_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "ClearEffectLayers");

	Params::UProgressBarLinear_C_ClearEffectLayers_Params Parms{};

	Parms.EffectLayer = EffectLayer;
	Parms.CallFunc_FindEffectOverlay_Overlay = CallFunc_FindEffectOverlay_Overlay;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Effect = K2Node_DynamicCast_AsWB_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurEnabledDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetBlurEnabledDefault(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetBlurEnabledDefault");

	Params::UProgressBarLinear_C_SetBlurEnabledDefault_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurEnabledCentered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetBlurEnabledCentered(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetBlurEnabledCentered");

	Params::UProgressBarLinear_C_SetBlurEnabledCentered_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurStrengthDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InStrength                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBlurStrength_InStrength_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetBlurStrengthDefault(double InStrength, float CallFunc_SetBlurStrength_InStrength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetBlurStrengthDefault");

	Params::UProgressBarLinear_C_SetBlurStrengthDefault_Params Parms{};

	Parms.InStrength = InStrength;
	Parms.CallFunc_SetBlurStrength_InStrength_ImplicitCast = CallFunc_SetBlurStrength_InStrength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurStrengthCentered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InStrength                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBlurStrength_InStrength_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetBlurStrengthCentered(double InStrength, float CallFunc_SetBlurStrength_InStrength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetBlurStrengthCentered");

	Params::UProgressBarLinear_C_SetBlurStrengthCentered_Params Parms{};

	Parms.InStrength = InStrength;
	Parms.CallFunc_SetBlurStrength_InStrength_ImplicitCast = CallFunc_SetBlurStrength_InStrength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SendPercentToEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    EffectsOverlay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Effect_C*                K2Node_DynamicCast_AsWB_Effect                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SendPercentToEffects(class UOverlay* EffectsOverlay, double Percent, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_Effect_C* K2Node_DynamicCast_AsWB_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SendPercentToEffects");

	Params::UProgressBarLinear_C_SendPercentToEffects_Params Parms{};

	Parms.EffectsOverlay = EffectsOverlay;
	Parms.Percent = Percent;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Effect = K2Node_DynamicCast_AsWB_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.FindEffectOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EEffectLayer            EffectLayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    Overlay                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EEffectLayer            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::FindEffectOverlay(enum class EEffectLayer EffectLayer, class UOverlay** Overlay, enum class EEffectLayer Temp_byte_Variable, class UOverlay* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "FindEffectOverlay");

	Params::UProgressBarLinear_C_FindEffectOverlay_Params Parms{};

	Parms.EffectLayer = EffectLayer;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;

}


// Function ProgressBarLinear.ProgressBarLinear_C.Count_Percent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::Count_Percent(double Time, double* Value, bool Temp_bool_Variable, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool Temp_bool_Variable_1, double Temp_real_Variable, bool Temp_bool_Variable_2, double K2Node_Select_Default, double Temp_real_Variable_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Count_Percent");

	Params::UProgressBarLinear_C_Count_Percent_Params Parms{};

	Parms.Time = Time;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ProgressBarLinear.ProgressBarLinear_C.Transfer_CurrentPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::Transfer_CurrentPercent(double Percent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Transfer_CurrentPercent");

	Params::UProgressBarLinear_C_Transfer_CurrentPercent_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue = CallFunc_IsFillTypeFillFromCenter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.Transfer_UseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::Transfer_UseTargetPercent(bool UseTargetPercent, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Transfer_UseTargetPercent");

	Params::UProgressBarLinear_C_Transfer_UseTargetPercent_Params Parms{};

	Parms.UseTargetPercent = UseTargetPercent;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue = CallFunc_IsFillTypeFillFromCenter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.Transfer_TargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::Transfer_TargetPercent(double TargetPercent, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Transfer_TargetPercent");

	Params::UProgressBarLinear_C_Transfer_TargetPercent_Params Parms{};

	Parms.TargetPercent = TargetPercent;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue = CallFunc_IsFillTypeFillFromCenter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetBlendMask(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetBlendMask");

	Params::UProgressBarLinear_C_SetBlendMask_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.IsFillTypeTopOrBottom
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UProgressBarLinear_C::IsFillTypeTopOrBottom(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "IsFillTypeTopOrBottom");

	Params::UProgressBarLinear_C_IsFillTypeTopOrBottom_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.GetFillFromCenterSpacing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UProgressBarLinear_C::GetFillFromCenterSpacing(double CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "GetFillFromCenterSpacing");

	Params::UProgressBarLinear_C_GetFillFromCenterSpacing_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing_BG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PaddingValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetCenterSpacing_BG(double PaddingValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetCenterSpacing_BG");

	Params::UProgressBarLinear_C_SetCenterSpacing_BG_Params Parms{};

	Parms.PaddingValue = PaddingValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetSize_BGBrushLeftRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetSize_BGBrushLeftRight(const struct FVector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetSize_BGBrushLeftRight");

	Params::UProgressBarLinear_C_SetSize_BGBrushLeftRight_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.FindThicknessSizeCentered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UProgressBarLinear_C::FindThicknessSizeCentered(double Thickness, bool Temp_bool_Variable, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue, const struct FVector2D& K2Node_Select_Default, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "FindThicknessSizeCentered");

	Params::UProgressBarLinear_C_FindThicknessSizeCentered_Params Parms{};

	Parms.Thickness = Thickness;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue = CallFunc_IsFillTypeFillFromCenter_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Add_Vector2DFloat_ReturnValue = CallFunc_Add_Vector2DFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.GetCenterSpacingSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UProgressBarLinear_C::GetCenterSpacingSize(double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "GetCenterSpacingSize");

	Params::UProgressBarLinear_C_GetCenterSpacingSize_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PaddingValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetCenterSpacing(double PaddingValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetCenterSpacing");

	Params::UProgressBarLinear_C_SetCenterSpacing_Params Parms{};

	Parms.PaddingValue = PaddingValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.GetChildren
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWB_Container_Linear_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference)
// TArray<class UWB_Container_Linear_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UProgressBarLinear_C::GetChildren(TArray<class UWB_Container_Linear_C*>* Array, TArray<class UWB_Container_Linear_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "GetChildren");

	Params::UProgressBarLinear_C_GetChildren_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function ProgressBarLinear.ProgressBarLinear_C.IsFillTypeFillFromCenter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UProgressBarLinear_C::IsFillTypeFillFromCenter(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "IsFillTypeFillFromCenter");

	Params::UProgressBarLinear_C_IsFillTypeFillFromCenter_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.GetInterpolationTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UProgressBarLinear_C::GetInterpolationTime(bool Temp_bool_Variable, double Temp_real_Variable, double CallFunc_MakeLiteralDouble_ReturnValue, double K2Node_Select_Default, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "GetInterpolationTime");

	Params::UProgressBarLinear_C_GetInterpolationTime_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.FindThicknessSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UProgressBarLinear_C::FindThicknessSize(double Thickness, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "FindThicknessSize");

	Params::UProgressBarLinear_C_FindThicknessSize_Params Parms{};

	Parms.Thickness = Thickness;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Add_Vector2DFloat_ReturnValue = CallFunc_Add_Vector2DFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.IsProgressMethodInterpolated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UProgressBarLinear_C::IsProgressMethodInterpolated(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "IsProgressMethodInterpolated");

	Params::UProgressBarLinear_C_IsProgressMethodInterpolated_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.IsProgressMethodStatic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UProgressBarLinear_C::IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "IsProgressMethodStatic");

	Params::UProgressBarLinear_C_IsProgressMethodStatic_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetSize");

	Params::UProgressBarLinear_C_PB_SetSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetPercent(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetPercent");

	Params::UProgressBarLinear_C_PB_SetPercent_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetFillColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetFillColor");

	Params::UProgressBarLinear_C_PB_SetFillColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetTargetPercent(double TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetTargetPercent");

	Params::UProgressBarLinear_C_PB_SetTargetPercent_Params Parms{};

	Parms.TargetPercent = TargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetThickness(double Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetThickness");

	Params::UProgressBarLinear_C_PB_SetThickness_Params Parms{};

	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetUseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetUseTargetPercent(bool UseTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetUseTargetPercent");

	Params::UProgressBarLinear_C_PB_SetUseTargetPercent_Params Parms{};

	Parms.UseTargetPercent = UseTargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetProgressMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         EProgressMethod                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetProgressMethod(enum class EProgressMethod EProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetProgressMethod");

	Params::UProgressBarLinear_C_PB_SetProgressMethod_Params Parms{};

	Parms.EProgressMethod = EProgressMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetInterpTimeCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentInterpTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetInterpTimeCurrent(double CurrentInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetInterpTimeCurrent");

	Params::UProgressBarLinear_C_PB_SetInterpTimeCurrent_Params Parms{};

	Parms.CurrentInterpTime = CurrentInterpTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetInterpTimeTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TargetInterpTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetInterpTimeTarget(double TargetInterpTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetInterpTimeTarget");

	Params::UProgressBarLinear_C_PB_SetInterpTimeTarget_Params Parms{};

	Parms.TargetInterpTime = TargetInterpTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetFillColor_Positive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetTargetFillColor_Positive(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetTargetFillColor_Positive");

	Params::UProgressBarLinear_C_PB_SetTargetFillColor_Positive_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetFillColor_Negative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetTargetFillColor_Negative(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetTargetFillColor_Negative");

	Params::UProgressBarLinear_C_PB_SetTargetFillColor_Negative_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetUseGradientFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradientFillColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetUseGradientFillColor(bool UseGradientFillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetUseGradientFillColor");

	Params::UProgressBarLinear_C_PB_SetUseGradientFillColor_Params Parms{};

	Parms.UseGradientFillColor = UseGradientFillColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetBackgroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetBackgroundColor");

	Params::UProgressBarLinear_C_PB_SetBackgroundColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorGradientPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             GradientPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetFillColorGradientPower(double GradientPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetFillColorGradientPower");

	Params::UProgressBarLinear_C_PB_SetFillColorGradientPower_Params Parms{};

	Parms.GradientPower = GradientPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetFillColorBrushTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetFillColorBrushTiling");

	Params::UProgressBarLinear_C_PB_SetFillColorBrushTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetFillColorMask(class UObject* Mask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetFillColorMask");

	Params::UProgressBarLinear_C_PB_SetFillColorMask_Params Parms{};

	Parms.Mask = Mask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetBackgroundColorMask(class UTexture2D* Mask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetBackgroundColorMask");

	Params::UProgressBarLinear_C_PB_SetBackgroundColorMask_Params Parms{};

	Parms.Mask = Mask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetBackgroundBrushTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetBackgroundBrushTiling");

	Params::UProgressBarLinear_C_PB_SetBackgroundBrushTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundBlurStrength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BlurStrength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetBackgroundBlurStrength(double BlurStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetBackgroundBlurStrength");

	Params::UProgressBarLinear_C_PB_SetBackgroundBlurStrength_Params Parms{};

	Parms.BlurStrength = BlurStrength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorGradientType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGradientTypes          GradientType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetFillColorGradientType(enum class EGradientTypes GradientType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetFillColorGradientType");

	Params::UProgressBarLinear_C_PB_SetFillColorGradientType_Params Parms{};

	Parms.GradientType = GradientType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BlendMask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetBlendMask(class UTexture2D* BlendMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetBlendMask");

	Params::UProgressBarLinear_C_PB_SetBlendMask_Params Parms{};

	Parms.BlendMask = BlendMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarFillType    FillType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetFillType(enum class EProgressBarFillType FillType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetFillType");

	Params::UProgressBarLinear_C_PB_SetFillType_Params Parms{};

	Parms.FillType = FillType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillFromCenterSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetFillFromCenterSpacing(double Spacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetFillFromCenterSpacing");

	Params::UProgressBarLinear_C_PB_SetFillFromCenterSpacing_Params Parms{};

	Parms.Spacing = Spacing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetIsCustomMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetIsCustomMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetIsCustomMarquee");

	Params::UProgressBarLinear_C_PB_SetIsCustomMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetIsMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetIsMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetIsMarquee");

	Params::UProgressBarLinear_C_PB_SetIsMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetCustomMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetCustomMarqueeImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetCustomMarqueeImage");

	Params::UProgressBarLinear_C_PB_SetCustomMarqueeImage_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetCustomMarqueeMaskType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMarqueeMask            MaskType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetCustomMarqueeMaskType(enum class EMarqueeMask MaskType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetCustomMarqueeMaskType");

	Params::UProgressBarLinear_C_PB_SetCustomMarqueeMaskType_Params Parms{};

	Parms.MaskType = MaskType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetMarqueeImage(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetMarqueeImage");

	Params::UProgressBarLinear_C_PB_SetMarqueeImage_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationSteps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Steps                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetSeparationSteps(int32 Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetSeparationSteps");

	Params::UProgressBarLinear_C_PB_SetSeparationSteps_Params Parms{};

	Parms.Steps = Steps;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationStepsSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetSeparationStepsSpacing(double Spacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetSeparationStepsSpacing");

	Params::UProgressBarLinear_C_PB_SetSeparationStepsSpacing_Params Parms{};

	Parms.Spacing = Spacing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationAbsoluteFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AbsoluteFillMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetSeparationAbsoluteFill");

	Params::UProgressBarLinear_C_PB_SetSeparationAbsoluteFill_Params Parms{};

	Parms.AbsoluteFillMethod = AbsoluteFillMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>          Effects                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UProgressBarLinear_C::PB_SetEffects(TArray<struct FS_Effects>& Effects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetEffects");

	Params::UProgressBarLinear_C_PB_SetEffects_Params Parms{};

	Parms.Effects = Effects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetEffectEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetEffectEnabled(int32 Index, bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetEffectEnabled");

	Params::UProgressBarLinear_C_PB_SetEffectEnabled_Params Parms{};

	Parms.Index = Index;
	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetAllEffectsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_SetAllEffectsEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_SetAllEffectsEnabled");

	Params::UProgressBarLinear_C_PB_SetAllEffectsEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_RemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PB_RemoveEffect(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PB_RemoveEffect");

	Params::UProgressBarLinear_C_PB_RemoveEffect_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdatePercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::UpdatePercent(double Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "UpdatePercent");

	Params::UProgressBarLinear_C_UpdatePercent_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateInterpolation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::UpdateInterpolation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "UpdateInterpolation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GradientPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetFillColor(const struct FLinearColor& Color, double GradientPower, enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetFillColor");

	Params::UProgressBarLinear_C_SetFillColor_Params Parms{};

	Parms.Color = Color;
	Parms.GradientPower = GradientPower;
	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetSize");

	Params::UProgressBarLinear_C_SetSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetUseGradient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradient                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetUseGradient(bool UseGradient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetUseGradient");

	Params::UProgressBarLinear_C_SetUseGradient_Params Parms{};

	Parms.UseGradient = UseGradient;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetTargetPercent(bool UseTargetPercent, double TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetTargetPercent");

	Params::UProgressBarLinear_C_SetTargetPercent_Params Parms{};

	Parms.UseTargetPercent = UseTargetPercent;
	Parms.TargetPercent = TargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetTargetFillColorPositive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetTargetFillColorPositive(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetTargetFillColorPositive");

	Params::UProgressBarLinear_C_SetTargetFillColorPositive_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetTargetFillColorNegative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetTargetFillColorNegative(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetTargetFillColorNegative");

	Params::UProgressBarLinear_C_SetTargetFillColorNegative_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BackgroundColorMask                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     In_Brush_Tiling                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetBackgroundColor(class UTexture2D* BackgroundColorMask, enum class ESlateBrushTileType In_Brush_Tiling, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetBackgroundColor");

	Params::UProgressBarLinear_C_SetBackgroundColor_Params Parms{};

	Parms.BackgroundColorMask = BackgroundColorMask;
	Parms.In_Brush_Tiling = In_Brush_Tiling;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetProgressMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         ProgressMethod                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetProgressMethod(enum class EProgressMethod ProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetProgressMethod");

	Params::UProgressBarLinear_C_SetProgressMethod_Params Parms{};

	Parms.ProgressMethod = ProgressMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetPercentInterpolated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewPercent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetPercentInterpolated(double NewPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetPercentInterpolated");

	Params::UProgressBarLinear_C_SetPercentInterpolated_Params Parms{};

	Parms.NewPercent = NewPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetFillColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetFillColorMask(class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetFillColorMask");

	Params::UProgressBarLinear_C_SetFillColorMask_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetGradientMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGradientTypes          GradientType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetGradientMask(enum class EGradientTypes GradientType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetGradientMask");

	Params::UProgressBarLinear_C_SetGradientMask_Params Parms{};

	Parms.GradientType = GradientType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Brush                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     In_Brush_Tiling                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetBackgroundColorMask(class UTexture2D* Brush, enum class ESlateBrushTileType In_Brush_Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetBackgroundColorMask");

	Params::UProgressBarLinear_C_SetBackgroundColorMask_Params Parms{};

	Parms.Brush = Brush;
	Parms.In_Brush_Tiling = In_Brush_Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetOverallBlendMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BlendMask                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetOverallBlendMask(class UTexture2D* BlendMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetOverallBlendMask");

	Params::UProgressBarLinear_C_SetOverallBlendMask_Params Parms{};

	Parms.BlendMask = BlendMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsMarquee                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMethod          MarqueeMethod                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::UpdateCustomMarquee(bool bIsMarquee, enum class EMarqueeMethod MarqueeMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "UpdateCustomMarquee");

	Params::UProgressBarLinear_C_UpdateCustomMarquee_Params Parms{};

	Parms.bIsMarquee = bIsMarquee;
	Parms.MarqueeMethod = MarqueeMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::UpdateCustomMarqueeSpeed(double Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "UpdateCustomMarqueeSpeed");

	Params::UProgressBarLinear_C_UpdateCustomMarqueeSpeed_Params Parms{};

	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMarqueeMask            MaskType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     MaskTiling                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::UpdateCustomMarqueeMask(enum class EMarqueeMask MaskType, class UTexture2D* Mask, enum class ESlateBrushTileType MaskTiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "UpdateCustomMarqueeMask");

	Params::UProgressBarLinear_C_UpdateCustomMarqueeMask_Params Parms{};

	Parms.MaskType = MaskType;
	Parms.Mask = Mask;
	Parms.MaskTiling = MaskTiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_IsMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetDefaultMarquee_IsMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetDefaultMarquee_IsMarquee");

	Params::UProgressBarLinear_C_SetDefaultMarquee_IsMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetDefaultMarquee_Image(class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetDefaultMarquee_Image");

	Params::UProgressBarLinear_C_SetDefaultMarquee_Image_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_ImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Image_Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetDefaultMarquee_ImageSize(const struct FVector2D& Image_Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetDefaultMarquee_ImageSize");

	Params::UProgressBarLinear_C_SetDefaultMarquee_ImageSize_Params Parms{};

	Parms.Image_Size = Image_Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Tint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Tint                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetDefaultMarquee_Tint(const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetDefaultMarquee_Tint");

	Params::UProgressBarLinear_C_SetDefaultMarquee_Tint_Params Parms{};

	Parms.Tint = Tint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_DrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushDrawType     Draw_As                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetDefaultMarquee_DrawAs(enum class ESlateBrushDrawType Draw_As)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetDefaultMarquee_DrawAs");

	Params::UProgressBarLinear_C_SetDefaultMarquee_DrawAs_Params Parms{};

	Parms.Draw_As = Draw_As;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Tiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetDefaultMarquee_Tiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetDefaultMarquee_Tiling");

	Params::UProgressBarLinear_C_SetDefaultMarquee_Tiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::UpdateCustomMarqueeColor(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "UpdateCustomMarqueeColor");

	Params::UProgressBarLinear_C_UpdateCustomMarqueeColor_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.Separation_AddSegments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumSegments                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FillColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    FillType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::Separation_AddSegments(int32 NumSegments, double Spacing, const struct FVector2D& Size, const struct FLinearColor& FillColor, enum class EProgressBarFillType FillType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Separation_AddSegments");

	Params::UProgressBarLinear_C_Separation_AddSegments_Params Parms{};

	Parms.NumSegments = NumSegments;
	Parms.Spacing = Spacing;
	Parms.Size = Size;
	Parms.FillColor = FillColor;
	Parms.FillType = FillType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.Separation_AddBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::Separation_AddBackground(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Separation_AddBackground");

	Params::UProgressBarLinear_C_Separation_AddBackground_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.Separation_SetUseAbsoluteFillValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAbsoluteFill                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::Separation_SetUseAbsoluteFillValue(bool bAbsoluteFill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Separation_SetUseAbsoluteFillValue");

	Params::UProgressBarLinear_C_Separation_SetUseAbsoluteFillValue_Params Parms{};

	Parms.bAbsoluteFill = bAbsoluteFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarFillType    FillType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseShader                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetBarFillType(enum class EProgressBarFillType FillType, bool bUseShader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetBarFillType");

	Params::UProgressBarLinear_C_SetBarFillType_Params Parms{};

	Parms.FillType = FillType;
	Parms.bUseShader = bUseShader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetCurrentCustomMarqueePercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::SetCurrentCustomMarqueePercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetCurrentCustomMarqueePercent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.CreateEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::CreateEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "CreateEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.AddEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects                  Effect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::AddEffect(const struct FS_Effects& Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "AddEffect");

	Params::UProgressBarLinear_C_AddEffect_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseBackgroundBlur                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BackgroundBlurStrength                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::SetBackgroundBlur(bool UseBackgroundBlur, double BackgroundBlurStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "SetBackgroundBlur");

	Params::UProgressBarLinear_C_SetBackgroundBlur_Params Parms{};

	Parms.UseBackgroundBlur = UseBackgroundBlur;
	Parms.BackgroundBlurStrength = BackgroundBlurStrength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Tick");

	Params::UProgressBarLinear_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.AddEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewPercent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::AddEntry(double NewPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "AddEntry");

	Params::UProgressBarLinear_C_AddEntry_Params Parms{};

	Parms.NewPercent = NewPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.InitNextEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::InitNextEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "InitNextEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.ExecuteEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::ExecuteEntry(double CurrentEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "ExecuteEntry");

	Params::UProgressBarLinear_C_ExecuteEntry_Params Parms{};

	Parms.CurrentEntry = CurrentEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::Reconstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Reconstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "PreConstruct");

	Params::UProgressBarLinear_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.StopTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::StopTriggerProgressChangeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "StopTriggerProgressChangeColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.StartTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::StartTriggerProgressChangeColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "StartTriggerProgressChangeColor");

	Params::UProgressBarLinear_C_StartTriggerProgressChangeColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.HandlePausedQueue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressBarLinear_C::HandlePausedQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "HandlePausedQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProgressBarLinear.ProgressBarLinear_C.ExecuteUbergraph_ProgressBarLinear
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_Size                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_TargetPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Thickness                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseTargetPercent                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressMethod         K2Node_Event_EProgressMethod                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentInterpTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_TargetInterpTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseGradientFillColor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_Color                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_GradientPower                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_Event_Tiling_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Mask_1                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_Mask                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_Event_Tiling                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_BlurStrength                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGradientTypes          K2Node_Event_GradientType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_BlendMask                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_Event_FillType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Spacing_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsMarquee_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsMarquee                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_Image_1                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMask            K2Node_Event_MaskType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_Image                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Steps                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Spacing                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AbsoluteFillMethod                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Effects>          K2Node_Event_Effects                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsEnabled_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsEnabled                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Effects                  K2Node_MakeStruct_S_Effects                                      (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_10                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_GradientPower                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_Tiling_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Size_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseGradient                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseTargetPercent                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_TargetPercent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_11                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_BackgroundColorMask                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_In_Brush_Tiling_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsProgressMethodInterpolated_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_12                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressMethod         K2Node_CustomEvent_ProgressMethod                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_NewPercent_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetInterpolationTime_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Count_Percent_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Count_TargetPercent_Value                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Count_Percent_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Value                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGradientTypes          K2Node_CustomEvent_GradientType                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_13                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Brush                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_In_Brush_Tiling                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetTexture2DSizeClamped_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_BlendMask                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsMarquee                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMethod          K2Node_CustomEvent_MarqueeMethod                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Speed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_14                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMask            K2Node_CustomEvent_MaskType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Mask                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_MaskTiling                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsMarquee                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_15                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Image                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Image_Size                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Tint                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     K2Node_CustomEvent_Draw_As                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_Tiling                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_16                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Effect_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Effect_C*                CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_17                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_InColorAndOpacity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumSegments                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Spacing                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Size                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_FillColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_CustomEvent_FillType_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_18                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_19                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAbsoluteFill                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_CustomEvent_FillType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseShader                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_20                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFillFromCenterSpacing_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_21                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetCenterSpacingSize_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFillFromCenterSpacing_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Effects                  CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Effects                  K2Node_CustomEvent_Effect                                        (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEffectProgressChangeColor_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UOverlay*>            CallFunc_FindEffectOverlaysCentered_Overlays                     (ReferenceParm, ContainsInstancedReference)
// class UOverlay*                    CallFunc_FindEffectOverlay_Overlay                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseBackgroundBlur                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_BackgroundBlurStrength                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeTopOrBottom_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_FindThicknessSizeCentered_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_22                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyValueChanged_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEffectChanged_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_NewPercent                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidEntryIndex_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_CurrentEntry                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEntryIndex_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_23                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_FindThicknessSize_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_FindThicknessSize_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_24                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGamePaused_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGradientTypes          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_25                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_Container_Linear_C*>CallFunc_GetChildren_Array                                       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Linear_C*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default_3                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_13                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_14                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_15                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_26                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeTopOrBottom_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_27                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_28                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Effects                  CallFunc_Array_Get_Item_3                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Effects                  K2Node_MakeStruct_S_Effects_1                                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_16                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_29                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_17                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_30                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_31                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_18                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Linear_C*      K2Node_Select_Default_6                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPercent_Separated_Percent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPercent_Percent                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UOverlay*>            CallFunc_GetEffectOverlays_Array                                 (ReferenceParm, ContainsInstancedReference)
// class UOverlay*                    CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Effect_C*                K2Node_DynamicCast_AsWB_Effect                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_19                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_32                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Linear_C*      K2Node_Select_Default_8                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPercent_Separated_Percent_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPercent_Percent_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_33                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Linear_C*      K2Node_Select_Default_11                                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFillTypeFillFromCenter_ReturnValue_34                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::ExecuteUbergraph_ProgressBarLinear(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FVector2D& K2Node_Event_Size, double K2Node_Event_Value, const struct FLinearColor& K2Node_Event_Color_3, double CallFunc_FClamp_ReturnValue, double K2Node_Event_TargetPercent, double K2Node_Event_Thickness, double CallFunc_FClamp_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_UseTargetPercent, enum class EProgressMethod K2Node_Event_EProgressMethod, double K2Node_Event_CurrentInterpTime, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_2, double K2Node_Event_TargetInterpTime, const struct FLinearColor& K2Node_Event_Color_2, const struct FLinearColor& K2Node_Event_Color_1, bool K2Node_Event_UseGradientFillColor, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_3, const struct FLinearColor& K2Node_Event_Color, double K2Node_Event_GradientPower, enum class ESlateBrushTileType K2Node_Event_Tiling_1, class UObject* K2Node_Event_Mask_1, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_4, class UTexture2D* K2Node_Event_Mask, enum class ESlateBrushTileType K2Node_Event_Tiling, double K2Node_Event_BlurStrength, enum class EGradientTypes K2Node_Event_GradientType, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_5, class UTexture2D* K2Node_Event_BlendMask, enum class EProgressBarFillType K2Node_Event_FillType, double K2Node_Event_Spacing_1, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_6, bool K2Node_Event_IsMarquee_1, bool K2Node_Event_IsMarquee, class UTexture2D* K2Node_Event_Image_1, enum class EMarqueeMask K2Node_Event_MaskType, class UTexture2D* K2Node_Event_Image, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_7, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 K2Node_Event_Steps, double K2Node_Event_Spacing, bool K2Node_Event_AbsoluteFillMethod, TArray<struct FS_Effects>& K2Node_Event_Effects, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_8, int32 K2Node_Event_Index_1, bool K2Node_Event_IsEnabled_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool K2Node_Event_IsEnabled, int32 K2Node_Event_Index, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FS_Effects& K2Node_MakeStruct_S_Effects, bool Temp_bool_Has_Been_Initd_Variable_3, int32 CallFunc_Array_Length_ReturnValue, double K2Node_CustomEvent_Percent, double CallFunc_FClamp_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_9, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_10, const struct FLinearColor& K2Node_CustomEvent_Color_5, double K2Node_CustomEvent_GradientPower, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling_1, const struct FVector2D& K2Node_CustomEvent_Size_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool K2Node_CustomEvent_UseGradient, double CallFunc_FClamp_ReturnValue_3, double CallFunc_FClamp_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_UseTargetPercent, double K2Node_CustomEvent_TargetPercent, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_11, const struct FLinearColor& K2Node_CustomEvent_Color_4, const struct FLinearColor& K2Node_CustomEvent_Color_3, class UTexture2D* K2Node_CustomEvent_BackgroundColorMask, enum class ESlateBrushTileType K2Node_CustomEvent_In_Brush_Tiling_1, const struct FLinearColor& K2Node_CustomEvent_Color_2, bool CallFunc_IsProgressMethodInterpolated_ReturnValue, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_12, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, double K2Node_CustomEvent_NewPercent_1, double CallFunc_FClamp_ReturnValue_5, double CallFunc_GetInterpolationTime_ReturnValue, bool Temp_bool_IsClosed_Variable_3, double CallFunc_Count_Percent_Value, double CallFunc_Count_TargetPercent_Value, double CallFunc_Count_Percent_Value_1, class UObject* K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, enum class EGradientTypes K2Node_CustomEvent_GradientType, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable_4, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_13, class UTexture2D* K2Node_CustomEvent_Brush, enum class ESlateBrushTileType K2Node_CustomEvent_In_Brush_Tiling, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_GetTexture2DSizeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UTexture2D* K2Node_CustomEvent_BlendMask, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_bIsMarquee, enum class EMarqueeMethod K2Node_CustomEvent_MarqueeMethod, double K2Node_CustomEvent_Speed, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_14, enum class EMarqueeMask K2Node_CustomEvent_MaskType, class UTexture2D* K2Node_CustomEvent_Mask, enum class ESlateBrushTileType K2Node_CustomEvent_MaskTiling, bool K2Node_CustomEvent_IsMarquee, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_15, class UTexture2D* K2Node_CustomEvent_Image, const struct FVector2D& K2Node_CustomEvent_Image_Size, const struct FLinearColor& K2Node_CustomEvent_Tint, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_16, class UWB_Effect_C* CallFunc_Create_ReturnValue, class UWB_Effect_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_17, const struct FLinearColor& K2Node_CustomEvent_InColorAndOpacity, int32 K2Node_CustomEvent_NumSegments, double K2Node_CustomEvent_Spacing, const struct FVector2D& K2Node_CustomEvent_Size, const struct FLinearColor& K2Node_CustomEvent_FillColor, enum class EProgressBarFillType K2Node_CustomEvent_FillType_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_Color_1, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_18, enum class EProgressBarFillType Temp_byte_Variable, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_19, bool K2Node_CustomEvent_bAbsoluteFill, bool Temp_bool_Has_Been_Initd_Variable_4, enum class EProgressBarFillType K2Node_CustomEvent_FillType, bool K2Node_CustomEvent_bUseShader, bool Temp_bool_Has_Been_Initd_Variable_5, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_IsClosed_Variable_6, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_20, bool Temp_bool_Has_Been_Initd_Variable_6, double CallFunc_GetFillFromCenterSpacing_ReturnValue, bool Temp_bool_IsClosed_Variable_7, enum class EProgressBarFillType Temp_byte_Variable_1, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_21, bool Temp_bool_Has_Been_Initd_Variable_7, double CallFunc_GetCenterSpacingSize_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_GetFillFromCenterSpacing_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FS_Effects& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_Effects& K2Node_CustomEvent_Effect, bool Temp_bool_Has_Been_Initd_Variable_8, bool CallFunc_IsEffectProgressChangeColor_ReturnValue, TArray<class UOverlay*>& CallFunc_FindEffectOverlaysCentered_Overlays, class UOverlay* CallFunc_FindEffectOverlay_Overlay, class UOverlay* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_6, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool Temp_bool_IsClosed_Variable_8, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, enum class EProgressBarFillType K2Node_Select_Default, bool K2Node_CustomEvent_UseBackgroundBlur, double K2Node_CustomEvent_BackgroundBlurStrength, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class UTexture2D* Temp_object_Variable, bool CallFunc_IsFillTypeTopOrBottom_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector2D& CallFunc_FindThicknessSizeCentered_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_22, bool CallFunc_HasAnyValueChanged_ReturnValue, bool CallFunc_HasEffectChanged_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double K2Node_CustomEvent_NewPercent, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValidEntryIndex_ReturnValue, double K2Node_CustomEvent_CurrentEntry, double CallFunc_GetEntryIndex_Value, bool Temp_bool_Has_Been_Initd_Variable_9, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_23, const struct FVector2D& CallFunc_FindThicknessSize_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, const struct FVector2D& CallFunc_FindThicknessSize_ReturnValue_1, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_2, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, bool Temp_bool_Variable_1, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_24, class UTexture2D* K2Node_Select_Default_1, bool Temp_bool_IsClosed_Variable_9, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_10, class UTexture2D* Temp_object_Variable_3, bool CallFunc_IsGamePaused_ReturnValue, bool Temp_bool_IsClosed_Variable_10, class UTexture2D* Temp_object_Variable_4, enum class EGradientTypes Temp_byte_Variable_2, class UTexture2D* K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_25, class UObject* Temp_object_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_11, TArray<class UWB_Container_Linear_C*>& CallFunc_GetChildren_Array, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class UWB_Container_Linear_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_9, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, bool Temp_bool_IsClosed_Variable_11, bool Temp_bool_Variable_2, class UObject* K2Node_Select_Default_3, bool Temp_bool_IsClosed_Variable_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_12, bool Temp_bool_IsClosed_Variable_13, bool Temp_bool_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_13, double K2Node_Select_Default_4, double CallFunc_FClamp_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable_14, bool Temp_bool_IsClosed_Variable_14, bool Temp_bool_Has_Been_Initd_Variable_15, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_26, bool Temp_bool_IsClosed_Variable_15, bool CallFunc_IsFillTypeTopOrBottom_ReturnValue_1, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_27, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_28, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, const struct FS_Effects& CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const struct FS_Effects& K2Node_MakeStruct_S_Effects_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_16, double CallFunc_MapRangeClamped_ReturnValue, bool Temp_bool_IsClosed_Variable_16, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_29, bool Temp_bool_Has_Been_Initd_Variable_17, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool Temp_bool_IsClosed_Variable_17, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, double CallFunc_MapRangeClamped_ReturnValue_1, bool Temp_bool_Variable_4, const struct FVector2D& K2Node_Select_Default_5, double CallFunc_BreakVector2D_X_6, double CallFunc_BreakVector2D_Y_6, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_30, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_31, bool Temp_bool_Has_Been_Initd_Variable_18, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_2, bool Temp_bool_IsClosed_Variable_18, bool Temp_bool_Variable_5, class UWB_Container_Linear_C* K2Node_Select_Default_6, double CallFunc_GetPercent_Separated_Percent, double CallFunc_GetPercent_Percent, TArray<class UOverlay*>& CallFunc_GetEffectOverlays_Array, class UOverlay* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_Effect_C* K2Node_DynamicCast_AsWB_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, bool Temp_bool_Variable_6, double K2Node_Select_Default_7, bool Temp_bool_Has_Been_Initd_Variable_19, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_32, bool Temp_bool_Variable_7, class UWB_Container_Linear_C* K2Node_Select_Default_8, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, double CallFunc_GetPercent_Separated_Percent_1, double CallFunc_GetPercent_Percent_1, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_33, double CallFunc_BreakVector2D_X_7, double CallFunc_BreakVector2D_Y_7, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, bool Temp_bool_IsClosed_Variable_19, const struct FVector2D& K2Node_Select_Default_9, bool Temp_bool_Variable_8, bool CallFunc_Not_PreBool_ReturnValue_3, double K2Node_Select_Default_10, bool CallFunc_BooleanAND_ReturnValue_1, const struct FLinearColor& K2Node_CustomEvent_Color, bool Temp_bool_Variable_9, class UWB_Container_Linear_C* K2Node_Select_Default_11, bool CallFunc_IsFillTypeFillFromCenter_ReturnValue_34, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double K2Node_VariableSet_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "ExecuteUbergraph_ProgressBarLinear");

	Params::UProgressBarLinear_C_ExecuteUbergraph_ProgressBarLinear_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue = CallFunc_IsFillTypeFillFromCenter_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_1 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.K2Node_Event_Size = K2Node_Event_Size;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Color_3 = K2Node_Event_Color_3;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Event_TargetPercent = K2Node_Event_TargetPercent;
	Parms.K2Node_Event_Thickness = K2Node_Event_Thickness;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_UseTargetPercent = K2Node_Event_UseTargetPercent;
	Parms.K2Node_Event_EProgressMethod = K2Node_Event_EProgressMethod;
	Parms.K2Node_Event_CurrentInterpTime = K2Node_Event_CurrentInterpTime;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_2 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_2;
	Parms.K2Node_Event_TargetInterpTime = K2Node_Event_TargetInterpTime;
	Parms.K2Node_Event_Color_2 = K2Node_Event_Color_2;
	Parms.K2Node_Event_Color_1 = K2Node_Event_Color_1;
	Parms.K2Node_Event_UseGradientFillColor = K2Node_Event_UseGradientFillColor;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_3 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_3;
	Parms.K2Node_Event_Color = K2Node_Event_Color;
	Parms.K2Node_Event_GradientPower = K2Node_Event_GradientPower;
	Parms.K2Node_Event_Tiling_1 = K2Node_Event_Tiling_1;
	Parms.K2Node_Event_Mask_1 = K2Node_Event_Mask_1;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_4 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_4;
	Parms.K2Node_Event_Mask = K2Node_Event_Mask;
	Parms.K2Node_Event_Tiling = K2Node_Event_Tiling;
	Parms.K2Node_Event_BlurStrength = K2Node_Event_BlurStrength;
	Parms.K2Node_Event_GradientType = K2Node_Event_GradientType;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_5 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_5;
	Parms.K2Node_Event_BlendMask = K2Node_Event_BlendMask;
	Parms.K2Node_Event_FillType = K2Node_Event_FillType;
	Parms.K2Node_Event_Spacing_1 = K2Node_Event_Spacing_1;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_6 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_6;
	Parms.K2Node_Event_IsMarquee_1 = K2Node_Event_IsMarquee_1;
	Parms.K2Node_Event_IsMarquee = K2Node_Event_IsMarquee;
	Parms.K2Node_Event_Image_1 = K2Node_Event_Image_1;
	Parms.K2Node_Event_MaskType = K2Node_Event_MaskType;
	Parms.K2Node_Event_Image = K2Node_Event_Image;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_7 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_7;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_Event_Steps = K2Node_Event_Steps;
	Parms.K2Node_Event_Spacing = K2Node_Event_Spacing;
	Parms.K2Node_Event_AbsoluteFillMethod = K2Node_Event_AbsoluteFillMethod;
	Parms.K2Node_Event_Effects = K2Node_Event_Effects;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_8 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_8;
	Parms.K2Node_Event_Index_1 = K2Node_Event_Index_1;
	Parms.K2Node_Event_IsEnabled_1 = K2Node_Event_IsEnabled_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_Event_IsEnabled = K2Node_Event_IsEnabled;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_S_Effects = K2Node_MakeStruct_S_Effects;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_9 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_9;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_10 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_10;
	Parms.K2Node_CustomEvent_Color_5 = K2Node_CustomEvent_Color_5;
	Parms.K2Node_CustomEvent_GradientPower = K2Node_CustomEvent_GradientPower;
	Parms.K2Node_CustomEvent_Tiling_1 = K2Node_CustomEvent_Tiling_1;
	Parms.K2Node_CustomEvent_Size_1 = K2Node_CustomEvent_Size_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_CustomEvent_UseGradient = K2Node_CustomEvent_UseGradient;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_UseTargetPercent = K2Node_CustomEvent_UseTargetPercent;
	Parms.K2Node_CustomEvent_TargetPercent = K2Node_CustomEvent_TargetPercent;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_11 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_11;
	Parms.K2Node_CustomEvent_Color_4 = K2Node_CustomEvent_Color_4;
	Parms.K2Node_CustomEvent_Color_3 = K2Node_CustomEvent_Color_3;
	Parms.K2Node_CustomEvent_BackgroundColorMask = K2Node_CustomEvent_BackgroundColorMask;
	Parms.K2Node_CustomEvent_In_Brush_Tiling_1 = K2Node_CustomEvent_In_Brush_Tiling_1;
	Parms.K2Node_CustomEvent_Color_2 = K2Node_CustomEvent_Color_2;
	Parms.CallFunc_IsProgressMethodInterpolated_ReturnValue = CallFunc_IsProgressMethodInterpolated_ReturnValue;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_12 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_12;
	Parms.K2Node_CustomEvent_ProgressMethod = K2Node_CustomEvent_ProgressMethod;
	Parms.K2Node_CustomEvent_NewPercent_1 = K2Node_CustomEvent_NewPercent_1;
	Parms.CallFunc_FClamp_ReturnValue_5 = CallFunc_FClamp_ReturnValue_5;
	Parms.CallFunc_GetInterpolationTime_ReturnValue = CallFunc_GetInterpolationTime_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_Count_Percent_Value = CallFunc_Count_Percent_Value;
	Parms.CallFunc_Count_TargetPercent_Value = CallFunc_Count_TargetPercent_Value;
	Parms.CallFunc_Count_Percent_Value_1 = CallFunc_Count_Percent_Value_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_GradientType = K2Node_CustomEvent_GradientType;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_13 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_13;
	Parms.K2Node_CustomEvent_Brush = K2Node_CustomEvent_Brush;
	Parms.K2Node_CustomEvent_In_Brush_Tiling = K2Node_CustomEvent_In_Brush_Tiling;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTexture2DSizeClamped_ReturnValue = CallFunc_GetTexture2DSizeClamped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_BlendMask = K2Node_CustomEvent_BlendMask;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_bIsMarquee = K2Node_CustomEvent_bIsMarquee;
	Parms.K2Node_CustomEvent_MarqueeMethod = K2Node_CustomEvent_MarqueeMethod;
	Parms.K2Node_CustomEvent_Speed = K2Node_CustomEvent_Speed;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_14 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_14;
	Parms.K2Node_CustomEvent_MaskType = K2Node_CustomEvent_MaskType;
	Parms.K2Node_CustomEvent_Mask = K2Node_CustomEvent_Mask;
	Parms.K2Node_CustomEvent_MaskTiling = K2Node_CustomEvent_MaskTiling;
	Parms.K2Node_CustomEvent_IsMarquee = K2Node_CustomEvent_IsMarquee;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_15 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_15;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.K2Node_CustomEvent_Image_Size = K2Node_CustomEvent_Image_Size;
	Parms.K2Node_CustomEvent_Tint = K2Node_CustomEvent_Tint;
	Parms.K2Node_CustomEvent_Draw_As = K2Node_CustomEvent_Draw_As;
	Parms.K2Node_CustomEvent_Tiling = K2Node_CustomEvent_Tiling;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_16 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_16;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_17 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_17;
	Parms.K2Node_CustomEvent_InColorAndOpacity = K2Node_CustomEvent_InColorAndOpacity;
	Parms.K2Node_CustomEvent_NumSegments = K2Node_CustomEvent_NumSegments;
	Parms.K2Node_CustomEvent_Spacing = K2Node_CustomEvent_Spacing;
	Parms.K2Node_CustomEvent_Size = K2Node_CustomEvent_Size;
	Parms.K2Node_CustomEvent_FillColor = K2Node_CustomEvent_FillColor;
	Parms.K2Node_CustomEvent_FillType_1 = K2Node_CustomEvent_FillType_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Color_1 = K2Node_CustomEvent_Color_1;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_18 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_18;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_19 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_19;
	Parms.K2Node_CustomEvent_bAbsoluteFill = K2Node_CustomEvent_bAbsoluteFill;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.K2Node_CustomEvent_FillType = K2Node_CustomEvent_FillType;
	Parms.K2Node_CustomEvent_bUseShader = K2Node_CustomEvent_bUseShader;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_6 = Temp_bool_IsClosed_Variable_6;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_20 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_20;
	Parms.Temp_bool_Has_Been_Initd_Variable_6 = Temp_bool_Has_Been_Initd_Variable_6;
	Parms.CallFunc_GetFillFromCenterSpacing_ReturnValue = CallFunc_GetFillFromCenterSpacing_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_7 = Temp_bool_IsClosed_Variable_7;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_21 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_21;
	Parms.Temp_bool_Has_Been_Initd_Variable_7 = Temp_bool_Has_Been_Initd_Variable_7;
	Parms.CallFunc_GetCenterSpacingSize_ReturnValue = CallFunc_GetCenterSpacingSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFillFromCenterSpacing_ReturnValue_1 = CallFunc_GetFillFromCenterSpacing_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Effect = K2Node_CustomEvent_Effect;
	Parms.Temp_bool_Has_Been_Initd_Variable_8 = Temp_bool_Has_Been_Initd_Variable_8;
	Parms.CallFunc_IsEffectProgressChangeColor_ReturnValue = CallFunc_IsEffectProgressChangeColor_ReturnValue;
	Parms.CallFunc_FindEffectOverlaysCentered_Overlays = CallFunc_FindEffectOverlaysCentered_Overlays;
	Parms.CallFunc_FindEffectOverlay_Overlay = CallFunc_FindEffectOverlay_Overlay;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_AddChildToOverlay_ReturnValue_1 = CallFunc_AddChildToOverlay_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable_8 = Temp_bool_IsClosed_Variable_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_UseBackgroundBlur = K2Node_CustomEvent_UseBackgroundBlur;
	Parms.K2Node_CustomEvent_BackgroundBlurStrength = K2Node_CustomEvent_BackgroundBlurStrength;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsFillTypeTopOrBottom_ReturnValue = CallFunc_IsFillTypeTopOrBottom_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_FindThicknessSizeCentered_ReturnValue = CallFunc_FindThicknessSizeCentered_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_22 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_22;
	Parms.CallFunc_HasAnyValueChanged_ReturnValue = CallFunc_HasAnyValueChanged_ReturnValue;
	Parms.CallFunc_HasEffectChanged_ReturnValue = CallFunc_HasEffectChanged_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_NewPercent = K2Node_CustomEvent_NewPercent;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValidEntryIndex_ReturnValue = CallFunc_IsValidEntryIndex_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentEntry = K2Node_CustomEvent_CurrentEntry;
	Parms.CallFunc_GetEntryIndex_Value = CallFunc_GetEntryIndex_Value;
	Parms.Temp_bool_Has_Been_Initd_Variable_9 = Temp_bool_Has_Been_Initd_Variable_9;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_23 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_23;
	Parms.CallFunc_FindThicknessSize_ReturnValue = CallFunc_FindThicknessSize_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_FindThicknessSize_ReturnValue_1 = CallFunc_FindThicknessSize_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_24 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_24;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_IsClosed_Variable_9 = Temp_bool_IsClosed_Variable_9;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_10 = Temp_bool_Has_Been_Initd_Variable_10;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_IsGamePaused_ReturnValue = CallFunc_IsGamePaused_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_10 = Temp_bool_IsClosed_Variable_10;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_25 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_25;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_11 = Temp_bool_Has_Been_Initd_Variable_11;
	Parms.CallFunc_GetChildren_Array = CallFunc_GetChildren_Array;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_bool_IsClosed_Variable_11 = Temp_bool_IsClosed_Variable_11;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_bool_IsClosed_Variable_12 = Temp_bool_IsClosed_Variable_12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_12 = Temp_bool_Has_Been_Initd_Variable_12;
	Parms.Temp_bool_IsClosed_Variable_13 = Temp_bool_IsClosed_Variable_13;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable_13 = Temp_bool_Has_Been_Initd_Variable_13;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_FClamp_ReturnValue_6 = CallFunc_FClamp_ReturnValue_6;
	Parms.Temp_bool_Has_Been_Initd_Variable_14 = Temp_bool_Has_Been_Initd_Variable_14;
	Parms.Temp_bool_IsClosed_Variable_14 = Temp_bool_IsClosed_Variable_14;
	Parms.Temp_bool_Has_Been_Initd_Variable_15 = Temp_bool_Has_Been_Initd_Variable_15;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_26 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_26;
	Parms.Temp_bool_IsClosed_Variable_15 = Temp_bool_IsClosed_Variable_15;
	Parms.CallFunc_IsFillTypeTopOrBottom_ReturnValue_1 = CallFunc_IsFillTypeTopOrBottom_ReturnValue_1;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_27 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_27;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_28 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_28;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_Effects_1 = K2Node_MakeStruct_S_Effects_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_16 = Temp_bool_Has_Been_Initd_Variable_16;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_16 = Temp_bool_IsClosed_Variable_16;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_29 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_29;
	Parms.Temp_bool_Has_Been_Initd_Variable_17 = Temp_bool_Has_Been_Initd_Variable_17;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_17 = Temp_bool_IsClosed_Variable_17;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_BreakVector2D_X_6 = CallFunc_BreakVector2D_X_6;
	Parms.CallFunc_BreakVector2D_Y_6 = CallFunc_BreakVector2D_Y_6;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_30 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_30;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_31 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_31;
	Parms.Temp_bool_Has_Been_Initd_Variable_18 = Temp_bool_Has_Been_Initd_Variable_18;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable_18 = Temp_bool_IsClosed_Variable_18;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_GetPercent_Separated_Percent = CallFunc_GetPercent_Separated_Percent;
	Parms.CallFunc_GetPercent_Percent = CallFunc_GetPercent_Percent;
	Parms.CallFunc_GetEffectOverlays_Array = CallFunc_GetEffectOverlays_Array;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Effect = K2Node_DynamicCast_AsWB_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_19 = Temp_bool_Has_Been_Initd_Variable_19;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_32 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_32;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;
	Parms.CallFunc_GetPercent_Separated_Percent_1 = CallFunc_GetPercent_Separated_Percent_1;
	Parms.CallFunc_GetPercent_Percent_1 = CallFunc_GetPercent_Percent_1;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_33 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_33;
	Parms.CallFunc_BreakVector2D_X_7 = CallFunc_BreakVector2D_X_7;
	Parms.CallFunc_BreakVector2D_Y_7 = CallFunc_BreakVector2D_Y_7;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_4 = CallFunc_MakeVector2D_ReturnValue_4;
	Parms.Temp_bool_IsClosed_Variable_19 = Temp_bool_IsClosed_Variable_19;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_IsFillTypeFillFromCenter_ReturnValue_34 = CallFunc_IsFillTypeFillFromCenter_ReturnValue_34;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.K2Node_VariableSet_DeltaTime_ImplicitCast = K2Node_VariableSet_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressBarLinear.ProgressBarLinear_C.OnPercentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressBarLinear_C::OnPercentChanged__DelegateSignature(double Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBarLinear_C", "OnPercentChanged__DelegateSignature");

	Params::UProgressBarLinear_C_OnPercentChanged__DelegateSignature_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}

}


