#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_Wait.AIAction_Wait_C
// (None)

class UClass* UAIAction_Wait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Wait_C");

	return Clss;
}


// AIAction_Wait_C AIAction_Wait.Default__AIAction_Wait_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_Wait_C* UAIAction_Wait_C::GetDefaultObj()
{
	static class UAIAction_Wait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Wait_C*>(UAIAction_Wait_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_Wait.AIAction_Wait_C.ExecuteUbergraph_AIAction_Wait
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Wait_C::ExecuteUbergraph_AIAction_Wait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Wait_C", "ExecuteUbergraph_AIAction_Wait");

	Params::UAIAction_Wait_C_ExecuteUbergraph_AIAction_Wait_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


