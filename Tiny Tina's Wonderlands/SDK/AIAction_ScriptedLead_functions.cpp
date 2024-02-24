#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_ScriptedLead.AIAction_ScriptedLead_C
// (None)

class UClass* UAIAction_ScriptedLead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedLead_C");

	return Clss;
}


// AIAction_ScriptedLead_C AIAction_ScriptedLead.Default__AIAction_ScriptedLead_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedLead_C* UAIAction_ScriptedLead_C::GetDefaultObj()
{
	static class UAIAction_ScriptedLead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedLead_C*>(UAIAction_ScriptedLead_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedLead.AIAction_ScriptedLead_C.ExecuteUbergraph_AIAction_ScriptedLead
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedLead_C::ExecuteUbergraph_AIAction_ScriptedLead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedLead_C", "ExecuteUbergraph_AIAction_ScriptedLead");

	Params::UAIAction_ScriptedLead_C_ExecuteUbergraph_AIAction_ScriptedLead_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


