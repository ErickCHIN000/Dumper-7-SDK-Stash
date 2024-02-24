#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_ScriptedWait.AIAction_ScriptedWait_C
// (None)

class UClass* UAIAction_ScriptedWait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedWait_C");

	return Clss;
}


// AIAction_ScriptedWait_C AIAction_ScriptedWait.Default__AIAction_ScriptedWait_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedWait_C* UAIAction_ScriptedWait_C::GetDefaultObj()
{
	static class UAIAction_ScriptedWait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedWait_C*>(UAIAction_ScriptedWait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedWait.AIAction_ScriptedWait_C.ExecuteUbergraph_AIAction_ScriptedWait
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedWait_C::ExecuteUbergraph_AIAction_ScriptedWait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedWait_C", "ExecuteUbergraph_AIAction_ScriptedWait");

	Params::UAIAction_ScriptedWait_C_ExecuteUbergraph_AIAction_ScriptedWait_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


