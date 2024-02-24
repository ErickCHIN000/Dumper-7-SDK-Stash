#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_ScriptedLook.AIAction_ScriptedLook_C
// (None)

class UClass* UAIAction_ScriptedLook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedLook_C");

	return Clss;
}


// AIAction_ScriptedLook_C AIAction_ScriptedLook.Default__AIAction_ScriptedLook_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedLook_C* UAIAction_ScriptedLook_C::GetDefaultObj()
{
	static class UAIAction_ScriptedLook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedLook_C*>(UAIAction_ScriptedLook_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedLook.AIAction_ScriptedLook_C.ExecuteUbergraph_AIAction_ScriptedLook
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedLook_C::ExecuteUbergraph_AIAction_ScriptedLook(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedLook_C", "ExecuteUbergraph_AIAction_ScriptedLook");

	Params::UAIAction_ScriptedLook_C_ExecuteUbergraph_AIAction_ScriptedLook_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


