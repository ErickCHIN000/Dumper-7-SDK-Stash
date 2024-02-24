#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StandIn_Shrine.BP_StandIn_Shrine_C
// (Actor)

class UClass* ABP_StandIn_Shrine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StandIn_Shrine_C");

	return Clss;
}


// BP_StandIn_Shrine_C BP_StandIn_Shrine.Default__BP_StandIn_Shrine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StandIn_Shrine_C* ABP_StandIn_Shrine_C::GetDefaultObj()
{
	static class ABP_StandIn_Shrine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StandIn_Shrine_C*>(ABP_StandIn_Shrine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StandIn_Shrine.BP_StandIn_Shrine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StandIn_Shrine_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StandIn_Shrine_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


