#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AITree_LookAtPlayer.AITree_LookAtPlayer_C
// (None)

class UClass* UAITree_LookAtPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITree_LookAtPlayer_C");

	return Clss;
}


// AITree_LookAtPlayer_C AITree_LookAtPlayer.Default__AITree_LookAtPlayer_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAITree_LookAtPlayer_C* UAITree_LookAtPlayer_C::GetDefaultObj()
{
	static class UAITree_LookAtPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITree_LookAtPlayer_C*>(UAITree_LookAtPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AITree_LookAtPlayer.AITree_LookAtPlayer_C.ExecuteUbergraph_AITree_LookAtPlayer
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAITree_LookAtPlayer_C::ExecuteUbergraph_AITree_LookAtPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITree_LookAtPlayer_C", "ExecuteUbergraph_AITree_LookAtPlayer");

	Params::UAITree_LookAtPlayer_C_ExecuteUbergraph_AITree_LookAtPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


