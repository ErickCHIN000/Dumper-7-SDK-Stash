#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_ReviveAlly.AIAction_ReviveAlly_C
// (None)

class UClass* UAIAction_ReviveAlly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ReviveAlly_C");

	return Clss;
}


// AIAction_ReviveAlly_C AIAction_ReviveAlly.Default__AIAction_ReviveAlly_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ReviveAlly_C* UAIAction_ReviveAlly_C::GetDefaultObj()
{
	static class UAIAction_ReviveAlly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ReviveAlly_C*>(UAIAction_ReviveAlly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ReviveAlly.AIAction_ReviveAlly_C.ExecuteUbergraph_AIAction_ReviveAlly
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ReviveAlly_C::ExecuteUbergraph_AIAction_ReviveAlly(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ReviveAlly_C", "ExecuteUbergraph_AIAction_ReviveAlly");

	Params::UAIAction_ReviveAlly_C_ExecuteUbergraph_AIAction_ReviveAlly_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


