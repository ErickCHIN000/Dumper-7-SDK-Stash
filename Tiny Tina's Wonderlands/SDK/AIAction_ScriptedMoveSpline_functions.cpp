#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_ScriptedMoveSpline.AIAction_ScriptedMoveSpline_C
// (None)

class UClass* UAIAction_ScriptedMoveSpline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedMoveSpline_C");

	return Clss;
}


// AIAction_ScriptedMoveSpline_C AIAction_ScriptedMoveSpline.Default__AIAction_ScriptedMoveSpline_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedMoveSpline_C* UAIAction_ScriptedMoveSpline_C::GetDefaultObj()
{
	static class UAIAction_ScriptedMoveSpline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedMoveSpline_C*>(UAIAction_ScriptedMoveSpline_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedMoveSpline.AIAction_ScriptedMoveSpline_C.ExecuteUbergraph_AIAction_ScriptedMoveSpline
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedMoveSpline_C::ExecuteUbergraph_AIAction_ScriptedMoveSpline(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedMoveSpline_C", "ExecuteUbergraph_AIAction_ScriptedMoveSpline");

	Params::UAIAction_ScriptedMoveSpline_C_ExecuteUbergraph_AIAction_ScriptedMoveSpline_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


