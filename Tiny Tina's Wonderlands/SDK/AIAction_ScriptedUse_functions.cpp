#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_ScriptedUse.AIAction_ScriptedUse_C
// (None)

class UClass* UAIAction_ScriptedUse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedUse_C");

	return Clss;
}


// AIAction_ScriptedUse_C AIAction_ScriptedUse.Default__AIAction_ScriptedUse_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedUse_C* UAIAction_ScriptedUse_C::GetDefaultObj()
{
	static class UAIAction_ScriptedUse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedUse_C*>(UAIAction_ScriptedUse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedUse.AIAction_ScriptedUse_C.ExecuteUbergraph_AIAction_ScriptedUse
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedUse_C::ExecuteUbergraph_AIAction_ScriptedUse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedUse_C", "ExecuteUbergraph_AIAction_ScriptedUse");

	Params::UAIAction_ScriptedUse_C_ExecuteUbergraph_AIAction_ScriptedUse_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


