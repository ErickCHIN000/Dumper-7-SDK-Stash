#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RadiationFilter.BP_RadiationFilter_C
// (Actor)

class UClass* ABP_RadiationFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RadiationFilter_C");

	return Clss;
}


// BP_RadiationFilter_C BP_RadiationFilter.Default__BP_RadiationFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RadiationFilter_C* ABP_RadiationFilter_C::GetDefaultObj()
{
	static class ABP_RadiationFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RadiationFilter_C*>(ABP_RadiationFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


