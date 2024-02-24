#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimMetaData_ComboSectionData.AnimMetaData_ComboSectionData_C
// (None)

class UClass* UAnimMetaData_ComboSectionData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimMetaData_ComboSectionData_C");

	return Clss;
}


// AnimMetaData_ComboSectionData_C AnimMetaData_ComboSectionData.Default__AnimMetaData_ComboSectionData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimMetaData_ComboSectionData_C* UAnimMetaData_ComboSectionData_C::GetDefaultObj()
{
	static class UAnimMetaData_ComboSectionData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimMetaData_ComboSectionData_C*>(UAnimMetaData_ComboSectionData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimMetaData_ComboSectionData.AnimMetaData_ComboSectionData_C.GetEmpoweredHit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimMetaData_ComboSectionData_C::GetEmpoweredHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimMetaData_ComboSectionData_C", "GetEmpoweredHit");

	Params::UAnimMetaData_ComboSectionData_C_GetEmpoweredHit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimMetaData_ComboSectionData.AnimMetaData_ComboSectionData_C.GetComboSection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UAnimMetaData_ComboSectionData_C::GetComboSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimMetaData_ComboSectionData_C", "GetComboSection");

	Params::UAnimMetaData_ComboSectionData_C_GetComboSection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AnimMetaData_ComboSectionData.AnimMetaData_ComboSectionData_C.GetHitSection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UAnimMetaData_ComboSectionData_C::GetHitSection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimMetaData_ComboSectionData_C", "GetHitSection");

	Params::UAnimMetaData_ComboSectionData_C_GetHitSection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


