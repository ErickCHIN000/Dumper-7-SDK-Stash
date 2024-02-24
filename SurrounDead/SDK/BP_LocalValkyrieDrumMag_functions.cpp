#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalValkyrieDrumMag.BP_LocalValkyrieDrumMag_C
// (Actor)

class UClass* ABP_LocalValkyrieDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalValkyrieDrumMag_C");

	return Clss;
}


// BP_LocalValkyrieDrumMag_C BP_LocalValkyrieDrumMag.Default__BP_LocalValkyrieDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalValkyrieDrumMag_C* ABP_LocalValkyrieDrumMag_C::GetDefaultObj()
{
	static class ABP_LocalValkyrieDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalValkyrieDrumMag_C*>(ABP_LocalValkyrieDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


