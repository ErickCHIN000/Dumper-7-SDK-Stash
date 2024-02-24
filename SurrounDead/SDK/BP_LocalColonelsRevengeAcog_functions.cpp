#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalColonelsRevengeAcog.BP_LocalColonelsRevengeAcog_C
// (Actor)

class UClass* ABP_LocalColonelsRevengeAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalColonelsRevengeAcog_C");

	return Clss;
}


// BP_LocalColonelsRevengeAcog_C BP_LocalColonelsRevengeAcog.Default__BP_LocalColonelsRevengeAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalColonelsRevengeAcog_C* ABP_LocalColonelsRevengeAcog_C::GetDefaultObj()
{
	static class ABP_LocalColonelsRevengeAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalColonelsRevengeAcog_C*>(ABP_LocalColonelsRevengeAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}


