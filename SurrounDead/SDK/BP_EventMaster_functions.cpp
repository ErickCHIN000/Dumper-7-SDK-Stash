#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EventMaster.BP_EventMaster_C
// (Actor)

class UClass* ABP_EventMaster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EventMaster_C");

	return Clss;
}


// BP_EventMaster_C BP_EventMaster.Default__BP_EventMaster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EventMaster_C* ABP_EventMaster_C::GetDefaultObj()
{
	static class ABP_EventMaster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EventMaster_C*>(ABP_EventMaster_C::StaticClass()->DefaultObject);

	return Default;
}

}


