#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ch_darkStalker_00_Interface.ch_darkStalker_00_Interface_C
// (None)

class UClass* ICh_darkStalker_00_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ch_darkStalker_00_Interface_C");

	return Clss;
}


// ch_darkStalker_00_Interface_C ch_darkStalker_00_Interface.Default__ch_darkStalker_00_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICh_darkStalker_00_Interface_C* ICh_darkStalker_00_Interface_C::GetDefaultObj()
{
	static class ICh_darkStalker_00_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICh_darkStalker_00_Interface_C*>(ICh_darkStalker_00_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ch_darkStalker_00_Interface.ch_darkStalker_00_Interface_C.GetTimerRemainingString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ICh_darkStalker_00_Interface_C::GetTimerRemainingString(class FString* String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ch_darkStalker_00_Interface_C", "GetTimerRemainingString");

	Params::ICh_darkStalker_00_Interface_C_GetTimerRemainingString_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = std::move(Parms.String);

}

}


