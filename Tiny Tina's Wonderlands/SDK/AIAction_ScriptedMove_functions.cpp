#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_ScriptedMove.AIAction_ScriptedMove_C
// (None)

class UClass* UAIAction_ScriptedMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedMove_C");

	return Clss;
}


// AIAction_ScriptedMove_C AIAction_ScriptedMove.Default__AIAction_ScriptedMove_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedMove_C* UAIAction_ScriptedMove_C::GetDefaultObj()
{
	static class UAIAction_ScriptedMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedMove_C*>(UAIAction_ScriptedMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedMove.AIAction_ScriptedMove_C.ExecuteUbergraph_AIAction_ScriptedMove
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedMove_C::ExecuteUbergraph_AIAction_ScriptedMove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedMove_C", "ExecuteUbergraph_AIAction_ScriptedMove");

	Params::UAIAction_ScriptedMove_C_ExecuteUbergraph_AIAction_ScriptedMove_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


