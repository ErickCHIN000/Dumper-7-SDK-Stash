#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalColonelsRevengeDrumMag.BP_LocalColonelsRevengeDrumMag_C
// (Actor)

class UClass* ABP_LocalColonelsRevengeDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalColonelsRevengeDrumMag_C");

	return Clss;
}


// BP_LocalColonelsRevengeDrumMag_C BP_LocalColonelsRevengeDrumMag.Default__BP_LocalColonelsRevengeDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalColonelsRevengeDrumMag_C* ABP_LocalColonelsRevengeDrumMag_C::GetDefaultObj()
{
	static class ABP_LocalColonelsRevengeDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalColonelsRevengeDrumMag_C*>(ABP_LocalColonelsRevengeDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


