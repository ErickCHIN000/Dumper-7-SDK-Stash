#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Rogue_FromTheShadows.Init_Rogue_FromTheShadows_C
// (None)

class UClass* UInit_Rogue_FromTheShadows_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Rogue_FromTheShadows_C");

	return Clss;
}


// Init_Rogue_FromTheShadows_C Init_Rogue_FromTheShadows.Default__Init_Rogue_FromTheShadows_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Rogue_FromTheShadows_C* UInit_Rogue_FromTheShadows_C::GetDefaultObj()
{
	static class UInit_Rogue_FromTheShadows_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Rogue_FromTheShadows_C*>(UInit_Rogue_FromTheShadows_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Rogue_FromTheShadows.Init_Rogue_FromTheShadows_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Rogue_FromTheShadows_C::CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetDataTableValueFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Rogue_FromTheShadows_C", "CalculateAttributeInitialValue");

	Params::UInit_Rogue_FromTheShadows_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


