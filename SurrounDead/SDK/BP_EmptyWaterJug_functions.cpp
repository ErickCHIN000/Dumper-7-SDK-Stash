#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EmptyWaterJug.BP_EmptyWaterJug_C
// (Actor)

class UClass* ABP_EmptyWaterJug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EmptyWaterJug_C");

	return Clss;
}


// BP_EmptyWaterJug_C BP_EmptyWaterJug.Default__BP_EmptyWaterJug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EmptyWaterJug_C* ABP_EmptyWaterJug_C::GetDefaultObj()
{
	static class ABP_EmptyWaterJug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EmptyWaterJug_C*>(ABP_EmptyWaterJug_C::StaticClass()->DefaultObject);

	return Default;
}

}


