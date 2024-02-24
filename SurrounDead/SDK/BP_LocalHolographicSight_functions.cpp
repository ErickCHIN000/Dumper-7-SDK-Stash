#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalHolographicSight.BP_LocalHolographicSight_C
// (Actor)

class UClass* ABP_LocalHolographicSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalHolographicSight_C");

	return Clss;
}


// BP_LocalHolographicSight_C BP_LocalHolographicSight.Default__BP_LocalHolographicSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalHolographicSight_C* ABP_LocalHolographicSight_C::GetDefaultObj()
{
	static class ABP_LocalHolographicSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalHolographicSight_C*>(ABP_LocalHolographicSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


