#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_CurseOfMal.Init_CurseOfMal_C
// (None)

class UClass* UInit_CurseOfMal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_CurseOfMal_C");

	return Clss;
}


// Init_CurseOfMal_C Init_CurseOfMal.Default__Init_CurseOfMal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_CurseOfMal_C* UInit_CurseOfMal_C::GetDefaultObj()
{
	static class UInit_CurseOfMal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_CurseOfMal_C*>(UInit_CurseOfMal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_CurseOfMal.Init_CurseOfMal_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPChar_Player_C*            K2Node_DynamicCast_AsBPChar_Player                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentHealthPercent_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_CurseOfMal_C::CalculateAttributeInitialValue(class UObject* Context, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentHealthPercent_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_CurseOfMal_C", "CalculateAttributeInitialValue");

	Params::UInit_CurseOfMal_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsBPChar_Player = K2Node_DynamicCast_AsBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHealthPercent_ReturnValue = CallFunc_GetCurrentHealthPercent_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


