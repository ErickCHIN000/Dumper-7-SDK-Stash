#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalSVDMag.BP_LocalSVDMag_C
// (Actor)

class UClass* ABP_LocalSVDMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalSVDMag_C");

	return Clss;
}


// BP_LocalSVDMag_C BP_LocalSVDMag.Default__BP_LocalSVDMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalSVDMag_C* ABP_LocalSVDMag_C::GetDefaultObj()
{
	static class ABP_LocalSVDMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalSVDMag_C*>(ABP_LocalSVDMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


