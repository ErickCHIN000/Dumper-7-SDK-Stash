#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_ScriptedFollow.AIAction_ScriptedFollow_C
// (None)

class UClass* UAIAction_ScriptedFollow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedFollow_C");

	return Clss;
}


// AIAction_ScriptedFollow_C AIAction_ScriptedFollow.Default__AIAction_ScriptedFollow_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedFollow_C* UAIAction_ScriptedFollow_C::GetDefaultObj()
{
	static class UAIAction_ScriptedFollow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedFollow_C*>(UAIAction_ScriptedFollow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedFollow.AIAction_ScriptedFollow_C.ExecuteUbergraph_AIAction_ScriptedFollow
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedFollow_C::ExecuteUbergraph_AIAction_ScriptedFollow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedFollow_C", "ExecuteUbergraph_AIAction_ScriptedFollow");

	Params::UAIAction_ScriptedFollow_C_ExecuteUbergraph_AIAction_ScriptedFollow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


