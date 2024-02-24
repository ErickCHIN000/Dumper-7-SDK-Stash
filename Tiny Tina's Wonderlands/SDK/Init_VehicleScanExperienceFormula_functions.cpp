#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_VehicleScanExperienceFormula.Init_VehicleScanExperienceFormula_C
// (None)

class UClass* UInit_VehicleScanExperienceFormula_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_VehicleScanExperienceFormula_C");

	return Clss;
}


// Init_VehicleScanExperienceFormula_C Init_VehicleScanExperienceFormula.Default__Init_VehicleScanExperienceFormula_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_VehicleScanExperienceFormula_C* UInit_VehicleScanExperienceFormula_C::GetDefaultObj()
{
	static class UInit_VehicleScanExperienceFormula_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_VehicleScanExperienceFormula_C*>(UInit_VehicleScanExperienceFormula_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_VehicleScanExperienceFormula.Init_VehicleScanExperienceFormula_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVehicleScanData*            K2Node_DynamicCast_AsVehicle_Scan_Data                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateBalanceFormula_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateBalanceFormula_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_VehicleScanExperienceFormula_C::CalculateAttributeInitialValue(class UObject* Context, class UVehicleScanData* K2Node_DynamicCast_AsVehicle_Scan_Data, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_EvaluateBalanceFormula_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue3, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_EvaluateBalanceFormula_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_VehicleScanExperienceFormula_C", "CalculateAttributeInitialValue");

	Params::UInit_VehicleScanExperienceFormula_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsVehicle_Scan_Data = K2Node_DynamicCast_AsVehicle_Scan_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue2 = CallFunc_GetValueOfAttribute_ReturnValue2;
	Parms.CallFunc_EvaluateBalanceFormula_ReturnValue = CallFunc_EvaluateBalanceFormula_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue3 = CallFunc_GetValueOfAttribute_ReturnValue3;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_EvaluateBalanceFormula_ReturnValue1 = CallFunc_EvaluateBalanceFormula_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


