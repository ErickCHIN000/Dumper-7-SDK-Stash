#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_UseActionStation_Bored.AIA_UseActionStation_Bored_C
// (None)

class UClass* UAIA_UseActionStation_Bored_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_UseActionStation_Bored_C");

	return Clss;
}


// AIA_UseActionStation_Bored_C AIA_UseActionStation_Bored.Default__AIA_UseActionStation_Bored_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_UseActionStation_Bored_C* UAIA_UseActionStation_Bored_C::GetDefaultObj()
{
	static class UAIA_UseActionStation_Bored_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_UseActionStation_Bored_C*>(UAIA_UseActionStation_Bored_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_UseActionStation_Bored.AIA_UseActionStation_Bored_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckOwnerRequirements_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_UseActionStation_Bored_C::CheckOwnerRequirements(bool CallFunc_CheckOwnerRequirements_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_UseActionStation_Bored_C", "CheckOwnerRequirements");

	Params::UAIA_UseActionStation_Bored_C_CheckOwnerRequirements_Params Parms{};

	Parms.CallFunc_CheckOwnerRequirements_ReturnValue = CallFunc_CheckOwnerRequirements_ReturnValue;
	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


