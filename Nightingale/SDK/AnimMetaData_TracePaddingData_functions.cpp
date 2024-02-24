#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimMetaData_TracePaddingData.AnimMetaData_TracePaddingData_C
// (None)

class UClass* UAnimMetaData_TracePaddingData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimMetaData_TracePaddingData_C");

	return Clss;
}


// AnimMetaData_TracePaddingData_C AnimMetaData_TracePaddingData.Default__AnimMetaData_TracePaddingData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimMetaData_TracePaddingData_C* UAnimMetaData_TracePaddingData_C::GetDefaultObj()
{
	static class UAnimMetaData_TracePaddingData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimMetaData_TracePaddingData_C*>(UAnimMetaData_TracePaddingData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimMetaData_TracePaddingData.AnimMetaData_TracePaddingData_C.GetExtentPadding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UAnimMetaData_TracePaddingData_C::GetExtentPadding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimMetaData_TracePaddingData_C", "GetExtentPadding");

	Params::UAnimMetaData_TracePaddingData_C_GetExtentPadding_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimMetaData_TracePaddingData.AnimMetaData_TracePaddingData_C.GetRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UAnimMetaData_TracePaddingData_C::GetRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimMetaData_TracePaddingData_C", "GetRadius");

	Params::UAnimMetaData_TracePaddingData_C_GetRadius_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


