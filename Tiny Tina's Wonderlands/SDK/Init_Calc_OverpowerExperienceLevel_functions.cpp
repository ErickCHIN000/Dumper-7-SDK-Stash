#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Calc_OverpowerExperienceLevel.Init_Calc_OverpowerExperienceLevel_C
// (None)

class UClass* UInit_Calc_OverpowerExperienceLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Calc_OverpowerExperienceLevel_C");

	return Clss;
}


// Init_Calc_OverpowerExperienceLevel_C Init_Calc_OverpowerExperienceLevel.Default__Init_Calc_OverpowerExperienceLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Calc_OverpowerExperienceLevel_C* UInit_Calc_OverpowerExperienceLevel_C::GetDefaultObj()
{
	static class UInit_Calc_OverpowerExperienceLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Calc_OverpowerExperienceLevel_C*>(UInit_Calc_OverpowerExperienceLevel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Calc_OverpowerExperienceLevel.Init_Calc_OverpowerExperienceLevel_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_Select_Default                                            (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Calc_OverpowerExperienceLevel_C::CalculateAttributeInitialValue(class UObject* Context, int32 Temp_int_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FDataTableValueHandle& K2Node_Select_Default, float CallFunc_GetDataTableValueFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Calc_OverpowerExperienceLevel_C", "CalculateAttributeInitialValue");

	Params::UInit_Calc_OverpowerExperienceLevel_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


