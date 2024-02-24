#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalColonelsRevengeMag.BP_LocalColonelsRevengeMag_C
// (Actor)

class UClass* ABP_LocalColonelsRevengeMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalColonelsRevengeMag_C");

	return Clss;
}


// BP_LocalColonelsRevengeMag_C BP_LocalColonelsRevengeMag.Default__BP_LocalColonelsRevengeMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalColonelsRevengeMag_C* ABP_LocalColonelsRevengeMag_C::GetDefaultObj()
{
	static class ABP_LocalColonelsRevengeMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalColonelsRevengeMag_C*>(ABP_LocalColonelsRevengeMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


