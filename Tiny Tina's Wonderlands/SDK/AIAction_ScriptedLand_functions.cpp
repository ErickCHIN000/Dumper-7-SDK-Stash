#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_ScriptedLand.AIAction_ScriptedLand_C
// (None)

class UClass* UAIAction_ScriptedLand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ScriptedLand_C");

	return Clss;
}


// AIAction_ScriptedLand_C AIAction_ScriptedLand.Default__AIAction_ScriptedLand_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ScriptedLand_C* UAIAction_ScriptedLand_C::GetDefaultObj()
{
	static class UAIAction_ScriptedLand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ScriptedLand_C*>(UAIAction_ScriptedLand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ScriptedLand.AIAction_ScriptedLand_C.ExecuteUbergraph_AIAction_ScriptedLand
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ScriptedLand_C::ExecuteUbergraph_AIAction_ScriptedLand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ScriptedLand_C", "ExecuteUbergraph_AIAction_ScriptedLand");

	Params::UAIAction_ScriptedLand_C_ExecuteUbergraph_AIAction_ScriptedLand_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


