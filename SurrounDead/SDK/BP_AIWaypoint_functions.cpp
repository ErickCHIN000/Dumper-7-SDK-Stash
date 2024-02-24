#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIWaypoint.BP_AIWaypoint_C
// (Actor)

class UClass* ABP_AIWaypoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIWaypoint_C");

	return Clss;
}


// BP_AIWaypoint_C BP_AIWaypoint.Default__BP_AIWaypoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AIWaypoint_C* ABP_AIWaypoint_C::GetDefaultObj()
{
	static class ABP_AIWaypoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AIWaypoint_C*>(ABP_AIWaypoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


