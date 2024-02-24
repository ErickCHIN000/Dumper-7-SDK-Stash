#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_ScriptedRoute.AIAction_ScriptedRoute_C
// (None)

class UClass* UAIAction_ScriptedRoute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedRoute_C");

	return Clss;
}


// AIAction_ScriptedRoute_C AIAction_ScriptedRoute.Default__AIAction_ScriptedRoute_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedRoute_C* UAIAction_ScriptedRoute_C::GetDefaultObj()
{
	static class UAIAction_ScriptedRoute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedRoute_C*>(UAIAction_ScriptedRoute_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedRoute.AIAction_ScriptedRoute_C.ExecuteUbergraph_AIAction_ScriptedRoute
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedRoute_C::ExecuteUbergraph_AIAction_ScriptedRoute(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedRoute_C", "ExecuteUbergraph_AIAction_ScriptedRoute");

	Params::UAIAction_ScriptedRoute_C_ExecuteUbergraph_AIAction_ScriptedRoute_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


