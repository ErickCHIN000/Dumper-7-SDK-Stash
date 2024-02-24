#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HolographicSight.BP_HolographicSight_C
// (Actor)

class UClass* ABP_HolographicSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HolographicSight_C");

	return Clss;
}


// BP_HolographicSight_C BP_HolographicSight.Default__BP_HolographicSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HolographicSight_C* ABP_HolographicSight_C::GetDefaultObj()
{
	static class ABP_HolographicSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HolographicSight_C*>(ABP_HolographicSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


