#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_ScriptedCover.AIAction_ScriptedCover_C
// (None)

class UClass* UAIAction_ScriptedCover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedCover_C");

	return Clss;
}


// AIAction_ScriptedCover_C AIAction_ScriptedCover.Default__AIAction_ScriptedCover_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedCover_C* UAIAction_ScriptedCover_C::GetDefaultObj()
{
	static class UAIAction_ScriptedCover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedCover_C*>(UAIAction_ScriptedCover_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedCover.AIAction_ScriptedCover_C.ExecuteUbergraph_AIAction_ScriptedCover
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedCover_C::ExecuteUbergraph_AIAction_ScriptedCover(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedCover_C", "ExecuteUbergraph_AIAction_ScriptedCover");

	Params::UAIAction_ScriptedCover_C_ExecuteUbergraph_AIAction_ScriptedCover_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


